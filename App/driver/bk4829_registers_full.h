/* Auto-generated BK4829 register header
 * Source: BK4829_Registers_Table_clean.txt
 * - Register addresses
 * - Field masks + shifts
 * - Enumerated option values as absolute hex (ready for OR-composition)
 */
#ifndef BK4829_REGISTERS_H
#define BK4829_REGISTERS_H

#include <stdint.h>

/* ============================================================
 * Register addresses
 * ============================================================ */
#define BK4829_REG_00   0x00u
#define BK4829_REG_02   0x02u
#define BK4829_REG_07   0x07u
#define BK4829_REG_08   0x08u
#define BK4829_REG_09   0x09u
#define BK4829_REG_0A   0x0Au
#define BK4829_REG_0B   0x0Bu
#define BK4829_REG_0C   0x0Cu
#define BK4829_REG_0D   0x0Du
#define BK4829_REG_0E   0x0Eu
#define BK4829_REG_10   0x10u
#define BK4829_REG_11   0x11u
#define BK4829_REG_12   0x12u
#define BK4829_REG_13   0x13u
#define BK4829_REG_14   0x14u
#define BK4829_REG_19   0x19u
#define BK4829_REG_1A   0x1Au
#define BK4829_REG_1F   0x1Fu
#define BK4829_REG_24   0x24u
#define BK4829_REG_28   0x28u
#define BK4829_REG_29   0x29u
#define BK4829_REG_2A   0x2Au
#define BK4829_REG_2B   0x2Bu
#define BK4829_REG_2C   0x2Cu
#define BK4829_REG_2E   0x2Eu
#define BK4829_REG_2F   0x2Fu
#define BK4829_REG_30   0x30u
#define BK4829_REG_31   0x31u
#define BK4829_REG_32   0x32u
#define BK4829_REG_33   0x33u
#define BK4829_REG_34   0x34u
#define BK4829_REG_35   0x35u
#define BK4829_REG_36   0x36u
#define BK4829_REG_37   0x37u
#define BK4829_REG_38   0x38u
#define BK4829_REG_39   0x39u
#define BK4829_REG_3B   0x3Bu
#define BK4829_REG_3C   0x3Cu
#define BK4829_REG_3E   0x3Eu
#define BK4829_REG_3F   0x3Fu
#define BK4829_REG_40   0x40u
#define BK4829_REG_43   0x43u
#define BK4829_REG_44   0x44u
#define BK4829_REG_45   0x45u
#define BK4829_REG_46   0x46u
#define BK4829_REG_47   0x47u
#define BK4829_REG_48   0x48u
#define BK4829_REG_49   0x49u
#define BK4829_REG_4D   0x4Du
#define BK4829_REG_4E   0x4Eu
#define BK4829_REG_4F   0x4Fu
#define BK4829_REG_50   0x50u
#define BK4829_REG_51   0x51u
#define BK4829_REG_52   0x52u
#define BK4829_REG_53   0x53u
#define BK4829_REG_54   0x54u
#define BK4829_REG_55   0x55u
#define BK4829_REG_58   0x58u
#define BK4829_REG_59   0x59u
#define BK4829_REG_5A   0x5Au
#define BK4829_REG_5B   0x5Bu
#define BK4829_REG_5C   0x5Cu
#define BK4829_REG_5D   0x5Du
#define BK4829_REG_5E   0x5Eu
#define BK4829_REG_5F   0x5Fu
#define BK4829_REG_62   0x62u
#define BK4829_REG_63   0x63u
#define BK4829_REG_64   0x64u
#define BK4829_REG_65   0x65u
#define BK4829_REG_66   0x66u
#define BK4829_REG_67   0x67u
#define BK4829_REG_68   0x68u
#define BK4829_REG_69   0x69u
#define BK4829_REG_6A   0x6Au
#define BK4829_REG_6E   0x6Eu
#define BK4829_REG_6F   0x6Fu
#define BK4829_REG_70   0x70u
#define BK4829_REG_71   0x71u
#define BK4829_REG_72   0x72u
#define BK4829_REG_73   0x73u
#define BK4829_REG_74   0x74u
#define BK4829_REG_75   0x75u
#define BK4829_REG_78   0x78u
#define BK4829_REG_79   0x79u
#define BK4829_REG_7A   0x7Au
#define BK4829_REG_7B   0x7Bu
#define BK4829_REG_7C   0x7Cu
#define BK4829_REG_7D   0x7Du
#define BK4829_REG_7E   0x7Eu

/* ============================================================
 * Reset/Default values (where derivable from table)
 * ============================================================ */
#define BK4829_REG_00_RESET   0x0000u
#define BK4829_REG_10_RESET   0x0038u
#define BK4829_REG_11_RESET   0x025Au
#define BK4829_REG_12_RESET   0x037Bu
#define BK4829_REG_13_RESET   0x03DEu
#define BK4829_REG_14_RESET   0x0000u
#define BK4829_REG_19_RESET   0x8000u
#define BK4829_REG_1A_RESET   0x5800u
#define BK4829_REG_1F_RESET   0x0008u
#define BK4829_REG_24_RESET   0x001Eu
#define BK4829_REG_28_RESET   0x0A00u
#define BK4829_REG_29_RESET   0x0600u
#define BK4829_REG_2A_RESET   0x1000u
#define BK4829_REG_2B_RESET   0x0000u
#define BK4829_REG_2C_RESET   0x3462u
#define BK4829_REG_2E_RESET   0x0000u
#define BK4829_REG_2F_RESET   0x18D8u
#define BK4829_REG_30_RESET   0x0000u
#define BK4829_REG_31_RESET   0x0000u
#define BK4829_REG_32_RESET   0x0000u
#define BK4829_REG_33_RESET   0x7F00u
#define BK4829_REG_34_RESET   0x0000u
#define BK4829_REG_35_RESET   0x0000u
#define BK4829_REG_36_RESET   0x003Fu
#define BK4829_REG_37_RESET   0x1F00u
#define BK4829_REG_38_RESET   0x3A98u
#define BK4829_REG_39_RESET   0x0271u
#define BK4829_REG_3B_RESET   0x5880u
#define BK4829_REG_3C_RESET   0x4F80u
#define BK4829_REG_3E_RESET   0x8E6Au
#define BK4829_REG_3F_RESET   0x0000u
#define BK4829_REG_40_RESET   0x14D0u
#define BK4829_REG_43_RESET   0x4040u
#define BK4829_REG_44_RESET   0x9009u
#define BK4829_REG_45_RESET   0x31A9u
#define BK4829_REG_46_RESET   0x0050u
#define BK4829_REG_47_RESET   0x2100u
#define BK4829_REG_48_RESET   0x03CFu
#define BK4829_REG_49_RESET   0x2830u
#define BK4829_REG_4D_RESET   0x0020u
#define BK4829_REG_4E_RESET   0x6F08u
#define BK4829_REG_4F_RESET   0x2F2Eu
#define BK4829_REG_50_RESET   0x0000u
#define BK4829_REG_51_RESET   0x0000u
#define BK4829_REG_52_RESET   0x028Fu
#define BK4829_REG_53_RESET   0x0011u
#define BK4829_REG_54_RESET   0x9009u
#define BK4829_REG_55_RESET   0x31A9u
#define BK4829_REG_58_RESET   0x0000u
#define BK4829_REG_59_RESET   0x0000u
#define BK4829_REG_5A_RESET   0x85CFu
#define BK4829_REG_5B_RESET   0xAB45u
#define BK4829_REG_5C_RESET   0x0040u
#define BK4829_REG_5D_RESET   0x0F00u
#define BK4829_REG_5E_RESET   0x0204u
#define BK4829_REG_70_RESET   0x0000u
#define BK4829_REG_71_RESET   0x8517u
#define BK4829_REG_72_RESET   0x2854u
#define BK4829_REG_73_RESET   0x0000u
#define BK4829_REG_74_RESET   0xF50Bu
#define BK4829_REG_75_RESET   0xF50Bu
#define BK4829_REG_78_RESET   0x4846u
#define BK4829_REG_79_RESET   0x4040u
#define BK4829_REG_7A_RESET   0x8000u
#define BK4829_REG_7B_RESET   0xAE34u
#define BK4829_REG_7C_RESET   0x8000u
#define BK4829_REG_7D_RESET   0x001Cu
#define BK4829_REG_7E_RESET   0x302Eu

/* ============================================================ */
/* REG_00 (0x00) */
/* Reset: 0x0000 */

/* <15> Soft Reset. 1=Reset, 0=Normal */
#define BK4829_REG00_SOFT_RESET_MASK   0x8000u
#define BK4829_REG00_SOFT_RESET_SHIFT  15u
#define BK4829_REG00_SOFT_RESET_SET    0x8000u
#define BK4829_REG00_SOFT_RESET_CLR    0x0000u
#define BK4829_REG00_SOFT_RESET_RESET   0x8000u
#define BK4829_REG00_SOFT_RESET_NORMAL   0x0000u

/* ============================================================ */
/* REG_02 (0x02) */

/* <15> FSK Tx Finished Interrupt */
#define BK4829_REG02_FSK_TX_FINISHED_IRQ_MASK   0x8000u
#define BK4829_REG02_FSK_TX_FINISHED_IRQ_SHIFT  15u
#define BK4829_REG02_FSK_TX_FINISHED_IRQ_SET    0x8000u
#define BK4829_REG02_FSK_TX_FINISHED_IRQ_CLR    0x0000u

/* <14> FSK FIFO Almost Empty Interrupt Enable */
#define BK4829_REG02_FSK_FIFO_ALMOST_EMPTY_IRQ_MASK   0x4000u
#define BK4829_REG02_FSK_FIFO_ALMOST_EMPTY_IRQ_SHIFT  14u
#define BK4829_REG02_FSK_FIFO_ALMOST_EMPTY_IRQ_SET    0x4000u
#define BK4829_REG02_FSK_FIFO_ALMOST_EMPTY_IRQ_CLR    0x0000u

/* <13> FSK Rx Finished Interrupt Enable */
#define BK4829_REG02_FSK_RX_FINISHED_IRQ_EN_MASK   0x2000u
#define BK4829_REG02_FSK_RX_FINISHED_IRQ_EN_SHIFT  13u
#define BK4829_REG02_FSK_RX_FINISHED_IRQ_EN_SET    0x2000u
#define BK4829_REG02_FSK_RX_FINISHED_IRQ_EN_CLR    0x0000u

/* <12> FSK FIFO Almost Full Interrupt */
#define BK4829_REG02_FSK_FIFO_ALMOST_FULL_IRQ_MASK   0x1000u
#define BK4829_REG02_FSK_FIFO_ALMOST_FULL_IRQ_SHIFT  12u
#define BK4829_REG02_FSK_FIFO_ALMOST_FULL_IRQ_SET    0x1000u
#define BK4829_REG02_FSK_FIFO_ALMOST_FULL_IRQ_CLR    0x0000u

/* <11> DTMF/5TONE Found Interrupt */
#define BK4829_REG02_DTMF_5TONE_FOUND_IRQ_MASK   0x0800u
#define BK4829_REG02_DTMF_5TONE_FOUND_IRQ_SHIFT  11u
#define BK4829_REG02_DTMF_5TONE_FOUND_IRQ_SET    0x0800u
#define BK4829_REG02_DTMF_5TONE_FOUND_IRQ_CLR    0x0000u

/* <10> CTCSS/CDCSS Tail Found Interrupt */
#define BK4829_REG02_CTCSS_CDCSS_TAIL_FOUND_IRQ_MASK   0x0400u
#define BK4829_REG02_CTCSS_CDCSS_TAIL_FOUND_IRQ_SHIFT  10u
#define BK4829_REG02_CTCSS_CDCSS_TAIL_FOUND_IRQ_SET    0x0400u
#define BK4829_REG02_CTCSS_CDCSS_TAIL_FOUND_IRQ_CLR    0x0000u

/* <9> CDCSS Found Interrupt */
#define BK4829_REG02_CDCSS_FOUND_IRQ_MASK   0x0200u
#define BK4829_REG02_CDCSS_FOUND_IRQ_SHIFT  9u
#define BK4829_REG02_CDCSS_FOUND_IRQ_SET    0x0200u
#define BK4829_REG02_CDCSS_FOUND_IRQ_CLR    0x0000u

/* <8> CDCSS Lost Interrupt */
#define BK4829_REG02_CDCSS_LOST_IRQ_MASK   0x0100u
#define BK4829_REG02_CDCSS_LOST_IRQ_SHIFT  8u
#define BK4829_REG02_CDCSS_LOST_IRQ_SET    0x0100u
#define BK4829_REG02_CDCSS_LOST_IRQ_CLR    0x0000u

/* <7> CTCSS Found Interrupt */
#define BK4829_REG02_CTCSS_FOUND_IRQ_MASK   0x0080u
#define BK4829_REG02_CTCSS_FOUND_IRQ_SHIFT  7u
#define BK4829_REG02_CTCSS_FOUND_IRQ_SET    0x0080u
#define BK4829_REG02_CTCSS_FOUND_IRQ_CLR    0x0000u

/* <6> CTCSS Lost Interrupt */
#define BK4829_REG02_CTCSS_LOST_IRQ_MASK   0x0040u
#define BK4829_REG02_CTCSS_LOST_IRQ_SHIFT  6u
#define BK4829_REG02_CTCSS_LOST_IRQ_SET    0x0040u
#define BK4829_REG02_CTCSS_LOST_IRQ_CLR    0x0000u

/* <5> VoX Found Interrupt */
#define BK4829_REG02_VOX_FOUND_IRQ_MASK   0x0020u
#define BK4829_REG02_VOX_FOUND_IRQ_SHIFT  5u
#define BK4829_REG02_VOX_FOUND_IRQ_SET    0x0020u
#define BK4829_REG02_VOX_FOUND_IRQ_CLR    0x0000u

/* <4> VoX Lost Interrupt */
#define BK4829_REG02_VOX_LOST_IRQ_MASK   0x0010u
#define BK4829_REG02_VOX_LOST_IRQ_SHIFT  4u
#define BK4829_REG02_VOX_LOST_IRQ_SET    0x0010u
#define BK4829_REG02_VOX_LOST_IRQ_CLR    0x0000u

/* <3> Squelch Found Interrupt */
#define BK4829_REG02_SQL_FOUND_IRQ_MASK   0x0008u
#define BK4829_REG02_SQL_FOUND_IRQ_SHIFT  3u
#define BK4829_REG02_SQL_FOUND_IRQ_SET    0x0008u
#define BK4829_REG02_SQL_FOUND_IRQ_CLR    0x0000u

/* <2> Squelch Lost Interrupt */
#define BK4829_REG02_SQL_LOST_IRQ_MASK   0x0004u
#define BK4829_REG02_SQL_LOST_IRQ_SHIFT  2u
#define BK4829_REG02_SQL_LOST_IRQ_SET    0x0004u
#define BK4829_REG02_SQL_LOST_IRQ_CLR    0x0000u

/* <1> FSK Rx Sync Interrupt */
#define BK4829_REG02_FSK_RX_SYNC_IRQ_MASK   0x0002u
#define BK4829_REG02_FSK_RX_SYNC_IRQ_SHIFT  1u
#define BK4829_REG02_FSK_RX_SYNC_IRQ_SET    0x0002u
#define BK4829_REG02_FSK_RX_SYNC_IRQ_CLR    0x0000u

/* ============================================================ */
/* REG_07 (0x07) */
/* CTCSS/CDCSS frequency control word */

