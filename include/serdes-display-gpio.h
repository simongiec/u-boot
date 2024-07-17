/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * gpio.h -- GPIO for different serdes chip
 *
 * Copyright (c) 2023-2028 Rockchip Electronics Co. Ltd.
 *
 * Author: luowei <lw@rock-chips.com>
 *
 */

#ifndef __SERDES_DISPLAY_GPIO_H__
#define __SERDES_DISPLAY_GPIO_H__

enum serdes_parent {
	BU18TL82 = 0x1000,
	BU18RL82 = 0x1001,
	MAX96745 = 0x2000,
	MAX96752 = 0x2001,
	MAX96755 = 0x2003,
	MAX96722 = 0x2004,
	MAX96789 = 0x2005,
	RKX111 = 0x3000,
	RKX121 = 0x3001,
};

enum serdes_type {
	TYPE_ID_INVALID = 0,
	TYPE_SER,
	TYPE_DES,
	TYPE_OTHER,
};

enum reg_val_type {
	REG_16BIT_VAL_8IT = 0,
	REG_16BIT_VAL_16IT,
	REG_8BIT_VAL_8IT,
};

enum serdes_bridge_type {
	TYPE_BRIDGE_PANEL = 0,
	TYPE_BRIDGE_BRIDGE,
};

enum serdes_id {
	SERDES_ID_INVALID = 0,

	ROHM_ID_BU18TL82,
	ROHM_ID_BU18RL82,

	MAXIM_ID_MAX96745,
	MAXIM_ID_MAX96752,
	MAXIM_ID_MAX96755,
	MAXIM_ID_MAX96772,
	MAXIM_ID_MAX96789,

	ROCKCHIP_ID_RKX111,
	ROCKCHIP_ID_RKX121,

	NOVO_ID_NCA9539,

	SERDES_NUM_ID,
};

enum bu18tl82_gpio_list {
	ROHM_BU18TL82_GPIO0 = 0,
	ROHM_BU18TL82_GPIO1,
	ROHM_BU18TL82_GPIO2,
	ROHM_BU18TL82_GPIO3,
	ROHM_BU18TL82_GPIO4,
	ROHM_BU18TL82_GPIO5,
	ROHM_BU18TL82_GPIO6,
	ROHM_BU18TL82_GPIO7,
};

enum bu18rl82_gpio_list {
	ROHM_BU18RL82_GPIO0 = 0,
	ROHM_BU18RL82_GPIO1,
	ROHM_BU18RL82_GPIO2,
	ROHM_BU18RL82_GPIO3,
	ROHM_BU18RL82_GPIO4,
	ROHM_BU18RL82_GPIO5,
	ROHM_BU18RL82_GPIO6,
	ROHM_BU18RL82_GPIO7,
};

enum max96745_gpio_list {
	MAXIM_MAX96745_MFP0 = 0,
	MAXIM_MAX96745_MFP1,
	MAXIM_MAX96745_MFP2,
	MAXIM_MAX96745_MFP3,
	MAXIM_MAX96745_MFP4,
	MAXIM_MAX96745_MFP5,
	MAXIM_MAX96745_MFP6,
	MAXIM_MAX96745_MFP7,
	MAXIM_MAX96745_MFP8,
	MAXIM_MAX96745_MFP9,
	MAXIM_MAX96745_MFP10,
	MAXIM_MAX96745_MFP11,
	MAXIM_MAX96745_MFP12,
	MAXIM_MAX96745_MFP13,
	MAXIM_MAX96745_MFP14,
	MAXIM_MAX96745_MFP15,
	MAXIM_MAX96745_MFP16,
	MAXIM_MAX96745_MFP17,
	MAXIM_MAX96745_MFP18,
	MAXIM_MAX96745_MFP19,
	MAXIM_MAX96745_MFP20,
	MAXIM_MAX96745_MFP21,
	MAXIM_MAX96745_MFP22,
	MAXIM_MAX96745_MFP23,
	MAXIM_MAX96745_MFP24,
	MAXIM_MAX96745_MFP25,
};

enum max96752_gpio_list {
	MAXIM_MAX96752_MFP0 = 0,
	MAXIM_MAX96752_MFP1,
	MAXIM_MAX96752_MFP2,
	MAXIM_MAX96752_MFP3,
	MAXIM_MAX96752_MFP4,
	MAXIM_MAX96752_MFP5,
	MAXIM_MAX96752_MFP6,
	MAXIM_MAX96752_MFP7,
	MAXIM_MAX96752_MFP8,
	MAXIM_MAX96752_MFP9,
	MAXIM_MAX96752_MFP10,
	MAXIM_MAX96752_MFP11,
	MAXIM_MAX96752_MFP12,
	MAXIM_MAX96752_MFP13,
	MAXIM_MAX96752_MFP14,
	MAXIM_MAX96752_MFP15,
};

