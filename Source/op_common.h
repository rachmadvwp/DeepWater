/*
 * Copyright (c) 2016
 * Research Group: ERA (Efficient and Resilient Architecture group) 
 * Contributors:  Shijun Gong, Wenyan Lu, Jiajun Li, Shuhao Jiang, Jingya Wu, and Guihai Yan  
 * Affiliation: State Key Laboratory of Computer Architecture, Institute of Computing Technology, Chinese Academy of Sciences
 * Contact Info.:   {gongshijun, yan}@ict.ac.cn
 * Web: http://www.carch.ac.cn/~yan
 * Address:  P.O.Box 2704, Beijing, 100190, China
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _OP_COMMON_H
#define _OP_COMMON_H

#include <stdio.h>

extern void create_folder(char* folderName);    /* folder name */

extern void open_file(FILE **fp,    /* file ptr */
	char* fileName,    /* file name */
	char* strF,    /* file format */
	char* promptMess);    /* prompt message */

extern void close_file(FILE *fp);    /* file ptr */

/* convert short data to binary */
extern void convert_to_b_memData(
	char *source,    /* source file name */
	char *dest);    /* destination file name */

#endif /* _OP_COMMON_H */
