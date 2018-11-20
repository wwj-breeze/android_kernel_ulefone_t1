/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

enum CCCI_IPC_MSG_ID_CODE {
	IPC_EL1_MSG_ID_INVALID = IPC_EL1_MSG_ID_BEGIN,
	/* below are EL1 IPC messages sent from AP */
	IPC_MSG_ID_EL1_LTE_TX_ALLOW_IND,
	IPC_MSG_ID_EL1_WIFIBT_OPER_DEFAULT_PARAM_IND,
	IPC_MSG_ID_EL1_WIFIBT_OPER_FREQ_IND,
	IPC_MSG_ID_EL1_WIFIBT_FREQ_IDX_TABLE_IND,
	IPC_MSG_ID_EL1_WIFIBT_PROFILE_IND,
	/* below are EL1 messages sent to AP */
	IPC_MSG_ID_EL1_LTE_DEFAULT_PARAM_IND,
	IPC_MSG_ID_EL1_LTE_OPER_FREQ_PARAM_IND,
	IPC_MSG_ID_EL1_WIFI_MAX_PWR_IND,
	IPC_MSG_ID_EL1_LTE_TX_IND,
	IPC_MSG_ID_EL1_LTE_CONNECTION_STATUS_IND,
	IPC_MSG_ID_EL1_PIN_TYPE_IND,
	IPC_MSG_ID_EL1_LTE_HW_INTERFACE_IND,
	IPC_MSG_ID_EL1_DUMMY13_IND,
	IPC_MSG_ID_EL1_DUMMY14_IND,
	IPC_MSG_ID_EL1_DUMMY15_IND,
	IPC_MSG_ID_EL1_DUMMY16_IND,
	IPC_MSG_ID_EL1_DUMMY17_IND,
	IPC_MSG_ID_EL1_DUMMY18_IND,
	IPC_MSG_ID_EL1_DUMMY19_IND,
	IPC_MSG_ID_EL1_DUMMY20_IND,
	IPC_MSG_ID_EL1_DUMMY21_IND,
	IPC_MSG_ID_EL1_DUMMY22_IND,
	IPC_MSG_ID_EL1_DUMMY23_IND,
	IPC_MSG_ID_EL1_DUMMY24_IND,
	IPC_MSG_ID_EL1_DUMMY25_IND,
	IPC_MSG_ID_EL1_DUMMY26_IND,
	IPC_MSG_ID_EL1_DUMMY27_IND,
	IPC_MSG_ID_EL1_DUMMY28_IND,
	IPC_MSG_ID_EL1_DUMMY29_IND,
	IPC_MSG_ID_EL1_DUMMY30_IND,
	IPC_MSG_ID_EL1_DUMMY31_IND,
	IPC_MSG_ID_EL1_DUMMY32_IND,
	IPC_EL1_MSG_ID_END,
} CCCI_IPC_MSG_ID_CODE;
