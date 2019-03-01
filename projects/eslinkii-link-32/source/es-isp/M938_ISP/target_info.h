#ifndef __TARGET_INFO_H
#define __TARGET_INFO_H

#define CHIP_INFO_OFFSET        0x40000

#define CHIP_INFO0_ADDR         (CHIP_INFO_OFFSET + 0x0000)
#define CHIP_CHECKSUM_ADDR      (CHIP_INFO_OFFSET + 0x0020) 


#define CHIP_INFO1_ADDR         (CHIP_INFO_OFFSET + 0x100)
#define CHIP_SERID0_ADDR        (CHIP_INFO_OFFSET + 0x01D0) 
#define CHIP_CHIPID_ADDR        (CHIP_INFO_OFFSET + 0x01F8)

#define CHIP_INFO1_SIZE         (0x100)
#define CHIP_SERID_SIZE         (0x00C)

#define CHIP_INFO3_ADDR         (CHIP_INFO_OFFSET + 0x0300)   
      


#endif