/* <15:13> Mode select: 0=CTC1, 1=CTC2(Tail 55Hz Rx detection), 2=CDCSS 134.4Hz, 3=CTC3(Tail 62Hz Rx detection) */
#define BK4829_REG07_MODE_SELECT_MASK   0xE000u
#define BK4829_REG07_MODE_SELECT_SHIFT  13u
#define BK4829_REG07_MODE_SELECT(v)     ((uint16_t)((((uint16_t)(v)) << 13u) & 0xE000u))
#define BK4829_REG07_MODE_SELECT_CTC1   0x0000u
#define BK4829_REG07_MODE_SELECT_CTC2_TAIL_55HZ_RX_DETECTION   0x2000u
#define BK4829_REG07_MODE_SELECT_CDCSS_134P4HZ   0x4000u
#define BK4829_REG07_MODE_SELECT_CTC3_TAIL_62HZ_RX_DETECTION   0x6000u

/* <12:0> Control word: mode 0 (CTC1): CTC1 frequency control word=freq(Hz)* 20.64888 for XTAL 13M/26M or=freq(Hz)*20.97152 for XTAL 12.8M/19.2M/25.6M/38.4M; mode 1 (CTC2(Tail 55Hz Rx detection)): CTC2 (should below 100Hz)frequency control word=25391/freq(Hz) for XTAL 13M/26M or=25000/freq(Hz) for XTAL 12.8M/19.2M/25.6M/38.4M; mode 2 (CDCSS 134.4Hz): CDCSS baud rate frequency (134.4Hz) control word=freq(Hz)* 20.64888 for XTAL 13M/26M or=freq(Hz)*20.97152 for XTAL 12.8M/19.2M/25.6M/38.4M; mode 3 (CTC3(Tail 62Hz Rx detection)): CTC3 (should below 100Hz)frequency control word=25391/freq(Hz) for XTAL 13M/26M or=25000/freq(Hz) for XTAL 12.8M/19.2M/25.6M/38.4M */
#define BK4829_REG07_CONTROL_WORD_MASK   0x1FFFu
#define BK4829_REG07_CONTROL_WORD_SHIFT  0u
#define BK4829_REG07_CONTROL_WORD(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x1FFFu))

/* ============================================================ */
/* REG_08 (0x08) */

/* <15> 1=CDCSS high 12bit */
#define BK4829_REG08_CDCSS_HI_12BIT_MASK   0x8000u
#define BK4829_REG08_CDCSS_HI_12BIT_SHIFT  15u
#define BK4829_REG08_CDCSS_HI_12BIT_SET    0x8000u
#define BK4829_REG08_CDCSS_HI_12BIT_CLR    0x0000u
#define BK4829_REG08_CDCSS_HI_12BIT_CDCSS_HIGH_12BIT   0x8000u

/* <11:0> CDCSS high/low 12bit code */
#define BK4829_REG08_CDCSS_HIGH_LOW_12BIT_CODE_MASK   0x0FFFu
#define BK4829_REG08_CDCSS_HIGH_LOW_12BIT_CODE_SHIFT  0u
#define BK4829_REG08_CDCSS_HIGH_LOW_12BIT_CODE(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0FFFu))

/* ============================================================ */
/* REG_09 (0x09) */
/* DTMF/SelCall Symbol Coefficient for Detection. */

/* <15:12> Symbol Number */
#define BK4829_REG09_SYMBOL_NUMBER_MASK   0xF000u
#define BK4829_REG09_SYMBOL_NUMBER_SHIFT  12u
#define BK4829_REG09_SYMBOL_NUMBER(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0xF000u))

/* <7:0> Coefficient. */
#define BK4829_REG09_COEFFICIENTP_MASK   0x00FFu
#define BK4829_REG09_COEFFICIENTP_SHIFT  0u
#define BK4829_REG09_COEFFICIENTP(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_0A (0x0A) */

/* <6> GPIO6 (PIN28) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO6_IN_IND_MASK   0x0040u
#define BK4829_REG0A_GPIO6_IN_IND_SHIFT  6u
#define BK4829_REG0A_GPIO6_IN_IND_SET    0x0040u
#define BK4829_REG0A_GPIO6_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO6_IN_IND_HIGH   0x0040u
#define BK4829_REG0A_GPIO6_IN_IND_LOW   0x0000u

/* <5> GPIO5 (PIN29) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO5_IN_IND_MASK   0x0020u
#define BK4829_REG0A_GPIO5_IN_IND_SHIFT  5u
#define BK4829_REG0A_GPIO5_IN_IND_SET    0x0020u
#define BK4829_REG0A_GPIO5_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO5_IN_IND_HIGH   0x0020u
#define BK4829_REG0A_GPIO5_IN_IND_LOW   0x0000u

/* <4> GPIO4 (PIN30) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO4_IN_IND_MASK   0x0010u
#define BK4829_REG0A_GPIO4_IN_IND_SHIFT  4u
#define BK4829_REG0A_GPIO4_IN_IND_SET    0x0010u
#define BK4829_REG0A_GPIO4_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO4_IN_IND_HIGH   0x0010u
#define BK4829_REG0A_GPIO4_IN_IND_LOW   0x0000u

/* <3> GPIO3 (PIN31) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO3_IN_IND_MASK   0x0008u
#define BK4829_REG0A_GPIO3_IN_IND_SHIFT  3u
#define BK4829_REG0A_GPIO3_IN_IND_SET    0x0008u
#define BK4829_REG0A_GPIO3_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO3_IN_IND_HIGH   0x0008u
#define BK4829_REG0A_GPIO3_IN_IND_LOW   0x0000u

/* <2> GPIO2 (PIN32) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO2_IN_IND_MASK   0x0004u
#define BK4829_REG0A_GPIO2_IN_IND_SHIFT  2u
#define BK4829_REG0A_GPIO2_IN_IND_SET    0x0004u
#define BK4829_REG0A_GPIO2_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO2_IN_IND_HIGH   0x0004u
#define BK4829_REG0A_GPIO2_IN_IND_LOW   0x0000u

/* <1> GPIO1 (PIN1) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO1_IN_IND_MASK   0x0002u
#define BK4829_REG0A_GPIO1_IN_IND_SHIFT  1u
#define BK4829_REG0A_GPIO1_IN_IND_SET    0x0002u
#define BK4829_REG0A_GPIO1_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO1_IN_IND_HIGH   0x0002u
#define BK4829_REG0A_GPIO1_IN_IND_LOW   0x0000u

/* <0> GPIO0 (PIN2) Input Indicator. 1=High, 0=Low */
#define BK4829_REG0A_GPIO0_IN_IND_MASK   0x0001u
#define BK4829_REG0A_GPIO0_IN_IND_SHIFT  0u
#define BK4829_REG0A_GPIO0_IN_IND_SET    0x0001u
#define BK4829_REG0A_GPIO0_IN_IND_CLR    0x0000u
#define BK4829_REG0A_GPIO0_IN_IND_HIGH   0x0001u
#define BK4829_REG0A_GPIO0_IN_IND_LOW   0x0000u

/* ============================================================ */
/* REG_0B (0x0B) */

/* <11:8> DTMF/5Tone Code Received */
#define BK4829_REG0B_DTMF_5TONE_CODE_RECEIVED_MASK   0x0F00u
#define BK4829_REG0B_DTMF_5TONE_CODE_RECEIVED_SHIFT  8u
#define BK4829_REG0B_DTMF_5TONE_CODE_RECEIVED(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))

/* <7> FSK Rx Sync Negative has been Found */
#define BK4829_REG0B_FSK_RX_SYNC_NEGATIVE_HAS_MASK   0x0080u
#define BK4829_REG0B_FSK_RX_SYNC_NEGATIVE_HAS_SHIFT  7u
#define BK4829_REG0B_FSK_RX_SYNC_NEGATIVE_HAS_SET    0x0080u
#define BK4829_REG0B_FSK_RX_SYNC_NEGATIVE_HAS_CLR    0x0000u

/* <6> FSK Rx Sync Positive has been Found */
#define BK4829_REG0B_FSK_RX_SYNC_POSITIVE_HAS_MASK   0x0040u
#define BK4829_REG0B_FSK_RX_SYNC_POSITIVE_HAS_SHIFT  6u
#define BK4829_REG0B_FSK_RX_SYNC_POSITIVE_HAS_SET    0x0040u
#define BK4829_REG0B_FSK_RX_SYNC_POSITIVE_HAS_CLR    0x0000u

/* <4> FSK Rx CRC Indicator. 1=CRC Pass, 0=CRC Fail */
#define BK4829_REG0B_FSK_RX_CRC_IND_MASK   0x0010u
#define BK4829_REG0B_FSK_RX_CRC_IND_SHIFT  4u
#define BK4829_REG0B_FSK_RX_CRC_IND_SET    0x0010u
#define BK4829_REG0B_FSK_RX_CRC_IND_CLR    0x0000u
#define BK4829_REG0B_FSK_RX_CRC_IND_CRC_PASS   0x0010u
#define BK4829_REG0B_FSK_RX_CRC_IND_CRC_FAIL   0x0000u

/* ============================================================ */
/* REG_0C (0x0C) */

/* <15:14> <14> CDCSS positive code received * <15> CDCSS negative code received */
#define BK4829_REG0C_CDCSS_POSITIVE_CODE_RECEIVED_CDCSS_MASK   0xC000u
#define BK4829_REG0C_CDCSS_POSITIVE_CODE_RECEIVED_CDCSS_SHIFT  14u
#define BK4829_REG0C_CDCSS_POSITIVE_CODE_RECEIVED_CDCSS(v)     ((uint16_t)((((uint16_t)(v)) << 14u) & 0xC000u))

/* <13:12> CTCSS Phase Shift Received. 00=No phase shift 01=CTCSS0 120�phase shift, 10=CTCSS0 180�phase shift 11=CTCSS0 240�phase shift */
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_MASK   0x3000u
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_SHIFT  12u
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0x3000u))
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_NO_PHASE_SHIFT   0x0000u
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_CTCSS0_120_PHASE_SHIFT   0x1000u
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_CTCSS0_180_PHASE_SHIFT   0x2000u
#define BK4829_REG0C_CTCSS_PHASE_SHIFT_RECEIVED_CTCSS0_240_PHASE_SHIFT   0x3000u

/* <10> <11> CTC2(55Hz) received * <10> CTC1 received */
#define BK4829_REG0C_BITS10_11_MASK   0x0000u
#define BK4829_REG0C_BITS10_11_SHIFT  11u
#define BK4829_REG0C_BITS10_11(v)     ((uint16_t)((((uint16_t)(v)) << 11u) & 0x0000u))

/* <4> <4> CTC3(62Hz) received */
#define BK4829_REG0C_CTC3_RECEIVED_MASK   0x0010u
#define BK4829_REG0C_CTC3_RECEIVED_SHIFT  4u
#define BK4829_REG0C_CTC3_RECEIVED_SET    0x0010u
#define BK4829_REG0C_CTC3_RECEIVED_CLR    0x0000u

/* <2> VoX Indicator 0: No 1: Yes */
#define BK4829_REG0C_VOX_IND_NO_YES_MASK   0x0004u
#define BK4829_REG0C_VOX_IND_NO_YES_SHIFT  2u
#define BK4829_REG0C_VOX_IND_NO_YES_SET    0x0004u
#define BK4829_REG0C_VOX_IND_NO_YES_CLR    0x0000u

/* <1> Squelch result output. 1=Link, 0=Loss */
#define BK4829_REG0C_SQL_RESULT_OUT_MASK   0x0002u
#define BK4829_REG0C_SQL_RESULT_OUT_SHIFT  1u
#define BK4829_REG0C_SQL_RESULT_OUT_SET    0x0002u
#define BK4829_REG0C_SQL_RESULT_OUT_CLR    0x0000u
#define BK4829_REG0C_SQL_RESULT_OUT_LINK   0x0002u
#define BK4829_REG0C_SQL_RESULT_OUT_LOSS   0x0000u

/* <0> Interrupt Indicator. 1=Interrupt Request, 0=No Request */
#define BK4829_REG0C_IRQ_IND_MASK   0x0001u
#define BK4829_REG0C_IRQ_IND_SHIFT  0u
#define BK4829_REG0C_IRQ_IND_SET    0x0001u
#define BK4829_REG0C_IRQ_IND_CLR    0x0000u
#define BK4829_REG0C_IRQ_IND_INTERRUPT_REQUEST   0x0001u
#define BK4829_REG0C_IRQ_IND_NO_REQUEST   0x0000u

/* ============================================================ */
/* REG_0D (0x0D) */

/* <15> Frequency Scan Indicator. 1=Busy, 0=Finished */
#define BK4829_REG0D_FREQ_SCAN_IND_MASK   0x8000u
#define BK4829_REG0D_FREQ_SCAN_IND_SHIFT  15u
#define BK4829_REG0D_FREQ_SCAN_IND_SET    0x8000u
#define BK4829_REG0D_FREQ_SCAN_IND_CLR    0x0000u
#define BK4829_REG0D_FREQ_SCAN_IND_BUSY   0x8000u
#define BK4829_REG0D_FREQ_SCAN_IND_FINISHED   0x0000u

/* <10:0> Frequency Scan High 16 bits */
#define BK4829_REG0D_FREQ_SCAN_HI_MASK   0x07FFu
#define BK4829_REG0D_FREQ_SCAN_HI_SHIFT  0u
#define BK4829_REG0D_FREQ_SCAN_HI(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x07FFu))

/* ============================================================ */
/* REG_0E (0x0E) */
/* Frequency Scan Low 16 bits. = REG_0D */

/* <15:0> , unit is 10Hz */
#define BK4829_REG0E_UNIT_IS_10HZ_MASK   0xFFFFu
#define BK4829_REG0E_UNIT_IS_10HZ_SHIFT  0u
#define BK4829_REG0E_UNIT_IS_10HZ(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0xFFFFu))

/* <10:0> <<16 + REG_0E */
#define BK4829_REG0E_V_16_PLUS_REG_0E_MASK   0x07FFu
#define BK4829_REG0E_V_16_PLUS_REG_0E_SHIFT  0u
#define BK4829_REG0E_V_16_PLUS_REG_0E(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x07FFu))

/* ============================================================ */
/* REG_10 (0x10) */
/* Rx AGC Gain Table[0]. (Index Max->Min is 3,2,1,0,-1) */
/* Reset: 0x0038 */

/* <9:8> LNA Gain Short: 11=0dB, 10=-11dB, 01=-16dB, 00=-19dB */
#define BK4829_REG10_LNA_GAIN_SHORT_MASK   0x0300u
#define BK4829_REG10_LNA_GAIN_SHORT_SHIFT  8u
#define BK4829_REG10_LNA_GAIN_SHORT(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0300u))
#define BK4829_REG10_LNA_GAIN_SHORT_V_0DB   0x0300u
#define BK4829_REG10_LNA_GAIN_SHORT_MINUS11DB   0x0200u
#define BK4829_REG10_LNA_GAIN_SHORT_MINUS16DB   0x0100u
#define BK4829_REG10_LNA_GAIN_SHORT_MINUS19DB   0x0000u

/* <7:5> LNA Gain: 111=0dB, 110=-2dB, 101=-4dB, 100=-6dB, 011=-9dB, 010=-14dB, 001=-19dB, 000=-24dB */
#define BK4829_REG10_LNA_GAIN_MASK   0x00E0u
#define BK4829_REG10_LNA_GAIN_SHIFT  5u
#define BK4829_REG10_LNA_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 5u) & 0x00E0u))
#define BK4829_REG10_LNA_GAIN_V_0DB   0x00E0u
#define BK4829_REG10_LNA_GAIN_MINUS2DB   0x00C0u
#define BK4829_REG10_LNA_GAIN_MINUS4DB   0x00A0u
#define BK4829_REG10_LNA_GAIN_MINUS6DB   0x0080u
#define BK4829_REG10_LNA_GAIN_MINUS9DB   0x0060u
#define BK4829_REG10_LNA_GAIN_MINUS14DB   0x0040u
#define BK4829_REG10_LNA_GAIN_MINUS19DB   0x0020u
#define BK4829_REG10_LNA_GAIN_MINUS24DB   0x0000u

