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

#ifndef _TLVF_IEEE_1905_1_EWSCVALUES16_H_
#define _TLVF_IEEE_1905_1_EWSCVALUES16_H_

#include <cstddef>
#include <stdint.h>
#include <tlvf/swap.h>

namespace ieee1905_1 {

enum eWscValues16: uint16_t {
    WSC_AUTH_OPEN = 0x1,
    WSC_AUTH_WPAPSK = 0x2,
    WSC_AUTH_SHARED = 0x4,
    WSC_AUTH_WPA = 0x8,
    WSC_AUTH_WPA2 = 0x10,
    WSC_AUTH_WPA2PSK = 0x20,
    WSC_ENCR_NONE = 0x1,
    WSC_ENCR_WEP = 0x2,
    WSC_ENCR_TKIP = 0x4,
    WSC_ENCR_AES = 0x8,
    WSC_CONFIG_VIRT_PUSHBUTTON = 0x280,
    WSC_CONFIG_PHY_PUSHBUTTON = 0x480,
    DEV_PW_PUSHBUTTON = 0x4,
    WSC_CFG_NO_ERROR = 0x0,
    WSC_DEV_NETWORK_INFRA = 0x6,
    WSC_DEV_NETWORK_INFRA_AP = 0x1,
    WSC_DEV_NETWORK_INFRA_ROUTER = 0x2,
    WSC_DEV_NETWORK_INFRA_SWITCH = 0x3,
    WSC_DEV_NETWORK_INFRA_GATEWAY = 0x4,
    WSC_DEV_NETWORK_INFRA_BRIDGE = 0x5,
    WSC_MAC_LENGTH = 0x6,
    WSC_NONCE_LENGTH = 0x10,
    WSC_UUID_LENGTH = 0x10,
    WSC_VENDOR_EXTENSIONS_LENGTH = 0x6,
    WSC_PRIMARY_DEV_TYPE_LENGTH = 0x8,
    WSC_PRIMARY_DEV_TYPE_OUI_LENGTH = 0x4,
    WSC_OS_VERSION_LENGTH = 0x4,
    WSC_MAX_NAME_LENGTH = 0x20,
    WSC_MAX_NETWORK_KEY_LENGTH = 0x40,
    WSC_PUBLIC_KEY_LENGTH = 0xc0,
};


}; // close namespace: ieee1905_1

#endif //_TLVF/IEEE_1905_1_EWSCVALUES16_H_
