/* $Id: md5ossl.h 25189 2009-10-02 12:04:37Z akr $ */

#ifndef MD5OSSL_H_INCLUDED
#define MD5OSSL_H_INCLUDED

#include <stddef.h>
#include <openssl/md5.h>

#define MD5_BLOCK_LENGTH	MD5_CBLOCK

void MD5_Finish(MD5_CTX *pctx, unsigned char *digest);

#endif
