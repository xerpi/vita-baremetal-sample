/* Config for PSVita baremetal */

#ifndef MBEDTLS_CONFIG_H
#define MBEDTLS_CONFIG_H

/* System support */
#define MBEDTLS_HAVE_ASM
#define MBEDTLS_PLATFORM_MEMORY
#define MBEDTLS_PLATFORM_NO_STD_FUNCTIONS
#define MBEDTLS_PLATFORM_SNPRINTF_ALT
#define MBEDTLS_PLATFORM_STD_SNPRINTF snprintf

/* mbed TLS feature support */
#define MBEDTLS_CIPHER_MODE_CBC
#define MBEDTLS_PKCS1_V15

/* mbed TLS modules */
#define MBEDTLS_PLATFORM_C
#define MBEDTLS_MEMORY_BUFFER_ALLOC_C
#define MBEDTLS_AES_C
#define MBEDTLS_BIGNUM_C
#define MBEDTLS_CIPHER_C
#define MBEDTLS_CTR_DRBG_C
#define MBEDTLS_DES_C
#define MBEDTLS_MD_C
#define MBEDTLS_MD5_C
#define MBEDTLS_OID_C
#define MBEDTLS_RSA_C
#define MBEDTLS_SHA1_C
#define MBEDTLS_SHA256_C

#include "mbedtls/check_config.h"

#include <stdio.h>
#include <stdlib.h>

#endif /* MBEDTLS_CONFIG_H */
