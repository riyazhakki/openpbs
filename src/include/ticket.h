/*
 * Copyright (C) 1994-2021 Altair Engineering, Inc.
 * For more information, contact Altair at www.altair.com.
 *
 * This file is part of both the OpenPBS software ("OpenPBS")
 * and the PBS Professional ("PBS Pro") software.
 *
 * Open Source License Information:
 *
 * OpenPBS is free software. You can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * OpenPBS is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Commercial License Information:
 *
 * PBS Pro is commercially licensed software that shares a common core with
 * the OpenPBS software.  For a copy of the commercial license terms and
 * conditions, go to: (http://www.pbspro.com/agreement.html) or contact the
 * Altair Legal Department.
 *
 * Altair's dual-license business model allows companies, individuals, and
 * organizations to create proprietary derivative works of OpenPBS and
 * distribute them - whether embedded or bundled with other software -
 * under a commercial license agreement.
 *
 * Use of Altair's trademarks, including but not limited to "PBS™",
 * "OpenPBS®", "PBS Professional®", and "PBS Pro™" and Altair's logos is
 * subject to Altair's trademark licensing policies.
 */

#ifndef	_TICKET_H
#define	_TICKET_H
#ifdef	__cplusplus
extern "C" {
#endif


/*
 * ticket.h - header file for dealing with security systems such as kerberos.
 */

#include <sys/types.h>

#define PBS_CREDVER		1
#define PBS_CREDTYPE_NONE	0
#define PBS_CREDTYPE_GRIDPROXY	2 /* Deprecated */
#define PBS_CREDTYPE_AES	3
#define PBS_CREDTYPE_SECCON	4

#define PBS_GC_BATREQ		100
#define PBS_GC_CPYFILE		101
#define PBS_GC_EXEC		102

#define PBS_CREDNAME_AES	"aes"

extern int encode_to_base64(const unsigned char* buffer, size_t buffer_len, char** ret_encoded_data);
extern int decode_from_base64(char* buffer, unsigned char** ret_decoded_data, size_t* ret_decoded_len);

#ifdef	__cplusplus
}
#endif
#endif	/* _TICKET_H */
