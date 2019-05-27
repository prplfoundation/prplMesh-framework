///////////////////////////////////////
// AUTO GENERATED FILE - DO NOT EDIT //
///////////////////////////////////////

/* SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 * Copyright (c) 2016-2019 Intel Corporation
 *
 * This code is subject to the terms of the BSD+Patent license.
 * See LICENSE file for more details.
 */

#ifndef _TLVF_IEEE_1905_1_EWSCATTRIBUTES_H_
#define _TLVF_IEEE_1905_1_EWSCATTRIBUTES_H_

#include <cstddef>
#include <stdint.h>
#include <tlvf/swap.h>

namespace ieee1905_1 {

enum eWscAttributes: uint16_t {
    ATTR_VERSION = 0x104a,
    ATTR_MSG_TYPE = 0x1022,
    ATTR_UUID_E = 0x1047,
    ATTR_UUID_R = 0x1048,
    ATTR_MAC_ADDR = 0x1020,
    ATTR_ENROLLEE_NONCE = 0x101a,
    ATTR_REGISTRAR_NONCE = 0x1039,
    ATTR_PUBLIC_KEY = 0x1032,
    ATTR_AUTH_TYPE_FLAGS = 0x1004,
    ATTR_ENCR_TYPE_FLAGS = 0x1010,
    ATTR_CONN_TYPE_FLAGS = 0x100d,
    ATTR_CONFIG_METHODS = 0x1008,
    ATTR_WSC_STATE = 0x1044,
    ATTR_MANUFACTURER = 0x1021,
    ATTR_MODEL_NAME = 0x1023,
    ATTR_MODEL_NUMBER = 0x1024,
    ATTR_SERIAL_NUMBER = 0x1042,
    ATTR_PRIMARY_DEV_TYPE = 0x1054,
    ATTR_DEV_NAME = 0x1011,
    ATTR_RF_BANDS = 0x103c,
    ATTR_ASSOC_STATE = 0x1002,
    ATTR_DEV_PASSWORD_ID = 0x1012,
    ATTR_CONFIG_ERROR = 0x1009,
    ATTR_OS_VERSION = 0x102d,
    ATTR_VENDOR_EXTENSION = 0x1049,
    ATTR_SSID = 0x1045,
    ATTR_AUTH_TYPE = 0x1003,
    ATTR_ENCR_TYPE = 0x100f,
    ATTR_NETWORK_KEY = 0x1027,
    ATTR_KEY_WRAP_AUTH = 0x101e,
    ATTR_ENCR_SETTINGS = 0x1018,
    ATTR_AUTHENTICATOR = 0x1005,
};


}; // close namespace: ieee1905_1

#endif //_TLVF/IEEE_1905_1_EWSCATTRIBUTES_H_
