#include <glib.h>

#include "enumtypes.h"
#include "glib-swe.h"

#define GSWE_SEI_NPLANETS 18
#define GSWE_SEI_NNODE_ETC 6
#define GSWE_SE_NPLANETS 23

struct gswe_topo_data {
    gdouble geolon,
            geolat,
            geoalt,
            teval,
            tjd_ut,
            xobs[6];
};

struct gswe_plan_data {
	GSWEFlag xflgs;
};

struct gswe_save_positions {
	gdouble tsave;
	GSWEFlag iflgsave;
};

typedef struct gswe_data {
    struct gswe_topo_data topd;
    gboolean geopos_is_set;
    struct gswe_plan_data pldat[GSWE_SEI_NPLANETS];
    struct gswe_plan_data nddat[GSWE_SEI_NNODE_ETC];
    struct gswe_save_positions savedat[GSWE_SE_NPLANETS + 1];
} gSWE;

void gswi_force_app_pos_etc(gSWE *);

void
gswe_set_topo(gSWE *swed, gdouble geolon, gdouble geolat, gdouble geoalt)
{
    swed->topd.geolon = geolon;
    swed->topd.geolat = geolat;
    swed->topd.geoalt = geoalt;

    swed->geopos_is_set = TRUE;

    swed->topd.teval = 0;

    gswi_force_app_pos_etc(swed);
}

void
gswi_force_app_pos_etc(gSWE *swed)
{
    gint i;

    for (i = 0; i < GSWE_SEI_NPLANETS; i++) {
        swed->pldat[i].xflgs = -1;
    }

    for (i = 0; i < GSWE_SEI_NNODE_ETC; i++) {
        swed->nddat[i].xflgs = -1;
    }

    for (i = 0; i < GSWE_SE_NPLANETS; i++) {
        swed->savedat[i].tsave = 0;
        swed->savedat[i].iflgsave = -1;
    }
}

