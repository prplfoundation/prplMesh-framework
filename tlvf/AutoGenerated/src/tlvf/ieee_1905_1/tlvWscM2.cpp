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

#include <tlvf/ieee_1905_1/tlvWscM2.h>
#include <tlvf/tlvflogging.h>

using namespace ieee1905_1;

tlvWscM2::tlvWscM2(uint8_t* buff, size_t buff_len, bool parse, bool swap_needed) :
    BaseClass(buff, buff_len, parse, swap_needed) {
    m_init_succeeded = init();
}
tlvWscM2::tlvWscM2(std::shared_ptr<BaseClass> base, bool parse, bool swap_needed) :
BaseClass(base->getBuffPtr(), base->getBuffRemainingBytes(), parse, swap_needed){
    m_init_succeeded = init();
}
tlvWscM2::~tlvWscM2() {
}
const eTlvType& tlvWscM2::type() {
    return (const eTlvType&)(*m_type);
}

const uint16_t& tlvWscM2::length() {
    return (const uint16_t&)(*m_length);
}

const eWscAttributes& tlvWscM2::version_attr() {
    return (const eWscAttributes&)(*m_version_attr);
}

const uint16_t& tlvWscM2::version_length() {
    return (const uint16_t&)(*m_version_length);
}

const eWscValues8& tlvWscM2::version() {
    return (const eWscValues8&)(*m_version);
}

const eWscAttributes& tlvWscM2::message_type_attr() {
    return (const eWscAttributes&)(*m_message_type_attr);
}

const uint16_t& tlvWscM2::message_type_length() {
    return (const uint16_t&)(*m_message_type_length);
}

const eWscValues8& tlvWscM2::message_type() {
    return (const eWscValues8&)(*m_message_type);
}

const eWscAttributes& tlvWscM2::enrolee_nonce_attr() {
    return (const eWscAttributes&)(*m_enrolee_nonce_attr);
}

