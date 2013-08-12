bin_PROGRAMS = gradix

gradix_SOURCES = gradix.c calculate.c
gradix_LDADD = $(LIBSWE_LIBS) $(LIBGLIB_SWE_LIBS) $(GTK_LIBS)
gradix_LDFLAGS = -rdynamic
gradix_CFLAGS = $(CFLAGS) $(GTK_CFLAGS) -Wall
