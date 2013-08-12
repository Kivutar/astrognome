#ifndef __SWE_GLIB_H__
#define __SWE_GLIB_H__

#include <glib-object.h>

/*
 * Type macros
 */
#define SWE_TYPE_GLIB            (swe_glib_get_type())
#define SWE_GLIB(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), SWE_TYPE_GLIB, SweGlib))
#define SWE_IS_GLIB(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), SWE_TYPE_GLIB))
#define SWE_GLIB_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), SWE_TYPE_GLIB, SweGlibClass))
#define SWE_IS_GLIB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), SWE_TYPE_GLIB))
#define SWE_GLIB_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), SWE_TYPE_GLIB, SweGlibClass))

typedef struct _SweGlib SweGlib;
typedef struct _SweGlibClass SweGlibClass;
typedef struct _SweGlibPrivate SweGlibPrivate;

struct _SweGlib {
    /* Parent instance structure */
    GObject parent_instance;

    /* instance members */

    /*< private >*/
    SweGlibPrivate *priv;
};

struct _SweGlibClass {
    /* Parent class structure */
    GObjectClass parent_class;

    /* class members */
};

/* used by SWE_TYPE_GLIB */
GType swe_glib_get_type(void);

/*
 * Method definitions
 */
/* Following is the list of exported functions in the original Swiss Ephemeris
 * library. This list will get shorter and shorter as the functions get
 * implemented.
 */
