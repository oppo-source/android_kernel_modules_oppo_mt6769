// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2020-2022 Oplus. All rights reserved.
 */

#ifndef __OPLUS_NU1619_REG_H__
#define __OPLUS_NU1619_REG_H__

#define NU1619_RX_PWR_15W		0x1e
#define NU1619_RX_PWR_11W		0x16
#define NU1619_RX_PWR_10W		0x14
#define NU1619_RX_PWR_5W		0x0a
#define NU1619_RX_MODE_EPP	0x31
#define NU1619_RX_MODE_BPP	0x04

#define NU1619_REG_VOUT		0xab
#define NU1619_REG_VOUT_W		0x003e
#define NU1619_REG_VRECT		0xad
#define NU1619_REG_IOUT		0xaf
#define NU1619_REG_TX_VOUT		0x9f
#define NU1619_REG_TX_IOUT		0xa3
#define NU1619_REG_CEP_COUNT	0x0020
#define NU1619_REG_CEP			0x95
#define NU1619_REG_FREQ		0x005e
#define NU1619_REG_RX_MODE	0x9d
#define NU1619_REG_RX_PWR		0x0084
#define NU1619_REG_TX_PWR_CAP	0xa1
#define NU1619_REG_TX_STATUS	0x23
#define NU1619_REG_TX_ERR		0x24
#define NU1619_REG_HEADROOM_R		0x009e
#define NU1619_REG_HEADROOM_W		0x0076
#define NU1619_REG_FOD			0x0068

#define NU1619_REG_PWR_CTRL	0x00d0
#define NU1619_DCDC_EN			BIT(0)

#define NU1619_REG_TRX_CTRL	0x0076
#define NU1619_TRX_EN			BIT(0)

#define NU1619_REG_STATUS		0x23//~0x24
#define NU1619_RX_ERR_OCP		BIT(0)
#define NU1619_RX_ERR_OVP		BIT(1)
#define NU1619_RX_ERR_OTP		BIT(2)
#define NU1619_VOUT_ERR		BIT(3)
#define NU1619_EVENT			BIT(4)
#define NU1619_TX_EVENT		BIT(5)
#define NU1619_LDO_ON			BIT(6)

#define NU1619_RX_ERR_UV_ALARM		BIT(1)
#define NU1619_RX_ERR_UV_ALARM_CLEAR	BIT(4)

#define NU1619_TX_STATUS_READY		BIT(0)
#define NU1619_TX_STATUS_DIGITALPING	BIT(1)
#define NU1619_TX_STATUS_ANALOGPING	BIT(2)
#define NU1619_TX_STATUS_TRANSFER		BIT(3)
#define NU1619_TX_INCREASE_BOOST_VOL		BIT(5)
#define NU1619_TX_DECREASE_BOOST_VOL		BIT(6)

#define NU1619_TX_ERR_RXAC			BIT(0)
#define NU1619_TX_ERR_OCP			BIT(1)
#define NU1619_TX_ERR_OVP			BIT(2)
#define NU1619_TX_ERR_LVP			BIT(3)
#define NU1619_TX_ERR_FOD			BIT(4)
#define NU1619_TX_ERR_OTP			BIT(5)
#define NU1619_TX_ERR_CEPTIMEOUT	BIT(6)
#define NU1619_TX_ERR_RXEPT		BIT(7)


#define NU1619_MTP_VOL_MV		5500
#define NU1619_TRX_VOL_MAX_MV	9000
#define NU1619_TRX_VOL_START_MV	6000
#define NU1619_TRX_VOL_STEP_MV	500
#define NU1619_WAIT_INC_DELAY_MS	500
#define NU1619_WAIT_INC_STEP_MS	25

#endif /* __OPLUS_NU1619_REG_H__ */
