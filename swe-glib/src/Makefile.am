AM_CPPFLAGS = -DG_LOG_DOMAIN=\"SWE-GLib\"

bin_PROGRAMS = swetest
lib_LTLIBRARIES = libswe-glib-0.1.la

libswe_glib_sources = swe-glib.c swe-glib-date-time.c

swetest_sources = swetest.c

# Add enumtypes.h and enumtypes.c later to this list
swetest_SOURCES = $(libswe_glib_sources) $(swetest_sources)
swetest_CFLAGS = $(GLIB_CFLAGS) $(GOBJECT_CFLAGS) -Wall
swetest_LDADD = $(GLIB_LIBS) $(GOBJECT_LIBS)
libswe_glib_0_1_la_SOURCES = $(libswe_glib_sources)
libswe_glib_0_1_la_CFLAGS = $(GLIB_CFLAGS) $(GOBJECT_CFLAGS) -Wall
libswe_glib_0_1_la_LIBADD = $(GLIB_LIBS) $(GOBJECT_LIBS)

# Add enumtypes.h and enumtypes.c later to this list
#BUILT_SOURCES =

#gswe_headers = glib-swe.h

#CLEANFILES = $(BUILT_SOURCES)

#EXTRA_DIST = enumtypes.h.template enumtypes.c.template

#enumtypes.h: $(gswe_headers) enumtypes.h.template
#	$(GLIB_MKENUMS) --template $(filter %.template,$^) $(filter-out %.template,$^) > \
#	enumtypes.h.tmp && mv enumtypes.h.tmp enumtypes.h
#
#enumtypes.c: $(gswe_headers) enumtypes.h enumtypes.c.template
#	$(GLIB_MKENUMS) --template $(filter %.template,$^) $(filter-out %.template,$^) > \
#	enumtypes.c.tmp && mv enumtypes.c.tmp enumtypes.c