/* <4:3> MIXER Gain: 11=0dB, 10=-3dB, 01=-6dB, 00=-8dB */
#define BK4829_REG10_MIXER_GAIN_MASK   0x0018u
#define BK4829_REG10_MIXER_GAIN_SHIFT  3u
#define BK4829_REG10_MIXER_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 3u) & 0x0018u))
#define BK4829_REG10_MIXER_GAIN_V_0DB   0x0018u
#define BK4829_REG10_MIXER_GAIN_MINUS3DB   0x0010u
#define BK4829_REG10_MIXER_GAIN_MINUS6DB   0x0008u
#define BK4829_REG10_MIXER_GAIN_MINUS8DB   0x0000u

/* <2:0> PGA Gain: 111=0dB, 110=-3dB, 101=-6dB, 100=-9dB, 011=-15dB, 010=-21dB, 001=-27dB, 000=-33dB */
#define BK4829_REG10_PGA_GAIN_MASK   0x0007u
#define BK4829_REG10_PGA_GAIN_SHIFT  0u
#define BK4829_REG10_PGA_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0007u))
#define BK4829_REG10_PGA_GAIN_V_0DB   0x0007u
#define BK4829_REG10_PGA_GAIN_MINUS3DB   0x0006u
#define BK4829_REG10_PGA_GAIN_MINUS6DB   0x0005u
#define BK4829_REG10_PGA_GAIN_MINUS9DB   0x0004u
#define BK4829_REG10_PGA_GAIN_MINUS15DB   0x0003u
#define BK4829_REG10_PGA_GAIN_MINUS21DB   0x0002u
#define BK4829_REG10_PGA_GAIN_MINUS27DB   0x0001u
#define BK4829_REG10_PGA_GAIN_MINUS33DB   0x0000u

/* ============================================================ */
/* REG_11 (0x11) */
/* Rx AGC Gain Table[1]. (Index Max->Min is 3, 2, 1, 0, -1) Same as REG_10 */
/* Reset: 0x025A */

/* ============================================================ */
/* REG_12 (0x12) */
/* Rx AGC Gain Table[2]. (Index Max->Min is 3, 2, 1, 0, -1) Same as REG_10 */
/* Reset: 0x037B */

/* ============================================================ */
/* REG_13 (0x13) */
/* Rx AGC Gain Table[3]. (Index Max->Min is 3, 2, 1, 0, -1) Same as REG_10 */
/* Reset: 0x03DE */

/* ============================================================ */
/* REG_14 (0x14) */
/* Rx AGC Gain Table[-1]. (Index Max->Min is 3, 2, 1, 0, -1) Same as REG_10 */
/* Reset: 0x0000 */

/* ============================================================ */
/* REG_19 (0x19) */
/* Reset: 0x8000 */

/* <15> Automatic MIC PGA Gain Controller (MIC AGC) Disable. 1=Disable, 0=Enable */
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_MASK   0x8000u
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_SHIFT  15u
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_SET    0x8000u
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_CLR    0x0000u
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_DISABLE   0x8000u
#define BK4829_REG19_AUTOMATIC_MIC_PGA_GAIN_CONTROLLER_ENABLE   0x0000u

/* ============================================================ */
/* REG_1A (0x1A) */
/* Reset: 0x5800 */

/* <15:12> Crystal vReg Bit */
#define BK4829_REG1A_XTAL_VREG_MASK   0xF000u
#define BK4829_REG1A_XTAL_VREG_SHIFT  12u
#define BK4829_REG1A_XTAL_VREG(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0xF000u))

/* <11:8> Crystal iBit */
#define BK4829_REG1A_XTAL_IBIT_MASK   0x0F00u
#define BK4829_REG1A_XTAL_IBIT_SHIFT  8u
#define BK4829_REG1A_XTAL_IBIT(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))

/* ============================================================ */
/* REG_1F (0x1F) */
/* Reset: 0x0008 */

/* <3:0> PLL CP bit */
#define BK4829_REG1F_PLL_CP_MASK   0x000Fu
#define BK4829_REG1F_PLL_CP_SHIFT  0u
#define BK4829_REG1F_PLL_CP(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x000Fu))

/* ============================================================ */
/* REG_24 (0x24) */
/* Reset: 0x001E */

/* <5> DTMF/SelCall Enable. 1=Enable, 0=Disable */
#define BK4829_REG24_DTMF_SELCALL_EN_MASK   0x0020u
#define BK4829_REG24_DTMF_SELCALL_EN_SHIFT  5u
#define BK4829_REG24_DTMF_SELCALL_EN_SET    0x0020u
#define BK4829_REG24_DTMF_SELCALL_EN_CLR    0x0000u
#define BK4829_REG24_DTMF_SELCALL_EN_ENABLE   0x0020u
#define BK4829_REG24_DTMF_SELCALL_EN_DISABLE   0x0000u

/* <4> DTMF or SelCall Detection Mode. 1=for DTMF, 0=for SelCall */
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_MASK   0x0010u
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_SHIFT  4u
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_SET    0x0010u
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_CLR    0x0000u
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_FOR_DTMF   0x0010u
#define BK4829_REG24_DTMF_SELCALL_DETECTION_MODE_FOR_SELCALL   0x0000u

/* <3:0> Max Symbol Number for SelCall Detection */
#define BK4829_REG24_MAX_SYMBOL_NUMBER_SELCALL_DETECTION_MASK   0x000Fu
#define BK4829_REG24_MAX_SYMBOL_NUMBER_SELCALL_DETECTION_SHIFT  0u
#define BK4829_REG24_MAX_SYMBOL_NUMBER_SELCALL_DETECTION(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x000Fu))

/* ============================================================ */
/* REG_28 (0x28) */
/* Reset: 0x0A00 */

/* <11:9> Rx DCC Filter(HPF1) 000=Bypass DC filter */
#define BK4829_REG28_RX_DCC_FILT_BYPASS_DC_MASK   0x0E00u
#define BK4829_REG28_RX_DCC_FILT_BYPASS_DC_SHIFT  9u
#define BK4829_REG28_RX_DCC_FILT_BYPASS_DC(v)     ((uint16_t)((((uint16_t)(v)) << 9u) & 0x0E00u))
#define BK4829_REG28_RX_DCC_FILT_BYPASS_DC_BYPASS_DC_FILTER   0x0000u

/* <8> Rx AF Noise Gate Enable */
#define BK4829_REG28_RX_AF_NOISE_GATE_EN_MASK   0x0100u
#define BK4829_REG28_RX_AF_NOISE_GATE_EN_SHIFT  8u
#define BK4829_REG28_RX_AF_NOISE_GATE_EN_SET    0x0100u
#define BK4829_REG28_RX_AF_NOISE_GATE_EN_CLR    0x0000u

/* <7:0> Rx AF Noise Gate Level */
#define BK4829_REG28_RX_AF_NOISE_GATE_LEVEL_MASK   0x00FFu
#define BK4829_REG28_RX_AF_NOISE_GATE_LEVEL_SHIFT  0u
#define BK4829_REG28_RX_AF_NOISE_GATE_LEVEL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_29 (0x29) */
/* Reset: 0x0600 */

/* <11:9> Tx DCC Filter(HPF1) 000=Bypass DC filter */
#define BK4829_REG29_TX_DCC_FILT_BYPASS_DC_MASK   0x0E00u
#define BK4829_REG29_TX_DCC_FILT_BYPASS_DC_SHIFT  9u
#define BK4829_REG29_TX_DCC_FILT_BYPASS_DC(v)     ((uint16_t)((((uint16_t)(v)) << 9u) & 0x0E00u))
#define BK4829_REG29_TX_DCC_FILT_BYPASS_DC_BYPASS_DC_FILTER   0x0000u

/* ============================================================ */
/* REG_2A (0x2A) */
/* Reset: 0x1000 */

/* <13:8> Noise Gate Time Constant. * <5:3> for Release Time * <2:0> for Attack Time.: 000=0 ms 001=6 ms 010=12 ms 011=24 ms 100=48 ms 101=96 ms 110=192 ms 111=384 ms */
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_MASK   0x3F00u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_SHIFT  8u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x3F00u))
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_0_MS   0x0000u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_6_MS   0x0100u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_12_MS   0x0200u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_24_MS   0x0300u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_48_MS   0x0400u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_96_MS   0x0500u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_192_MS   0x0600u
#define BK4829_REG2A_NOISE_GATE_TIME_CONSTANT_V_384_MS   0x0700u

/* ============================================================ */
/* REG_2B (0x2B) */
/* Reset: 0x0000 */

/* <10> Disable AF Rx HPF300 filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_MASK   0x0400u
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_SHIFT  10u
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_SET    0x0400u
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_RX_HPF300_FILT_DISABLE   0x0400u

/* <9> Disable AF Rx LPF3K filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_MASK   0x0200u
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_SHIFT  9u
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_SET    0x0200u
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_RX_LPF3K_FILT_DISABLE   0x0200u

/* <8> Disable AF Rx de-emphasis filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_MASK   0x0100u
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_SHIFT  8u
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_SET    0x0100u
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_RX_DE_EMPHASIS_DISABLE   0x0100u

/* <2> Disable AF Tx HPF300 filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_MASK   0x0004u
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_SHIFT  2u
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_SET    0x0004u
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_TX_HPF300_FILT_DISABLE   0x0004u

/* <1> Disable AF Tx LPF1 filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_MASK   0x0002u
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_SHIFT  1u
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_SET    0x0002u
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_TX_LPF1_FILT_DISABLE   0x0002u

/* <0> Disable AF Tx pre-emphasis filter. 0=Enable, 1=Disable */
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_MASK   0x0001u
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_SHIFT  0u
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_SET    0x0001u
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_CLR    0x0000u
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_ENABLE   0x0000u
#define BK4829_REG2B_DIS_AF_TX_PRE_EMPHASIS_DISABLE   0x0001u

/* ============================================================ */
/* REG_2C (0x2C) */
/* Reset: 0x3462 */

/* <14:12> AF Amplitude Detection Frame Length, (after Pre/De-emphasis) 000=0 ms 001=4 ms 010=8ms 011=16 ms ... 111=28 ms */
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_MASK   0x7000u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_SHIFT  12u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0x7000u))
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_V_0_MS   0x0000u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_V_4_MS   0x1000u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_V_8MS   0x2000u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_V_16_MS_PPP   0x3000u
#define BK4829_REG2C_AF_AMP_DETECTION_FRAME_LEN_V_28_MS   0x7000u

/* <11:6> Pre/De-emphasis DRC Time Constant. * <5:3> for Release Time. * <2:0> for Attack Time.: 000=0 ms 001=6 ms 010=12ms 011=24 ms 100=48 ms 101=96 ms 110=192 ms 111=384 ms */
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_MASK   0x0FC0u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_SHIFT  6u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME(v)     ((uint16_t)((((uint16_t)(v)) << 6u) & 0x0FC0u))
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_0_MS   0x0000u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_6_MS   0x0040u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_12MS   0x0080u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_24_MS   0x00C0u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_48_MS   0x0100u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_96_MS   0x0140u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_192_MS   0x0180u
#define BK4829_REG2C_PRE_DE_EMPHASIS_DRC_TIME_V_384_MS   0x01C0u

/* <5:0> Pre-emhpasis Gain(dB) 24=0dB 25=1dB 34=10dB */
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB_MASK   0x003Fu
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB_SHIFT  0u
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x003Fu))
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB_V_0DB   0x0018u
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB_V_1DB   0x0019u
#define BK4829_REG2C_PRE_EMHPASIS_GAIN_0DB_1DB_V_10DB   0x0022u

/* ============================================================ */
/* REG_2E (0x2E) */
/* Reset: 0x0000 */

/* <9:8> CTCSS/CDCSS Tx Gain2 Tuning (after Gain1). 00=12dB, 01=6dB, 10=0dB, 11=-6dB */
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_MASK   0x0300u
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_SHIFT  8u
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0300u))
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_V_12DB   0x0000u
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_V_6DB   0x0100u
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_V_0DB   0x0200u
#define BK4829_REG2E_CTCSS_CDCSS_TX_GAIN2_TUNING_MINUS6DB   0x0300u

/* ============================================================ */
/* REG_2F (0x2F) */
/* Reset: 0x18D8 */

/* <13:8> De-emhpasis Gain(dB) 24=0dB 25=1dB 34=10dB */
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB_MASK   0x3F00u
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB_SHIFT  8u
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x3F00u))
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB_V_0DB   0x1800u
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB_V_1DB   0x1900u
#define BK4829_REG2F_DE_EMHPASIS_GAIN_0DB_1DB_V_10DB   0x2200u

/* <7:5> Tx Soft Limiter Factor 000=bypass ... 111=hard limit */
#define BK4829_REG2F_TX_SOFT_LIMITER_FACTOR_BYPASS_MASK   0x00E0u
#define BK4829_REG2F_TX_SOFT_LIMITER_FACTOR_BYPASS_SHIFT  5u
#define BK4829_REG2F_TX_SOFT_LIMITER_FACTOR_BYPASS(v)     ((uint16_t)((((uint16_t)(v)) << 5u) & 0x00E0u))
#define BK4829_REG2F_TX_SOFT_LIMITER_FACTOR_BYPASS_BYPASS_PPP   0x0000u
#define BK4829_REG2F_TX_SOFT_LIMITER_FACTOR_BYPASS_HARD_LIMIT   0x00E0u

/* <4:0> Tx Soft Limiter Threshold 0=0.5 .. 31=0.99 */
#define BK4829_REG2F_TX_SOFT_LIMITER_THR_MASK   0x001Fu
#define BK4829_REG2F_TX_SOFT_LIMITER_THR_SHIFT  0u
#define BK4829_REG2F_TX_SOFT_LIMITER_THR(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x001Fu))
#define BK4829_REG2F_TX_SOFT_LIMITER_THR_V_0P5_PP   0x0000u
#define BK4829_REG2F_TX_SOFT_LIMITER_THR_V_0P99   0x001Fu

/* ============================================================ */
/* REG_30 (0x30) */
/* Reset: 0x0000 */

/* <15> VCO Calibration Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_VCO_CALIBRATION_EN_MASK   0x8000u
#define BK4829_REG30_VCO_CALIBRATION_EN_SHIFT  15u
#define BK4829_REG30_VCO_CALIBRATION_EN_SET    0x8000u
#define BK4829_REG30_VCO_CALIBRATION_EN_CLR    0x0000u
#define BK4829_REG30_VCO_CALIBRATION_EN_ENABLE   0x8000u
#define BK4829_REG30_VCO_CALIBRATION_EN_DISABLE   0x0000u

/* <13:10> Rx Link Enable (include LNA/MIXER/PGA/ADC). 1111=Enable, 0000=Disable */
#define BK4829_REG30_RX_LINK_EN_MASK   0x3C00u
#define BK4829_REG30_RX_LINK_EN_SHIFT  10u
#define BK4829_REG30_RX_LINK_EN(v)     ((uint16_t)((((uint16_t)(v)) << 10u) & 0x3C00u))
#define BK4829_REG30_RX_LINK_EN_ENABLE   0x3C00u
#define BK4829_REG30_RX_LINK_EN_DISABLE   0x0000u

/* <9> AF DAC Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_AF_DAC_EN_MASK   0x0200u
#define BK4829_REG30_AF_DAC_EN_SHIFT  9u
#define BK4829_REG30_AF_DAC_EN_SET    0x0200u
#define BK4829_REG30_AF_DAC_EN_CLR    0x0000u
#define BK4829_REG30_AF_DAC_EN_ENABLE   0x0200u
#define BK4829_REG30_AF_DAC_EN_DISABLE   0x0000u

/* <7:4> PLL/VCO Enable. 1111=Enable, 0000=Disable */
#define BK4829_REG30_PLL_VCO_EN_MASK   0x00F0u
#define BK4829_REG30_PLL_VCO_EN_SHIFT  4u
#define BK4829_REG30_PLL_VCO_EN(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x00F0u))
#define BK4829_REG30_PLL_VCO_EN_ENABLE   0x00F0u
#define BK4829_REG30_PLL_VCO_EN_DISABLE   0x0000u