enum max96755_gpio_list {
	MAXIM_MAX96755_MFP0 = 0,
	MAXIM_MAX96755_MFP1,
	MAXIM_MAX96755_MFP2,
	MAXIM_MAX96755_MFP3,
	MAXIM_MAX96755_MFP4,
	MAXIM_MAX96755_MFP5,
	MAXIM_MAX96755_MFP6,
	MAXIM_MAX96755_MFP7,
	MAXIM_MAX96755_MFP8,
	MAXIM_MAX96755_MFP9,
	MAXIM_MAX96755_MFP10,
	MAXIM_MAX96755_MFP11,
	MAXIM_MAX96755_MFP12,
	MAXIM_MAX96755_MFP13,
	MAXIM_MAX96755_MFP14,
	MAXIM_MAX96755_MFP15,
	MAXIM_MAX96755_MFP16,
	MAXIM_MAX96755_MFP17,
	MAXIM_MAX96755_MFP18,
	MAXIM_MAX96755_MFP19,
	MAXIM_MAX96755_MFP20,
};

enum max96722_gpio_list {
	MAXIM_MAX96772_MFP0 = 0,
	MAXIM_MAX96772_MFP1,
	MAXIM_MAX96772_MFP2,
	MAXIM_MAX96772_MFP3,
	MAXIM_MAX96772_MFP4,
	MAXIM_MAX96772_MFP5,
	MAXIM_MAX96772_MFP6,
	MAXIM_MAX96772_MFP7,
	MAXIM_MAX96772_MFP8,
	MAXIM_MAX96772_MFP9,
	MAXIM_MAX96772_MFP10,
	MAXIM_MAX96772_MFP11,
	MAXIM_MAX96772_MFP12,
	MAXIM_MAX96772_MFP13,
	MAXIM_MAX96772_MFP14,
	MAXIM_MAX96772_MFP15,
};

enum max96789_gpio_list {
	MAXIM_MAX96789_MFP0 = 0,
	MAXIM_MAX96789_MFP1,
	MAXIM_MAX96789_MFP2,
	MAXIM_MAX96789_MFP3,
	MAXIM_MAX96789_MFP4,
	MAXIM_MAX96789_MFP5,
	MAXIM_MAX96789_MFP6,
	MAXIM_MAX96789_MFP7,
	MAXIM_MAX96789_MFP8,
	MAXIM_MAX96789_MFP9,
	MAXIM_MAX96789_MFP10,
	MAXIM_MAX96789_MFP11,
	MAXIM_MAX96789_MFP12,
	MAXIM_MAX96789_MFP13,
	MAXIM_MAX96789_MFP14,
	MAXIM_MAX96789_MFP15,
	MAXIM_MAX96789_MFP16,
	MAXIM_MAX96789_MFP17,
	MAXIM_MAX96789_MFP18,
	MAXIM_MAX96789_MFP19,
	MAXIM_MAX96789_MFP20,
};

enum rkx111_gpio_list {
	ROCKCHIP_RKX111_GPIO0 = 0,
	ROCKCHIP_RKX111_GPIO1,
	ROCKCHIP_RKX111_GPIO2,
	ROCKCHIP_RKX111_GPIO3,
	ROCKCHIP_RKX111_GPIO4,
	ROCKCHIP_RKX111_GPIO5,
	ROCKCHIP_RKX111_GPIO6,
	ROCKCHIP_RKX111_GPIO7,
};

enum rkx121_gpio_list {
	ROCKCHIP_RKX121_GPIO0 = 0,
	ROCKCHIP_RKX121_GPIO1,
	ROCKCHIP_RKX121_GPIO2,
	ROCKCHIP_RKX121_GPIO3,
	ROCKCHIP_RKX121_GPIO4,
	ROCKCHIP_RKX121_GPIO5,
	ROCKCHIP_RKX121_GPIO6,
	ROCKCHIP_RKX121_GPIO7,
};

enum serdes_gpio_state {
	SERDES_GPIO_PULL_NONE = 0,
	SERDES_GPIO_PULL_DOWN,
	SERDES_GPIO_PULL_UP,
	SERDES_GPIO_DIR_IN,
	SERDES_GPIO_DIR_OUT,
	SERDES_GPIO_LEVEL_HIGH,
	SERDES_GPIO_LEVEL_LOW,
};

enum nca9539_gpio_list {
	NOVO_NCA9539_GPIO0 = 0,
	NOVO_NCA9539_GPIO1,
	NOVO_NCA9539_GPIO2,
	NOVO_NCA9539_GPIO3,
	NOVO_NCA9539_GPIO4,
	NOVO_NCA9539_GPIO5,
	NOVO_NCA9539_GPIO6,
	NOVO_NCA9539_GPIO7,

	NOVO_NCA9539_GPIO8,
	NOVO_NCA9539_GPIO9,
	NOVO_NCA9539_GPIO10,
	NOVO_NCA9539_GPIO11,
	NOVO_NCA9539_GPIO12,
	NOVO_NCA9539_GPIO13,
	NOVO_NCA9539_GPIO14,
	NOVO_NCA9539_GPIO15,
};

#endif
