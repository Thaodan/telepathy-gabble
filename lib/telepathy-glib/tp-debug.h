#ifndef __TP_DEBUG_H__
#define __TP_DEBUG_H_

#include <glib.h>

G_BEGIN_DECLS

void tp_debug_set_flags_from_env (const char *var);
void tp_debug_set_all_flags (void);

G_END_DECLS

#endif
