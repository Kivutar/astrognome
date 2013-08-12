
/* Generated data (by glib-mkenums) */

#include "enumtypes.h"
#include "glib-swe.h"

/* enumerations from "glib-swe.h" */
GType
g_swe_flag_get_type(void)
{
	static volatile gsize g_define_type_id__volatile = 0;

	if (g_once_init_enter(&g_define_type_id__volatile)) {
		static const GFlagsValue values[] = {
			{ GSWE_FLAG_JPLEPH, "GSWE_FLAG_JPLEPH", "jpleph" },
			{ GSWE_FLAG_SWIEPH, "GSWE_FLAG_SWIEPH", "swieph" },
			{ GSWE_FLAG_MOSEPH, "GSWE_FLAG_MOSEPH", "moseph" },
			{ 0, NULL, NULL }
		};

		GType g_define_type_id = g_flags_register_static(g_intern_static_string("GSWEFlag"), values);

		g_once_init_leave(&g_define_type_id__volatile, g_define_type_id);
	}

	return g_define_type_id__volatile;
}


/* Generated data ends here */