/* <3> PA Gain Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_PA_GAIN_EN_MASK   0x0008u
#define BK4829_REG30_PA_GAIN_EN_SHIFT  3u
#define BK4829_REG30_PA_GAIN_EN_SET    0x0008u
#define BK4829_REG30_PA_GAIN_EN_CLR    0x0000u
#define BK4829_REG30_PA_GAIN_EN_ENABLE   0x0008u
#define BK4829_REG30_PA_GAIN_EN_DISABLE   0x0000u

/* <2> MIC ADC Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_MIC_ADC_EN_MASK   0x0004u
#define BK4829_REG30_MIC_ADC_EN_SHIFT  2u
#define BK4829_REG30_MIC_ADC_EN_SET    0x0004u
#define BK4829_REG30_MIC_ADC_EN_CLR    0x0000u
#define BK4829_REG30_MIC_ADC_EN_ENABLE   0x0004u
#define BK4829_REG30_MIC_ADC_EN_DISABLE   0x0000u

/* <1> Tx DSP Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_TX_DSP_EN_MASK   0x0002u
#define BK4829_REG30_TX_DSP_EN_SHIFT  1u
#define BK4829_REG30_TX_DSP_EN_SET    0x0002u
#define BK4829_REG30_TX_DSP_EN_CLR    0x0000u
#define BK4829_REG30_TX_DSP_EN_ENABLE   0x0002u
#define BK4829_REG30_TX_DSP_EN_DISABLE   0x0000u

/* <0> Rx DSP Enable. 1=Enable, 0=Disable */
#define BK4829_REG30_RX_DSP_EN_MASK   0x0001u
#define BK4829_REG30_RX_DSP_EN_SHIFT  0u
#define BK4829_REG30_RX_DSP_EN_SET    0x0001u
#define BK4829_REG30_RX_DSP_EN_CLR    0x0000u
#define BK4829_REG30_RX_DSP_EN_ENABLE   0x0001u
#define BK4829_REG30_RX_DSP_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_31 (0x31) */
/* Reset: 0x0000 */

/* <3> Enable Compander Function. 1=Enable, 0=Disable */
#define BK4829_REG31_EN_COMPANDER_FUNCTION_MASK   0x0008u
#define BK4829_REG31_EN_COMPANDER_FUNCTION_SHIFT  3u
#define BK4829_REG31_EN_COMPANDER_FUNCTION_SET    0x0008u
#define BK4829_REG31_EN_COMPANDER_FUNCTION_CLR    0x0000u
#define BK4829_REG31_EN_COMPANDER_FUNCTION_ENABLE   0x0008u
#define BK4829_REG31_EN_COMPANDER_FUNCTION_DISABLE   0x0000u

/* <2> Enable VOX detection. 1=Enable, 0=Disable */
#define BK4829_REG31_EN_VOX_DETECTION_MASK   0x0004u
#define BK4829_REG31_EN_VOX_DETECTION_SHIFT  2u
#define BK4829_REG31_EN_VOX_DETECTION_SET    0x0004u
#define BK4829_REG31_EN_VOX_DETECTION_CLR    0x0000u
#define BK4829_REG31_EN_VOX_DETECTION_ENABLE   0x0004u
#define BK4829_REG31_EN_VOX_DETECTION_DISABLE   0x0000u

/* <1> Enable Scramble Function. 1=Enable, 0=Disable */
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_MASK   0x0002u
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_SHIFT  1u
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_SET    0x0002u
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_CLR    0x0000u
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_ENABLE   0x0002u
#define BK4829_REG31_EN_SCRAMBLE_FUNCTION_DISABLE   0x0000u

/* ============================================================ */
/* REG_32 (0x32) */
/* Reset: 0x0000 */

/* <15:14> Frequency Scan Time. 00=0.2 Sec, 01=0.4 Sec, 10=0.8 Sec, 11=1.6 Sec */
#define BK4829_REG32_FREQ_SCAN_TIME_MASK   0xC000u
#define BK4829_REG32_FREQ_SCAN_TIME_SHIFT  14u
#define BK4829_REG32_FREQ_SCAN_TIME(v)     ((uint16_t)((((uint16_t)(v)) << 14u) & 0xC000u))
#define BK4829_REG32_FREQ_SCAN_TIME_V_0P2_SEC   0x0000u
#define BK4829_REG32_FREQ_SCAN_TIME_V_0P4_SEC   0x4000u
#define BK4829_REG32_FREQ_SCAN_TIME_V_0P8_SEC   0x8000u
#define BK4829_REG32_FREQ_SCAN_TIME_V_1P6_SEC   0xC000u

/* <0> Frequency Scan Enable. 1=Enable, 0=Disable */
#define BK4829_REG32_FREQ_SCAN_EN_MASK   0x0001u
#define BK4829_REG32_FREQ_SCAN_EN_SHIFT  0u
#define BK4829_REG32_FREQ_SCAN_EN_SET    0x0001u
#define BK4829_REG32_FREQ_SCAN_EN_CLR    0x0000u
#define BK4829_REG32_FREQ_SCAN_EN_ENABLE   0x0001u
#define BK4829_REG32_FREQ_SCAN_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_33 (0x33) */
/* Reset: 0x7F00 */

/* <14> GPIO6 (PIN28) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO6_OUT_DIS_MASK   0x4000u
#define BK4829_REG33_GPIO6_OUT_DIS_SHIFT  14u
#define BK4829_REG33_GPIO6_OUT_DIS_SET    0x4000u
#define BK4829_REG33_GPIO6_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO6_OUT_DIS_OUTPUT_DISABLE   0x4000u
#define BK4829_REG33_GPIO6_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <13> GPIO5 (PIN29) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO5_OUT_DIS_MASK   0x2000u
#define BK4829_REG33_GPIO5_OUT_DIS_SHIFT  13u
#define BK4829_REG33_GPIO5_OUT_DIS_SET    0x2000u
#define BK4829_REG33_GPIO5_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO5_OUT_DIS_OUTPUT_DISABLE   0x2000u
#define BK4829_REG33_GPIO5_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <12> GPIO4 (PIN30) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO4_OUT_DIS_MASK   0x1000u
#define BK4829_REG33_GPIO4_OUT_DIS_SHIFT  12u
#define BK4829_REG33_GPIO4_OUT_DIS_SET    0x1000u
#define BK4829_REG33_GPIO4_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO4_OUT_DIS_OUTPUT_DISABLE   0x1000u
#define BK4829_REG33_GPIO4_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <11> GPIO3 (PIN31) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO3_OUT_DIS_MASK   0x0800u
#define BK4829_REG33_GPIO3_OUT_DIS_SHIFT  11u
#define BK4829_REG33_GPIO3_OUT_DIS_SET    0x0800u
#define BK4829_REG33_GPIO3_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO3_OUT_DIS_OUTPUT_DISABLE   0x0800u
#define BK4829_REG33_GPIO3_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <10> GPIO2 (PIN32) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO2_OUT_DIS_MASK   0x0400u
#define BK4829_REG33_GPIO2_OUT_DIS_SHIFT  10u
#define BK4829_REG33_GPIO2_OUT_DIS_SET    0x0400u
#define BK4829_REG33_GPIO2_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO2_OUT_DIS_OUTPUT_DISABLE   0x0400u
#define BK4829_REG33_GPIO2_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <9> GPIO1 (PIN1) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO1_OUT_DIS_MASK   0x0200u
#define BK4829_REG33_GPIO1_OUT_DIS_SHIFT  9u
#define BK4829_REG33_GPIO1_OUT_DIS_SET    0x0200u
#define BK4829_REG33_GPIO1_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO1_OUT_DIS_OUTPUT_DISABLE   0x0200u
#define BK4829_REG33_GPIO1_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <8> GPIO0 (PIN2) Output Disable. 1=Output Disable, 0=Output Enable */
#define BK4829_REG33_GPIO0_OUT_DIS_MASK   0x0100u
#define BK4829_REG33_GPIO0_OUT_DIS_SHIFT  8u
#define BK4829_REG33_GPIO0_OUT_DIS_SET    0x0100u
#define BK4829_REG33_GPIO0_OUT_DIS_CLR    0x0000u
#define BK4829_REG33_GPIO0_OUT_DIS_OUTPUT_DISABLE   0x0100u
#define BK4829_REG33_GPIO0_OUT_DIS_OUTPUT_ENABLE   0x0000u

/* <6> GPIO6 (PIN28) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO6_OUT_VALUE_MASK   0x0040u
#define BK4829_REG33_GPIO6_OUT_VALUE_SHIFT  6u
#define BK4829_REG33_GPIO6_OUT_VALUE_SET    0x0040u
#define BK4829_REG33_GPIO6_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO6_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0040u
#define BK4829_REG33_GPIO6_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <5> GPIO5 (PIN29) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO5_OUT_VALUE_MASK   0x0020u
#define BK4829_REG33_GPIO5_OUT_VALUE_SHIFT  5u
#define BK4829_REG33_GPIO5_OUT_VALUE_SET    0x0020u
#define BK4829_REG33_GPIO5_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO5_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0020u
#define BK4829_REG33_GPIO5_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <4> GPIO4 (PIN30) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO4_OUT_VALUE_MASK   0x0010u
#define BK4829_REG33_GPIO4_OUT_VALUE_SHIFT  4u
#define BK4829_REG33_GPIO4_OUT_VALUE_SET    0x0010u
#define BK4829_REG33_GPIO4_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO4_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0010u
#define BK4829_REG33_GPIO4_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <3> GPIO3 (PIN31) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO3_OUT_VALUE_MASK   0x0008u
#define BK4829_REG33_GPIO3_OUT_VALUE_SHIFT  3u
#define BK4829_REG33_GPIO3_OUT_VALUE_SET    0x0008u
#define BK4829_REG33_GPIO3_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO3_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0008u
#define BK4829_REG33_GPIO3_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <2> GPIO2(PIN32) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO2_OUT_VALUE_MASK   0x0004u
#define BK4829_REG33_GPIO2_OUT_VALUE_SHIFT  2u
#define BK4829_REG33_GPIO2_OUT_VALUE_SET    0x0004u
#define BK4829_REG33_GPIO2_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO2_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0004u
#define BK4829_REG33_GPIO2_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <1> GPIO1 (PIN1) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO1_OUT_VALUE_MASK   0x0002u
#define BK4829_REG33_GPIO1_OUT_VALUE_SHIFT  1u
#define BK4829_REG33_GPIO1_OUT_VALUE_SET    0x0002u
#define BK4829_REG33_GPIO1_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO1_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0002u
#define BK4829_REG33_GPIO1_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* <0> GPIO0 (PIN2) Output Value. 1=High when Output Enable, 0=Low when Output Enable */
#define BK4829_REG33_GPIO0_OUT_VALUE_MASK   0x0001u
#define BK4829_REG33_GPIO0_OUT_VALUE_SHIFT  0u
#define BK4829_REG33_GPIO0_OUT_VALUE_SET    0x0001u
#define BK4829_REG33_GPIO0_OUT_VALUE_CLR    0x0000u
#define BK4829_REG33_GPIO0_OUT_VALUE_HIGH_WHEN_OUTPUT_ENABLE   0x0001u
#define BK4829_REG33_GPIO0_OUT_VALUE_LOW_WHEN_OUTPUT_ENABLE   0x0000u

/* ============================================================ */
/* REG_34 (0x34) */
/* Reset: 0x0000 */

/* <15:12> GPIO3 (PIN31) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG34_GPIO3_OUT_TYPE_SEL_MASK   0xF000u
#define BK4829_REG34_GPIO3_OUT_TYPE_SEL_SHIFT  12u
#define BK4829_REG34_GPIO3_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0xF000u))

/* <11:8> GPIO2 (PIN32) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG34_GPIO2_OUT_TYPE_SEL_MASK   0x0F00u
#define BK4829_REG34_GPIO2_OUT_TYPE_SEL_SHIFT  8u
#define BK4829_REG34_GPIO2_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))

/* <7:4> GPIO1 (PIN1) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG34_GPIO1_OUT_TYPE_SEL_MASK   0x00F0u
#define BK4829_REG34_GPIO1_OUT_TYPE_SEL_SHIFT  4u
#define BK4829_REG34_GPIO1_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x00F0u))

/* <3:0> GPIO0 (PIN2) Output Type Selection. 0=High/Low 1=Interrupt 2=Squelch 3=VoX 4=CTCSS/CDCSS Compared Result 5=CTCSS Compared Result 6=CDCSS Compared Result 7=Tail Detected Result 8=DTMF/5Tone Symbol Received Flag 9=CTCSS/CDCSS Digital Wave Others=Reserved */
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_MASK   0x000Fu
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_SHIFT  0u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x000Fu))
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_HIGH_LOW   0x0000u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_INTERRUPT   0x0001u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_SQUELCH   0x0002u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_VOX   0x0003u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_CTCSS_CDCSS_COMPARED_RESULT   0x0004u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_CTCSS_COMPARED_RESULT   0x0005u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_CDCSS_COMPARED_RESULT   0x0006u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_TAIL_DETECTED_RESULT   0x0007u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_DTMF_5TONE_SYMBOL_RECEIVED_FLAG   0x0008u
#define BK4829_REG34_GPIO0_OUT_TYPE_SEL_CTCSS_CDCSS_DIGITAL_WAVE_OTHERS_RESERVED   0x0009u

/* ============================================================ */
/* REG_35 (0x35) */
/* Reset: 0x0000 */

/* <11:8> GPIO6 (PIN28) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG35_GPIO6_OUT_TYPE_SEL_MASK   0x0F00u
#define BK4829_REG35_GPIO6_OUT_TYPE_SEL_SHIFT  8u
#define BK4829_REG35_GPIO6_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))

/* <7:4> GPIO5 (PIN29) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG35_GPIO5_OUT_TYPE_SEL_MASK   0x00F0u
#define BK4829_REG35_GPIO5_OUT_TYPE_SEL_SHIFT  4u
#define BK4829_REG35_GPIO5_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x00F0u))

/* <3:0> GPIO4 (PIN30) Output Type Selection. The Definitions is the same as REG_34 * <3:0> . */
#define BK4829_REG35_GPIO4_OUT_TYPE_SEL_MASK   0x000Fu
#define BK4829_REG35_GPIO4_OUT_TYPE_SEL_SHIFT  0u
#define BK4829_REG35_GPIO4_OUT_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x000Fu))

/* ============================================================ */
/* REG_36 (0x36) */
/* Reset: 0x003F */

/* <15:8> PA Bias output 0~3.2V 0x00=0V ... 0xFF=3.2V */
#define BK4829_REG36_PA_BIAS_OUT_MASK   0xFF00u
#define BK4829_REG36_PA_BIAS_OUT_SHIFT  8u
#define BK4829_REG36_PA_BIAS_OUT(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))
#define BK4829_REG36_PA_BIAS_OUT_V_0V_PPP   0x0000u
#define BK4829_REG36_PA_BIAS_OUT_V_3P2V   0xFF00u

/* <7> 1=Enable PACTL output, 0=Disable(Output 0 V) */
#define BK4829_REG36_EN_PACTL_OUT_DIS_MASK   0x0080u
#define BK4829_REG36_EN_PACTL_OUT_DIS_SHIFT  7u
#define BK4829_REG36_EN_PACTL_OUT_DIS_SET    0x0080u
#define BK4829_REG36_EN_PACTL_OUT_DIS_CLR    0x0000u
#define BK4829_REG36_EN_PACTL_OUT_DIS_ENABLE_PACTL_OUTPUT   0x0080u
#define BK4829_REG36_EN_PACTL_OUT_DIS_DISABLE_OUTPUT_0_V   0x0000u

/* <5:3> PA Gain1 Tuning. 111(max)->000(min) */
#define BK4829_REG36_PA_GAIN1_TUNING_MASK   0x0038u
#define BK4829_REG36_PA_GAIN1_TUNING_SHIFT  3u
#define BK4829_REG36_PA_GAIN1_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 3u) & 0x0038u))

