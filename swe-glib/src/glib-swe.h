#ifndef __GLIB_SWE_H__
#define __GLIB_SWE_H__

/**
 * GSWEFlag:
 * @GSWE_FLAG_JPLEPH: Use JPL ephemeris
 * @GSWE_FLAG_SWIEPH: Use SWISSEPH ephemeris
 * @GSWE_FLAG_MOSEPH: Use Moshier ephemeris
 */
typedef enum {
	GSWE_FLAG_JPLEPH = 1 << 0,
	GSWE_FLAG_SWIEPH = 1 << 1,
	GSWE_FLAG_MOSEPH = 1 << 2,
} GSWEFlag;

#endif /* __GLIB_SWE_H__ */

