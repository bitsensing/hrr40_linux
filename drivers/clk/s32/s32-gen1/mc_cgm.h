/*
 * Copyright 2018,2020-2021 NXP
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#ifndef _MC_CGM_S32GEN1_H
#define _MC_CGM_S32GEN1_H

#define ARMPLL_PLLDIG_DFS1_MFN		(9)
#define ARMPLL_PLLDIG_DFS2_MFN		(9)
#define ARMPLL_PLLDIG_DFS3_MFN		(0)
#define ARMPLL_PLLDIG_DFS4_MFN		(12)
#define ARMPLL_PLLDIG_DFS5_MFN		(24)
#define ARMPLL_PLLDIG_DFS6_MFN		(24)

#define PERIPHPLL_PLLDIG_DFS1_MFN	(9)
#define PERIPHPLL_PLLDIG_DFS2_MFN	(1)
#define PERIPHPLL_PLLDIG_DFS3_MFN	(9)
#define PERIPHPLL_PLLDIG_DFS4_MFN	(24)
#define PERIPHPLL_PLLDIG_DFS5_MFN	(1)
#define PERIPHPLL_PLLDIG_DFS6_MFN	(0)

/* MC_CGM registers definitions */
/* MC_CGM_MUX_n_CSC */
#define CGM_MUXn_CSC(cgm_addr, mux)	(((cgm_addr) + 0x300 + (mux) * 0x40))
#define MC_CGM_MUXn_CSC_SELCTL(val)	(MC_CGM_MUXn_CSC_SELCTL_MASK & ((val) \
					 << MC_CGM_MUXn_CSC_SELCTL_OFFSET))
#define MC_CGM_MUXn_CSC_SELCTL_MASK	(0x3F000000)
#define MC_CGM_MUXn_CSC_SELCTL_OFFSET	(24)
#define MC_CGM_MUXn_CSC_SELCTL_SIZE	(6)

#define MC_CGM_MUXn_CSC_CLK_SW		(1 << 2)

/* MC_CGM_MUX_n_CSS */
#define CGM_MUXn_CSS(cgm_addr, mux)	((cgm_addr) + 0x304 + \
					 (mux) * 0x40)
#define MC_CGM_MUXn_CSS_SELSTAT(css)	((MC_CGM_MUXn_CSS_SELSTAT_MASK & (css))\
					 >> MC_CGM_MUXn_CSS_SELSTAT_OFFSET)
#define MC_CGM_MUXn_CSS_SELSTAT_MASK	(0x3F000000)
#define MC_CGM_MUXn_CSS_SELSTAT_OFFSET	(24)

#define MC_CGM_MUXn_CSS_SWIP		(1 << 16)
#define MC_CGM_MUXn_CSS_SWTRG(css)	((MC_CGM_MUXn_CSS_SWTRG_MASK & (css)) \
					 >> MC_CGM_MUXn_CSS_SWTRG_OFFSET)
#define MC_CGM_MUXn_CSS_SWTRG_MASK	(0x000E0000)
#define MC_CGM_MUXn_CSS_SWTRG_OFFSET	(17)
#define MC_CGM_MUXn_CSS_SWTRG_SUCCESS	(0x1)

/* MC_CGM_MUX_n_DC */
#define CGM_MUXn_DC(cgm_addr, mux)	(((cgm_addr) + 0x308 + (mux) * 0x40))
#define MC_CGM_MUX_DCn_DIV_OFFSET	(16)
#define MC_CGM_MUX_DCn_DIV_SIZE		(8)
#define MC_CGM_MUX_DCn_DIV(val)		(MC_CGM_MUX_DC_DIV_MASK & ((val) \
					 << MC_CGM_MUX_DCn_DIV_OFFSET))
#define MC_CGM_MUX_DCn_DIV_VAL(val)	((MC_CGM_MUX_DC_DIV_MASK & (val)) \
					 >> MC_CGM_MUX_DCn_DIV_OFFSET)
#define MC_CGM_MUX_DC_DIV_MASK		(0x00FF0000)
#define MC_CGM_MUX_DCn_DE		(1 << 31)

