/*
 * chewing.h
 *
 * Copyright (c) 2004, 2005, 2006
 *	libchewing Core Team. See ChangeLog for details.
 *
 * See the file "COPYING" for information on usage and redistribution
 * of this file.
 */

#ifndef _CHEWING_CORE_
#define _CHEWING_CORE_

#ifdef __cplusplus
extern "C" {
#endif

/*! \file chewing.h
 *  \brief Chewing Headers
 *  \author libchewing Core Team
 */

#include "chewingio.h"
#include "global.h"
#include "mod_aux.h"

/* new macro to indicate the internal encoding.
 * since libchewing 0.3.0 */
#define LIBCHEWING_ENCODING "UTF-8"

/* statistics symbol reported by chewing */
extern int chewing_lifetime;

#ifdef __cplusplus
}
#endif

#endif
