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

#ifndef _TLVF_IEEE_1905_1_TLVWSCM2_H_
#define _TLVF_IEEE_1905_1_TLVWSCM2_H_

#include <cstddef>
#include <stdint.h>
#include <tlvf/swap.h>
#include <string.h>
#include <memory>
#include <tlvf/BaseClass.h>
#include "tlvf/ieee_1905_1/eTlvType.h"
#include "tlvf/ieee_1905_1/eWscAttributes.h"
#include "tlvf/ieee_1905_1/eWscValues8.h"
#include <tuple>
#include <tlvf/tlvfutils.h>
#include "tlvf/ieee_1905_1/eWscValues16.h"

namespace ieee1905_1 {


class tlvWscM2 : public BaseClass
{
    public:
        tlvWscM2(uint8_t* buff, size_t buff_len, bool parse = false, bool swap_needed = false);
        tlvWscM2(std::shared_ptr<BaseClass> base, bool parse = false, bool swap_needed = false);
        ~tlvWscM2();

        const eTlvType& type();
        const uint16_t& length();
        const eWscAttributes& version_attr();
        const uint16_t& version_length();
        const eWscValues8& version();
        const eWscAttributes& message_type_attr();
        const uint16_t& message_type_length();
        const eWscValues8& message_type();
        const eWscAttributes& enrolee_nonce_attr();
        const uint16_t& enrolee_nonce_length();
        std::tuple<bool, uint8_t&> enrolee_nonce(size_t idx);
        const eWscAttributes& registrar_nonce_attr();
        const uint16_t& registrar_nonce_length();
        std::tuple<bool, uint8_t&> registrar_nonce(size_t idx);
        const eWscAttributes& uuid_r_attr();
        const uint16_t& uuid_r_length();
        std::tuple<bool, uint8_t&> uuid_r(size_t idx);
        const eWscAttributes& public_key_attr();
        const uint16_t& public_key_length();
        std::tuple<bool, uint8_t&> public_key(size_t idx);
        const eWscAttributes& authentication_type_flags_attr();
        const uint16_t& authentication_type_flags_length();
        uint16_t& authentication_type_flags();
        const eWscAttributes& encryption_type_flags_attr();
        const uint16_t& encryption_type_flags_length();
        uint16_t& encryption_type_flags();
        const eWscAttributes& connection_type_flags_attr();
        const uint16_t& connection_type_flags_length();
        const eWscValues8& connection_type_flags();
        const eWscAttributes& configuration_methods_attr();
        const uint16_t& configuration_methods_length();
        const uint16_t& configuration_methods();
        const eWscAttributes& manufacturer_attr();
        const uint16_t& manufacturer_length();
        char* manufacturer(size_t length = 0);
        bool set_manufacturer(std::string& str);
        bool set_manufacturer(const std::string& str);
        bool set_manufacturer(char buffer[], size_t size);
        const eWscAttributes& model_name_attr();
        const uint16_t& model_name_length();
        char* model_name(size_t length = 0);
        bool set_model_name(std::string& str);
        bool set_model_name(const std::string& str);
        bool set_model_name(char buffer[], size_t size);
        const eWscAttributes& model_number_attr();
        const uint16_t& model_number_length();
        char* model_number(size_t length = 0);
        bool set_model_number(std::string& str);
        bool set_model_number(const std::string& str);
        bool set_model_number(char buffer[], size_t size);
        const eWscAttributes& serial_number_attr();
        const uint16_t& serial_number_length();
        char* serial_number(size_t length = 0);
        bool set_serial_number(std::string& str);
        bool set_serial_number(const std::string& str);
        bool set_serial_number(char buffer[], size_t size);
        const eWscAttributes& primary_device_type_attr();
        const uint16_t& primary_device_type_length();
        uint16_t& primary_device_type_category_id();
        std::tuple<bool, uint8_t&> primary_device_type_oui(size_t idx);
        uint16_t& primary_device_type_subcategory_id();
        const eWscAttributes& rf_bands_attr();
        const uint16_t& rf_bands_length();
        eWscValues8& rf_bands();
        const eWscAttributes& association_state_attr();
        const uint16_t& association_state_length();
        const eWscValues8& association_state();
        const eWscAttributes& configuration_error_attr();
        const uint16_t& configuration_error_length();
        const eWscValues16& configuration_error();
        const eWscAttributes& device_password_id_attr();
        const uint16_t& device_password_id_length();
        const eWscValues16& device_password_id();
        const eWscAttributes& os_version_attr();
        const uint16_t& os_version_length();
        const uint32_t& os_version();
        const eWscAttributes& vendor_extensions_attr();
        const uint16_t& vendor_extensions_length();
        std::tuple<bool, uint8_t&> vendor_extensions(size_t idx);
        const eWscAttributes& ssid_attr();
        const uint16_t& ssid_length();
        char* ssid(size_t length = 0);
        bool set_ssid(std::string& str);
        bool set_ssid(const std::string& str);
        bool set_ssid(char buffer[], size_t size);
        const eWscAttributes& authentication_type_attr();
        const uint16_t& authentication_type_length();
        uint16_t& authentication_type();
        const eWscAttributes& encryption_type_attr();
        const uint16_t& encryption_type_length();
        uint16_t& encryption_type();
        const eWscAttributes& network_key_attr();
        const uint16_t& network_key_length();
        char* network_key(size_t length = 0);
        bool set_network_key(std::string& str);
        bool set_network_key(const std::string& str);
        bool set_network_key(char buffer[], size_t size);
        const eWscAttributes& bssid_attr();
        const uint16_t& bssid_length();
        std::tuple<bool, uint8_t&> bssid(size_t idx);
        void class_swap();
        static size_t get_initial_size();

