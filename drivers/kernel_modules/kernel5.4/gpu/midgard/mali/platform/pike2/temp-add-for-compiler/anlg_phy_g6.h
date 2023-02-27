/*
 * Copyright (C) 2017 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2017-10-12 09:49:25
 *
 */


#ifndef ANLG_PHY_G6_H
#define ANLG_PHY_G6_H



#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL0           (0x0000)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL1           (0x0004)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL2           (0x0008)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TEST       (0x000C)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TEST1      (0x0010)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST0        (0x0014)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST1        (0x0018)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST2        (0x001C)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST3        (0x0020)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST0        (0x0024)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST1        (0x0028)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST2        (0x002C)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST3        (0x0030)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST0        (0x0034)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST1        (0x0038)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST2        (0x003C)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST3        (0x0040)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST0        (0x0044)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST1        (0x0048)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST2        (0x004C)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST3        (0x0050)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_REG_SEL_CFG_0            (0x0054)
#define REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_REG_SEL_CFG_1            (0x0058)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL0 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_ADCLDOREF(x)                 (((x) & 0x1F) << 10)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_ADCLDO_V(x)                  (((x) & 0xF) << 6)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_CHOP_CLKSEL(x)               (((x) & 0x3) << 4)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_CLKSEL(x)                    (((x) & 0x3) << 2)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_BIAS(x)                (((x) & 0x3))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_VCMI(x)                (((x) & 0x3) << 14)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_VCMO(x)                (((x) & 0x3) << 12)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_UGBUF_CTRL(x)                     (((x) & 0x3) << 10)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_ADCLDO_EN                    BIT(9)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_CAPCHOP_EN             BIT(8)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_CHOP_EN                BIT(7)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_CHOP_EN                BIT(6)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_EN                     BIT(5)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_OFFSET_EN              BIT(4)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_INPUT_EN                     BIT(3)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_EN                     BIT(2)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_DATA_EDGE_SEL          BIT(1)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_SDADC_RST                    BIT(0)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TSEN_ADC_CTRL2 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_BIAS(x)                (((x) & 0x3) << 13)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_RESERVED(x)                  (((x) & 0xFF) << 5)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_BIST_EN                      BIT(4)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_BIST_CODE(x)                 (((x) & 0x7) << 1)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_RG_TSEN_TEST_CLK_SEL                 BIT(0)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TEST */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_BYPASS                 BIT(13)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CFG0(x)                (((x) & 0x7) << 10)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CFG1(x)                (((x) & 0x7) << 7)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CFG2(x)                (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CFG3(x)                (((x) & 0x7) << 1)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_DONE                   BIT(0)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TEST1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CODE_SEL               BIT(9)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TIME_SEL_CFG3(x)       (((x) & 0x3) << 7)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TIME_SEL_CFG2(x)       (((x) & 0x3) << 5)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TIME_SEL_CFG1(x)       (((x) & 0x3) << 3)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_TIME_SEL_CFG0(x)       (((x) & 0x3) << 1)
#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_BIST_CODE_EN_DIG            BIT(0)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST0 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_RES0(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_RES1(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST2 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_RES2(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_TEST3 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C0_RES3(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST0 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_RES0(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_RES1(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST2 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_RES2(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_TEST3 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C1_RES3(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST0 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_RES0(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_RES1(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST2 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_RES2(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_TEST3 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C2_RES3(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST0 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_RES0(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST1 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_RES1(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST2 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_RES2(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_TEST3 */

#define BIT_ANLG_PHY_G6_ANALOG_TSEN_ADC_TST_TSEN_C3_RES3(x)                  (((x) & 0xFFFF))

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_UGBUF_CTRL                BIT(15)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_ADCLDO_EN            BIT(14)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_CAPCHOP_EN     BIT(13)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_CHOP_EN        BIT(12)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_CHOP_EN        BIT(11)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_EN             BIT(10)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_OFFSET_EN      BIT(9)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_INPUT_EN             BIT(8)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_EN             BIT(7)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_DATA_EDGE_SEL  BIT(6)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_RST            BIT(5)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_UGBUF_BIAS           BIT(4)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_RESERVED             BIT(3)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_BIST_EN              BIT(2)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_BIST_CODE            BIT(1)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_TEST_CLK_SEL         BIT(0)

/* REG_ANLG_PHY_G6_ANALOG_TSEN_ADC_REG_SEL_CFG_1 */

#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_ADCLDOREF            BIT(6)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_ADCLDO_V             BIT(5)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_CHOP_CLKSEL          BIT(4)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_CLKSEL               BIT(3)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_BIAS           BIT(2)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_VCMI           BIT(1)
#define BIT_ANLG_PHY_G6_DBG_SEL_ANALOG_TSEN_ADC_RG_TSEN_SDADC_VCMO           BIT(0)


#endif /* ANLG_PHY_G6_H */
