#include "swe-glib.h"

#define SWE_GLIB_GET_PRIVATE(obj) (G_TYPE_INSTANCE_GET_PRIVATE((obj), SWE_TYPE_GLIB, SweGlibPrivate))

struct _SweGlibPrivate {
};

G_DEFINE_TYPE(SweGlib, swe_glib, G_TYPE_OBJECT);

static void
swe_glib_dispose(GObject *gobject)
{
    //SweGlib *self = SWE_GLIB(gobject);

    //g_clear_object(&self->priv->an_object);

    G_OBJECT_CLASS(swe_glib_parent_class)->dispose(gobject);
}

static void
swe_glib_finalize(GObject *gobject)
{
    //SweGlib *self = SWE_GLIB(gobject);

    //g_free(self->priv->a_string);

    G_OBJECT_CLASS(swe_glib_parent_class)->finalize(gobject);
}

static void
swe_glib_class_init(SweGlibClass *klass)
{
    GObjectClass *gobject_class = G_OBJECT_CLASS(klass);

    g_type_class_add_private(klass, sizeof(SweGlibPrivate));

    gobject_class->dispose = swe_glib_dispose;
    gobject_class->finalize = swe_glib_finalize;
}

static void
swe_glib_init(SweGlib *self)
{
    self->priv = SWE_GLIB_GET_PRIVATE(self);

    //self->priv->an_object = g_object_new(MAMAN_TYPE_BAZ, NULL);
    //self->priv->a_string = g_strdup("Maman");
}

