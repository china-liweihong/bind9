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

/* $Id: tkeyconf.h,v 1.6 2000/08/01 01:24:49 tale Exp $ */

#ifndef DNS_TKEYCONF_H
#define DNS_TKEYCONF_H 1

#include <isc/types.h>
#include <isc/lang.h>

#include <dns/confctx.h>

ISC_LANG_BEGINDECLS

isc_result_t
dns_tkeyctx_fromconfig(dns_c_ctx_t *cfg, isc_mem_t *mctx, isc_entropy_t *ectx,
		       dns_tkeyctx_t **tctxp);
/*
 * 	Create a TKEY context and configure it, including the default DH key
 *	and default domain, according to 'cfg'.
 *
 *	Requires:
 *		'cfg' is a valid configuration context.
 *		'mctx' is not NULL
 *		'ectx' is not NULL
 *		'tctx' is not NULL
 *		'*tctx' is NULL
 *
 *	Returns:
 *		ISC_R_SUCCESS
 *		ISC_R_NOMEMORY
 */

ISC_LANG_ENDDECLS

#endif /* DNS_TKEYCONF_H */
