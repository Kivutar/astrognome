#if !defined(__SWE_GLIB_H__) && !defined(__SWE_GLIB_DATE_TIME_C__)
#error "Including files other than swe-glib.h is unsupported. Please don't."
#else

#include <glib-object.h>

#define SWE_TYPE_GLIB_DATE_TIME            (swe_glib_datetime_get_type())
#define SWE_GLIB_DATE_TIME(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), SWE_TYPE_GLIB_DATE_TIME, SweGlibDateTime))
#define SWE_IS_GLIB_DATE_TIME(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), SWE_TYPE_GLIB_DATE_TIME))
#define SWE_GLIB_DATE_TIME_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), SWE_TYPE_GLIB_DATE_TIME, SweGlibDateTimeClass))
#define SWE_IS_GLIB_DATE_TIME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), SWE_TYPE_GLIB_DATE_TIME))
#define SWE_GLIB_DATE_TIME_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), SWE_TYPE_GLIB_DATE_TIME, SweGlibDateTimeClass))

typedef struct _SweGlibDateTime SweGlibDateTime;
typedef struct _SweGlibDateTimeClass SweGlibDateTimeClass;

struct _SweGlibDateTime {
	GObject parent_instance;

	/* instance members */
};

struct _SweGlibDateTimeClass {
	GObjectClass parent_class;

	/* class members */
};

GType swe_glib_date_time_get_type(void);

/*
 * Method definitions
 */

#endif /* __SWE_GLIB_H__ */

