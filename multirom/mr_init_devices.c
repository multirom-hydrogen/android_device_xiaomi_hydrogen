#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{

    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

    "/sys/block/mmcblk0/*",
    "/sys/block/mmcblk1/*",

    // boot and data
    "/sys/block/mmcblk0/mmcblk0p60", //boot
    "/sys/block/mmcblk0/mmcblk0p65", //data

    // system and cache
    "/sys/block/mmcblk0/mmcblk0p64", //system
    "/sys/block/mmcblk0/mmcblk0p62", //cache

    // Mount persist and firmware
    "/sys/block/mmcblk0/mmcblk0p57", // persist
    "/sys/block/mmcblk0/mmcblk0p49", // firmware

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // for input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/soc:gpio_keys/input4*",
    "/sys/devices/soc/soc:gpio_keys/input0*",
    "/sys/bus/platform/devices/gpio_keys/input*"
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/misc/uinput/*",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input*",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input/input5*",
    "/sys/devices/soc/7577000.i2c/i2c-3/3-0036/*",
    "/sys/devices/soc/75ba000.i2c/i2c-12/12-0020/input/input3*",

    "/sys/class/input/input0",
    "/sys/class/input/input0/event0",
    "/sys/class/input/input1",
    "/sys/class/input/input1/event1",
    "/sys/class/input/input2",
    "/sys/class/input/input2/event2",
    "/sys/class/input/input3",
    "/sys/class/input/input3/event3",
    "/sys/class/input/input4",
    "/sys/class/input/input4/event4",
    "/sys/class/input/input5",
    "/sys/class/input/input5/event5",
    "/sys/class/input/input6",
    "/sys/class/input/input6/event6",
    
    // for adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0*",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // USB Drive
    "/sys/bus/platform/drivers/xhci-hcd*",
    "/sys/block/sda/sda1",

    // Encryption
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/qseecom/qseecom",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    // exfat requires fuse device
    "/sys/devices/virtual/misc/fuse",
    NULL
};
