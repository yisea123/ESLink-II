#ifndef __ISP_M939_H
#define __ISP_M939_H


#define STATUS_CHECK_CMD            0xF0        //ISP状态读取
#define ISP_MODE_CMD                0xF1        //设置ISP模式
#define ENCRYPT_CHECK_CMD           0xFF       //加密字加载
#define UNLOCK_CHECK_VAL     		0xA0                                                //Unlock Success Value
#define ISP_MODE_CHECK_VAL       	0xA1                                                //ISP Mode Check Value

//接口访问
#define AREA_SET_CMD                0xE1            //主程序区/信息区选址命令
#define CODE_AREA_VAL               0x4B            //主程序区
#define INFO_AREA_VAL               0xBB            //信息区

#define ADDR_SET_CMD                0xE3            //地址缓冲区设置
#define DATA0_WRITE_CMD             0xE5            //数据缓冲器0设置
#define DATA1_WRITE_CMD             0xE7            //数据缓冲器1设置
#define INFO_WRITE_CMD              0xEF            //info数据缓冲器设置

#define FLASH_READ_CMD              0xE8            //flash数据bit31-0读取  
#define FLASH_READ_PLUS_CMD         0xEA            //flash数据bit31-0读取，完成后地址+8字节
#define FLASH_READ1_CMD             0xEC            //flash数据bit63-32读取  

//ISP模式
#define UNLOCK_SET_CMD              0xB1            //info0区操作保护解锁设置
#define ERASE_CHECK_CMD             0xC0            //flash擦除完成判断 
#define ERASE_ING_VAL               0x96            //正在擦除中
#define ERASE_OK_VAL                0x69            //擦除完成

#define ERASE_M0_CMD                0xC1            //flash擦除
#define FLASH_MAIN_AREA             0xF0            //擦除时区域选择:主程序区

#define ERASE_M1_CMD                0xC2            //info 0擦除
#define INFO_0_AREA                 0xE1            //擦除时区域选择:信息区0

#define ERASE_M2_CMD                0xC3            //info 擦除
#define INFO_1_AREA                 0xD2            //擦除时区域选择:信息区1

#define ERASE_M3_CMD                0xC4            //info 擦除
#define INFO_2_AREA                 0xC3            //擦除时区域选择:信息区2

#define ERASE_M4_CMD                0xC5            //info 擦除
#define INFO_3_AREA                 0xB4            //擦除时区域选择:信息区3

#define ERASE_M5_CMD                0xC6            //info 擦除
#define INFO_4_AREA                 0xA5            //擦除时区域选择:信息区4
#define INFO_5_AREA                 0x96            //擦除时区域选择:信息区5
#define INFO_6_AREA                 0x87            //擦除时区域选择:信息区6
#define INFO_7_AREA                 0x78            //擦除时区域选择:信息区7


#define PROG_CHECK_CMD              0xC8            //编程完成后判断是否正确
#define PROG_CMD                    0xC9            //编程
#define PLUS_PROG_CMD               0xCA            //地址先+4字节，再进行编程
#define PROG_PLUS_CMD               0xCB            //先编程，再地址+4

#define PROG_ING_VAL                0x96            //正在编程中
#define PROG_OK_VAL                 0x87            //编程完成
#define PROG_FAIL_VAL               0x78            //编程失败



//#define IFREN_CHECK                 0xE1            //主程序区/信息区检测命令 


//#define ADDR_CHECK                  0xE3            //未用 



//#define DATA_READ                   0xE5            //未用  


//#define INFO_DATA_WRITE_CMD         0xE8

////INF0:config; INF1:cali; INF2:encry; INF3:encry





//#define ERASE_OP0                   0xC1
//#define ERASE_OP3                   0xC1



//#define ERASE_M1                    0xC2
//#define MAIN_PAGE_AREA              0xA2 
//#define ALL_ENCRY_AREA              0xA3 

//#define ERASE_INF0                  0xC3
//#define OPTION_0_AREA               0xA0