/* <2:0> PA Gain2 Tuning. 111(max)->000(min) */
#define BK4829_REG36_PA_GAIN2_TUNING_MASK   0x0007u
#define BK4829_REG36_PA_GAIN2_TUNING_SHIFT  0u
#define BK4829_REG36_PA_GAIN2_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0007u))

/* ============================================================ */
/* REG_37 (0x37) */
/* Reset: 0x1F00 */

/* <15> DSP Enable */
#define BK4829_REG37_DSP_EN_MASK   0x8000u
#define BK4829_REG37_DSP_EN_SHIFT  15u
#define BK4829_REG37_DSP_EN_SET    0x8000u
#define BK4829_REG37_DSP_EN_CLR    0x0000u

/* <14:12> DSP Voltage Setting */
#define BK4829_REG37_DSP_VOLTAGE_SETTING_MASK   0x7000u
#define BK4829_REG37_DSP_VOLTAGE_SETTING_SHIFT  12u
#define BK4829_REG37_DSP_VOLTAGE_SETTING(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0x7000u))

/* <11> ANA LDO Selection. 1=2.7v, 0=2.4v */
#define BK4829_REG37_ANA_LDO_SEL_MASK   0x0800u
#define BK4829_REG37_ANA_LDO_SEL_SHIFT  11u
#define BK4829_REG37_ANA_LDO_SEL_SET    0x0800u
#define BK4829_REG37_ANA_LDO_SEL_CLR    0x0000u
#define BK4829_REG37_ANA_LDO_SEL_V_2P7V   0x0800u
#define BK4829_REG37_ANA_LDO_SEL_V_2P4V   0x0000u

/* <10> VCO LDO Selection. 1=2.7v, 0=2.4v */
#define BK4829_REG37_VCO_LDO_SEL_MASK   0x0400u
#define BK4829_REG37_VCO_LDO_SEL_SHIFT  10u
#define BK4829_REG37_VCO_LDO_SEL_SET    0x0400u
#define BK4829_REG37_VCO_LDO_SEL_CLR    0x0000u
#define BK4829_REG37_VCO_LDO_SEL_V_2P7V   0x0400u
#define BK4829_REG37_VCO_LDO_SEL_V_2P4V   0x0000u

/* <9> RF LDO Selection. 1=2.7v, 0=2.4v */
#define BK4829_REG37_RF_LDO_SEL_MASK   0x0200u
#define BK4829_REG37_RF_LDO_SEL_SHIFT  9u
#define BK4829_REG37_RF_LDO_SEL_SET    0x0200u
#define BK4829_REG37_RF_LDO_SEL_CLR    0x0000u
#define BK4829_REG37_RF_LDO_SEL_V_2P7V   0x0200u
#define BK4829_REG37_RF_LDO_SEL_V_2P4V   0x0000u

/* <8> dac_drv2_en */
#define BK4829_REG37_DAC_DRV2_EN_MASK   0x0100u
#define BK4829_REG37_DAC_DRV2_EN_SHIFT  8u
#define BK4829_REG37_DAC_DRV2_EN_SET    0x0100u
#define BK4829_REG37_DAC_DRV2_EN_CLR    0x0000u

/* <7> ANA LDO Bypass. 1=Bypass, 0=Enable */
#define BK4829_REG37_ANA_LDO_BYPASS_MASK   0x0080u
#define BK4829_REG37_ANA_LDO_BYPASS_SHIFT  7u
#define BK4829_REG37_ANA_LDO_BYPASS_SET    0x0080u
#define BK4829_REG37_ANA_LDO_BYPASS_CLR    0x0000u
#define BK4829_REG37_ANA_LDO_BYPASS_BYPASS   0x0080u
#define BK4829_REG37_ANA_LDO_BYPASS_ENABLE   0x0000u

/* <6> VCO LDO Bypass. 1=Bypass, 0=Enable */
#define BK4829_REG37_VCO_LDO_BYPASS_MASK   0x0040u
#define BK4829_REG37_VCO_LDO_BYPASS_SHIFT  6u
#define BK4829_REG37_VCO_LDO_BYPASS_SET    0x0040u
#define BK4829_REG37_VCO_LDO_BYPASS_CLR    0x0000u
#define BK4829_REG37_VCO_LDO_BYPASS_BYPASS   0x0040u
#define BK4829_REG37_VCO_LDO_BYPASS_ENABLE   0x0000u

/* <5> RF LDO Bypass. 1=Bypass, 0=Enable */
#define BK4829_REG37_RF_LDO_BYPASS_MASK   0x0020u
#define BK4829_REG37_RF_LDO_BYPASS_SHIFT  5u
#define BK4829_REG37_RF_LDO_BYPASS_SET    0x0020u
#define BK4829_REG37_RF_LDO_BYPASS_CLR    0x0000u
#define BK4829_REG37_RF_LDO_BYPASS_BYPASS   0x0020u
#define BK4829_REG37_RF_LDO_BYPASS_ENABLE   0x0000u

/* <4> ANA LDO ENABLE */
#define BK4829_REG37_ANA_LDO_EN_MASK   0x0010u
#define BK4829_REG37_ANA_LDO_EN_SHIFT  4u
#define BK4829_REG37_ANA_LDO_EN_SET    0x0010u
#define BK4829_REG37_ANA_LDO_EN_CLR    0x0000u

/* <3> RF LDO ENABLE */
#define BK4829_REG37_RF_LDO_EN_MASK   0x0008u
#define BK4829_REG37_RF_LDO_EN_SHIFT  3u
#define BK4829_REG37_RF_LDO_EN_SET    0x0008u
#define BK4829_REG37_RF_LDO_EN_CLR    0x0000u

/* <2> 1=Enable, 0=Disable. VCO LDO ENABLE */
#define BK4829_REG37_EN_DIS_MASK   0x0004u
#define BK4829_REG37_EN_DIS_SHIFT  2u
#define BK4829_REG37_EN_DIS_SET    0x0004u
#define BK4829_REG37_EN_DIS_CLR    0x0000u
#define BK4829_REG37_EN_DIS_ENABLE   0x0004u
#define BK4829_REG37_EN_DIS_DISABLEP_VCO_LDO_ENABLE   0x0000u

/* <1> XTAL Enable. 1=Enable, 0=Disable */
#define BK4829_REG37_XTAL_EN_MASK   0x0002u
#define BK4829_REG37_XTAL_EN_SHIFT  1u
#define BK4829_REG37_XTAL_EN_SET    0x0002u
#define BK4829_REG37_XTAL_EN_CLR    0x0000u
#define BK4829_REG37_XTAL_EN_ENABLE   0x0002u
#define BK4829_REG37_XTAL_EN_DISABLE   0x0000u

/* <0> Band-Gap Enable. 1=Enable, 0=Disable */
#define BK4829_REG37_BAND_GAP_EN_MASK   0x0001u
#define BK4829_REG37_BAND_GAP_EN_SHIFT  0u
#define BK4829_REG37_BAND_GAP_EN_SET    0x0001u
#define BK4829_REG37_BAND_GAP_EN_CLR    0x0000u
#define BK4829_REG37_BAND_GAP_EN_ENABLE   0x0001u
#define BK4829_REG37_BAND_GAP_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_38 (0x38) */
/* Frequency(Hz)=(freq_hi16<<16 + freq_lo16)*10 */
/* Reset: 0x3A98 */

/* ============================================================ */
/* REG_39 (0x39) */
/* Reset: 0x0271 */

/* ============================================================ */
/* REG_3B (0x3B) */
/* Crystal Frequency Low-16bits. LSB->5Hz */
/* Reset: 0x5880 */

/* ============================================================ */
/* REG_3C (0x3C) */
/* Reset: 0x4F80 */

/* <15:8> Crystal Frequency High-8bits */
#define BK4829_REG3C_XTAL_FREQ_HI_8BITS_MASK   0xFF00u
#define BK4829_REG3C_XTAL_FREQ_HI_8BITS_SHIFT  8u
#define BK4829_REG3C_XTAL_FREQ_HI_8BITS(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))

/* <7:6> Crystal Frequency Mode Selection. 00~=13MHz, 01~=19.2MHz, 10~=26MHz, 11~=38.4MHz */
#define BK4829_REG3C_XTAL_FREQ_MODE_SEL_MASK   0x00C0u
#define BK4829_REG3C_XTAL_FREQ_MODE_SEL_SHIFT  6u
#define BK4829_REG3C_XTAL_FREQ_MODE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 6u) & 0x00C0u))

/* ============================================================ */
/* REG_3E (0x3E) */
/* Band Selection Threshold. ~=VCO Max Frequency(Hz)/96/640 */
/* Reset: 0x8E6A */

/* ============================================================ */
/* REG_3F (0x3F) */
/* Reset: 0x0000 */

/* <15> FSK Tx Finished Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_MASK   0x8000u
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_SHIFT  15u
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_SET    0x8000u
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_ENABLE   0x8000u
#define BK4829_REG3F_FSK_TX_FINISHED_IRQ_EN_DISABLE   0x0000u

/* <14> FSK FIFO Almost Empty Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_MASK   0x4000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_SHIFT  14u
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_SET    0x4000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_CLR    0x0000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_ENABLE   0x4000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_EMPTY_IRQ_DISABLE   0x0000u

/* <13> FSK Rx Finished Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_MASK   0x2000u
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_SHIFT  13u
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_SET    0x2000u
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_ENABLE   0x2000u
#define BK4829_REG3F_FSK_RX_FINISHED_IRQ_EN_DISABLE   0x0000u

/* <12> FSK FIFO Almost Full Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_MASK   0x1000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_SHIFT  12u
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_SET    0x1000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_CLR    0x0000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_ENABLE   0x1000u
#define BK4829_REG3F_FSK_FIFO_ALMOST_FULL_IRQ_DISABLE   0x0000u

/* <11> DTMF/5TONE Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_MASK   0x0800u
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_SHIFT  11u
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_SET    0x0800u
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_ENABLE   0x0800u
#define BK4829_REG3F_DTMF_5TONE_FOUND_IRQ_EN_DISABLE   0x0000u

/* <10> CTCSS/CDCSS Tail Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_MASK   0x0400u
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_SHIFT  10u
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_SET    0x0400u
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_CLR    0x0000u
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_ENABLE   0x0400u
#define BK4829_REG3F_CTCSS_CDCSS_TAIL_FOUND_IRQ_DISABLE   0x0000u

/* <9> CDCSS Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_MASK   0x0200u
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_SHIFT  9u
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_SET    0x0200u
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_ENABLE   0x0200u
#define BK4829_REG3F_CDCSS_FOUND_IRQ_EN_DISABLE   0x0000u

/* <8> CDCSS Lost Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_MASK   0x0100u
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_SHIFT  8u
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_SET    0x0100u
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_ENABLE   0x0100u
#define BK4829_REG3F_CDCSS_LOST_IRQ_EN_DISABLE   0x0000u

/* <7> CTCSS Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_MASK   0x0080u
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_SHIFT  7u
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_SET    0x0080u
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_ENABLE   0x0080u
#define BK4829_REG3F_CTCSS_FOUND_IRQ_EN_DISABLE   0x0000u

/* <6> CTCSS Lost Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_MASK   0x0040u
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_SHIFT  6u
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_SET    0x0040u
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_ENABLE   0x0040u
#define BK4829_REG3F_CTCSS_LOST_IRQ_EN_DISABLE   0x0000u

/* <5> VoX Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_MASK   0x0020u
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_SHIFT  5u
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_SET    0x0020u
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_ENABLE   0x0020u
#define BK4829_REG3F_VOX_FOUND_IRQ_EN_DISABLE   0x0000u

/* <4> VoX Lost Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_VOX_LOST_IRQ_EN_MASK   0x0010u
#define BK4829_REG3F_VOX_LOST_IRQ_EN_SHIFT  4u
#define BK4829_REG3F_VOX_LOST_IRQ_EN_SET    0x0010u
#define BK4829_REG3F_VOX_LOST_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_VOX_LOST_IRQ_EN_ENABLE   0x0010u
#define BK4829_REG3F_VOX_LOST_IRQ_EN_DISABLE   0x0000u

/* <3> Squelch Found Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_MASK   0x0008u
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_SHIFT  3u
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_SET    0x0008u
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_ENABLE   0x0008u
#define BK4829_REG3F_SQL_FOUND_IRQ_EN_DISABLE   0x0000u

/* <2> Squelch Lost Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_SQL_LOST_IRQ_EN_MASK   0x0004u
#define BK4829_REG3F_SQL_LOST_IRQ_EN_SHIFT  2u
#define BK4829_REG3F_SQL_LOST_IRQ_EN_SET    0x0004u
#define BK4829_REG3F_SQL_LOST_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_SQL_LOST_IRQ_EN_ENABLE   0x0004u
#define BK4829_REG3F_SQL_LOST_IRQ_EN_DISABLE   0x0000u

/* <1> FSK Rx Sync Interrupt Enable. 1=Enable, 0=Disable */
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_MASK   0x0002u
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_SHIFT  1u
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_SET    0x0002u
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_CLR    0x0000u
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_ENABLE   0x0002u
#define BK4829_REG3F_FSK_RX_SYNC_IRQ_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_40 (0x40) */
/* Reset: 0x14D0 */

/* <12> Enable RF Tx Deviation. 1=Enable, 0=Disable */
#define BK4829_REG40_EN_RF_TX_DEVIATION_MASK   0x1000u
#define BK4829_REG40_EN_RF_TX_DEVIATION_SHIFT  12u
#define BK4829_REG40_EN_RF_TX_DEVIATION_SET    0x1000u
#define BK4829_REG40_EN_RF_TX_DEVIATION_CLR    0x0000u
#define BK4829_REG40_EN_RF_TX_DEVIATION_ENABLE   0x1000u
#define BK4829_REG40_EN_RF_TX_DEVIATION_DISABLE   0x0000u

/* <11:0> RF Tx Deviation Tuning (Apply for both in-band signal and sub-audio signal). 0=min, 0xFFF=max */
#define BK4829_REG40_RF_TX_DEVIATION_TUNING_MASK   0x0FFFu
#define BK4829_REG40_RF_TX_DEVIATION_TUNING_SHIFT  0u
#define BK4829_REG40_RF_TX_DEVIATION_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0FFFu))
#define BK4829_REG40_RF_TX_DEVIATION_TUNING_MIN   0x0000u
#define BK4829_REG40_RF_TX_DEVIATION_TUNING_MAX   0x0FFFu

/* ============================================================ */
/* REG_43 (0x43) */
/* Reset: 0x4040 */

/* <14:12> RF filter bandwidth (Apass=0.1dB) 000 = 2 kHz 001 = 2.5 kHz 010 = 3 kHz 011 = 3.5 kHz 100 = 4kHz 101 = 4.5 kHz 110 =5.0kHz 111 = 5.5kHz if REG_43 * <5> 1, RF filter bandwidth *=2; */
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_MASK   0x7000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_SHIFT  12u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0x7000u))
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_2_KHZ   0x0000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_2P5_KHZ   0x1000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_3_KHZ   0x2000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_3P5_KHZ   0x3000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_4KHZ   0x4000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_4P5_KHZ   0x5000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_5P0KHZ   0x6000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_APASS_V_5P5KHZ_IF_REG_43_5_1_RF_FILTER_BANDWIDTH_2   0x7000u

/* <11:9> RF filter bandwidth when signal is weak (Apass=0.1dB) 000 = 2 kHz 001 = 2.5 kHz 010 = 3 kHz 011 = 3.5 kHz 100 = 4kHz 101 = 4.5 kHz 110 = 5.0kHz 111 = 5.5 kHz if REG_43 * <5> 1, RF filter bandwidth *=2; */
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_MASK   0x0E00u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_SHIFT  9u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK(v)     ((uint16_t)((((uint16_t)(v)) << 9u) & 0x0E00u))
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_2_KHZ   0x0000u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_2P5_KHZ   0x0200u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_3_KHZ   0x0400u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_3P5_KHZ   0x0600u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_4KHZ   0x0800u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_4P5_KHZ   0x0A00u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_5P0KHZ   0x0C00u
#define BK4829_REG43_RF_FILT_BANDWIDTH_SIGNAL_WEAK_V_5P5_KHZ_IF_REG_43_5_1_RF_FILTER_BANDWIDTH_2   0x0E00u

