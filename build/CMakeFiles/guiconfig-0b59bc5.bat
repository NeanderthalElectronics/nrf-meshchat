@echo off
cd /D C:\Users\aust\projects\stone\nrf\MeshChat\build\zephyr\kconfig || (set FAIL_LINE=2& goto :ABORT)
C:\Users\aust\ncs\v1.7.0\toolchain\opt\bin\cmake.exe -E env ZEPHYR_BASE=C:/Users/aust/ncs/v1.7.0/zephyr ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb PYTHON_EXECUTABLE=C:/Users/aust/ncs/v1.7.0/toolchain/opt/bin/python.exe srctree=C:/Users/aust/ncs/v1.7.0/zephyr KERNELVERSION=0x2066300 KCONFIG_CONFIG=C:/Users/aust/projects/stone/nrf/MeshChat/build/zephyr/.config ARCH=arm ARCH_DIR=C:/Users/aust/ncs/v1.7.0/zephyr/arch BOARD_DIR=C:/Users/aust/ncs/v1.7.0/zephyr/boards/arm/nrf52840dk_nrf52840 KCONFIG_BINARY_DIR=C:/Users/aust/projects/stone/nrf/MeshChat/build/Kconfig TOOLCHAIN_KCONFIG_DIR=C:/Users/aust/ncs/v1.7.0/zephyr/cmake/toolchain/gnuarmemb EDT_PICKLE=C:/Users/aust/projects/stone/nrf/MeshChat/build/zephyr/edt.pickle ZEPHYR_NRF_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/nrf ZEPHYR_MCUBOOT_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/bootloader/mcuboot ZEPHYR_MCUBOOT_KCONFIG=C:/Users/aust/ncs/v1.7.0/nrf/modules/mcuboot/Kconfig ZEPHYR_TRUSTED_FIRMWARE_M_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/tee/tfm ZEPHYR_TRUSTED_FIRMWARE_M_KCONFIG=C:/Users/aust/ncs/v1.7.0/nrf/modules/trusted-firmware-m/Kconfig ZEPHYR_TFM_MCUBOOT_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/tee/tfm-mcuboot ZEPHYR_CJSON_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/cjson ZEPHYR_CJSON_KCONFIG=C:/Users/aust/ncs/v1.7.0/nrf/modules/cjson/Kconfig ZEPHYR_OPENTHREAD_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/openthread ZEPHYR_PELION_DM_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/pelion-dm ZEPHYR_CDDL_GEN_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/cddl-gen ZEPHYR_CDDL_GEN_KCONFIG=C:/Users/aust/ncs/v1.7.0/nrf/modules/cddl-gen/Kconfig ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/memfault-firmware-sdk ZEPHYR_CANOPENNODE_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/canopennode ZEPHYR_CANOPENNODE_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/canopennode/Kconfig ZEPHYR_CIVETWEB_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/civetweb ZEPHYR_CMSIS_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/hal/cmsis ZEPHYR_FATFS_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/fs/fatfs ZEPHYR_HAL_NORDIC_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/hal/nordic ZEPHYR_HAL_NORDIC_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/hal_nordic/Kconfig ZEPHYR_ST_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/hal/st ZEPHYR_LIBMETAL_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/hal/libmetal ZEPHYR_LITTLEFS_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/fs/littlefs ZEPHYR_LORAMAC_NODE_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/loramac-node ZEPHYR_LORAMAC_NODE_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/loramac-node/Kconfig ZEPHYR_LVGL_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/gui/lvgl ZEPHYR_LZ4_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/lz4 ZEPHYR_LZ4_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/lz4/Kconfig ZEPHYR_MBEDTLS_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/crypto/mbedtls ZEPHYR_MBEDTLS_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/mbedtls/Kconfig ZEPHYR_MCUMGR_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/mcumgr ZEPHYR_MIPI_SYS_T_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/debug/mipi-sys-t ZEPHYR_NANOPB_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/nanopb ZEPHYR_NANOPB_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/nanopb/Kconfig ZEPHYR_NRF_HW_MODELS_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/bsim_hw_models/nrf_hw_models ZEPHYR_OPEN_AMP_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/open-amp ZEPHYR_SEGGER_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/debug/segger ZEPHYR_TINYCBOR_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/tinycbor ZEPHYR_TINYCRYPT_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/crypto/tinycrypt ZEPHYR_TRACERECORDER_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/debug/TraceRecorder ZEPHYR_TRACERECORDER_KCONFIG=C:/Users/aust/ncs/v1.7.0/zephyr/modules/TraceRecorder/Kconfig ZEPHYR_NRFXLIB_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/nrfxlib ZEPHYR_CONNECTEDHOMEIP_MODULE_DIR=C:/Users/aust/ncs/v1.7.0/modules/lib/matter SHIELD_AS_LIST= DTS_POST_CPP=C:/Users/aust/projects/stone/nrf/MeshChat/build/zephyr/nrf52840dk_nrf52840.dts.pre.tmp DTS_ROOT_BINDINGS=C:/Users/aust/ncs/v1.7.0/nrf/dts/bindings?C:/Users/aust/ncs/v1.7.0/zephyr/dts/bindings C:/Users/aust/ncs/v1.7.0/toolchain/opt/bin/python.exe C:/Users/aust/ncs/v1.7.0/zephyr/scripts/kconfig/guiconfig.py C:/Users/aust/projects/stone/nrf/MeshChat/Kconfig || (set FAIL_LINE=3& goto :ABORT)
goto :EOF

:ABORT
set ERROR_CODE=%ERRORLEVEL%
echo Batch file failed at line %FAIL_LINE% with errorcode %ERRORLEVEL%
exit /b %ERROR_CODE%