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

#ifndef _TLVF_IEEE_1905_1_EWSCVALUES8_H_
#define _TLVF_IEEE_1905_1_EWSCVALUES8_H_

#include <cstddef>
#include <stdint.h>
#include <tlvf/swap.h>

namespace ieee1905_1 {

enum eWscValues8: uint8_t {
    WSC_VERSION = 0x10,
    WSC_M1 = 0x4,
    WSC_M2 = 0x5,
    WSC_STATE_NOT_CONFIGURED = 0x1,
    WSC_STATE_CONFIGURED = 0x2,
    WSC_RF_BAND_2GHZ = 0x1,
    WSC_RF_BAND_5GHZ = 0x2,
    WSC_RF_BAND_60GHZ = 0x4,
    WSC_ASSOC_NOT_ASSOC = 0x0,
    WSC_ASSOC_CONN_SUCCESS = 0x1,
    WSC_VENDOR_ID_WFA_1 = 0x0,
    WSC_VENDOR_ID_WFA_2 = 0x37,
    WSC_VENDOR_ID_WFA_3 = 0x2a,
    WFA_ELEM_VERSION2 = 0x0,
    WSC_CONN_ESS = 0x1,
    WSC_CONN_IBSS = 0x2,
};


}; // close namespace: ieee1905_1

#endif //_TLVF/IEEE_1905_1_EWSCVALUES8_H_
