/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2023, Phytium Technology Co., Ltd.
 * lixinde			<lixinde@phytium.com.cn>
 * weichangzheng	<weichangzheng@phytium.com.cn>
 */

#ifndef __PE2201_CONFIG_H
#define __PE2201_CONFIG_H

/* SDRAM Bank #1 start address */
#define PHYS_SDRAM_1			0x80000000
#define PHYS_SDRAM_1_SIZE		0x74000000
#define CONFIG_SYS_SDRAM_BASE	PHYS_SDRAM_1
#define CONFIG_SYS_INIT_SP_ADDR	(0x30c00000 + 0x1a000)
#define CONFIG_SYS_MALLOC_LEN			0x101000
#define CONFIG_SYS_LOAD_ADDR			0x90000000
#define CONFIG_ENV_SIZE					0x1000

/* BOOT */
#define BOOT_TARGET_DEVICES(func)	\
	func(SCSI, scsi, 0)	\

#include <config_distro_bootcmd.h>

/* Initial environment variables */
#define CONFIG_EXTRA_ENV_SETTINGS	\
	"image=Image\0"	\
	BOOTENV	\
	"scriptaddr=0x90100000\0"	\
	"kernel_addr_r=0x90200000\0"	\
	"fdt_addr_r=0x95000000\0"	\
	"boot_fit=no\0"	\
	"fdtfile=phytium-pe2201.dtb\0"	\

#endif