const uint16_t& tlvWscM2::enrolee_nonce_length() {
    return (const uint16_t&)(*m_enrolee_nonce_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::enrolee_nonce(size_t idx) {
    bool ret_success = ( (m_enrolee_nonce_idx__ > 0) && (m_enrolee_nonce_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_enrolee_nonce[ret_idx]);
}

const eWscAttributes& tlvWscM2::registrar_nonce_attr() {
    return (const eWscAttributes&)(*m_registrar_nonce_attr);
}

const uint16_t& tlvWscM2::registrar_nonce_length() {
    return (const uint16_t&)(*m_registrar_nonce_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::registrar_nonce(size_t idx) {
    bool ret_success = ( (m_registrar_nonce_idx__ > 0) && (m_registrar_nonce_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_registrar_nonce[ret_idx]);
}

const eWscAttributes& tlvWscM2::uuid_r_attr() {
    return (const eWscAttributes&)(*m_uuid_r_attr);
}

const uint16_t& tlvWscM2::uuid_r_length() {
    return (const uint16_t&)(*m_uuid_r_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::uuid_r(size_t idx) {
    bool ret_success = ( (m_uuid_r_idx__ > 0) && (m_uuid_r_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_uuid_r[ret_idx]);
}

const eWscAttributes& tlvWscM2::public_key_attr() {
    return (const eWscAttributes&)(*m_public_key_attr);
}

const uint16_t& tlvWscM2::public_key_length() {
    return (const uint16_t&)(*m_public_key_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::public_key(size_t idx) {
    bool ret_success = ( (m_public_key_idx__ > 0) && (m_public_key_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_public_key[ret_idx]);
}

const eWscAttributes& tlvWscM2::authentication_type_flags_attr() {
    return (const eWscAttributes&)(*m_authentication_type_flags_attr);
}

const uint16_t& tlvWscM2::authentication_type_flags_length() {
    return (const uint16_t&)(*m_authentication_type_flags_length);
}

uint16_t& tlvWscM2::authentication_type_flags() {
    return (uint16_t&)(*m_authentication_type_flags);
}

const eWscAttributes& tlvWscM2::encryption_type_flags_attr() {
    return (const eWscAttributes&)(*m_encryption_type_flags_attr);
}

const uint16_t& tlvWscM2::encryption_type_flags_length() {
    return (const uint16_t&)(*m_encryption_type_flags_length);
}

uint16_t& tlvWscM2::encryption_type_flags() {
    return (uint16_t&)(*m_encryption_type_flags);
}

const eWscAttributes& tlvWscM2::connection_type_flags_attr() {
    return (const eWscAttributes&)(*m_connection_type_flags_attr);
}

const uint16_t& tlvWscM2::connection_type_flags_length() {
    return (const uint16_t&)(*m_connection_type_flags_length);
}

const eWscValues8& tlvWscM2::connection_type_flags() {
    return (const eWscValues8&)(*m_connection_type_flags);
}

const eWscAttributes& tlvWscM2::configuration_methods_attr() {
    return (const eWscAttributes&)(*m_configuration_methods_attr);
}

const uint16_t& tlvWscM2::configuration_methods_length() {
    return (const uint16_t&)(*m_configuration_methods_length);
}

const uint16_t& tlvWscM2::configuration_methods() {
    return (const uint16_t&)(*m_configuration_methods);
}

const eWscAttributes& tlvWscM2::manufacturer_attr() {
    return (const eWscAttributes&)(*m_manufacturer_attr);
}

const uint16_t& tlvWscM2::manufacturer_length() {
    return (const uint16_t&)(*m_manufacturer_length);
}

char* tlvWscM2::manufacturer(size_t length) {
    if( (m_manufacturer_idx__ <= 0) || (m_manufacturer_idx__ < length) ) {
        TLVF_LOG(ERROR) << "manufacturer length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_manufacturer);
}

bool tlvWscM2::set_manufacturer(std::string& str) {
    return set_manufacturer(const_cast<std::string&>(str));
}
bool tlvWscM2::set_manufacturer(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_manufacturer received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_manufacturer, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_manufacturer(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_manufacturer received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_manufacturer, str, size + 1);
    m_manufacturer[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::model_name_attr() {
    return (const eWscAttributes&)(*m_model_name_attr);
}

const uint16_t& tlvWscM2::model_name_length() {
    return (const uint16_t&)(*m_model_name_length);
}

char* tlvWscM2::model_name(size_t length) {
    if( (m_model_name_idx__ <= 0) || (m_model_name_idx__ < length) ) {
        TLVF_LOG(ERROR) << "model_name length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_model_name);
}

bool tlvWscM2::set_model_name(std::string& str) {
    return set_model_name(const_cast<std::string&>(str));
}
bool tlvWscM2::set_model_name(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_model_name received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_model_name, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_model_name(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_model_name received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_model_name, str, size + 1);
    m_model_name[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::model_number_attr() {
    return (const eWscAttributes&)(*m_model_number_attr);
}

const uint16_t& tlvWscM2::model_number_length() {
    return (const uint16_t&)(*m_model_number_length);
}

char* tlvWscM2::model_number(size_t length) {
    if( (m_model_number_idx__ <= 0) || (m_model_number_idx__ < length) ) {
        TLVF_LOG(ERROR) << "model_number length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_model_number);
}

bool tlvWscM2::set_model_number(std::string& str) {
    return set_model_number(const_cast<std::string&>(str));
}
bool tlvWscM2::set_model_number(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_model_number received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_model_number, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_model_number(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_model_number received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_model_number, str, size + 1);
    m_model_number[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::serial_number_attr() {
    return (const eWscAttributes&)(*m_serial_number_attr);
}

const uint16_t& tlvWscM2::serial_number_length() {
    return (const uint16_t&)(*m_serial_number_length);
}

char* tlvWscM2::serial_number(size_t length) {
    if( (m_serial_number_idx__ <= 0) || (m_serial_number_idx__ < length) ) {
        TLVF_LOG(ERROR) << "serial_number length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_serial_number);
}

bool tlvWscM2::set_serial_number(std::string& str) {
    return set_serial_number(const_cast<std::string&>(str));
}
bool tlvWscM2::set_serial_number(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_serial_number received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_serial_number, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_serial_number(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_serial_number received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_serial_number, str, size + 1);
    m_serial_number[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::primary_device_type_attr() {
    return (const eWscAttributes&)(*m_primary_device_type_attr);
}

const uint16_t& tlvWscM2::primary_device_type_length() {
    return (const uint16_t&)(*m_primary_device_type_length);
}

uint16_t& tlvWscM2::primary_device_type_category_id() {
    return (uint16_t&)(*m_primary_device_type_category_id);
}

std::tuple<bool, uint8_t&> tlvWscM2::primary_device_type_oui(size_t idx) {
    bool ret_success = ( (m_primary_device_type_oui_idx__ > 0) && (m_primary_device_type_oui_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_primary_device_type_oui[ret_idx]);
}

uint16_t& tlvWscM2::primary_device_type_subcategory_id() {
    return (uint16_t&)(*m_primary_device_type_subcategory_id);
}

const eWscAttributes& tlvWscM2::rf_bands_attr() {
    return (const eWscAttributes&)(*m_rf_bands_attr);
}

const uint16_t& tlvWscM2::rf_bands_length() {
    return (const uint16_t&)(*m_rf_bands_length);
}

eWscValues8& tlvWscM2::rf_bands() {
    return (eWscValues8&)(*m_rf_bands);
}

const eWscAttributes& tlvWscM2::association_state_attr() {
    return (const eWscAttributes&)(*m_association_state_attr);
}

const uint16_t& tlvWscM2::association_state_length() {
    return (const uint16_t&)(*m_association_state_length);
}

const eWscValues8& tlvWscM2::association_state() {
    return (const eWscValues8&)(*m_association_state);
}

const eWscAttributes& tlvWscM2::configuration_error_attr() {
    return (const eWscAttributes&)(*m_configuration_error_attr);
}

const uint16_t& tlvWscM2::configuration_error_length() {
    return (const uint16_t&)(*m_configuration_error_length);
}

const eWscValues16& tlvWscM2::configuration_error() {
    return (const eWscValues16&)(*m_configuration_error);
}

const eWscAttributes& tlvWscM2::device_password_id_attr() {
    return (const eWscAttributes&)(*m_device_password_id_attr);
}

const uint16_t& tlvWscM2::device_password_id_length() {
    return (const uint16_t&)(*m_device_password_id_length);
}

const eWscValues16& tlvWscM2::device_password_id() {
    return (const eWscValues16&)(*m_device_password_id);
}

const eWscAttributes& tlvWscM2::os_version_attr() {
    return (const eWscAttributes&)(*m_os_version_attr);
}

const uint16_t& tlvWscM2::os_version_length() {
    return (const uint16_t&)(*m_os_version_length);
}

const uint32_t& tlvWscM2::os_version() {
    return (const uint32_t&)(*m_os_version);
}

const eWscAttributes& tlvWscM2::vendor_extensions_attr() {
    return (const eWscAttributes&)(*m_vendor_extensions_attr);
}

const uint16_t& tlvWscM2::vendor_extensions_length() {
    return (const uint16_t&)(*m_vendor_extensions_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::vendor_extensions(size_t idx) {
    bool ret_success = ( (m_vendor_extensions_idx__ > 0) && (m_vendor_extensions_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_vendor_extensions[ret_idx]);
}

const eWscAttributes& tlvWscM2::ssid_attr() {
    return (const eWscAttributes&)(*m_ssid_attr);
}

const uint16_t& tlvWscM2::ssid_length() {
    return (const uint16_t&)(*m_ssid_length);
}

char* tlvWscM2::ssid(size_t length) {
    if( (m_ssid_idx__ <= 0) || (m_ssid_idx__ < length) ) {
        TLVF_LOG(ERROR) << "ssid length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_ssid);
}

bool tlvWscM2::set_ssid(std::string& str) {
    return set_ssid(const_cast<std::string&>(str));
}
bool tlvWscM2::set_ssid(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_ssid received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_ssid, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_ssid(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_ssid received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NAME_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_ssid, str, size + 1);
    m_ssid[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::authentication_type_attr() {
    return (const eWscAttributes&)(*m_authentication_type_attr);
}

const uint16_t& tlvWscM2::authentication_type_length() {
    return (const uint16_t&)(*m_authentication_type_length);
}

uint16_t& tlvWscM2::authentication_type() {
    return (uint16_t&)(*m_authentication_type);
}

const eWscAttributes& tlvWscM2::encryption_type_attr() {
    return (const eWscAttributes&)(*m_encryption_type_attr);
}

const uint16_t& tlvWscM2::encryption_type_length() {
    return (const uint16_t&)(*m_encryption_type_length);
}

uint16_t& tlvWscM2::encryption_type() {
    return (uint16_t&)(*m_encryption_type);
}

const eWscAttributes& tlvWscM2::network_key_attr() {
    return (const eWscAttributes&)(*m_network_key_attr);
}

const uint16_t& tlvWscM2::network_key_length() {
    return (const uint16_t&)(*m_network_key_length);
}

char* tlvWscM2::network_key(size_t length) {
    if( (m_network_key_idx__ <= 0) || (m_network_key_idx__ < length) ) {
        TLVF_LOG(ERROR) << "network_key length is smaller than requested length";
        return nullptr;
    }
    return ((char*)m_network_key);
}

bool tlvWscM2::set_network_key(std::string& str) {
    return set_network_key(const_cast<std::string&>(str));
}
bool tlvWscM2::set_network_key(const std::string& str) {
    size_t str_size = str.size();
    if (str_size == 0) {
        TLVF_LOG(WARNING) << "set_network_key received an empty string.";
        return false;
    }
    if (str_size + 1 > WSC_MAX_NETWORK_KEY_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_network_key, str.c_str(), str_size + 1);
    return true;
}
bool tlvWscM2::set_network_key(char str[], size_t size) {
    if (str == nullptr || size == 0) { 
        TLVF_LOG(WARNING) << "set_network_key received an empty string.";
        return false;
    }
    if (size + 1 > WSC_MAX_NETWORK_KEY_LENGTH) { // +1 for null terminator
        TLVF_LOG(ERROR) << "Received buffer size is smaller than string length";
        return false;
    }
    tlvf_copy_string(m_network_key, str, size + 1);
    m_network_key[size] = '\0';
    return true;
}
const eWscAttributes& tlvWscM2::bssid_attr() {
    return (const eWscAttributes&)(*m_bssid_attr);
}

const uint16_t& tlvWscM2::bssid_length() {
    return (const uint16_t&)(*m_bssid_length);
}

std::tuple<bool, uint8_t&> tlvWscM2::bssid(size_t idx) {
    bool ret_success = ( (m_bssid_idx__ > 0) && (m_bssid_idx__ > idx) );
    size_t ret_idx = ret_success ? idx : 0;
    if (!ret_success) {
        TLVF_LOG(ERROR) << "Requested index is greater than the number of available entries";
    }
    return std::forward_as_tuple(ret_success, m_bssid[ret_idx]);
}

void tlvWscM2::class_swap()
{
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_type));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_version_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_version_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_message_type_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_message_type_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_enrolee_nonce_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_enrolee_nonce_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_registrar_nonce_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_registrar_nonce_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_uuid_r_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_uuid_r_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_public_key_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_public_key_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type_flags_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type_flags_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type_flags));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type_flags_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type_flags_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type_flags));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_connection_type_flags_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_connection_type_flags_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_methods_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_methods_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_methods));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_manufacturer_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_manufacturer_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_model_name_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_model_name_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_model_number_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_model_number_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_serial_number_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_serial_number_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_primary_device_type_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_primary_device_type_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_primary_device_type_category_id));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_primary_device_type_subcategory_id));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_rf_bands_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_rf_bands_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_association_state_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_association_state_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_error_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_error_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_configuration_error));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_device_password_id_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_device_password_id_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_device_password_id));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_os_version_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_os_version_length));
    tlvf_swap(32, reinterpret_cast<uint8_t*>(m_os_version));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_vendor_extensions_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_vendor_extensions_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_ssid_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_ssid_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_authentication_type));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_encryption_type));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_network_key_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_network_key_length));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_bssid_attr));
    tlvf_swap(16, reinterpret_cast<uint8_t*>(m_bssid_length));
}

size_t tlvWscM2::get_initial_size()
{
    size_t class_size = 0;
    class_size += sizeof(eTlvType); // type
    class_size += sizeof(uint16_t); // length
    class_size += sizeof(eWscAttributes); // version_attr
    class_size += sizeof(uint16_t); // version_length
    class_size += sizeof(eWscValues8); // version
    class_size += sizeof(eWscAttributes); // message_type_attr
    class_size += sizeof(uint16_t); // message_type_length
    class_size += sizeof(eWscValues8); // message_type
    class_size += sizeof(eWscAttributes); // enrolee_nonce_attr
    class_size += sizeof(uint16_t); // enrolee_nonce_length
    class_size += WSC_NONCE_LENGTH * sizeof(uint8_t); // enrolee_nonce
    class_size += sizeof(eWscAttributes); // registrar_nonce_attr
    class_size += sizeof(uint16_t); // registrar_nonce_length
    class_size += WSC_NONCE_LENGTH * sizeof(uint8_t); // registrar_nonce
    class_size += sizeof(eWscAttributes); // uuid_r_attr
    class_size += sizeof(uint16_t); // uuid_r_length
    class_size += WSC_UUID_LENGTH * sizeof(uint8_t); // uuid_r
    class_size += sizeof(eWscAttributes); // public_key_attr
    class_size += sizeof(uint16_t); // public_key_length
    class_size += WSC_PUBLIC_KEY_LENGTH * sizeof(uint8_t); // public_key
    class_size += sizeof(eWscAttributes); // authentication_type_flags_attr
    class_size += sizeof(uint16_t); // authentication_type_flags_length
    class_size += sizeof(uint16_t); // authentication_type_flags
    class_size += sizeof(eWscAttributes); // encryption_type_flags_attr
    class_size += sizeof(uint16_t); // encryption_type_flags_length
    class_size += sizeof(uint16_t); // encryption_type_flags
    class_size += sizeof(eWscAttributes); // connection_type_flags_attr
    class_size += sizeof(uint16_t); // connection_type_flags_length
    class_size += sizeof(eWscValues8); // connection_type_flags
    class_size += sizeof(eWscAttributes); // configuration_methods_attr
    class_size += sizeof(uint16_t); // configuration_methods_length
    class_size += sizeof(uint16_t); // configuration_methods
    class_size += sizeof(eWscAttributes); // manufacturer_attr
    class_size += sizeof(uint16_t); // manufacturer_length
    class_size += WSC_MAX_NAME_LENGTH * sizeof(char); // manufacturer
    class_size += sizeof(eWscAttributes); // model_name_attr
    class_size += sizeof(uint16_t); // model_name_length
    class_size += WSC_MAX_NAME_LENGTH * sizeof(char); // model_name
    class_size += sizeof(eWscAttributes); // model_number_attr
    class_size += sizeof(uint16_t); // model_number_length
    class_size += WSC_MAX_NAME_LENGTH * sizeof(char); // model_number
    class_size += sizeof(eWscAttributes); // serial_number_attr
    class_size += sizeof(uint16_t); // serial_number_length
    class_size += WSC_MAX_NAME_LENGTH * sizeof(char); // serial_number
    class_size += sizeof(eWscAttributes); // primary_device_type_attr
    class_size += sizeof(uint16_t); // primary_device_type_length
    class_size += sizeof(uint16_t); // primary_device_type_category_id
    class_size += WSC_PRIMARY_DEV_TYPE_OUI_LENGTH * sizeof(uint8_t); // primary_device_type_oui
    class_size += sizeof(uint16_t); // primary_device_type_subcategory_id
    class_size += sizeof(eWscAttributes); // rf_bands_attr
    class_size += sizeof(uint16_t); // rf_bands_length
    class_size += sizeof(eWscValues8); // rf_bands
    class_size += sizeof(eWscAttributes); // association_state_attr
    class_size += sizeof(uint16_t); // association_state_length
    class_size += sizeof(eWscValues8); // association_state
    class_size += sizeof(eWscAttributes); // configuration_error_attr
    class_size += sizeof(uint16_t); // configuration_error_length
    class_size += sizeof(eWscValues16); // configuration_error
    class_size += sizeof(eWscAttributes); // device_password_id_attr
    class_size += sizeof(uint16_t); // device_password_id_length
    class_size += sizeof(eWscValues16); // device_password_id
    class_size += sizeof(eWscAttributes); // os_version_attr
    class_size += sizeof(uint16_t); // os_version_length
    class_size += sizeof(uint32_t); // os_version
    class_size += sizeof(eWscAttributes); // vendor_extensions_attr
    class_size += sizeof(uint16_t); // vendor_extensions_length
    class_size += WSC_VENDOR_EXTENSIONS_LENGTH * sizeof(uint8_t); // vendor_extensions
    class_size += sizeof(eWscAttributes); // ssid_attr
    class_size += sizeof(uint16_t); // ssid_length
    class_size += WSC_MAX_NAME_LENGTH * sizeof(char); // ssid
    class_size += sizeof(eWscAttributes); // authentication_type_attr
    class_size += sizeof(uint16_t); // authentication_type_length
    class_size += sizeof(uint16_t); // authentication_type
    class_size += sizeof(eWscAttributes); // encryption_type_attr
    class_size += sizeof(uint16_t); // encryption_type_length
    class_size += sizeof(uint16_t); // encryption_type
    class_size += sizeof(eWscAttributes); // network_key_attr
    class_size += sizeof(uint16_t); // network_key_length
    class_size += WSC_MAX_NETWORK_KEY_LENGTH * sizeof(char); // network_key
    class_size += sizeof(eWscAttributes); // bssid_attr
    class_size += sizeof(uint16_t); // bssid_length
    class_size += WSC_MAC_LENGTH * sizeof(uint8_t); // bssid
    return class_size;
}

bool tlvWscM2::init()
{
    if (getBuffRemainingBytes() < kMinimumLength) {
        TLVF_LOG(ERROR) << "Not enough available space on buffer. Class init failed";
        return false;
    }
    m_type = (eTlvType*)m_buff_ptr__;
    if (!m_parse__) *m_type = eTlvType::TLV_WSC;
    else {
        eTlvType swapped_type = *m_type;
        if (m_swap__) { tlvf_swap(16, reinterpret_cast<uint8_t*>(&swapped_type)); }
            if (swapped_type != eTlvType::TLV_WSC) {
            TLVF_LOG(ERROR) << "TLV type mismatch. Expected value: " << int(eTlvType::TLV_WSC) << ", received value: " << int(swapped_type);
            return false;
        }
    }
    m_buff_ptr__ += sizeof(eTlvType) * 1;
    m_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_length = 0;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    m_version_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_version_attr = eWscAttributes::ATTR_VERSION;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_version_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_version_length = 0x1;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_version = (eWscValues8*)m_buff_ptr__;
    if (!m_parse__) *m_version = eWscValues8::WSC_VERSION;
    m_buff_ptr__ += sizeof(eWscValues8) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues8); }
    m_message_type_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_message_type_attr = eWscAttributes::ATTR_MSG_TYPE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_message_type_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_message_type_length = 0x1;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_message_type = (eWscValues8*)m_buff_ptr__;
    if (!m_parse__) *m_message_type = eWscValues8::WSC_M2;
    m_buff_ptr__ += sizeof(eWscValues8) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues8); }
    m_enrolee_nonce_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_enrolee_nonce_attr = eWscAttributes::ATTR_ENROLLEE_NONCE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_enrolee_nonce_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_enrolee_nonce_length = WSC_NONCE_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_enrolee_nonce = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_NONCE_LENGTH);
    m_enrolee_nonce_idx__  = WSC_NONCE_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_NONCE_LENGTH); }
    m_registrar_nonce_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_registrar_nonce_attr = eWscAttributes::ATTR_REGISTRAR_NONCE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_registrar_nonce_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_registrar_nonce_length = WSC_NONCE_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_registrar_nonce = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_NONCE_LENGTH);
    m_registrar_nonce_idx__  = WSC_NONCE_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_NONCE_LENGTH); }
    m_uuid_r_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_uuid_r_attr = eWscAttributes::ATTR_UUID_R;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_uuid_r_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_uuid_r_length = WSC_UUID_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_uuid_r = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_UUID_LENGTH);
    m_uuid_r_idx__  = WSC_UUID_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_UUID_LENGTH); }
    m_public_key_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_public_key_attr = eWscAttributes::ATTR_PUBLIC_KEY;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_public_key_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_public_key_length = WSC_PUBLIC_KEY_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_public_key = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_PUBLIC_KEY_LENGTH);
    m_public_key_idx__  = WSC_PUBLIC_KEY_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_PUBLIC_KEY_LENGTH); }
    m_authentication_type_flags_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_authentication_type_flags_attr = eWscAttributes::ATTR_AUTH_TYPE_FLAGS;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_authentication_type_flags_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_authentication_type_flags_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_authentication_type_flags = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_encryption_type_flags_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_encryption_type_flags_attr = eWscAttributes::ATTR_ENCR_TYPE_FLAGS;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_encryption_type_flags_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_encryption_type_flags_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_encryption_type_flags = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_connection_type_flags_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_connection_type_flags_attr = eWscAttributes::ATTR_CONN_TYPE_FLAGS;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_connection_type_flags_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_connection_type_flags_length = 0x1;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_connection_type_flags = (eWscValues8*)m_buff_ptr__;
    if (!m_parse__) *m_connection_type_flags = eWscValues8::WSC_CONN_ESS;
    m_buff_ptr__ += sizeof(eWscValues8) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues8); }
    m_configuration_methods_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_methods_attr = eWscAttributes::ATTR_CONFIG_METHODS;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_configuration_methods_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_methods_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_configuration_methods = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_methods = (WSC_CONFIG_PHY_PUSHBUTTON | WSC_CONFIG_VIRT_PUSHBUTTON);
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_manufacturer_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_manufacturer_attr = eWscAttributes::ATTR_MANUFACTURER;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_manufacturer_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_manufacturer_length = WSC_MAX_NAME_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_manufacturer = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NAME_LENGTH);
    m_manufacturer_idx__  = WSC_MAX_NAME_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NAME_LENGTH); }
    m_model_name_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_model_name_attr = eWscAttributes::ATTR_MODEL_NAME;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_model_name_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_model_name_length = WSC_MAX_NAME_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_model_name = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NAME_LENGTH);
    m_model_name_idx__  = WSC_MAX_NAME_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NAME_LENGTH); }
    m_model_number_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_model_number_attr = eWscAttributes::ATTR_MODEL_NUMBER;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_model_number_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_model_number_length = WSC_MAX_NAME_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_model_number = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NAME_LENGTH);
    m_model_number_idx__  = WSC_MAX_NAME_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NAME_LENGTH); }
    m_serial_number_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_serial_number_attr = eWscAttributes::ATTR_SERIAL_NUMBER;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_serial_number_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_serial_number_length = WSC_MAX_NAME_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_serial_number = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NAME_LENGTH);
    m_serial_number_idx__  = WSC_MAX_NAME_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NAME_LENGTH); }
    m_primary_device_type_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_primary_device_type_attr = eWscAttributes::ATTR_PRIMARY_DEV_TYPE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_primary_device_type_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_primary_device_type_length = WSC_PRIMARY_DEV_TYPE_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_primary_device_type_category_id = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_primary_device_type_oui = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_PRIMARY_DEV_TYPE_OUI_LENGTH);
    m_primary_device_type_oui_idx__  = WSC_PRIMARY_DEV_TYPE_OUI_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_PRIMARY_DEV_TYPE_OUI_LENGTH); }
    m_primary_device_type_subcategory_id = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_rf_bands_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_rf_bands_attr = eWscAttributes::ATTR_RF_BANDS;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_rf_bands_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_rf_bands_length = 0x1;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_rf_bands = (eWscValues8*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(eWscValues8) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues8); }
    m_association_state_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_association_state_attr = eWscAttributes::ATTR_ASSOC_STATE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_association_state_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_association_state_length = 0x1;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_association_state = (eWscValues8*)m_buff_ptr__;
    if (!m_parse__) *m_association_state = eWscValues8::WSC_ASSOC_CONN_SUCCESS;
    m_buff_ptr__ += sizeof(eWscValues8) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues8); }
    m_configuration_error_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_error_attr = eWscAttributes::ATTR_CONFIG_ERROR;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_configuration_error_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_error_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_configuration_error = (eWscValues16*)m_buff_ptr__;
    if (!m_parse__) *m_configuration_error = eWscValues16::WSC_CFG_NO_ERROR;
    m_buff_ptr__ += sizeof(eWscValues16) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues16); }
    m_device_password_id_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_device_password_id_attr = eWscAttributes::ATTR_DEV_PASSWORD_ID;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_device_password_id_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_device_password_id_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_device_password_id = (eWscValues16*)m_buff_ptr__;
    if (!m_parse__) *m_device_password_id = eWscValues16::DEV_PW_PUSHBUTTON;
    m_buff_ptr__ += sizeof(eWscValues16) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscValues16); }
    m_os_version_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_os_version_attr = eWscAttributes::ATTR_OS_VERSION;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_os_version_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_os_version_length = WSC_OS_VERSION_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_os_version = (uint32_t*)m_buff_ptr__;
    if (!m_parse__) *m_os_version = 0x80000001;
    m_buff_ptr__ += sizeof(uint32_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint32_t); }
    m_vendor_extensions_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_vendor_extensions_attr = eWscAttributes::ATTR_VENDOR_EXTENSION;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_vendor_extensions_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_vendor_extensions_length = WSC_VENDOR_EXTENSIONS_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_vendor_extensions = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_VENDOR_EXTENSIONS_LENGTH);
    m_vendor_extensions_idx__  = WSC_VENDOR_EXTENSIONS_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_VENDOR_EXTENSIONS_LENGTH); }
    m_ssid_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_ssid_attr = eWscAttributes::ATTR_SSID;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_ssid_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_ssid_length = WSC_MAX_NAME_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_ssid = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NAME_LENGTH);
    m_ssid_idx__  = WSC_MAX_NAME_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NAME_LENGTH); }
    m_authentication_type_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_authentication_type_attr = eWscAttributes::ATTR_AUTH_TYPE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_authentication_type_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_authentication_type_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_authentication_type = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_encryption_type_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_encryption_type_attr = eWscAttributes::ATTR_ENCR_TYPE;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_encryption_type_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_encryption_type_length = 0x2;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_encryption_type = (uint16_t*)m_buff_ptr__;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_network_key_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_network_key_attr = eWscAttributes::ATTR_NETWORK_KEY;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_network_key_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_network_key_length = WSC_MAX_NETWORK_KEY_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_network_key = (char*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(char) * WSC_MAX_NETWORK_KEY_LENGTH);
    m_network_key_idx__  = WSC_MAX_NETWORK_KEY_LENGTH;
    if(m_length){ (*m_length) += (sizeof(char) * WSC_MAX_NETWORK_KEY_LENGTH); }
    m_bssid_attr = (eWscAttributes*)m_buff_ptr__;
    if (!m_parse__) *m_bssid_attr = eWscAttributes::ATTR_MAC_ADDR;
    m_buff_ptr__ += sizeof(eWscAttributes) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(eWscAttributes); }
    m_bssid_length = (uint16_t*)m_buff_ptr__;
    if (!m_parse__) *m_bssid_length = WSC_MAC_LENGTH;
    m_buff_ptr__ += sizeof(uint16_t) * 1;
    if(m_length && !m_parse__){ (*m_length) += sizeof(uint16_t); }
    m_bssid = (uint8_t*)m_buff_ptr__;
    m_buff_ptr__ += (sizeof(uint8_t) * WSC_MAC_LENGTH);
    m_bssid_idx__  = WSC_MAC_LENGTH;
    if(m_length){ (*m_length) += (sizeof(uint8_t) * WSC_MAC_LENGTH); }
    if (m_buff_ptr__ - m_buff__ > ssize_t(m_buff_len__)) {
        TLVF_LOG(ERROR) << "Not enough available space on buffer. Class init failed";
        return false;
    }
    if (m_parse__ && m_swap__) { class_swap(); }
    return true;
}