/* <8:6> AF Tx LPF2 filter Band Width (Apass=1dB) Selection. 100=5.5 kHz 101=5.0 kHz 110=4.5 kHz 111=4 kHz 000=3 kHz 001=2.5 kHz 010=2.75 kHz 011=3.5 kHz */
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_MASK   0x01C0u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_SHIFT  6u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND(v)     ((uint16_t)((((uint16_t)(v)) << 6u) & 0x01C0u))
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_5P5_KHZ   0x0100u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_5P0_KHZ   0x0140u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_4P5_KHZ   0x0180u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_4_KHZ   0x01C0u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_3_KHZ   0x0000u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_2P5_KHZ   0x0040u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_2P75_KHZ   0x0080u
#define BK4829_REG43_AF_TX_LPF2_FILT_BAND_V_3P5_KHZ   0x00C0u

/* <5:4> BW Mode Selection. 00=12.5k, 01=6.25k, 10=25k/20k */
#define BK4829_REG43_BW_MODE_SEL_MASK   0x0030u
#define BK4829_REG43_BW_MODE_SEL_SHIFT  4u
#define BK4829_REG43_BW_MODE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x0030u))
#define BK4829_REG43_BW_MODE_SEL_V_12P5K   0x0000u
#define BK4829_REG43_BW_MODE_SEL_V_6P25K   0x0010u
#define BK4829_REG43_BW_MODE_SEL_V_25K_20K   0x0020u

/* <2> Gain after FM Demodulation. 1=6dB, 0=0 dB */
#define BK4829_REG43_GAIN_FM_DEMODULATION_MASK   0x0004u
#define BK4829_REG43_GAIN_FM_DEMODULATION_SHIFT  2u
#define BK4829_REG43_GAIN_FM_DEMODULATION_SET    0x0004u
#define BK4829_REG43_GAIN_FM_DEMODULATION_CLR    0x0000u
#define BK4829_REG43_GAIN_FM_DEMODULATION_V_6DB   0x0004u
#define BK4829_REG43_GAIN_FM_DEMODULATION_V_0_DB   0x0000u

/* ============================================================ */
/* REG_44 (0x44) */
/* 300Hz AF Response coefficient for Tx */
/* Reset: 0x9009 */

/* ============================================================ */
/* REG_45 (0x45) */
/* 300Hz AF Response coefficient for Tx */
/* Reset: 0x31A9 */

/* ============================================================ */
/* REG_46 (0x46) */
/* Reset: 0x0050 */

/* <10:0> Voice Amplitude Threshold for VOX=1 detect */
#define BK4829_REG46_VOICE_AMP_THR_VOX_DETECT_MASK   0x07FFu
#define BK4829_REG46_VOICE_AMP_THR_VOX_DETECT_SHIFT  0u
#define BK4829_REG46_VOICE_AMP_THR_VOX_DETECT(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x07FFu))

/* ============================================================ */
/* REG_47 (0x47) */
/* Reset: 0x2100 */

/* <13> AF Output Inverse Mode. 1=Inverse */
#define BK4829_REG47_AF_OUT_INV_MODE_MASK   0x2000u
#define BK4829_REG47_AF_OUT_INV_MODE_SHIFT  13u
#define BK4829_REG47_AF_OUT_INV_MODE_SET    0x2000u
#define BK4829_REG47_AF_OUT_INV_MODE_CLR    0x0000u
#define BK4829_REG47_AF_OUT_INV_MODE_INVERSE   0x2000u

/* <11:8> AF Output Selection. 0x0=Mute, 0x1=Normal AF Out, 0x2=Tone Out for Rx (Should enable Tone1 first), 0x3=Beep Out for Tx (Should enable Tone1 first and set REG_03[9]=1 to enable AF, 0x6=CTCSS/CDCSS Out for Rx Test, 0x8=FSK Out for Rx Test, Others=Reserved */
#define BK4829_REG47_AF_OUT_SEL_MASK   0x0F00u
#define BK4829_REG47_AF_OUT_SEL_SHIFT  8u
#define BK4829_REG47_AF_OUT_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))
#define BK4829_REG47_AF_OUT_SEL_MUTE   0x0000u
#define BK4829_REG47_AF_OUT_SEL_NORMAL_AF_OUT   0x0100u
#define BK4829_REG47_AF_OUT_SEL_TONE_OUT_FOR_RX_SHOULD_ENABLE_TONE1_FIRST   0x0200u
#define BK4829_REG47_AF_OUT_SEL_BEEP_OUT_FOR_TX_SHOULD_ENABLE_TONE1_FIRST_AND_SET_REG_03_9_1_TO_ENABLE_AF   0x0300u
#define BK4829_REG47_AF_OUT_SEL_CTCSS_CDCSS_OUT_FOR_RX_TEST   0x0600u
#define BK4829_REG47_AF_OUT_SEL_FSK_OUT_FOR_RX_TEST_OTHERS_RESERVED   0x0800u

/* <0> AF Tx Filter Bypass All. 1=Bypass All AF Tx filter, 0=Normal */
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_MASK   0x0001u
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_SHIFT  0u
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_SET    0x0001u
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_CLR    0x0000u
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_BYPASS_ALL_AF_TX_FILTER   0x0001u
#define BK4829_REG47_AF_TX_FILT_BYPASS_ALL_NORMAL   0x0000u

/* ============================================================ */
/* REG_48 (0x48) */
/* Reset: 0x03CF */

/* <9:4> AF Rx Gain2. -28dB~3.5dB, 0.5dB/step */
#define BK4829_REG48_AF_RX_GAIN2_MASK   0x03F0u
#define BK4829_REG48_AF_RX_GAIN2_SHIFT  4u
#define BK4829_REG48_AF_RX_GAIN2(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x03F0u))

/* <3:0> AF DAC Gain (after Gain1 and Gain2). 1111=max, 0000=min, about 2dB/step */
#define BK4829_REG48_AF_DAC_GAIN_MASK   0x000Fu
#define BK4829_REG48_AF_DAC_GAIN_SHIFT  0u
#define BK4829_REG48_AF_DAC_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x000Fu))
#define BK4829_REG48_AF_DAC_GAIN_MAX   0x000Fu
#define BK4829_REG48_AF_DAC_GAIN_MIN_ABOUT_2DB_STEP   0x0000u

/* ============================================================ */
/* REG_49 (0x49) */
/* Reset: 0x2830 */

/* <15:14> High/Low Lo Selection. 0X=Auto High/Low Lo, 10=Low Lo, 11=High Lo */
#define BK4829_REG49_HI_LO_SEL_MASK   0xC000u
#define BK4829_REG49_HI_LO_SEL_SHIFT  14u
#define BK4829_REG49_HI_LO_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 14u) & 0xC000u))
#define BK4829_REG49_HI_LO_SEL_LOW_LO   0x8000u
#define BK4829_REG49_HI_LO_SEL_HIGH_LO   0xC000u

/* <13:7> RF AGC High Threshold. LSB->1dB */
#define BK4829_REG49_RF_AGC_HI_THR_MASK   0x3F80u
#define BK4829_REG49_RF_AGC_HI_THR_SHIFT  7u
#define BK4829_REG49_RF_AGC_HI_THR(v)     ((uint16_t)((((uint16_t)(v)) << 7u) & 0x3F80u))

/* <6:0> RF AGC Low Threshold. LSB->1dB */
#define BK4829_REG49_RF_AGC_LO_THR_MASK   0x007Fu
#define BK4829_REG49_RF_AGC_LO_THR_SHIFT  0u
#define BK4829_REG49_RF_AGC_LO_THR(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))

/* ============================================================ */
/* REG_4D (0x4D) */
/* Reset: 0x0020 */

/* <7:0> Glitch threshold for Squelch=0 */
#define BK4829_REG4D_GLITCH_THR_SQL_MASK   0x00FFu
#define BK4829_REG4D_GLITCH_THR_SQL_SHIFT  0u
#define BK4829_REG4D_GLITCH_THR_SQL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_4E (0x4E) */
/* Reset: 0x6F08 */

/* <15:12> Squelch=1 Delay Setting */
#define BK4829_REG4E_SQL_DLY_SETTING_MASK   0xF000u
#define BK4829_REG4E_SQL_DLY_SETTING_SHIFT  12u
#define BK4829_REG4E_SQL_DLY_SETTING(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0xF000u))

/* <11:8> Squelch=0 Delay Setting */
#define BK4829_REG4E_SQL_DLY_SETTING_11_8_MASK   0x0F00u
#define BK4829_REG4E_SQL_DLY_SETTING_11_8_SHIFT  8u
#define BK4829_REG4E_SQL_DLY_SETTING_11_8(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0F00u))

/* <7:0> Glitch threshold for Squelch=1 */
#define BK4829_REG4E_GLITCH_THR_SQL_MASK   0x00FFu
#define BK4829_REG4E_GLITCH_THR_SQL_SHIFT  0u
#define BK4829_REG4E_GLITCH_THR_SQL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_4F (0x4F) */
/* Reset: 0x2F2E */

/* <14:8> Ex-noise threshold for Squelch=0 */
#define BK4829_REG4F_EX_NOISE_THR_SQL_MASK   0x7F00u
#define BK4829_REG4F_EX_NOISE_THR_SQL_SHIFT  8u
#define BK4829_REG4F_EX_NOISE_THR_SQL(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x7F00u))

/* <6:0> Ex-noise threshold for Squelch=1 */
#define BK4829_REG4F_EX_NOISE_THR_SQL_6_0_MASK   0x007Fu
#define BK4829_REG4F_EX_NOISE_THR_SQL_6_0_SHIFT  0u
#define BK4829_REG4F_EX_NOISE_THR_SQL_6_0(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))

/* ============================================================ */
/* REG_50 (0x50) */
/* Reset: 0x0000 */

/* <15> Enable AF Tx Mute (for DTMF Tx or other applications). 1=Mute, 0=Normal */
#define BK4829_REG50_EN_AF_TX_MUTE_MASK   0x8000u
#define BK4829_REG50_EN_AF_TX_MUTE_SHIFT  15u
#define BK4829_REG50_EN_AF_TX_MUTE_SET    0x8000u
#define BK4829_REG50_EN_AF_TX_MUTE_CLR    0x0000u
#define BK4829_REG50_EN_AF_TX_MUTE_MUTE   0x8000u
#define BK4829_REG50_EN_AF_TX_MUTE_NORMAL   0x0000u

/* ============================================================ */
/* REG_51 (0x51) */
/* Reset: 0x0000 */

/* <15> 1=Enable Tx CTCSS/CDCSS, 0=Disable */
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_MASK   0x8000u
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_SHIFT  15u
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_SET    0x8000u
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_CLR    0x0000u
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_ENABLE_TX_CTCSS_CDCSS   0x8000u
#define BK4829_REG51_EN_TX_CTCSS_CDCSS_DIS_DISABLE   0x0000u

/* <14> 1=GPIO0 (PIN2) Input for CDCSS, 0=Normal Mode */
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_MASK   0x4000u
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_SHIFT  14u
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_SET    0x4000u
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_CLR    0x0000u
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_GPIO0_PIN2_INPUT_FOR_CDCSS   0x4000u
#define BK4829_REG51_GPIO0_IN_CDCSS_NORMAL_MODE_NORMAL_MODE   0x0000u

/* <13> 1=Transmit negative CDCSS code 0=Transmit positive CDCSS code */
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_MASK   0x2000u
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_SHIFT  13u
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_SET    0x2000u
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_CLR    0x0000u
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_TRANSMIT_NEGATIVE_CDCSS_CODE   0x2000u
#define BK4829_REG51_TRANSMIT_NEGATIVE_CDCSS_CODE_TRANSMIT_TRANSMIT_POSITIVE_CDCSS_CODE   0x0000u

/* <12> CTCSS/CDCSS mode selection. 1=CTCSS, 0=CDCSS */
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_MASK   0x1000u
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_SHIFT  12u
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_SET    0x1000u
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_CLR    0x0000u
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_CTCSS   0x1000u
#define BK4829_REG51_CTCSS_CDCSS_MODE_SEL_CDCSS   0x0000u

/* <11> CDCSS 24/23bit selection. 1=24bit, 0=23bit */
#define BK4829_REG51_CDCSS_23BIT_SEL_MASK   0x0800u
#define BK4829_REG51_CDCSS_23BIT_SEL_SHIFT  11u
#define BK4829_REG51_CDCSS_23BIT_SEL_SET    0x0800u
#define BK4829_REG51_CDCSS_23BIT_SEL_CLR    0x0000u
#define BK4829_REG51_CDCSS_23BIT_SEL_V_24BIT   0x0800u
#define BK4829_REG51_CDCSS_23BIT_SEL_V_23BIT   0x0000u

/* <10> 1050Hz Detection Mode. 1=1050/4 Detect Enable, CTC1 should be set to 1050/4 Hz */
#define BK4829_REG51_1050HZ_DETECTION_MODE_MASK   0x0400u
#define BK4829_REG51_1050HZ_DETECTION_MODE_SHIFT  10u
#define BK4829_REG51_1050HZ_DETECTION_MODE_SET    0x0400u
#define BK4829_REG51_1050HZ_DETECTION_MODE_CLR    0x0000u
#define BK4829_REG51_1050HZ_DETECTION_MODE_V_1050_4_DETECT_ENABLE_CTC1_SHOULD_BE_SET_TO_1050_4_HZ   0x0400u

/* <9> Auto CDCSS Bw Mode. 1=Disable, 0=Enable */
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_MASK   0x0200u
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_SHIFT  9u
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_SET    0x0200u
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_CLR    0x0000u
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_DISABLE   0x0200u
#define BK4829_REG51_AUTO_CDCSS_BW_MODE_ENABLE   0x0000u

/* <8> Auto CTCSS Bw Mode. 0=Enable, 1=Disable */
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_MASK   0x0100u
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_SHIFT  8u
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_SET    0x0100u
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_CLR    0x0000u
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_ENABLE   0x0000u
#define BK4829_REG51_AUTO_CTCSS_BW_MODE_DISABLE   0x0100u

/* <6:0> CTCSS/CDCSS Tx Gain1 Tuning. 0=min, 0x7F=max */
#define BK4829_REG51_CTCSS_CDCSS_TX_GAIN1_TUNING_MASK   0x007Fu
#define BK4829_REG51_CTCSS_CDCSS_TX_GAIN1_TUNING_SHIFT  0u
#define BK4829_REG51_CTCSS_CDCSS_TX_GAIN1_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))
#define BK4829_REG51_CTCSS_CDCSS_TX_GAIN1_TUNING_MIN   0x0000u
#define BK4829_REG51_CTCSS_CDCSS_TX_GAIN1_TUNING_MAX   0x007Fu

/* ============================================================ */
/* REG_52 (0x52) */
/* Reset: 0x028F */

/* <15> Enable 120/180/240 degree shift CTCSS or 134.4Hz Tail when CDCSS mode. When Rx, you can set this bit=1 to clear CTCSS Phase Shift Detect. 0=Normal, 1=Enable */
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_MASK   0x8000u
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_SHIFT  15u
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_SET    0x8000u
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_CLR    0x0000u
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_NORMAL   0x0000u
#define BK4829_REG52_EN_DEGREE_SHIFT_CTCSS_ENABLE   0x8000u