/*
int32 swe_sol_eclipse_where(double tjd_ut, int32 ifl, double *geopos, double *attr, char *serr);
int32 swe_lun_occult_where(double tjd_ut, int32 ipl, char *starname, int32 ifl, double *geopos, double *attr, char *serr);
int32 swe_sol_eclipse_how(double tjd_ut, int32 ifl, double *geopos, double *attr, char *serr);
int32 swe_sol_eclipse_when_glob(double tjd_start, int32 ifl, int32 ifltype, double *tret, int32 backward, char *serr);
int32 swe_lun_occult_when_glob(double tjd_start, int32 ipl, char *starname, int32 ifl, int32 ifltype, double *tret, int32 backward, char *serr);
int32 swe_sol_eclipse_when_loc(double tjd_start, int32 ifl, double *geopos, double *tret, double *attr, int32 backward, char *serr);
int32 swe_lun_occult_when_loc(double tjd_start, int32 ipl, char *starname, int32 ifl, double *geopos, double *tret, double *attr, int32 backward, char *serr);
void swe_azalt(double tjd_ut, int32 calc_flag, double *geopos, double atpress, double attemp, double *xin, double *xaz);
void swe_azalt_rev(double tjd_ut, int32 calc_flag, double *geopos, double *xin, double *xout);
double swe_refrac(double inalt, double atpress, double attemp, int32 calc_flag);
void swe_set_lapse_rate(double lapse_rate);
double swe_refrac_extended(double inalt, double geoalt, double atpress, double attemp, double lapse_rate, int32 calc_flag, double *dret);
int32 swe_lun_eclipse_how(double tjd_ut, int32 ifl, double *geopos, double *attr, char *serr);
int32 swe_lun_eclipse_when(double tjd_start, int32 ifl, int32 ifltype, double *tret, int32 backward, char *serr);
int32 swe_pheno(double tjd, int32 ipl, int32 iflag, double *attr, char *serr);
int32 swe_pheno_ut(double tjd_ut, int32 ipl, int32 iflag, double *attr, char *serr);
int32 swe_rise_trans(double tjd_ut, int32 ipl, char *starname, int32 epheflag, int32 rsmi, double *geopos, double atpress, double attemp, double *tret, char *serr);
int32 swe_rise_trans_true_hor(double tjd_ut, int32 ipl, char *starname, int32 epheflag, int32 rsmi, double *geopos, double atpress, double attemp, double horhgt, double *tret, char *serr);
int32 swe_nod_aps(double tjd_et, int32 ipl, int32 iflag, int32 method, double *xnasc, double *xndsc, double *xperi, double *xaphe, char *serr);
int32 swe_nod_aps_ut(double tjd_ut, int32 ipl, int32 iflag, int32 method, double *xnasc, double *xndsc, double *xperi, double *xaphe, char *serr);
int32 swe_gauquelin_sector(double t_ut, int32 ipl, char *starname, int32 iflag, int32 imeth, double *geopos, double atpress, double attemp, double *dgsect, char *serr);
int swe_date_conversion(int y, int m, int d, double uttime, char c, double *tjd);
double swe_julday(int year, int month, int day, double hour, int gregflag);
void swe_revjul(double jd, int gregflag, int *jyear, int *jmon, int *jday, double *jut);
void swe_utc_time_zone(int32 iyear, int32 imonth, int32 iday, int32 ihour, int32 imin, double dsec, double d_timezone, int32 * iyear_out, int32 * imonth_out, int32 * iday_out, int32 * ihour_out, int32 * imin_out, double *dsec_out);
int32 swe_utc_to_jd(int32 iyear, int32 imonth, int32 iday, int32 ihour, int32 imin, double dsec, int32 gregflag, double *dret, char *serr);
void swe_jdet_to_utc(double tjd_et, int32 gregflag, int32 * iyear, int32 * imonth, int32 * iday, int32 * ihour, int32 * imin, double *dsec);
void swe_jdut1_to_utc(double tjd_ut, int32 gregflag, int32 * iyear, int32 * imonth, int32 * iday, int32 * ihour, int32 * imin, double *dsec);
int32 swe_vis_limit_mag(double tjdut, double *dgeo, double *datm, double *dobs, char *ObjectName, int32 helflag, double *dret, char *serr);
int32 swe_topo_arcus_visionis(double tjdut, double *dgeo, double *datm, double *dobs, int32 helflag, double mag, double azi_obj, double alt_obj, double azi_sun, double azi_moon, double alt_moon, double *dret, char *serr);
int32 swe_heliacal_angle(double tjdut, double *dgeo, double *datm, double *dobs, int32 helflag, double mag, double azi_obj, double azi_sun, double azi_moon, double alt_moon, double *dret, char *serr);
int32 swe_heliacal_pheno_ut(double JDNDaysUT, double *dgeo, double *datm, double *dobs, char *ObjectNameIn, int32 TypeEvent, int32 helflag, double *darr, char *serr);
int32 swe_heliacal_ut(double JDNDaysUTStart, double *dgeo, double *datm, double *dobs, char *ObjectNameIn, int32 TypeEvent, int32 helflag, double *dret, char *serr_ret);
int swe_houses(double tjd_ut, double geolat, double geolon, int hsys, double *cusp, double *ascmc);
int swe_houses_ex(double tjd_ut, int32 iflag, double geolat, double geolon, int hsys, double *cusp, double *ascmc);
int swe_houses_armc(double armc, double geolat, double eps, int hsys, double *cusp, double *ascmc);
double swe_house_pos(double armc, double geolat, double eps, int hsys, double *xpin, char *serr);
void swe_set_sid_mode(int32 sid_mode, double t0, double ayan_t0);
char *swe_version(char *s);
int32 swe_calc(double tjd, int ipl, int32 iflag, double *xx, char *serr);
int32 swe_calc_ut(double tjd_ut, int32 ipl, int32 iflag, double *xx, char *serr);
void swe_close(void);
void swe_set_ephe_path(char *path);
void swe_set_jpl_file(char *fname);
void swe_set_sid_mode(int32 sid_mode, double t0, double ayan_t0);
double swe_get_ayanamsa(double tjd_et);
double swe_get_ayanamsa_ut(double tjd_ut);
int32 swe_fixstar(char *star, double tjd, int32 iflag, double *xx, char *serr);
int32 swe_fixstar_ut(char *star, double tjd_ut, int32 iflag, double *xx, char *serr)
int32 swe_fixstar_mag(char *star, double *mag, char *serr)
char *swe_get_planet_name(int ipl, char *s)
char *swe_get_ayanamsa_name(int32 isidmode)
void swe_set_topo(double geolon, double geolat, double geoalt)
int swe_time_equ(double tjd, double *E, char *serr)
double swe_degnorm(double x);
double swe_radnorm(double x);
double swe_deg_midp(double x1, double x0);
double swe_rad_midp(double x1, double x0);
void swe_cotrans(double *xpo, double *xpn, double eps);
void swe_cotrans_sp(double *xpo, double *xpn, double eps);
double swe_deltat(double tjd);
double swe_get_tid_acc();
void swe_set_tid_acc(double t_acc);
double swe_sidtime0(double tjd, double eps, double nut);
double swe_sidtime(double tjd_ut);
centisec swe_csnorm(centisec p);
centisec swe_difcsn(centisec p1, centisec p2);
double swe_difdegn(double p1, double p2);
centisec swe_difcs2n(centisec p1, centisec p2);
double swe_difdeg2n(double p1, double p2);
double swe_difrad2n(double p1, double p2);
centisec swe_csroundsec(centisec x);
int32 swe_d2l(double x);
int swe_day_of_week(double jd);
char *swe_cs2timestr(CSEC t, int sep, AS_BOOL suppressZero, char *a);
char *swe_cs2lonlatstr(CSEC t, char pchar, char mchar, char *sp);
char *swe_cs2degstr(CSEC t, char *a);
void swe_split_deg(double ddeg, int32 roundflag, int32 * ideg, int32 * imin, int32 * isec, double *dsecfr, int32 * isgn);
*/

#endif /* __SWE_GLIB_H__ */

