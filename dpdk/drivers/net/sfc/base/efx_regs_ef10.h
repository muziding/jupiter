/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2007-2018 Solarflare Communications Inc.
 * All rights reserved.
 */

#ifndef	_SYS_EFX_EF10_REGS_H
#define	_SYS_EFX_EF10_REGS_H

#ifdef	__cplusplus
extern "C" {
#endif

/**************************************************************************
 * NOTE: the line below marks the start of the autogenerated section
 * EF10 registers and descriptors
 *
 **************************************************************************
 */

/*
 * BIU_HW_REV_ID_REG(32bit):
 *
 */

#define	ER_DZ_BIU_HW_REV_ID_REG_OFST 0x00000000
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_BIU_HW_REV_ID_REG_RESET 0xeb14face


#define	ERF_DZ_HW_REV_ID_LBN 0
#define	ERF_DZ_HW_REV_ID_WIDTH 32


/*
 * BIU_MC_SFT_STATUS_REG(32bit):
 *
 */

#define	ER_DZ_BIU_MC_SFT_STATUS_REG_OFST 0x00000010
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_BIU_MC_SFT_STATUS_REG_STEP 4
#define	ER_DZ_BIU_MC_SFT_STATUS_REG_ROWS 8
#define	ER_DZ_BIU_MC_SFT_STATUS_REG_RESET 0x1111face


#define	ERF_DZ_MC_SFT_STATUS_LBN 0
#define	ERF_DZ_MC_SFT_STATUS_WIDTH 32


/*
 * BIU_INT_ISR_REG(32bit):
 *
 */

#define	ER_DZ_BIU_INT_ISR_REG_OFST 0x00000090
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_BIU_INT_ISR_REG_RESET 0x0


#define	ERF_DZ_ISR_REG_LBN 0
#define	ERF_DZ_ISR_REG_WIDTH 32


/*
 * MC_DB_LWRD_REG(32bit):
 *
 */

#define	ER_DZ_MC_DB_LWRD_REG_OFST 0x00000200
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_MC_DB_LWRD_REG_RESET 0x0


#define	ERF_DZ_MC_DOORBELL_L_LBN 0
#define	ERF_DZ_MC_DOORBELL_L_WIDTH 32


/*
 * MC_DB_HWRD_REG(32bit):
 *
 */

#define	ER_DZ_MC_DB_HWRD_REG_OFST 0x00000204
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_MC_DB_HWRD_REG_RESET 0x0


#define	ERF_DZ_MC_DOORBELL_H_LBN 0
#define	ERF_DZ_MC_DOORBELL_H_WIDTH 32


/*
 * EVQ_RPTR_REG(32bit):
 *
 */

#define	ER_DZ_EVQ_RPTR_REG_OFST 0x00000400
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_EVQ_RPTR_REG_STEP 8192
#define	ER_DZ_EVQ_RPTR_REG_ROWS 2048
#define	ER_DZ_EVQ_RPTR_REG_RESET 0x0


#define	ERF_DZ_EVQ_RPTR_VLD_LBN 15
#define	ERF_DZ_EVQ_RPTR_VLD_WIDTH 1
#define	ERF_DZ_EVQ_RPTR_LBN 0
#define	ERF_DZ_EVQ_RPTR_WIDTH 15


/*
 * EVQ_TMR_REG(32bit):
 *
 */

#define	ER_DZ_EVQ_TMR_REG_OFST 0x00000420
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_EVQ_TMR_REG_STEP 8192
#define	ER_DZ_EVQ_TMR_REG_ROWS 2048
#define	ER_DZ_EVQ_TMR_REG_RESET 0x0


#define	ERF_DZ_TC_TIMER_MODE_LBN 14
#define	ERF_DZ_TC_TIMER_MODE_WIDTH 2
#define	ERF_DZ_TC_TIMER_VAL_LBN 0
#define	ERF_DZ_TC_TIMER_VAL_WIDTH 14


/*
 * RX_DESC_UPD_REG(32bit):
 *
 */

#define	ER_DZ_RX_DESC_UPD_REG_OFST 0x00000830
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_RX_DESC_UPD_REG_STEP 8192
#define	ER_DZ_RX_DESC_UPD_REG_ROWS 2048
#define	ER_DZ_RX_DESC_UPD_REG_RESET 0x0


#define	ERF_DZ_RX_DESC_WPTR_LBN 0
#define	ERF_DZ_RX_DESC_WPTR_WIDTH 12

/*
 * TX_DESC_UPD_REG(96bit):
 *
 */

#define	ER_DZ_TX_DESC_UPD_REG_OFST 0x00000a10
/* hunta0,medforda0=pcie_pf_bar2 */
#define	ER_DZ_TX_DESC_UPD_REG_STEP 8192
#define	ER_DZ_TX_DESC_UPD_REG_ROWS 2048
#define	ER_DZ_TX_DESC_UPD_REG_RESET 0x0


#define	ERF_DZ_RSVD_LBN 76
#define	ERF_DZ_RSVD_WIDTH 20
#define	ERF_DZ_TX_DESC_WPTR_LBN 64
#define	ERF_DZ_TX_DESC_WPTR_WIDTH 12
#define	ERF_DZ_TX_DESC_HWORD_LBN 32
#define	ERF_DZ_TX_DESC_HWORD_WIDTH 32
#define	ERF_DZ_TX_DESC_LWORD_LBN 0
#define	ERF_DZ_TX_DESC_LWORD_WIDTH 32


/* ES_DRIVER_EV */
#define	ESF_DZ_DRV_CODE_LBN 60
#define	ESF_DZ_DRV_CODE_WIDTH 4
#define	ESF_DZ_DRV_SUB_CODE_LBN 56
#define	ESF_DZ_DRV_SUB_CODE_WIDTH 4
#define	ESE_DZ_DRV_TIMER_EV 3
#define	ESE_DZ_DRV_START_UP_EV 2
#define	ESE_DZ_DRV_WAKE_UP_EV 1
#define	ESF_DZ_DRV_SUB_DATA_DW0_LBN 0
#define	ESF_DZ_DRV_SUB_DATA_DW0_WIDTH 32
#define	ESF_DZ_DRV_SUB_DATA_DW1_LBN 32
#define	ESF_DZ_DRV_SUB_DATA_DW1_WIDTH 24
#define	ESF_DZ_DRV_SUB_DATA_LBN 0
#define	ESF_DZ_DRV_SUB_DATA_WIDTH 56
#define	ESF_DZ_DRV_EVQ_ID_LBN 0
#define	ESF_DZ_DRV_EVQ_ID_WIDTH 14
#define	ESF_DZ_DRV_TMR_ID_LBN 0
#define	ESF_DZ_DRV_TMR_ID_WIDTH 14


/* ES_EVENT_ENTRY */
#define	ESF_DZ_EV_CODE_LBN 60
#define	ESF_DZ_EV_CODE_WIDTH 4
#define	ESE_DZ_EV_CODE_MCDI_EV 12
#define	ESE_DZ_EV_CODE_DRIVER_EV 5
#define	ESE_DZ_EV_CODE_TX_EV 2
#define	ESE_DZ_EV_CODE_RX_EV 0
#define	ESE_DZ_OTHER other
#define	ESF_DZ_EV_DATA_DW0_LBN 0
#define	ESF_DZ_EV_DATA_DW0_WIDTH 32
#define	ESF_DZ_EV_DATA_DW1_LBN 32
#define	ESF_DZ_EV_DATA_DW1_WIDTH 28
#define	ESF_DZ_EV_DATA_LBN 0
#define	ESF_DZ_EV_DATA_WIDTH 60


/* ES_MC_EVENT */
#define	ESF_DZ_MC_CODE_LBN 60
#define	ESF_DZ_MC_CODE_WIDTH 4
#define	ESF_DZ_MC_OVERRIDE_HOLDOFF_LBN 59
#define	ESF_DZ_MC_OVERRIDE_HOLDOFF_WIDTH 1
#define	ESF_DZ_MC_DROP_EVENT_LBN 58
#define	ESF_DZ_MC_DROP_EVENT_WIDTH 1
#define	ESF_DZ_MC_SOFT_DW0_LBN 0
#define	ESF_DZ_MC_SOFT_DW0_WIDTH 32
#define	ESF_DZ_MC_SOFT_DW1_LBN 32
#define	ESF_DZ_MC_SOFT_DW1_WIDTH 26
#define	ESF_DZ_MC_SOFT_LBN 0
#define	ESF_DZ_MC_SOFT_WIDTH 58


/* ES_RX_EVENT */
#define	ESF_DZ_RX_CODE_LBN 60
#define	ESF_DZ_RX_CODE_WIDTH 4
#define	ESF_DZ_RX_OVERRIDE_HOLDOFF_LBN 59
#define	ESF_DZ_RX_OVERRIDE_HOLDOFF_WIDTH 1
#define	ESF_DZ_RX_DROP_EVENT_LBN 58
#define	ESF_DZ_RX_DROP_EVENT_WIDTH 1
#define	ESF_DD_RX_EV_RSVD2_LBN 54
#define	ESF_DD_RX_EV_RSVD2_WIDTH 4
#define	ESF_EZ_RX_TCP_UDP_INNER_CHKSUM_ERR_LBN 57
#define	ESF_EZ_RX_TCP_UDP_INNER_CHKSUM_ERR_WIDTH 1
#define	ESF_EZ_RX_IP_INNER_CHKSUM_ERR_LBN 56
#define	ESF_EZ_RX_IP_INNER_CHKSUM_ERR_WIDTH 1
#define	ESF_EZ_RX_EV_RSVD2_LBN 54
#define	ESF_EZ_RX_EV_RSVD2_WIDTH 2
#define	ESF_DZ_RX_EV_SOFT2_LBN 52
#define	ESF_DZ_RX_EV_SOFT2_WIDTH 2
#define	ESF_DZ_RX_DSC_PTR_LBITS_LBN 48
#define	ESF_DZ_RX_DSC_PTR_LBITS_WIDTH 4
#define	ESF_DZ_RX_L4_CLASS_LBN 45
#define	ESF_DZ_RX_L4_CLASS_WIDTH 3
#define	ESE_DZ_L4_CLASS_RSVD7 7
#define	ESE_DZ_L4_CLASS_RSVD6 6
#define	ESE_DZ_L4_CLASS_RSVD5 5
#define	ESE_DZ_L4_CLASS_RSVD4 4
#define	ESE_DZ_L4_CLASS_RSVD3 3
#define	ESE_DZ_L4_CLASS_UDP 2
#define	ESE_DZ_L4_CLASS_TCP 1
#define	ESE_DZ_L4_CLASS_UNKNOWN 0
#define	ESF_DZ_RX_L3_CLASS_LBN 42
#define	ESF_DZ_RX_L3_CLASS_WIDTH 3
#define	ESE_DZ_L3_CLASS_RSVD7 7
#define	ESE_DZ_L3_CLASS_IP6_FRAG 6
#define	ESE_DZ_L3_CLASS_ARP 5
#define	ESE_DZ_L3_CLASS_IP4_FRAG 4
#define	ESE_DZ_L3_CLASS_FCOE 3
#define	ESE_DZ_L3_CLASS_IP6 2
#define	ESE_DZ_L3_CLASS_IP4 1
#define	ESE_DZ_L3_CLASS_UNKNOWN 0
#define	ESF_DZ_RX_ETH_TAG_CLASS_LBN 39
#define	ESF_DZ_RX_ETH_TAG_CLASS_WIDTH 3
#define	ESE_DZ_ETH_TAG_CLASS_RSVD7 7
#define	ESE_DZ_ETH_TAG_CLASS_RSVD6 6
#define	ESE_DZ_ETH_TAG_CLASS_RSVD5 5
#define	ESE_DZ_ETH_TAG_CLASS_RSVD4 4
#define	ESE_DZ_ETH_TAG_CLASS_RSVD3 3
#define	ESE_DZ_ETH_TAG_CLASS_VLAN2 2
#define	ESE_DZ_ETH_TAG_CLASS_VLAN1 1
#define	ESE_DZ_ETH_TAG_CLASS_NONE 0
#define	ESF_DZ_RX_ETH_BASE_CLASS_LBN 36
#define	ESF_DZ_RX_ETH_BASE_CLASS_WIDTH 3
#define	ESE_DZ_ETH_BASE_CLASS_LLC_SNAP 2
#define	ESE_DZ_ETH_BASE_CLASS_LLC 1
#define	ESE_DZ_ETH_BASE_CLASS_ETH2 0
#define	ESF_DZ_RX_MAC_CLASS_LBN 35
#define	ESF_DZ_RX_MAC_CLASS_WIDTH 1
#define	ESE_DZ_MAC_CLASS_MCAST 1
#define	ESE_DZ_MAC_CLASS_UCAST 0
#define	ESF_DD_RX_EV_SOFT1_LBN 32
#define	ESF_DD_RX_EV_SOFT1_WIDTH 3
#define	ESF_EZ_RX_EV_SOFT1_LBN 34
#define	ESF_EZ_RX_EV_SOFT1_WIDTH 1
#define	ESF_EZ_RX_ENCAP_HDR_LBN 32
#define	ESF_EZ_RX_ENCAP_HDR_WIDTH 2
#define	ESE_EZ_ENCAP_HDR_GRE 2
#define	ESE_EZ_ENCAP_HDR_VXLAN 1
#define	ESE_EZ_ENCAP_HDR_NONE 0
#define	ESF_DD_RX_EV_RSVD1_LBN 30
#define	ESF_DD_RX_EV_RSVD1_WIDTH 2
#define	ESF_EZ_RX_EV_RSVD1_LBN 31
#define	ESF_EZ_RX_EV_RSVD1_WIDTH 1
#define	ESF_EZ_RX_ABORT_LBN 30
#define	ESF_EZ_RX_ABORT_WIDTH 1
#define	ESF_DZ_RX_ECC_ERR_LBN 29
#define	ESF_DZ_RX_ECC_ERR_WIDTH 1
#define	ESF_DZ_RX_CRC1_ERR_LBN 28
#define	ESF_DZ_RX_CRC1_ERR_WIDTH 1
#define	ESF_DZ_RX_CRC0_ERR_LBN 27
#define	ESF_DZ_RX_CRC0_ERR_WIDTH 1
#define	ESF_DZ_RX_TCPUDP_CKSUM_ERR_LBN 26
#define	ESF_DZ_RX_TCPUDP_CKSUM_ERR_WIDTH 1
#define	ESF_DZ_RX_IPCKSUM_ERR_LBN 25
#define	ESF_DZ_RX_IPCKSUM_ERR_WIDTH 1
#define	ESF_DZ_RX_ECRC_ERR_LBN 24
#define	ESF_DZ_RX_ECRC_ERR_WIDTH 1
#define	ESF_DZ_RX_QLABEL_LBN 16
#define	ESF_DZ_RX_QLABEL_WIDTH 5
#define	ESF_DZ_RX_PARSE_INCOMPLETE_LBN 15
#define	ESF_DZ_RX_PARSE_INCOMPLETE_WIDTH 1
#define	ESF_DZ_RX_CONT_LBN 14
#define	ESF_DZ_RX_CONT_WIDTH 1
#define	ESF_DZ_RX_BYTES_LBN 0
#define	ESF_DZ_RX_BYTES_WIDTH 14


/* ES_RX_KER_DESC */
#define	ESF_DZ_RX_KER_RESERVED_LBN 62
#define	ESF_DZ_RX_KER_RESERVED_WIDTH 2
#define	ESF_DZ_RX_KER_BYTE_CNT_LBN 48
#define	ESF_DZ_RX_KER_BYTE_CNT_WIDTH 14
#define	ESF_DZ_RX_KER_BUF_ADDR_DW0_LBN 0
#define	ESF_DZ_RX_KER_BUF_ADDR_DW0_WIDTH 32
#define	ESF_DZ_RX_KER_BUF_ADDR_DW1_LBN 32
#define	ESF_DZ_RX_KER_BUF_ADDR_DW1_WIDTH 16
#define	ESF_DZ_RX_KER_BUF_ADDR_LBN 0
#define	ESF_DZ_RX_KER_BUF_ADDR_WIDTH 48


/* ES_TX_CSUM_TSTAMP_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_LBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_LBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VLAN 6
#define	ESE_DZ_TX_OPTION_DESC_CRC_CSUM 0
#define	ESF_DZ_TX_OPTION_TS_AT_TXDP_LBN 8
#define	ESF_DZ_TX_OPTION_TS_AT_TXDP_WIDTH 1
#define	ESF_DZ_TX_OPTION_INNER_UDP_TCP_CSUM_LBN 7
#define	ESF_DZ_TX_OPTION_INNER_UDP_TCP_CSUM_WIDTH 1
#define	ESF_DZ_TX_OPTION_INNER_IP_CSUM_LBN 6
#define	ESF_DZ_TX_OPTION_INNER_IP_CSUM_WIDTH 1
#define	ESF_DZ_TX_TIMESTAMP_LBN 5
#define	ESF_DZ_TX_TIMESTAMP_WIDTH 1
#define	ESF_DZ_TX_OPTION_CRC_MODE_LBN 2
#define	ESF_DZ_TX_OPTION_CRC_MODE_WIDTH 3
#define	ESE_DZ_TX_OPTION_CRC_FCOIP_MPA 5
#define	ESE_DZ_TX_OPTION_CRC_FCOIP_FCOE 4
#define	ESE_DZ_TX_OPTION_CRC_ISCSI_HDR_AND_PYLD 3
#define	ESE_DZ_TX_OPTION_CRC_ISCSI_HDR 2
#define	ESE_DZ_TX_OPTION_CRC_FCOE 1
#define	ESE_DZ_TX_OPTION_CRC_OFF 0
#define	ESF_DZ_TX_OPTION_UDP_TCP_CSUM_LBN 1
#define	ESF_DZ_TX_OPTION_UDP_TCP_CSUM_WIDTH 1
#define	ESF_DZ_TX_OPTION_IP_CSUM_LBN 0
#define	ESF_DZ_TX_OPTION_IP_CSUM_WIDTH 1


/* ES_TX_EVENT */
#define	ESF_DZ_TX_CODE_LBN 60
#define	ESF_DZ_TX_CODE_WIDTH 4
#define	ESF_DZ_TX_OVERRIDE_HOLDOFF_LBN 59
#define	ESF_DZ_TX_OVERRIDE_HOLDOFF_WIDTH 1
#define	ESF_DZ_TX_DROP_EVENT_LBN 58
#define	ESF_DZ_TX_DROP_EVENT_WIDTH 1
#define	ESF_DD_TX_EV_RSVD_LBN 48
#define	ESF_DD_TX_EV_RSVD_WIDTH 10
#define	ESF_EZ_TCP_UDP_INNER_CHKSUM_ERR_LBN 57
#define	ESF_EZ_TCP_UDP_INNER_CHKSUM_ERR_WIDTH 1
#define	ESF_EZ_IP_INNER_CHKSUM_ERR_LBN 56
#define	ESF_EZ_IP_INNER_CHKSUM_ERR_WIDTH 1
#define	ESF_EZ_TX_EV_RSVD_LBN 48
#define	ESF_EZ_TX_EV_RSVD_WIDTH 8
#define	ESF_DZ_TX_SOFT2_LBN 32
#define	ESF_DZ_TX_SOFT2_WIDTH 16
#define	ESF_DD_TX_SOFT1_LBN 24
#define	ESF_DD_TX_SOFT1_WIDTH 8
#define	ESF_EZ_TX_CAN_MERGE_LBN 31
#define	ESF_EZ_TX_CAN_MERGE_WIDTH 1
#define	ESF_EZ_TX_SOFT1_LBN 24
#define	ESF_EZ_TX_SOFT1_WIDTH 7
#define	ESF_DZ_TX_QLABEL_LBN 16
#define	ESF_DZ_TX_QLABEL_WIDTH 5
#define	ESF_DZ_TX_DESCR_INDX_LBN 0
#define	ESF_DZ_TX_DESCR_INDX_WIDTH 16


/* ES_TX_KER_DESC */
#define	ESF_DZ_TX_KER_TYPE_LBN 63
#define	ESF_DZ_TX_KER_TYPE_WIDTH 1
#define	ESF_DZ_TX_KER_CONT_LBN 62
#define	ESF_DZ_TX_KER_CONT_WIDTH 1
#define	ESF_DZ_TX_KER_BYTE_CNT_LBN 48
#define	ESF_DZ_TX_KER_BYTE_CNT_WIDTH 14
#define	ESF_DZ_TX_KER_BUF_ADDR_DW0_LBN 0
#define	ESF_DZ_TX_KER_BUF_ADDR_DW0_WIDTH 32
#define	ESF_DZ_TX_KER_BUF_ADDR_DW1_LBN 32
#define	ESF_DZ_TX_KER_BUF_ADDR_DW1_WIDTH 16
#define	ESF_DZ_TX_KER_BUF_ADDR_LBN 0
#define	ESF_DZ_TX_KER_BUF_ADDR_WIDTH 48


/* ES_TX_PIO_DESC */
#define	ESF_DZ_TX_PIO_TYPE_LBN 63
#define	ESF_DZ_TX_PIO_TYPE_WIDTH 1
#define	ESF_DZ_TX_PIO_OPT_LBN 60
#define	ESF_DZ_TX_PIO_OPT_WIDTH 3
#define	ESF_DZ_TX_PIO_CONT_LBN 59
#define	ESF_DZ_TX_PIO_CONT_WIDTH 1
#define	ESF_DZ_TX_PIO_BYTE_CNT_LBN 32
#define	ESF_DZ_TX_PIO_BYTE_CNT_WIDTH 12
#define	ESF_DZ_TX_PIO_BUF_ADDR_LBN 0
#define	ESF_DZ_TX_PIO_BUF_ADDR_WIDTH 12


/* ES_TX_TSO_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_LBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_LBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VLAN 6
#define	ESE_DZ_TX_OPTION_DESC_CRC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_LBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NORMAL 0
#define	ESF_DZ_TX_TSO_TCP_FLAGS_LBN 48
#define	ESF_DZ_TX_TSO_TCP_FLAGS_WIDTH 8
#define	ESF_DZ_TX_TSO_IP_ID_LBN 32
#define	ESF_DZ_TX_TSO_IP_ID_WIDTH 16
#define	ESF_DZ_TX_TSO_TCP_SEQNO_LBN 0
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WIDTH 32


/* TX_TSO_FATSO2A_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_LBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_LBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VLAN 6
#define	ESE_DZ_TX_OPTION_DESC_CRC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_LBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2B 3
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2A 2
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NORMAL 0
#define	ESF_DZ_TX_TSO_IP_ID_LBN 32
#define	ESF_DZ_TX_TSO_IP_ID_WIDTH 16
#define	ESF_DZ_TX_TSO_TCP_SEQNO_LBN 0
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WIDTH 32


/* TX_TSO_FATSO2B_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_LBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_LBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VLAN 6
#define	ESE_DZ_TX_OPTION_DESC_CRC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_LBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2B 3
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2A 2
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NORMAL 0
#define	ESF_DZ_TX_TSO_OUTER_IP_ID_LBN 16
#define	ESF_DZ_TX_TSO_OUTER_IP_ID_WIDTH 16
#define	ESF_DZ_TX_TSO_TCP_MSS_LBN 32
#define	ESF_DZ_TX_TSO_TCP_MSS_WIDTH 16
#define	ESF_DZ_TX_TSO_INNER_PE_CSUM_LBN 0
#define	ESF_DZ_TX_TSO_INNER_PE_CSUM_WIDTH 16


/* ES_TX_VLAN_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_LBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_LBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VLAN 6
#define	ESE_DZ_TX_OPTION_DESC_CRC_CSUM 0
#define	ESF_DZ_TX_VLAN_OP_LBN 32
#define	ESF_DZ_TX_VLAN_OP_WIDTH 2
#define	ESF_DZ_TX_VLAN_TAG2_LBN 16
#define	ESF_DZ_TX_VLAN_TAG2_WIDTH 16
#define	ESF_DZ_TX_VLAN_TAG1_LBN 0
#define	ESF_DZ_TX_VLAN_TAG1_WIDTH 16


/*************************************************************************
 * NOTE: the comment line above marks the end of the autogenerated section
 */

/*
 * The workaround for bug 35388 requires multiplexing writes through
 * the ERF_DZ_TX_DESC_WPTR address.
 * TX_DESC_UPD: 0ppppppppppp               (bit 11 lost)
 * EVQ_RPTR:    1000hhhhhhhh, 1001llllllll (split into high and low bits)
 * EVQ_TMR:     11mmvvvvvvvv               (bits 8:13 of value lost)
 */
#define	ER_DD_EVQ_INDIRECT_OFST (ER_DZ_TX_DESC_UPD_REG_OFST + 2 * 4)
#define	ER_DD_EVQ_INDIRECT_STEP ER_DZ_TX_DESC_UPD_REG_STEP
#define	ERF_DD_EVQ_IND_RPTR_FLAGS_LBN 8
#define	ERF_DD_EVQ_IND_RPTR_FLAGS_WIDTH 4
#define	EFE_DD_EVQ_IND_RPTR_FLAGS_HIGH 8
#define	EFE_DD_EVQ_IND_RPTR_FLAGS_LOW 9
#define	ERF_DD_EVQ_IND_RPTR_LBN 0
#define	ERF_DD_EVQ_IND_RPTR_WIDTH 8
#define	ERF_DD_EVQ_IND_TIMER_FLAGS_LBN 10
#define	ERF_DD_EVQ_IND_TIMER_FLAGS_WIDTH 2
#define	EFE_DD_EVQ_IND_TIMER_FLAGS 3
#define	ERF_DD_EVQ_IND_TIMER_MODE_LBN 8
#define	ERF_DD_EVQ_IND_TIMER_MODE_WIDTH 2
#define	ERF_DD_EVQ_IND_TIMER_VAL_LBN 0
#define	ERF_DD_EVQ_IND_TIMER_VAL_WIDTH 8

/* Packed stream magic doorbell command */
#define	ERF_DZ_RX_DESC_MAGIC_DOORBELL_LBN 11
#define	ERF_DZ_RX_DESC_MAGIC_DOORBELL_WIDTH 1

#define	ERF_DZ_RX_DESC_MAGIC_CMD_LBN 8
#define	ERF_DZ_RX_DESC_MAGIC_CMD_WIDTH 3
#define	ERE_DZ_RX_DESC_MAGIC_CMD_PS_CREDITS 0

#define	ERF_DZ_RX_DESC_MAGIC_DATA_LBN 0
#define	ERF_DZ_RX_DESC_MAGIC_DATA_WIDTH 8

/* Packed stream RX packet prefix */
#define	ES_DZ_PS_RX_PREFIX_TSTAMP_LBN 0
#define	ES_DZ_PS_RX_PREFIX_TSTAMP_WIDTH 32
#define	ES_DZ_PS_RX_PREFIX_CAP_LEN_LBN 32
#define	ES_DZ_PS_RX_PREFIX_CAP_LEN_WIDTH 16
#define	ES_DZ_PS_RX_PREFIX_ORIG_LEN_LBN 48
#define	ES_DZ_PS_RX_PREFIX_ORIG_LEN_WIDTH 16

/*
 * An extra flag for the packed stream mode,
 * signalling the start of a new buffer
 */
#define	ESF_DZ_RX_EV_ROTATE_LBN 53
#define	ESF_DZ_RX_EV_ROTATE_WIDTH 1

#ifdef	__cplusplus
}
#endif

#endif /* _SYS_EFX_EF10_REGS_H */