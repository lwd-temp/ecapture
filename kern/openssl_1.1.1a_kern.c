#ifndef ECAPTURE_OPENSSL_1_1_1_A_H
#define ECAPTURE_OPENSSL_1_1_1_A_H

/* OPENSSL_VERSION_TEXT: OpenSSL 1.1.1a  20 Nov 2018, OPENSSL_VERSION_NUMBER:269488159 */
#define SSL_ST_VERSION 0x0
#define SSL_ST_SESSION 0x510
#define SSL_ST_S3 0xa8
#define SSL_SESSION_ST_MASTER_KEY 0x50
#define SSL3_STATE_ST_CLIENT_RANDOM 0xb8
#define SSL_SESSION_ST_CIPHER 0x1f8
#define SSL_SESSION_ST_CIPHER_ID 0x200
#define SSL_CIPHER_ST_ID 0x18
#define SSL_ST_HANDSHAKE_SECRET 0x174
#define SSL_ST_MASTER_SECRET 0x1b4
#define SSL_ST_SERVER_FINISHED_HASH 0x2b4
#define SSL_ST_HANDSHAKE_TRAFFIC_HASH 0x2f4
#define SSL_ST_EXPORTER_MASTER_SECRET 0x3b4

#endif

#include "openssl.h"
#include "openssl_masterkey.h"