/* DIV_UPD_STAT */
#define CGM_MUXn_DIV_UPD_STAT(cgm_addr, mux)	((cgm_addr) + 0x33C + \
						 (mux) * 0x40)
#define MC_CGM_MUXn_DIV_UPD_STAT_DIVSTAT(css)	((MC_CGM_MUXn_DIV_DIVSTAT_MASK \
						  & (css)) \
						  >> MC_CGM_MUXn_DIVSTAT_OFFSET)
#define MC_CGM_MUXn_DIV_DIVSTAT_MASK		(0x00000001)
#define MC_CGM_MUXn_DIVSTAT_OFFSET		(0)

/* Clock source mapping on MC_CGM clock selectors. */
/* Clock source / Clock selector index */
#define MC_CGM_MUXn_CSC_SEL_FIRC			0
#define MC_CGM_MUXn_CSC_SEL_SIRC			1
#define MC_CGM_MUXn_CSC_SEL_FXOSC			2
#define MC_CGM_MUXn_CSC_SEL_SXOSC			3
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI0		4
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI1		5
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI2		6
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI3		7
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI4		8
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI5		9
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI6		10
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_PHI7		11
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS1		12
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS2		13
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS3		14
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS4		15
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS5		16
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS6		17
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI0		18
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI1		19
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI2		20
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI3		21
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI4		22
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI5		23
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI6		24
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_PHI7		25
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS1		26
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS2		27
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS3		28
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS4		29
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS5		30
#define MC_CGM_MUXn_CSC_SEL_PERIPH_PLL_DFS6		31
#define MC_CGM_MUXn_CSC_SEL_ACCEL_PLL_PHI0		32
#define MC_CGM_MUXn_CSC_SEL_ACCEL_PLL_PHI1		33
#define MC_CGM_MUXn_CSC_SEL_FTM0_EXT_REF		34
#define MC_CGM_MUXn_CSC_SEL_FTM1_EXT_REF		35
#define MC_CGM_MUXn_CSC_SEL_DDR_PLL_PHI0		36
#define MC_CGM_MUXn_CSC_SEL_GMAC_0_TX_CLK		37
#define MC_CGM_MUXn_CSC_SEL_GMAC_0_RX_CLK		38
#define MC_CGM_MUXn_CSC_SEL_GMAC_0_REF_CLK		39
#define MC_CGM_MUXn_CSC_SEL_SERDES_0_LANE_0_TX_CLK	40
#define MC_CGM_MUXn_CSC_SEL_SERDES_0_LANE_0_CDR_CLK	41
#define MC_CGM_MUXn_CSC_SEL_GMAC_0_TS_CLK		44
#define MC_CGM_MUXn_CSC_SEL_GMAC_0_REF_DIV_CLK		45
#define MC_CGM_MUXn_CSC_SEL_SERDES_0_LANE_1_TX_CLK	46
#define MC_CGM_MUXn_CSC_SEL_SERDES_0_LANE_1_CDR_CLK	47
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_0_EXT_TX_CLK	48
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_0_EXT_RX_CLK	49
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_0_EXT_REF_CLK	50
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_1_EXT_TX_CLK	51
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_1_EXT_RX_CLK	52
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_1_EXT_REF_CLK	53
#define MC_CGM_MUXn_CSC_SEL_GMAC_1_REF_DIV_CLK		54
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_2_EXT_TX_CLK	54
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_2_EXT_RX_CLK	55
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_2_EXT_REF_CLK	56
#define MC_CGM_MUXn_CSC_SEL_GMAC_1_EXT_RX_CLK		57
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_0_TX_CLK	57
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_0_CDR_CLK	58
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_0_REF_DIV_CLK	59
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_0_TX_CLK_R45	59
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_1_REF_DIV_CLK	60
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_1_CDR_CLK_R45	60
#define MC_CGM_MUXn_CSC_SEL_PFE_MAC_2_REF_DIV_CLK	61
#define MC_CGM_MUXn_CSC_SEL_ACCEL_PLL_PHI0_2		62
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_1_TX_CLK	62
#define MC_CGM_MUXn_CSC_SEL_ARM_PLL_DFS4_2		63
#define MC_CGM_MUXn_CSC_SEL_SERDES_1_LANE_1_CDR_CLK	63
#endif