/* <14:13> CTCSS tail mode selection (only valid when REG_52 * <15> 1).: 00=for 134.4Hz CTCSS Tail when CDCSS mode. 01=CTCSS0 120�phase shift, 10=CTCSS0 180�phase shift 11=CTCSS0 240�phase shift */
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_MASK   0x6000u
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_SHIFT  13u
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 13u) & 0x6000u))
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_FOR_134P4HZ_CTCSS_TAIL_WHEN_CDCSS_MODEP   0x0000u
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_CTCSS0_120_PHASE_SHIFT   0x2000u
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_CTCSS0_180_PHASE_SHIFT   0x4000u
#define BK4829_REG52_CTCSS_TAIL_MODE_SEL_CTCSS0_240_PHASE_SHIFT   0x6000u

/* <12> CTCSS Detection Threshold Mode, 1=~0.1%, 0=0.1 Hz */
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_MASK   0x1000u
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_SHIFT  12u
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_SET    0x1000u
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_CLR    0x0000u
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_V_0P1PCT   0x1000u
#define BK4829_REG52_CTCSS_DETECTION_THR_MODE_V_0P1_HZ   0x0000u

/* <11:6> CTCSS found detect threshold */
#define BK4829_REG52_CTCSS_FOUND_DETECT_THR_MASK   0x0FC0u
#define BK4829_REG52_CTCSS_FOUND_DETECT_THR_SHIFT  6u
#define BK4829_REG52_CTCSS_FOUND_DETECT_THR(v)     ((uint16_t)((((uint16_t)(v)) << 6u) & 0x0FC0u))

/* <5:0> CTCSS lost detect threshold */
#define BK4829_REG52_CTCSS_LOST_DETECT_THR_MASK   0x003Fu
#define BK4829_REG52_CTCSS_LOST_DETECT_THR_SHIFT  0u
#define BK4829_REG52_CTCSS_LOST_DETECT_THR(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x003Fu))

/* ============================================================ */
/* REG_53 (0x53) */
/* Reset: 0x0011 */

/* <13:0> ALC Time Constant. * <5:3> for Release Time * <2:0> for Attack Time: 000=0 ms 001=6 ms 010=12ms 011=24ms 100=48ms 101=96ms 110=192ms 111=384ms */
#define BK4829_REG53_ALC_TIME_CONSTANT_MASK   0x3FFFu
#define BK4829_REG53_ALC_TIME_CONSTANT_SHIFT  0u
#define BK4829_REG53_ALC_TIME_CONSTANT(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x3FFFu))
#define BK4829_REG53_ALC_TIME_CONSTANT_V_0_MS   0x0000u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_6_MS   0x0001u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_12MS   0x0002u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_24MS   0x0003u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_48MS   0x0004u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_96MS   0x0005u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_192MS   0x0006u
#define BK4829_REG53_ALC_TIME_CONSTANT_V_384MS   0x0007u

/* <4:2> ALC Amplitude Detection Frame Length 000=0 ms 001=2ms 010=4ms ... 100=14ms */
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_MASK   0x001Cu
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_SHIFT  2u
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN(v)     ((uint16_t)((((uint16_t)(v)) << 2u) & 0x001Cu))
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_V_0_MS   0x0000u
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_V_2MS   0x0004u
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_V_4MS_PPP   0x0008u
#define BK4829_REG53_ALC_AMP_DETECTION_FRAME_LEN_V_14MS   0x0010u

/* ============================================================ */
/* REG_54 (0x54) */
/* 300Hz AF Response coefficient for Rx */
/* Reset: 0x9009 */

/* ============================================================ */
/* REG_55 (0x55) */
/* 300Hz AF Response coefficient for Rx */
/* Reset: 0x31A9 */

/* ============================================================ */
/* REG_58 (0x58) */
/* Reset: 0x0000 */

/* <15:13> FSK Tx Mode Selection. 000 for FSK1.2K and FSK2.4K Tx, 001 for FFSK1200/1800 Tx, 011 for FFSK1200/2400 Tx, 101 for NOAA SAME Tx */
#define BK4829_REG58_FSK_TX_MODE_SEL_MASK   0xE000u
#define BK4829_REG58_FSK_TX_MODE_SEL_SHIFT  13u
#define BK4829_REG58_FSK_TX_MODE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 13u) & 0xE000u))

/* <12:10> FSK Rx Mode Selection. 000 for FSK1.2K, FSK2.4K Rx and NOAA SAME Rx, 111 for FFSK1200/1800 Rx, 100 for FFSK1200/2400 Rx */
#define BK4829_REG58_FSK_RX_MODE_SEL_MASK   0x1C00u
#define BK4829_REG58_FSK_RX_MODE_SEL_SHIFT  10u
#define BK4829_REG58_FSK_RX_MODE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 10u) & 0x1C00u))

/* <9:8> FSK Rx Gain */
#define BK4829_REG58_FSK_RX_GAIN_MASK   0x0300u
#define BK4829_REG58_FSK_RX_GAIN_SHIFT  8u
#define BK4829_REG58_FSK_RX_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x0300u))

/* <5:4> FSK Preamble Type Selection. 11=0xAA, 10=0x55, 00=0xAA or 0x55 due to the MSB of FSK Sync Byte 0 */
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL_MASK   0x0030u
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL_SHIFT  4u
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x0030u))
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL_V_0XAA   0x0030u
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL_V_0X55   0x0020u
#define BK4829_REG58_FSK_PREAMBLE_TYPE_SEL_V_0XAA_OR_0X55_DUE_TO_THE_MSB_OF_FSK_SYNC_BYTE_0   0x0000u

/* <3:1> FSK Rx Band Width Setting. 100 for FSK 2.4K and FFSK1200/2400, 000 for FSK 1.2K, 001 for FFSK1200/1800, 010 for NOAA SAME Rx */
#define BK4829_REG58_FSK_RX_BAND_BW_SETTING_MASK   0x000Eu
#define BK4829_REG58_FSK_RX_BAND_BW_SETTING_SHIFT  1u
#define BK4829_REG58_FSK_RX_BAND_BW_SETTING(v)     ((uint16_t)((((uint16_t)(v)) << 1u) & 0x000Eu))

/* <0> FSK Enable. 1=Enable, 0=Disable */
#define BK4829_REG58_FSK_EN_MASK   0x0001u
#define BK4829_REG58_FSK_EN_SHIFT  0u
#define BK4829_REG58_FSK_EN_SET    0x0001u
#define BK4829_REG58_FSK_EN_CLR    0x0000u
#define BK4829_REG58_FSK_EN_ENABLE   0x0001u
#define BK4829_REG58_FSK_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_59 (0x59) */
/* Reset: 0x0000 */

/* <15> Clear TX FIFO, 1=clear */
#define BK4829_REG59_CLR_TX_FIFO_CLR_MASK   0x8000u
#define BK4829_REG59_CLR_TX_FIFO_CLR_SHIFT  15u
#define BK4829_REG59_CLR_TX_FIFO_CLR_SET    0x8000u
#define BK4829_REG59_CLR_TX_FIFO_CLR_CLR    0x0000u
#define BK4829_REG59_CLR_TX_FIFO_CLR_CLEAR   0x8000u

/* <14> Clear RX FIFO, 1=clear */
#define BK4829_REG59_CLR_RX_FIFO_CLR_MASK   0x4000u
#define BK4829_REG59_CLR_RX_FIFO_CLR_SHIFT  14u
#define BK4829_REG59_CLR_RX_FIFO_CLR_SET    0x4000u
#define BK4829_REG59_CLR_RX_FIFO_CLR_CLR    0x0000u
#define BK4829_REG59_CLR_RX_FIFO_CLR_CLEAR   0x4000u

/* <13> 1=Enable FSK Scramble */
#define BK4829_REG59_EN_FSK_SCRAMBLE_MASK   0x2000u
#define BK4829_REG59_EN_FSK_SCRAMBLE_SHIFT  13u
#define BK4829_REG59_EN_FSK_SCRAMBLE_SET    0x2000u
#define BK4829_REG59_EN_FSK_SCRAMBLE_CLR    0x0000u
#define BK4829_REG59_EN_FSK_SCRAMBLE_ENABLE_FSK_SCRAMBLE   0x2000u

/* <12> 1=Enable FSK RX */
#define BK4829_REG59_EN_FSK_RX_MASK   0x1000u
#define BK4829_REG59_EN_FSK_RX_SHIFT  12u
#define BK4829_REG59_EN_FSK_RX_SET    0x1000u
#define BK4829_REG59_EN_FSK_RX_CLR    0x0000u
#define BK4829_REG59_EN_FSK_RX_ENABLE_FSK_RX   0x1000u

/* <11> 1=Enable FSK TX */
#define BK4829_REG59_EN_FSK_TX_MASK   0x0800u
#define BK4829_REG59_EN_FSK_TX_SHIFT  11u
#define BK4829_REG59_EN_FSK_TX_SET    0x0800u
#define BK4829_REG59_EN_FSK_TX_CLR    0x0000u
#define BK4829_REG59_EN_FSK_TX_ENABLE_FSK_TX   0x0800u

/* <10> 1=Invert FSK data when RX */
#define BK4829_REG59_INV_FSK_DATA_RX_MASK   0x0400u
#define BK4829_REG59_INV_FSK_DATA_RX_SHIFT  10u
#define BK4829_REG59_INV_FSK_DATA_RX_SET    0x0400u
#define BK4829_REG59_INV_FSK_DATA_RX_CLR    0x0000u
#define BK4829_REG59_INV_FSK_DATA_RX_INVERT_FSK_DATA_WHEN_RX   0x0400u

/* <9> 1=Invert FSK data when TX */
#define BK4829_REG59_INV_FSK_DATA_TX_MASK   0x0200u
#define BK4829_REG59_INV_FSK_DATA_TX_SHIFT  9u
#define BK4829_REG59_INV_FSK_DATA_TX_SET    0x0200u
#define BK4829_REG59_INV_FSK_DATA_TX_CLR    0x0000u
#define BK4829_REG59_INV_FSK_DATA_TX_INVERT_FSK_DATA_WHEN_TX   0x0200u

/* <7:4> FSK Preamble Length Selection 0=1 byte, 1=2 bytes, 2=3 bytes, ..., 15=16 bytes */
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_MASK   0x00F0u
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_SHIFT  4u
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE(v)     ((uint16_t)((((uint16_t)(v)) << 4u) & 0x00F0u))
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_V_1_BYTE   0x0000u
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_V_2_BYTES   0x0010u
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_V_3_BYTES_PPP   0x0020u
#define BK4829_REG59_FSK_PREAMBLE_LEN_SEL_BYTE_V_16_BYTES   0x00F0u

/* <3> FSK Sync Length Selection. 1=4 bytes (FSK Sync Byte 0, 1, 2, 3) 0=2 bytes (FSK Sync Byte 0, 1) */
#define BK4829_REG59_FSK_SYNC_LEN_SEL_MASK   0x0008u
#define BK4829_REG59_FSK_SYNC_LEN_SEL_SHIFT  3u
#define BK4829_REG59_FSK_SYNC_LEN_SEL_SET    0x0008u
#define BK4829_REG59_FSK_SYNC_LEN_SEL_CLR    0x0000u
#define BK4829_REG59_FSK_SYNC_LEN_SEL_V_4_BYTES_FSK_SYNC_BYTE_0_1_2_3   0x0008u
#define BK4829_REG59_FSK_SYNC_LEN_SEL_V_2_BYTES_FSK_SYNC_BYTE_0_1   0x0000u

/* ============================================================ */
/* REG_5A (0x5A) */
/* Reset: 0x85CF */

/* <15:8> FSK Sync Byte 0 (Sync Byte 0 first, then 1, 2, 3) */
#define BK4829_REG5A_FSK_SYNC_BYTE_MASK   0xFF00u
#define BK4829_REG5A_FSK_SYNC_BYTE_SHIFT  8u
#define BK4829_REG5A_FSK_SYNC_BYTE(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))

/* <7:0> FSK Sync Byte 1 */
#define BK4829_REG5A_FSK_SYNC_BYTE_7_0_MASK   0x00FFu
#define BK4829_REG5A_FSK_SYNC_BYTE_7_0_SHIFT  0u
#define BK4829_REG5A_FSK_SYNC_BYTE_7_0(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_5B (0x5B) */
/* Reset: 0xAB45 */

/* <15:8> FSK Sync Byte 2 */
#define BK4829_REG5B_FSK_SYNC_BYTE_MASK   0xFF00u
#define BK4829_REG5B_FSK_SYNC_BYTE_SHIFT  8u
#define BK4829_REG5B_FSK_SYNC_BYTE(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))

/* <7:0> FSK Sync Byte 3 */
#define BK4829_REG5B_FSK_SYNC_BYTE_7_0_MASK   0x00FFu
#define BK4829_REG5B_FSK_SYNC_BYTE_7_0_SHIFT  0u
#define BK4829_REG5B_FSK_SYNC_BYTE_7_0(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_5C (0x5C) */
/* Reset: 0x0040 */

/* <6> CRC Option Enable. 1=Enable, 0=Disable */
#define BK4829_REG5C_CRC_OPTION_EN_MASK   0x0040u
#define BK4829_REG5C_CRC_OPTION_EN_SHIFT  6u
#define BK4829_REG5C_CRC_OPTION_EN_SET    0x0040u
#define BK4829_REG5C_CRC_OPTION_EN_CLR    0x0000u
#define BK4829_REG5C_CRC_OPTION_EN_ENABLE   0x0040u
#define BK4829_REG5C_CRC_OPTION_EN_DISABLE   0x0000u

/* ============================================================ */
/* REG_5D (0x5D) */
/* Reset: 0x0F00 */

/* <15:8> FSK Data Length(Byte) Low 8bits(Total 11 bits). For example, 0xF means 16 bytes length */
#define BK4829_REG5D_FSK_DATA_LEN_LO_8BITS_MASK   0xFF00u
#define BK4829_REG5D_FSK_DATA_LEN_LO_8BITS_SHIFT  8u
#define BK4829_REG5D_FSK_DATA_LEN_LO_8BITS(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))

/* <7:5> FSK Data Length(Byte) High 3bits(Total 11 bits) */
#define BK4829_REG5D_FSK_DATA_LEN_HI_3BITS_MASK   0x00E0u
#define BK4829_REG5D_FSK_DATA_LEN_HI_3BITS_SHIFT  5u
#define BK4829_REG5D_FSK_DATA_LEN_HI_3BITS(v)     ((uint16_t)((((uint16_t)(v)) << 5u) & 0x00E0u))

/* ============================================================ */
/* REG_5E (0x5E) */
/* Reset: 0x0204 */

/* <9:3> FSK Tx FIFO (Total 128 Words) Almost Empty Threshold */
#define BK4829_REG5E_FSK_TX_FIFO_ALMOST_EMPTY_MASK   0x03F8u
#define BK4829_REG5E_FSK_TX_FIFO_ALMOST_EMPTY_SHIFT  3u
#define BK4829_REG5E_FSK_TX_FIFO_ALMOST_EMPTY(v)     ((uint16_t)((((uint16_t)(v)) << 3u) & 0x03F8u))

/* <2:0> FSK Rx FIFO (Total 8 Words) Almost Full Threshold */
#define BK4829_REG5E_FSK_RX_FIFO_ALMOST_FULL_MASK   0x0007u
#define BK4829_REG5E_FSK_RX_FIFO_ALMOST_FULL_SHIFT  0u
#define BK4829_REG5E_FSK_RX_FIFO_ALMOST_FULL(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0007u))

/* ============================================================ */
/* REG_5F (0x5F) */
/* FSK Word Input/Output */

/* ============================================================ */
/* REG_62 (0x62) */

/* <14:8> Signal Strength after RxADC. Lsb->dB */
#define BK4829_REG62_SIGNAL_STRENGTH_RXADC_MASK   0x7F00u
#define BK4829_REG62_SIGNAL_STRENGTH_RXADC_SHIFT  8u
#define BK4829_REG62_SIGNAL_STRENGTH_RXADC(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x7F00u))

/* ============================================================ */
/* REG_63 (0x63) */