//#define ERASE_INF1_UNLOCK           0x5A69
//#define ERASE_INF1                  0xC4

////-------------------------------------------//









//#define STATUS_CHECK_CD                                                    //Unlock Check Command
//#define ISP_MODE_CD        0xF1                                                //ISP Mode Select Command
//#define ENCRYPT_LOAD_CD    0xFF                                                //Encrytion Command Download

//#define ID_CHECK_CD                                                  //ID Check Command
//#define ID_CODE_VAL        0x4D93914F                                          //ID Code//0x4D62012E//

//#define AREA_SET_CD        0xE1//0                                                //Area Select Command
//#define AREA_CHECK_CD      0xE0//1                                                //Area Check Command
//#define SET_ADDR_CD        0xE3//2                                                //Address Set Command
//#define READ_ADDR_CD       0xE2//3
//#define WRITE_BUFF0_CD     0xE5//4                                                //Write Buff Command
//#define READ_BUFF0_CD      0xE4//5                                                //Read Buff Command
//#define WRITE_BUFF1_CD     0xE7//6                                                //Write Buff Command
//#define READ_BUFF1_CD      0xE6//7                                                //Read Buff Command

//#define READ_FLASH_CD      0xE8                                                //Read Data Command
//#define READ_FLASH_PLUS_CD 0xEA//9                                                //Read Data Command
//#define READ_FLASH1_CD     0xEC//A                                                //Read Data1 Command
//#define WRITE_INFO_BUFF_CD 0xEF//B                                                //Write Buff Command

                                             //Erase Check Command
//#define ERASE_CODE         0xC1                                                //Erase User Code 
//#define ERASE_INF0_UNLOCK  0xB169  
//#define ERASE_INF0         0xC2                                                //Erase Information Area 0 Command
//#define ERASE_INF1         0xC3                                                //Erase Information Area 1 Command
//#define ERASE_INF2         0xC4                                                //Erase Information Area 2 Command
//#define ERASE_INF3         0xC5                                                //Erase Information Area 3 Command
//#define PROG_CHECK_CD      0xC8                                                //Programme Check Command
//#define WORD_PRG_CD        0xC9                                                //Word Programme Command
//#define WORD_ADD_PLUS_PRG  0xCA                                                 //先加后编
//#define WORD_PRG_ADD_PLUS  0xCB                                                 //先编后加

//#define UNLOCK_CHECK_VAL   0xA0                                                //Unlock Success Value
//#define MODE_CHECK_VAL     0xA1                                                //ISP Mode Check Value

//#define CODE_AREA_SELECT   0x4B 
//#define INFOR_AREA_SELECT  0xBB                                                //Information Area Select Value for Reading and Programming

//#define USER_AREA_VAL      0xF0                                                //User Area Select Value with Erasing
                                              //Information Area 3 Select Value with Erasing

//#define ENCRYPTION_VAL     0xA5A5A5                                            //Encrytion Code

//#define ERASE_OK_VAL       0x69                                                //Erase-completely Value                                            
//#define PROG_CHECK_VAL     0x87                                                //Programme Check Value

//#define CRC_CTRL_WR        0xD1//0                                             //
//#define CRC_CTRL_RD        0xD0//1                                             //
//#define CRC_EN             0xA5                                                //
//#define CRC_DIS            0x5A                                                //

//#define CRC_STATE_CHECK    0xD2
//#define CRC_TRIGER         0xD3//2                                             //

//#define CRC_SIZE_WR        0xD5                                                //
//#define CRC_SIZE_RD        0xD4//6                                             //

//#define CRC_VALUE_READ     0xD6//8                                             //
//#define CRC_ADDR_Read      0xD8//9                                             //

//#define USER_INFO_START_ADDR	0x00000400
//#define CFG_ENCPAGE0_ADDR		0x00000810
//#define CFG_ENCPAGE1_ADDR		0x00000818	




#endif