    private:
        bool init();
        eTlvType* m_type = nullptr;
        uint16_t* m_length = nullptr;
        eWscAttributes* m_version_attr = nullptr;
        uint16_t* m_version_length = nullptr;
        eWscValues8* m_version = nullptr;
        eWscAttributes* m_message_type_attr = nullptr;
        uint16_t* m_message_type_length = nullptr;
        eWscValues8* m_message_type = nullptr;
        eWscAttributes* m_enrolee_nonce_attr = nullptr;
        uint16_t* m_enrolee_nonce_length = nullptr;
        uint8_t* m_enrolee_nonce = nullptr;
        size_t m_enrolee_nonce_idx__ = 0;
        eWscAttributes* m_registrar_nonce_attr = nullptr;
        uint16_t* m_registrar_nonce_length = nullptr;
        uint8_t* m_registrar_nonce = nullptr;
        size_t m_registrar_nonce_idx__ = 0;
        eWscAttributes* m_uuid_r_attr = nullptr;
        uint16_t* m_uuid_r_length = nullptr;
        uint8_t* m_uuid_r = nullptr;
        size_t m_uuid_r_idx__ = 0;
        eWscAttributes* m_public_key_attr = nullptr;
        uint16_t* m_public_key_length = nullptr;
        uint8_t* m_public_key = nullptr;
        size_t m_public_key_idx__ = 0;
        eWscAttributes* m_authentication_type_flags_attr = nullptr;
        uint16_t* m_authentication_type_flags_length = nullptr;
        uint16_t* m_authentication_type_flags = nullptr;
        eWscAttributes* m_encryption_type_flags_attr = nullptr;
        uint16_t* m_encryption_type_flags_length = nullptr;
        uint16_t* m_encryption_type_flags = nullptr;
        eWscAttributes* m_connection_type_flags_attr = nullptr;
        uint16_t* m_connection_type_flags_length = nullptr;
        eWscValues8* m_connection_type_flags = nullptr;
        eWscAttributes* m_configuration_methods_attr = nullptr;
        uint16_t* m_configuration_methods_length = nullptr;
        uint16_t* m_configuration_methods = nullptr;
        eWscAttributes* m_manufacturer_attr = nullptr;
        uint16_t* m_manufacturer_length = nullptr;
        char* m_manufacturer = nullptr;
        size_t m_manufacturer_idx__ = 0;
        eWscAttributes* m_model_name_attr = nullptr;
        uint16_t* m_model_name_length = nullptr;
        char* m_model_name = nullptr;
        size_t m_model_name_idx__ = 0;
        eWscAttributes* m_model_number_attr = nullptr;
        uint16_t* m_model_number_length = nullptr;
        char* m_model_number = nullptr;
        size_t m_model_number_idx__ = 0;
        eWscAttributes* m_serial_number_attr = nullptr;
        uint16_t* m_serial_number_length = nullptr;
        char* m_serial_number = nullptr;
        size_t m_serial_number_idx__ = 0;
        eWscAttributes* m_primary_device_type_attr = nullptr;
        uint16_t* m_primary_device_type_length = nullptr;
        uint16_t* m_primary_device_type_category_id = nullptr;
        uint8_t* m_primary_device_type_oui = nullptr;
        size_t m_primary_device_type_oui_idx__ = 0;
        uint16_t* m_primary_device_type_subcategory_id = nullptr;
        eWscAttributes* m_rf_bands_attr = nullptr;
        uint16_t* m_rf_bands_length = nullptr;
        eWscValues8* m_rf_bands = nullptr;
        eWscAttributes* m_association_state_attr = nullptr;
        uint16_t* m_association_state_length = nullptr;
        eWscValues8* m_association_state = nullptr;
        eWscAttributes* m_configuration_error_attr = nullptr;
        uint16_t* m_configuration_error_length = nullptr;
        eWscValues16* m_configuration_error = nullptr;
        eWscAttributes* m_device_password_id_attr = nullptr;
        uint16_t* m_device_password_id_length = nullptr;
        eWscValues16* m_device_password_id = nullptr;
        eWscAttributes* m_os_version_attr = nullptr;
        uint16_t* m_os_version_length = nullptr;
        uint32_t* m_os_version = nullptr;
        eWscAttributes* m_vendor_extensions_attr = nullptr;
        uint16_t* m_vendor_extensions_length = nullptr;
        uint8_t* m_vendor_extensions = nullptr;
        size_t m_vendor_extensions_idx__ = 0;
        eWscAttributes* m_ssid_attr = nullptr;
        uint16_t* m_ssid_length = nullptr;
        char* m_ssid = nullptr;
        size_t m_ssid_idx__ = 0;
        eWscAttributes* m_authentication_type_attr = nullptr;
        uint16_t* m_authentication_type_length = nullptr;
        uint16_t* m_authentication_type = nullptr;
        eWscAttributes* m_encryption_type_attr = nullptr;
        uint16_t* m_encryption_type_length = nullptr;
        uint16_t* m_encryption_type = nullptr;
        eWscAttributes* m_network_key_attr = nullptr;
        uint16_t* m_network_key_length = nullptr;
        char* m_network_key = nullptr;
        size_t m_network_key_idx__ = 0;
        eWscAttributes* m_bssid_attr = nullptr;
        uint16_t* m_bssid_length = nullptr;
        uint8_t* m_bssid = nullptr;
        size_t m_bssid_idx__ = 0;
};

}; // close namespace: ieee1905_1

#endif //_TLVF/IEEE_1905_1_TLVWSCM2_H_
