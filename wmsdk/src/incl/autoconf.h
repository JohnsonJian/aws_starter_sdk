/*
 * Automatically generated C config: don't edit
 */ 

/*
 * System Type
 */
#undef CONFIG_CPU_MC200
#define CONFIG_CPU_MW300 1
#undef CONFIG_WiFi_878x
#define CONFIG_WiFi_8801 1
#undef CONFIG_ENABLE_ROM_LIBS
#undef CONFIG_ENABLE_MCU_PM3
#define CONFIG_OS_FREERTOS 1
#define CONFIG_LWIP_STACK 1

/*
 * Application Framework
 */
#undef CONFIG_APP_FRM_PROV_WPS

/*
 * Modules
 */

/*
 * WLAN
 */

/*
 * Wifi driver
 */
#undef CONFIG_HOST_SUPP
#undef CONFIG_HOST_PMK
#undef CONFIG_EXT_SCAN
#define CONFIG_WMM 1
#define CONFIG_11N 1
#define CONFIG_WLAN_FW_HEARTBEAT 1
#undef CONFIG_5GHz_SUPPORT
#undef CONFIG_WLAN_FAST_PATH
#define CONFIG_MAX_AP_ENTRIES 20
#define CONFIG_WLAN_KNOWN_NETWORKS 5

/*
 * uAP configuration
 */
#define CONFIG_WIFI_UAP_WORKAROUND_STICKY_TIM 1

/*
 * Wifi extra debug options
 */
#undef CONFIG_WIFI_EXTRA_DEBUG
#undef CONFIG_WIFI_UAP_DEBUG
#undef CONFIG_WIFI_EVENTS_DEBUG
#undef CONFIG_WIFI_CMD_RESP_DEBUG
#undef CONFIG_WIFI_SCAN_DEBUG
#undef CONFIG_WIFI_IO_DEBUG
#undef CONFIG_WIFI_IO_DUMP
#undef CONFIG_WIFI_MEM_DEBUG
#undef CONFIG_WIFI_AMPDU_DEBUG
#undef CONFIG_WIFI_TIMER_DEBUG
#undef CONFIG_P2P
#undef CONFIG_WPS2

/*
 * WPA2 Enterprise Support
 */
#undef CONFIG_WPA2_ENTP
#undef CONFIG_HOSTAPD_RADIUS
#undef CONFIG_FREE_RADIUS
#define CONFIG_MLAN_WMSDK 1

/*
 * MDNS
 */
#define CONFIG_MDNS_MAX_SERVICE_ANNOUNCE 3
#undef CONFIG_MDNS_QUERY
#undef CONFIG_DNSSD_QUERY
#define CONFIG_MDNS_SERVICE_CACHE_SIZE 
#define CONFIG_MDNS_MAX_SERVICE_MONITORS 
#undef CONFIG_XMDNS

/*
 * TLS
 */
#define CONFIG_ENABLE_TLS 1
#undef CONFIG_ENABLE_CYASSL_DEBUG
#undef CONFIG_CYASSL_ENABLE_ERROR_LOG
#undef CONFIG_CYASSL_ENABLE_INFO_LOG
#undef CONFIG_CYASSL_ENABLE_FUNC_ENTRY_LOG
#undef CONFIG_CYASSL_ENABLE_FUNC_LEAVE_LOG
#undef CONFIG_CYASSL_ENABLE_OTHER_LOG

/*
 * PROVISIONING
 */
#define CONFIG_ENABLE_SCAN 1

/*
 * HTTP Server (HTTPD)
 */
#define CONFIG_ENABLE_HTTP_SERVER 1
#undef CONFIG_ENABLE_HTTPS_SERVER
#define CONFIG_HTTP_CLIENT_SOCKETS 1
#define CONFIG_ENABLE_HTTPD_STATS 1

/*
 * HTTP Client
 */
#undef CONFIG_ENABLE_HTTPC_SECURE
#undef CONFIG_ENABLE_HTTPC_MODIFY_TIME

/*
 * JSON
 */
#undef CONFIG_JSON_FLOAT

/*
 * Firmware Upgrades
 */
#define CONFIG_FWUPG_ED_CHACHA 1
#undef CONFIG_FWUPG_RSA_AES
#define CONFIG_WIFI_FW_UPGRADE 1

/*
 * CLI History
 */
#undef CONFIG_CLI_HISTORY

/*
 * XZ Decompression
 */