/* <7:0> Glitch Total Number within about 10ms */
#define BK4829_REG63_GLITCH_TOTAL_NUMBER_10MS_MASK   0x00FFu
#define BK4829_REG63_GLITCH_TOTAL_NUMBER_10MS_SHIFT  0u
#define BK4829_REG63_GLITCH_TOTAL_NUMBER_10MS(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_64 (0x64) */
/* Voice Amplitude Out */

/* ============================================================ */
/* REG_65 (0x65) */

/* <6:0> Ex-noise indicator, dB/step. >10kHz AF */
#define BK4829_REG65_EX_NOISE_IND_DB_STEP_MASK   0x007Fu
#define BK4829_REG65_EX_NOISE_IND_DB_STEP_SHIFT  0u
#define BK4829_REG65_EX_NOISE_IND_DB_STEP(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))

/* ============================================================ */
/* REG_66 (0x66) */

/* <14:8> Upper Channel Relative Power Strength */
#define BK4829_REG66_UPPER_CHANNEL_RELATIVE_POWER_STRENGTH_MASK   0x7F00u
#define BK4829_REG66_UPPER_CHANNEL_RELATIVE_POWER_STRENGTH_SHIFT  8u
#define BK4829_REG66_UPPER_CHANNEL_RELATIVE_POWER_STRENGTH(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x7F00u))

/* <6:0> Lower Channel Relative Power Strength */
#define BK4829_REG66_LOWER_CHANNEL_RELATIVE_POWER_STRENGTH_MASK   0x007Fu
#define BK4829_REG66_LOWER_CHANNEL_RELATIVE_POWER_STRENGTH_SHIFT  0u
#define BK4829_REG66_LOWER_CHANNEL_RELATIVE_POWER_STRENGTH(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))

/* ============================================================ */
/* REG_67 (0x67) */

/* <8:0> 0.5dB/step, RSSI (dBm) ~= REG_67 * <8:0> /2 � 160. */
#define BK4829_REG67_FIELD_MASK   0x01FFu
#define BK4829_REG67_FIELD_SHIFT  0u
#define BK4829_REG67_FIELD(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x01FFu))

/* ============================================================ */
/* REG_68 (0x68) */

/* <15> CTCSS Scan Indicator. 1=Busy, 0=Found */
#define BK4829_REG68_CTCSS_SCAN_IND_MASK   0x8000u
#define BK4829_REG68_CTCSS_SCAN_IND_SHIFT  15u
#define BK4829_REG68_CTCSS_SCAN_IND_SET    0x8000u
#define BK4829_REG68_CTCSS_SCAN_IND_CLR    0x0000u
#define BK4829_REG68_CTCSS_SCAN_IND_BUSY   0x8000u
#define BK4829_REG68_CTCSS_SCAN_IND_FOUND   0x0000u

/* <12:0> CTCSS Frequency. Frequency(Hz) = REG_68 * <12:0> /20.64888 for 13M/26M XTAL and = REG_68 * <12:0> / 20.97152 for 12.8M/19.2M/25.6M/38.4M XTAL */
#define BK4829_REG68_CTCSS_FREQ_MASK   0x1FFFu
#define BK4829_REG68_CTCSS_FREQ_SHIFT  0u
#define BK4829_REG68_CTCSS_FREQ(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x1FFFu))

/* ============================================================ */
/* REG_69 (0x69) */

/* <15> CDCSS Scan Indicator. 1=Busy, 0=Found */
#define BK4829_REG69_CDCSS_SCAN_IND_MASK   0x8000u
#define BK4829_REG69_CDCSS_SCAN_IND_SHIFT  15u
#define BK4829_REG69_CDCSS_SCAN_IND_SET    0x8000u
#define BK4829_REG69_CDCSS_SCAN_IND_CLR    0x0000u
#define BK4829_REG69_CDCSS_SCAN_IND_BUSY   0x8000u
#define BK4829_REG69_CDCSS_SCAN_IND_FOUND   0x0000u

/* <14> 23 or 24 bit CDCSS Indicator. 1=24 bit, 0=23 bit */
#define BK4829_REG69_CDCSS_IND_MASK   0x4000u
#define BK4829_REG69_CDCSS_IND_SHIFT  14u
#define BK4829_REG69_CDCSS_IND_SET    0x4000u
#define BK4829_REG69_CDCSS_IND_CLR    0x0000u
#define BK4829_REG69_CDCSS_IND_V_24_BIT   0x4000u
#define BK4829_REG69_CDCSS_IND_V_23_BIT   0x0000u

/* <11:0> CDCSS High 12 bits */
#define BK4829_REG69_CDCSS_HI_MASK   0x0FFFu
#define BK4829_REG69_CDCSS_HI_SHIFT  0u
#define BK4829_REG69_CDCSS_HI(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0FFFu))

/* ============================================================ */
/* REG_6A (0x6A) */

/* <11:0> CDCSS Low 12 bits */
#define BK4829_REG6A_CDCSS_LO_MASK   0x0FFFu
#define BK4829_REG6A_CDCSS_LO_SHIFT  0u
#define BK4829_REG6A_CDCSS_LO(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0FFFu))

/* ============================================================ */
/* REG_6E (0x6E) */

/* <15:9> AF Freq Out, Nout. Freq=Nout*25390.625/Rout Or Freq=Nout*25000/Rout for 19.2M/38.4M */
#define BK4829_REG6E_AF_FREQ_OUT_NOUT_MASK   0xFE00u
#define BK4829_REG6E_AF_FREQ_OUT_NOUT_SHIFT  9u
#define BK4829_REG6E_AF_FREQ_OUT_NOUT(v)     ((uint16_t)((((uint16_t)(v)) << 9u) & 0xFE00u))

/* <8:0> AF Freq Out, Rout. Freq=Nout*25390.625/Rout Or Freq=Nout*25000/Rout for 19.2M/38.4M */
#define BK4829_REG6E_AF_FREQ_OUT_ROUT_MASK   0x01FFu
#define BK4829_REG6E_AF_FREQ_OUT_ROUT_SHIFT  0u
#define BK4829_REG6E_AF_FREQ_OUT_ROUT(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x01FFu))

/* ============================================================ */
/* REG_6F (0x6F) */

/* <7:0> AF Tx/Rx Input Amplitude(dB) */
#define BK4829_REG6F_AF_TX_RX_IN_AMP_MASK   0x00FFu
#define BK4829_REG6F_AF_TX_RX_IN_AMP_SHIFT  0u
#define BK4829_REG6F_AF_TX_RX_IN_AMP(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_70 (0x70) */
/* Reset: 0x0000 */

/* <15> Enable TONE1 1=Enable, 0=Disable */
#define BK4829_REG70_EN_TONE1_EN_DIS_MASK   0x8000u
#define BK4829_REG70_EN_TONE1_EN_DIS_SHIFT  15u
#define BK4829_REG70_EN_TONE1_EN_DIS_SET    0x8000u
#define BK4829_REG70_EN_TONE1_EN_DIS_CLR    0x0000u
#define BK4829_REG70_EN_TONE1_EN_DIS_ENABLE   0x8000u
#define BK4829_REG70_EN_TONE1_EN_DIS_DISABLE   0x0000u

/* <14:8> TONE1 tuning gain */
#define BK4829_REG70_TONE1_TUNING_GAIN_MASK   0x7F00u
#define BK4829_REG70_TONE1_TUNING_GAIN_SHIFT  8u
#define BK4829_REG70_TONE1_TUNING_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0x7F00u))

/* <7> Enable TONE2 1=Enable, 0=Disable */
#define BK4829_REG70_EN_TONE2_EN_DIS_MASK   0x0080u
#define BK4829_REG70_EN_TONE2_EN_DIS_SHIFT  7u
#define BK4829_REG70_EN_TONE2_EN_DIS_SET    0x0080u
#define BK4829_REG70_EN_TONE2_EN_DIS_CLR    0x0000u
#define BK4829_REG70_EN_TONE2_EN_DIS_ENABLE   0x0080u
#define BK4829_REG70_EN_TONE2_EN_DIS_DISABLE   0x0000u

/* <6:0> TONE2/FSK tuning gain */
#define BK4829_REG70_TONE2_FSK_TUNING_GAIN_MASK   0x007Fu
#define BK4829_REG70_TONE2_FSK_TUNING_GAIN_SHIFT  0u
#define BK4829_REG70_TONE2_FSK_TUNING_GAIN(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x007Fu))

/* ============================================================ */
/* REG_71 (0x71) */
/* TONE1/Scramble frequency control word.=freq(Hz)* 10.32444 for XTAL 13M/26M or=freq(Hz)* 10.48576 for XTAL 12.8M/19.2M/25.6M/38.4M */
/* Reset: 0x8517 */

/* ============================================================ */
/* REG_72 (0x72) */
/* TONE2/FSK frequency control word=freq(Hz)* 10.32444 for XTAL 13M/26M or=freq(Hz)* 10.48576 for XTAL 12.8M/19.2M/25.6M/38.4M */
/* Reset: 0x2854 */

/* ============================================================ */
/* REG_73 (0x73) */
/* Reset: 0x0000 */

/* <13:11> Automatic Frequency Correction(AFC) Range Selection. 000=max, 111=min */
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_RANGE_SEL_MASK   0x3800u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_RANGE_SEL_SHIFT  11u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_RANGE_SEL(v)     ((uint16_t)((((uint16_t)(v)) << 11u) & 0x3800u))
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_RANGE_SEL_MAX   0x0000u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_RANGE_SEL_MIN   0x3800u

/* <4> Automatic Frequency Correction(AFC) Disable. 1=Disable, 0=Enable */
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_MASK   0x0010u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_SHIFT  4u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_SET    0x0010u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_CLR    0x0000u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_DISABLE   0x0010u
#define BK4829_REG73_AUTOMATIC_FREQ_CORRECTION_DIS_ENABLE   0x0000u

/* ============================================================ */
/* REG_74 (0x74) */
/* 3000Hz AF Response coefficient for Tx */
/* Reset: 0xF50B */

/* ============================================================ */
/* REG_75 (0x75) */
/* 3000Hz AF Response coefficient for Rx */
/* Reset: 0xF50B */

/* ============================================================ */
/* REG_78 (0x78) */
/* Reset: 0x4846 */

/* <15:8> RSSI threshold for Squelch=1, 0.5dB/step */
#define BK4829_REG78_RSSI_THR_SQL_MASK   0xFF00u
#define BK4829_REG78_RSSI_THR_SQL_SHIFT  8u
#define BK4829_REG78_RSSI_THR_SQL(v)     ((uint16_t)((((uint16_t)(v)) << 8u) & 0xFF00u))

/* <7:0> RSSI threshold for Squelch=0, 0.5dB/step */
#define BK4829_REG78_RSSI_THR_SQL_7_0_MASK   0x00FFu
#define BK4829_REG78_RSSI_THR_SQL_7_0_SHIFT  0u
#define BK4829_REG78_RSSI_THR_SQL_7_0(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x00FFu))

/* ============================================================ */
/* REG_79 (0x79) */
/* Reset: 0x4040 */

/* <15:11> VoX Detection Interval Time */
#define BK4829_REG79_VOX_DETECTION_INTERVAL_TIME_MASK   0xF800u
#define BK4829_REG79_VOX_DETECTION_INTERVAL_TIME_SHIFT  11u
#define BK4829_REG79_VOX_DETECTION_INTERVAL_TIME(v)     ((uint16_t)((((uint16_t)(v)) << 11u) & 0xF800u))

/* <10:0> Voice Amplitude Threshold for VOX=0 detect */
#define BK4829_REG79_VOICE_AMP_THR_VOX_DETECT_MASK   0x07FFu
#define BK4829_REG79_VOICE_AMP_THR_VOX_DETECT_SHIFT  0u
#define BK4829_REG79_VOICE_AMP_THR_VOX_DETECT(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x07FFu))

/* ============================================================ */
/* REG_7A (0x7A) */
/* Reset: 0x8000 */

/* <15:12> VoX=0 Detection delay, *128ms */
#define BK4829_REG7A_VOX_DETECTION_DLY_128MS_MASK   0xF000u
#define BK4829_REG7A_VOX_DETECTION_DLY_128MS_SHIFT  12u
#define BK4829_REG7A_VOX_DETECTION_DLY_128MS(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0xF000u))

/* ============================================================ */
/* REG_7B (0x7B) */
/* RSSI Table */
/* Reset: 0xAE34 */

/* ============================================================ */
/* REG_7C (0x7C) */
/* RSSI Table */
/* Reset: 0x8000 */

/* ============================================================ */
/* REG_7D (0x7D) */
/* Reset: 0x001C */

/* <6> AF Level Controller(ALC) Disable. 1=Disable, 0=Enable */
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_MASK   0x0040u
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_SHIFT  6u
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_SET    0x0040u
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_CLR    0x0000u
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_DISABLE   0x0040u
#define BK4829_REG7D_AF_LEVEL_CONTROLLER_DIS_ENABLE   0x0000u

/* <5:0> MIC Sensitivity Tuning. 0x00=min, 0x3F=max, 0.5dB/step */
#define BK4829_REG7D_MIC_SENSITIVITY_TUNING_MASK   0x003Fu
#define BK4829_REG7D_MIC_SENSITIVITY_TUNING_SHIFT  0u
#define BK4829_REG7D_MIC_SENSITIVITY_TUNING(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x003Fu))
#define BK4829_REG7D_MIC_SENSITIVITY_TUNING_MIN   0x0000u
#define BK4829_REG7D_MIC_SENSITIVITY_TUNING_MAX_0P5DB_STEP   0x003Fu

/* ============================================================ */
/* REG_7E (0x7E) */
/* Reset: 0x302E */

/* <15> AGC Fix Mode. 1=Fix, 0=Auto */
#define BK4829_REG7E_AGC_FIX_MODE_MASK   0x8000u
#define BK4829_REG7E_AGC_FIX_MODE_SHIFT  15u
#define BK4829_REG7E_AGC_FIX_MODE_SET    0x8000u
#define BK4829_REG7E_AGC_FIX_MODE_CLR    0x0000u
#define BK4829_REG7E_AGC_FIX_MODE_FIX   0x8000u
#define BK4829_REG7E_AGC_FIX_MODE_AUTO   0x0000u

/* <14:12> AGC Fix Index. 011=Max, then 010, 001, 000, 111, 110, 101, 100(min) */
#define BK4829_REG7E_AGC_FIX_INDEX_MASK   0x7000u
#define BK4829_REG7E_AGC_FIX_INDEX_SHIFT  12u
#define BK4829_REG7E_AGC_FIX_INDEX(v)     ((uint16_t)((((uint16_t)(v)) << 12u) & 0x7000u))
#define BK4829_REG7E_AGC_FIX_INDEX_MAX_THEN_010_001_000_111_110_101_100_MIN   0x3000u

/* <5:3> DC Filter Band Width for Tx (MIC In). 000=Bypass DC filter */
#define BK4829_REG7E_DC_FILT_BAND_BW_TX_MASK   0x0038u
#define BK4829_REG7E_DC_FILT_BAND_BW_TX_SHIFT  3u
#define BK4829_REG7E_DC_FILT_BAND_BW_TX(v)     ((uint16_t)((((uint16_t)(v)) << 3u) & 0x0038u))
#define BK4829_REG7E_DC_FILT_BAND_BW_TX_BYPASS_DC_FILTER   0x0000u

/* <2:0> DC Filter Band Width for Rx (IF In). 000=Bypass DC filter */
#define BK4829_REG7E_DC_FILT_BAND_BW_RX_MASK   0x0007u
#define BK4829_REG7E_DC_FILT_BAND_BW_RX_SHIFT  0u
#define BK4829_REG7E_DC_FILT_BAND_BW_RX(v)     ((uint16_t)((((uint16_t)(v)) << 0u) & 0x0007u))
#define BK4829_REG7E_DC_FILT_BAND_BW_RX_BYPASS_DC_FILTER   0x0000u

#endif /* BK4829_REGISTERS_H */
