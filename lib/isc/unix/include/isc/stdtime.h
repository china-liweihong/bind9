/*
 * Copyright (C) 1999, 2000  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM
 * DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL
 * INTERNET SOFTWARE CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: stdtime.h,v 1.7 2000/08/01 01:31:41 tale Exp $ */

#ifndef ISC_STDTIME_H
#define ISC_STDTIME_H 1

#include <isc/lang.h>
#include <isc/int.h>

/*
 * It's public information that 'isc_stdtime_t' is an unsigned integral type.
 * Applications that want maximum portability should not assume anything
 * about its size.
 */
typedef isc_uint32_t isc_stdtime_t;

ISC_LANG_BEGINDECLS

void
isc_stdtime_get(isc_stdtime_t *t);
/*
 * Set 't' to the number of seconds since 00:00:00 UTC, January 1, 1970.
 *
 * Requires:
 *
 *	't' is a valid pointer.
 */

ISC_LANG_ENDDECLS

#endif /* ISC_STDTIME_H */