#define CONFIG_XZ_DECOMPRESSION 1

/*
 * BT Support
 */
#undef CONFIG_BT_SUPPORT

/*
 * IPv6 Support
 */
#undef CONFIG_IPV6

/*
 * Auto IP Support
 */
#undef CONFIG_AUTOIP

/*
 * Bonjour Conformance fixes
 */
#undef CONFIG_BONJ_CONFORMANCE

/*
 * System Work Queue
 */
#define CONFIG_SYS_WQ_STACK 1024

/*
 * CMSIS DSP Library
 */
#undef CONFIG_CMSIS_DSPLIB

/*
 * Device Drivers
 */

/*
 * Internal
 */

/*
 * I2C configuration
 */

/*
 * I2C debug options
 */
#undef CONFIG_DRV_I2C_DEBUG_DUMP
#undef CONFIG_USB_DRIVER

/*
 * External
 */
#undef CONFIG_XFLASH_DRIVER
#undef CONFIG_SPI_FLASH_DRIVER

/*
 * Miscellaneous
 */
#define CONFIG_FLASH_PARTITION_COUNT 10
#undef CONFIG_UART_LARGE_RCV_BUF
#undef CONFIG_SW_WATCHDOG
#define CONFIG_HW_RTC 1
#undef CONFIG_PROFILER
#define CONFIG_PROFILER_FUNCTION_CNT 
#undef CONFIG_ENABLE_LTO

/*
 * Development and Debugging
 */
#undef CONFIG_ENABLE_ERROR_LOGS
#undef CONFIG_ENABLE_WARNING_LOGS
#undef CONFIG_DEBUG_BUILD
#undef CONFIG_ENABLE_FREERTOS_RUNTIME_STATS_SUPPORT
#undef CONFIG_RUNTIME_STATS_USE_GPT0
#undef CONFIG_RUNTIME_STATS_USE_GPT1
#undef CONFIG_RUNTIME_STATS_USE_GPT2
#undef CONFIG_RUNTIME_STATS_USE_GPT3
#undef CONFIG_ENABLE_STACK_OVERFLOW_CHECK
#undef CONFIG_ENABLE_ASSERTS
#undef CONFIG_DEBUG_OUTPUT
#undef CONFIG_WLCMGR_DEBUG
#undef CONFIG_HEALTHMON_DEBUG
#undef CONFIG_HTTPD_DEBUG
#undef CONFIG_TLS_DEBUG
#undef CONFIG_WIFI_DEBUG
#undef CONFIG_PWR_DEBUG
#undef CONFIG_WAKELOCK_DEBUG
#undef CONFIG_WPS_DEBUG
#undef CONFIG_P2P_DEBUG
#undef CONFIG_DHCP_SERVER_DEBUG
#undef CONFIG_PROVISIONING_DEBUG
#undef CONFIG_SUPPLICANT_DEBUG
#undef CONFIG_HTTPC_DEBUG
#undef CONFIG_BLOCK_ALLOCATOR_DEBUG
#undef CONFIG_CRC_DEBUG
#undef CONFIG_RFGET_DEBUG
#undef CONFIG_CRYPTO_DEBUG
#undef CONFIG_JSON_DEBUG
#undef CONFIG_FLASH_DEBUG
#undef CONFIG_MDNS_DEBUG
#undef CONFIG_MDNS_CHECK_ARGS
#undef CONFIG_APP_DEBUG
#undef CONFIG_APP_FRAME_INTERNAL_DEBUG
#undef CONFIG_LL_DEBUG
#undef CONFIG_OS_DEBUG
#undef CONFIG_HEAP_DEBUG
#undef CONFIG_PSM_DEBUG
#undef CONFIG_FTFS_DEBUG
#undef CONFIG_SEMAPHORE_DEBUG
#undef CONFIG_ENABLE_TESTS
#undef CONFIG_PSM_TESTS
#undef CONFIG_HTTPD_TESTS
#undef CONFIG_JSON_TESTS
#undef CONFIG_CLI_TESTS
#undef CONFIG_SYSINFO_TESTS
#undef CONFIG_MDNS_TESTS
#undef CONFIG_EZXML_TESTS
#undef CONFIG_BA_TESTS
#undef CONFIG_WORK_QUEUE_TESTS
#undef CONFIG_MDEV_TESTS
#undef CONFIG_HEAP_TESTS
#undef CONFIG_AUTO_TEST_BUILD
