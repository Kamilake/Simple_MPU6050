#ifndef DMP_Image_h
#define DMP_Image_h
/* These defines are copied from dmpDefaultMPU6050.c in the general MPL
   releases. These defines may change for each DMP image, so be sure to modify
   these values when switching to a new image.
*/
#define CFG_LP_QUAT             (2712)
#define END_ORIENT_TEMP         (1866)
#define CFG_27                  (2742)
#define CFG_20                  (2224)
#define CFG_23                  (2745)
#define CFG_FIFO_ON_EVENT       (2690)
#define END_PREDICTION_UPDATE   (1761)
#define CGNOTICE_INTR           (2620)
#define X_GRT_Y_TMP             (1358)
#define CFG_DR_INT              (1029)
#define CFG_AUTH                (1035)
#define UPDATE_PROP_ROT         (1835)
#define END_COMPARE_Y_X_TMP2    (1455)
#define SKIP_X_GRT_Y_TMP        (1359)
#define SKIP_END_COMPARE        (1435)
#define FCFG_3                  (1088)
#define FCFG_2                  (1066)
#define FCFG_1                  (1062)
#define END_COMPARE_Y_X_TMP3    (1434)
#define FCFG_7                  (1073)
#define FCFG_6                  (1106)
#define FLAT_STATE_END          (1713)
#define SWING_END_4             (1616)
#define SWING_END_2             (1565)
#define SWING_END_3             (1587)
#define SWING_END_1             (1550)
#define CFG_8                   (2718)
#define CFG_15                  (2727)
#define CFG_16                  (2746)
#define CFG_EXT_GYRO_BIAS       (1189)
#define END_COMPARE_Y_X_TMP     (1407)
#define DO_NOT_UPDATE_PROP_ROT  (1839)
#define CFG_7                   (1205)
#define FLAT_STATE_END_TEMP     (1683)
#define END_COMPARE_Y_X         (1484)
#define SKIP_SWING_END_1        (1551)
#define SKIP_SWING_END_3        (1588)
#define SKIP_SWING_END_2        (1566)
#define TILTG75_START           (1672)
#define CFG_6                   (2753)
#define TILTL75_END             (1669)
#define END_ORIENT              (1884)
#define CFG_FLICK_IN            (2573)
#define TILTL75_START           (1643)
#define CFG_MOTION_BIAS         (1208)
#define X_GRT_Y                 (1408)
#define TEMPLABEL               (2324)
#define CFG_ANDROID_ORIENT_INT  (1853)
#define CFG_GYRO_RAW_DATA       (2722)
#define X_GRT_Y_TMP2            (1379)

#define D_0_22                  (22+512)
#define D_0_24                  (24+512)

#define D_0_36                  (36)
#define D_0_52                  (52)
#define D_0_96                  (96)
#define D_0_104                 (104)
#define D_0_108                 (108)
#define D_0_163                 (163)
#define D_0_188                 (188)
#define D_0_192                 (192)
#define D_0_224                 (224)
#define D_0_228                 (228)
#define D_0_232                 (232)
#define D_0_236                 (236)

#define D_1_2                   (256 + 2)
#define D_1_4                   (256 + 4)
#define D_1_8                   (256 + 8)
#define D_1_10                  (256 + 10)
#define D_1_24                  (256 + 24)
#define D_1_28                  (256 + 28)
#define D_1_36                  (256 + 36)
#define D_1_40                  (256 + 40)
#define D_1_44                  (256 + 44)
#define D_1_72                  (256 + 72)
#define D_1_74                  (256 + 74)
#define D_1_79                  (256 + 79)
#define D_1_88                  (256 + 88)
#define D_1_90                  (256 + 90)
#define D_1_92                  (256 + 92)
#define D_1_96                  (256 + 96)
#define D_1_98                  (256 + 98)
#define D_1_106                 (256 + 106)
#define D_1_108                 (256 + 108)
#define D_1_112                 (256 + 112)
#define D_1_128                 (256 + 144)
#define D_1_152                 (256 + 12)
#define D_1_160                 (256 + 160)
#define D_1_176                 (256 + 176)
#define D_1_178                 (256 + 178)
#define D_1_218                 (256 + 218)
#define D_1_232                 (256 + 232)
#define D_1_236                 (256 + 236)
#define D_1_240                 (256 + 240)
#define D_1_244                 (256 + 244)
#define D_1_250                 (256 + 250)
#define D_1_252                 (256 + 252)
#define D_2_12                  (512 + 12)
#define D_2_96                  (512 + 96)
#define D_2_108                 (512 + 108)
#define D_2_208                 (512 + 208)
#define D_2_224                 (512 + 224)
#define D_2_236                 (512 + 236)
#define D_2_244                 (512 + 244)
#define D_2_248                 (512 + 248)
#define D_2_252                 (512 + 252)

#define CPASS_BIAS_X            (35 * 16 + 4)
#define CPASS_BIAS_Y            (35 * 16 + 8)
#define CPASS_BIAS_Z            (35 * 16 + 12)
#define CPASS_MTX_00            (36 * 16)
#define CPASS_MTX_01            (36 * 16 + 4)
#define CPASS_MTX_02            (36 * 16 + 8)
#define CPASS_MTX_10            (36 * 16 + 12)
#define CPASS_MTX_11            (37 * 16)
#define CPASS_MTX_12            (37 * 16 + 4)
#define CPASS_MTX_20            (37 * 16 + 8)
#define CPASS_MTX_21            (37 * 16 + 12)
#define CPASS_MTX_22            (43 * 16 + 12)
#define D_EXT_GYRO_BIAS_X       (61 * 16)
#define D_EXT_GYRO_BIAS_Y       (61 * 16) + 4
#define D_EXT_GYRO_BIAS_Z       (61 * 16) + 8
#define D_ACT0                  (40 * 16)
#define D_ACSX                  (40 * 16 + 4)
#define D_ACSY                  (40 * 16 + 8)
#define D_ACSZ                  (40 * 16 + 12)

#define FLICK_MSG               (45 * 16 + 4)
#define FLICK_COUNTER           (45 * 16 + 8)
#define FLICK_LOWER             (45 * 16 + 12)
#define FLICK_UPPER             (46 * 16 + 12)

#define D_AUTH_OUT              (992)
#define D_AUTH_IN               (996)
#define D_AUTH_A                (1000)
#define D_AUTH_B                (1004)

#define D_PEDSTD_BP_B           (768 + 0x1C)
#define D_PEDSTD_HP_A           (768 + 0x78)
#define D_PEDSTD_HP_B           (768 + 0x7C)
#define D_PEDSTD_BP_A4          (768 + 0x40)
#define D_PEDSTD_BP_A3          (768 + 0x44)
#define D_PEDSTD_BP_A2          (768 + 0x48)
#define D_PEDSTD_BP_A1          (768 + 0x4C)
#define D_PEDSTD_INT_THRSH      (768 + 0x68)
#define D_PEDSTD_CLIP           (768 + 0x6C)
#define D_PEDSTD_SB             (768 + 0x28)
#define D_PEDSTD_SB_TIME        (768 + 0x2C)
#define D_PEDSTD_PEAKTHRSH      (768 + 0x98)
#define D_PEDSTD_TIML           (768 + 0x2A)
#define D_PEDSTD_TIMH           (768 + 0x2E)
#define D_PEDSTD_PEAK           (768 + 0X94)
#define D_PEDSTD_STEPCTR        (768 + 0x60)
#define D_PEDSTD_TIMECTR        (964)
#define D_PEDSTD_DECI           (768 + 0xA0)

#define D_HOST_NO_MOT           (976)
#define D_ACCEL_BIAS            (660)

#define D_ORIENT_GAP            (76)

#define D_TILT0_H               (48)
#define D_TILT0_L               (50)
#define D_TILT1_H               (52)
#define D_TILT1_L               (54)
#define D_TILT2_H               (56)
#define D_TILT2_L               (58)
#define D_TILT3_H               (60)
#define D_TILT3_L               (62)﻿



#define DMP_CODE_SIZE           (3062)
#define DMP_START_ADDRESS       (0x0400)


#define TAP_X               (0x01)
#define TAP_Y               (0x02)
#define TAP_Z               (0x04)
#define TAP_XYZ             (0x07)

#define TAP_X_UP            (0x01)
#define TAP_X_DOWN          (0x02)
#define TAP_Y_UP            (0x03)
#define TAP_Y_DOWN          (0x04)
#define TAP_Z_UP            (0x05)
#define TAP_Z_DOWN          (0x06)

#define ANDROID_ORIENT_PORTRAIT             (0x00)
#define ANDROID_ORIENT_LANDSCAPE            (0x01)
#define ANDROID_ORIENT_REVERSE_PORTRAIT     (0x02)
#define ANDROID_ORIENT_REVERSE_LANDSCAPE    (0x03)

#define DMP_INT_GESTURE     (0x01)
#define DMP_INT_CONTINUOUS  (0x02)

#define DMP_FEATURE_TAP             (0x001)
#define DMP_FEATURE_ANDROID_ORIENT  (0x002)
#define DMP_FEATURE_LP_QUAT         (0x004)
#define DMP_FEATURE_PEDOMETER       (0x008)
#define DMP_FEATURE_6X_LP_QUAT      (0x010)
#define DMP_FEATURE_GYRO_CAL        (0x020)
#define DMP_FEATURE_SEND_RAW_ACCEL  (0x040)
#define DMP_FEATURE_SEND_RAW_GYRO   (0x080)
#define DMP_FEATURE_SEND_CAL_GYRO   (0x100)
#define DMP_FEATURE_SEND_ANY_GYRO   (DMP_FEATURE_SEND_RAW_GYRO | DMP_FEATURE_SEND_CAL_GYRO)

#define INV_X_GYRO      (0x40)
#define INV_Y_GYRO      (0x20)
#define INV_Z_GYRO      (0x10)
#define INV_XYZ_GYRO    (INV_X_GYRO | INV_Y_GYRO | INV_Z_GYRO)
#define INV_XYZ_ACCEL   (0x08)
#define INV_XYZ_COMPASS (0x01)


#define INV_WXYZ_QUAT       (0x100)
#define INV_FSR_2G  0
#define INV_FSR_4G 1
#define INV_FSR_8G 2
#define INV_FSR_16G 3



#define INT_SRC_TAP             (0x01)
#define INT_SRC_ANDROID_ORIENT  (0x08)

#define MAX_PACKET_LENGTH   (32)

#define DEFAULT_MPU_HZ    (100)

/* The mounting matrix below tells the MPL how to rotate the raw
   data from the driver(s). The matrix below reflects the axis
   orientation of the MPU-6050 on the nav6 circuit board.
*/

/* for your understanding this is the Gyro orentation Hard coded into the MPU With this instance of the DMP
static signed char gyro_orientation[9] = { 1, 0, 0,
                                           0, 1, 0,
                                           0, 0, 1
                                         };
*/


/* This is a pre Configured Version of the Embedded MotionDriver 6.12 Firmware instance. 
 *  https://www.invensense.com/developers/software-downloads/#sla_content_45 (requires account)
 *  This is based on the Latest release as of 21st of June 2019
 *  NOTE: This firmware instance is intended to be used with this class and may not work as 
 *  expected if used with other mpu6050 configuration programs.
 *  
 *  It's a merical! The DMP is Pre Configured to work!!!!!
 *  Actually I used another program to load Configure, test and verify that the DMP was working. 
 *  Then I simply read the DMP Firmware back using view_DMP_firmware_Instance() function
 *  I triggered this near the beginning of the program. I don't believe there is a problem 
 *  with triggering it after it has ran but you can see that the DMP firmware changes over time.
 *  as the MPU6050 modifies [portions of the firmware memory block while active.
 */
const unsigned char dmp_memory[DMP_CODE_SIZE] PROGMEM = {
/* bank # 0 */
 0x00, 0xF8, 0xF6, 0x2A, 0x3F, 0x68, 0xF5, 0x7A, 0x00, 0x06, 0xFF, 0xFE, 0x00, 0x03, 0x00, 0x00,
 0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0xFA, 0x80, 0x00, 0x0B, 0x12, 0x82, 0x00, 0x01,
 0x03, 0x0C, 0x30, 0xC3, 0x0A, 0x74, 0x56, 0x2D, 0x0D, 0x62, 0xDB, 0xC7, 0x16, 0xF4, 0xBA, 0x02,
 0x38, 0x83, 0xF8, 0x83, 0x30, 0x00, 0xF8, 0x83, 0x25, 0x8E, 0xF8, 0x83, 0x30, 0x00, 0xF8, 0x83,
 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0xBD, 0xD8, 0x11, 0x24, 0x00, 0x04, 0x00, 0x1A, 0x82, 0x79, 0xA1,
 0x00, 0x36, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x38, 0x83, 0x6F, 0xA2,
 0x00, 0x3E, 0x03, 0x30, 0x40, 0x00, 0x00, 0x00, 0x02, 0xCA, 0xE3, 0x09, 0x3E, 0x80, 0x00, 0x00,
 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
 0x1F, 0xA4, 0xE8, 0xE4, 0xFF, 0xF5, 0xDC, 0xB9, 0x00, 0x5B, 0x79, 0xCF, 0x1F, 0x3F, 0x78, 0x76,
 0x00, 0x86, 0x7C, 0x5A, 0x00, 0x86, 0x23, 0x47, 0xFA, 0xB9, 0x86, 0x31, 0x00, 0x74, 0x87, 0x8A,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x05, 0xFF, 0xFF, 0xE9, 0xA8, 0x00, 0x00, 0x21, 0x82,
 0xFA, 0xB8, 0x4D, 0x46, 0xFF, 0xFA, 0xDF, 0x3D, 0xFF, 0xFF, 0xB2, 0xB3, 0x00, 0x00, 0x00, 0x00,
 0x3F, 0xFF, 0xBA, 0x98, 0x00, 0x5D, 0xAC, 0x08, 0x00, 0x0A, 0x63, 0x78, 0x00, 0x01, 0x46, 0x21,
 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x42, 0xB5, 0x00, 0x06, 0x00, 0x64, 0x00, 0x64, 0x00, 0x06,
 0x14, 0x06, 0x02, 0x9F, 0x0F, 0x47, 0x91, 0x32, 0xD9, 0x0E, 0x9F, 0xC9, 0x1D, 0xCF, 0x4C, 0x34,
 0x3B, 0xB6, 0x7A, 0xE8, 0x00, 0x64, 0x00, 0x06, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE,
/* bank # 1 */
 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x07, 0x00, 0x00, 0xFF, 0xF1, 0x00, 0x00, 0xFA, 0x46, 0x00, 0x00, 0xA2, 0xB8, 0x00, 0x00,
 0x10, 0x00, 0x00, 0x00, 0x04, 0xD6, 0x00, 0x00, 0x04, 0xCC, 0x00, 0x00, 0x04, 0xCC, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x06, 0x00, 0x02, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x05, 0x00, 0x64, 0x00, 0x20, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00,
 0x00, 0x00, 0x00, 0x32, 0xF8, 0x98, 0x00, 0x00, 0xFF, 0x65, 0x00, 0x00, 0x83, 0x0F, 0x00, 0x00,
 0x00, 0x06, 0x00, 0x00, 0xFF, 0xF1, 0x00, 0x00, 0xFA, 0x46, 0x00, 0x00, 0xA2, 0xB8, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0xB2, 0x6A, 0x00, 0x02, 0x00, 0x00,
 0x00, 0x01, 0xFB, 0x83, 0x00, 0x7C, 0x00, 0x00, 0xFB, 0x15, 0xFC, 0x00, 0x1F, 0xB4, 0xFF, 0x83,
 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x00, 0x07, 0x00, 0x64, 0x03, 0xE8, 0x00, 0x64, 0x00, 0x28,
 0x00, 0x00, 0xFF, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x16, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x10, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF4, 0x00, 0x00, 0x10, 0x00,
/* bank # 2 */
 0x00, 0x28, 0x00, 0x00, 0xFF, 0xFF, 0x45, 0x81, 0xFF, 0xFF, 0xFA, 0x72, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x01, 0x00, 0x05, 0xBA, 0xC6, 0x00, 0x47, 0x78, 0xA2,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x14,
 0x00, 0x00, 0x23, 0xBB, 0x00, 0x2E, 0xA2, 0x5B, 0x00, 0x00, 0x05, 0x68, 0x00, 0x0B, 0xCF, 0x49,
 0x00, 0x04, 0xFF, 0xFD, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x64, 0x00, 0x07, 0x00, 0x08, 0x00, 0x06, 0x00, 0x06, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x2E, 0xA2, 0x5B, 0x00, 0x00, 0x05, 0x68, 0x00, 0x0B, 0xCF, 0x49, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xF8, 0xF6, 0x2A, 0x3F, 0x68, 0xF5, 0x7A, 0x00, 0x04, 0xFF, 0xFD, 0x00, 0x02, 0x00, 0x00,
 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x0E,
 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0xFF, 0xFF, 0xFF, 0x9C,
 0x00, 0x00, 0x43, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64,
 0xFF, 0xE5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/* bank # 3 */
 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x24, 0x26, 0xD3,
 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x96, 0x00, 0x3C,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x9E, 0x65, 0x5D,
 0x0C, 0x0A, 0x4E, 0x68, 0xCD, 0xCF, 0x77, 0x09, 0x50, 0x16, 0x67, 0x59, 0xC6, 0x19, 0xCE, 0x82,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x71, 0x1C,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0xD7, 0x84, 0x00, 0x03, 0x00, 0x00, 0x00,
 0x00, 0x11, 0xDC, 0x47, 0x03, 0x00, 0x00, 0x00, 0xC7, 0x93, 0x8F, 0x9D, 0x1E, 0x1B, 0x1C, 0x19,
 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xDF, 0xA4, 0x38, 0x1F, 0x9E, 0x65, 0x5D,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x71, 0x1C, 0x02, 0x03, 0x18, 0x85, 0x00, 0x00, 0x40, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x3F, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xF4, 0xC9, 0xFF, 0xFF, 0xBC, 0xF0, 0x00, 0x01, 0x0C, 0x0F,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xF5, 0xB7, 0xBA, 0xB3, 0x67, 0x7D, 0xDF, 0x7E, 0x72, 0x90, 0x2E, 0x55, 0x4C, 0xF6, 0xE6, 0x88,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
/* bank # 4 */
 0xD8, 0xDC, 0xB4, 0xB8, 0xB0, 0xD8, 0xB9, 0xAB, 0xF3, 0xF8, 0xFA, 0xB3, 0xB7, 0xBB, 0x8E, 0x9E,
 0xAE, 0xF1, 0x32, 0xF5, 0x1B, 0xF1, 0xB4, 0xB8, 0xB0, 0x80, 0x97, 0xF1, 0xA9, 0xDF, 0xDF, 0xDF,
 0xAA, 0xDF, 0xDF, 0xDF, 0xF2, 0xAA, 0x4C, 0xCD, 0x6C, 0xA9, 0x0C, 0xC9, 0x2C, 0x97, 0xF1, 0xA9,
 0x89, 0x26, 0x46, 0x66, 0xB2, 0x89, 0x99, 0xA9, 0x2D, 0x55, 0x7D, 0xB0, 0xB0, 0x8A, 0xA8, 0x96,
 0x36, 0x56, 0x76, 0xF1, 0xBA, 0xA3, 0xB4, 0xB2, 0x80, 0xC0, 0xB8, 0xA8, 0x97, 0x11, 0xB2, 0x83,
 0x98, 0xBA, 0xA3, 0xF0, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xB2, 0xB9, 0xB4, 0x98, 0x83, 0xF1,
 0xA3, 0x29, 0x55, 0x7D, 0xBA, 0xB5, 0xB1, 0xA3, 0x83, 0x93, 0xF0, 0x00, 0x28, 0x50, 0xF5, 0xB2,
 0xB6, 0xAA, 0x83, 0x93, 0x28, 0x54, 0x7C, 0xF1, 0xB9, 0xA3, 0x82, 0x93, 0x61, 0xBA, 0xA2, 0xDA,
 0xDE, 0xDF, 0xDB, 0x81, 0x9A, 0xB9, 0xAE, 0xF5, 0x60, 0x68, 0x70, 0xF1, 0xDA, 0xBA, 0xA2, 0xDF,
 0xD9, 0xBA, 0xA2, 0xFA, 0xB9, 0xA3, 0x82, 0x92, 0xDB, 0x31, 0xBA, 0xA2, 0xD9, 0xBA, 0xA2, 0xF8,
 0xDF, 0x85, 0xA4, 0xD0, 0xC1, 0xBB, 0xAD, 0x83, 0xC2, 0xC5, 0xC7, 0xB8, 0xA2, 0xDF, 0xDF, 0xDF,
 0xBA, 0xA0, 0xDF, 0xDF, 0xDF, 0xD8, 0xD8, 0xF1, 0xB8, 0xAA, 0xB3, 0x8D, 0xB4, 0x98, 0x0D, 0x35,
 0x5D, 0xB2, 0xB6, 0xBA, 0xAF, 0x8C, 0x96, 0x19, 0x8F, 0x9F, 0xA7, 0x0E, 0x16, 0x1E, 0xB4, 0x9A,
 0xB8, 0xAA, 0x87, 0x2C, 0x54, 0x7C, 0xBA, 0xA4, 0xB0, 0x8A, 0xB6, 0x91, 0x32, 0x56, 0x76, 0xB2,
 0x84, 0x94, 0xA4, 0xC8, 0x08, 0xCD, 0xD8, 0xB8, 0xB4, 0xB0, 0xF1, 0x99, 0x82, 0xA8, 0x2D, 0x55,
 0x7D, 0x98, 0xA8, 0x0E, 0x16, 0x1E, 0xA2, 0x2C, 0x54, 0x7C, 0x92, 0xA4, 0xF0, 0x2C, 0x50, 0x78,
/* bank # 5 */
 0xF1, 0x84, 0xA8, 0x98, 0xC4, 0xCD, 0xFC, 0xD8, 0x0D, 0xDB, 0xA8, 0xFC, 0x2D, 0xF3, 0xD9, 0xBA,
 0xA6, 0xF8, 0xDA, 0xBA, 0xA6, 0xDE, 0xD8, 0xBA, 0xB2, 0xB6, 0x86, 0x96, 0xA6, 0xD0, 0xF3, 0xC8,
 0x41, 0xDA, 0xA6, 0xC8, 0xF8, 0xD8, 0xB0, 0xB4, 0xB8, 0x82, 0xA8, 0x92, 0xF5, 0x2C, 0x54, 0x88,
 0x98, 0xF1, 0x35, 0xD9, 0xF4, 0x18, 0xD8, 0xF1, 0xA2, 0xD0, 0xF8, 0xF9, 0xA8, 0x84, 0xD9, 0xC7,
 0xDF, 0xF8, 0xF8, 0x83, 0xC5, 0xDA, 0xDF, 0x69, 0xDF, 0x83, 0xC1, 0xD8, 0xF4, 0x01, 0x14, 0xF1,
 0xA8, 0x82, 0x4E, 0xA8, 0x84, 0xF3, 0x11, 0xD1, 0x82, 0xF5, 0xD9, 0x92, 0x28, 0x97, 0x88, 0xF1,
 0x09, 0xF4, 0x1C, 0x1C, 0xD8, 0x84, 0xA8, 0xF3, 0xC0, 0xF9, 0xD1, 0xD9, 0x97, 0x82, 0xF1, 0x29,
 0xF4, 0x0D, 0xD8, 0xF3, 0xF9, 0xF9, 0xD1, 0xD9, 0x82, 0xF4, 0xC2, 0x03, 0xD8, 0xDE, 0xDF, 0x1A,
 0xD8, 0xF1, 0xA2, 0xFA, 0xF9, 0xA8, 0x84, 0x98, 0xD9, 0xC7, 0xDF, 0xF8, 0xF8, 0xF8, 0x83, 0xC7,
 0xDA, 0xDF, 0x69, 0xDF, 0xF8, 0x83, 0xC3, 0xD8, 0xF4, 0x01, 0x14, 0xF1, 0x98, 0xA8, 0x82, 0x2E,
 0xA8, 0x84, 0xF3, 0x11, 0xD1, 0x82, 0xF5, 0xD9, 0x92, 0x50, 0x97, 0x88, 0xF1, 0x09, 0xF4, 0x1C,
 0xD8, 0x84, 0xA8, 0xF3, 0xC0, 0xF8, 0xF9, 0xD1, 0xD9, 0x97, 0x82, 0xF1, 0x49, 0xF4, 0x0D, 0xD8,
 0xF3, 0xF9, 0xF9, 0xD1, 0xD9, 0x82, 0xF4, 0xC4, 0x03, 0xD8, 0xDE, 0xDF, 0xD8, 0xF1, 0xAD, 0x88,
 0x98, 0xCC, 0xA8, 0x09, 0xF9, 0xD9, 0x82, 0x92, 0xA8, 0xF5, 0x7C, 0xF1, 0x88, 0x3A, 0xCF, 0x94,
 0x4A, 0x6E, 0x98, 0xDB, 0x69, 0x31, 0xDA, 0xAD, 0xF2, 0xDE, 0xF9, 0xD8, 0x87, 0x95, 0xA8, 0xF2,
 0x21, 0xD1, 0xDA, 0xA5, 0xF9, 0xF4, 0x17, 0xD9, 0xF1, 0xAE, 0x8E, 0xD0, 0xC0, 0xC3, 0xAE, 0x82,
/* bank # 6 */
 0xC6, 0x84, 0xC3, 0xA8, 0x85, 0x95, 0xC8, 0xA5, 0x88, 0xF2, 0xC0, 0xF1, 0xF4, 0x01, 0x0E, 0xF1,
 0x8E, 0x9E, 0xA8, 0xC6, 0x3E, 0x56, 0xF5, 0x54, 0xF1, 0x88, 0x72, 0xF4, 0x01, 0x15, 0xF1, 0x98,
 0x45, 0x85, 0x6E, 0xF5, 0x8E, 0x9E, 0x04, 0x88, 0xF1, 0x42, 0x98, 0x5A, 0x8E, 0x9E, 0x06, 0x88,
 0x69, 0xF4, 0x01, 0x1C, 0xF1, 0x98, 0x1E, 0x11, 0x08, 0xD0, 0xF5, 0x04, 0xF1, 0x1E, 0x97, 0x02,
 0x02, 0x98, 0x36, 0x25, 0xDB, 0xF9, 0xD9, 0x85, 0xA5, 0xF3, 0xC1, 0xDA, 0x85, 0xA5, 0xF3, 0xDF,
 0xD8, 0x85, 0x95, 0xA8, 0xF3, 0x09, 0xDA, 0xA5, 0xFA, 0xD8, 0x82, 0x92, 0xA8, 0xF5, 0x78, 0xF1,
 0x88, 0x1A, 0x84, 0x9F, 0x26, 0x88, 0x98, 0x21, 0xDA, 0xF4, 0x1D, 0xF3, 0xD8, 0x87, 0x9F, 0x39,
 0xD1, 0xAF, 0xD9, 0xDF, 0xDF, 0xFB, 0xF9, 0xF4, 0x0C, 0xF3, 0xD8, 0xFA, 0xD0, 0xF8, 0xDA, 0xF9,
 0xF9, 0xD0, 0xDF, 0xD9, 0xF9, 0xD8, 0xF4, 0x0B, 0xD8, 0xF3, 0x87, 0x9F, 0x39, 0xD1, 0xAF, 0xD9,
 0xDF, 0xDF, 0xF4, 0x1D, 0xF3, 0xD8, 0xFA, 0xFC, 0xA8, 0x69, 0xF9, 0xF9, 0xAF, 0xD0, 0xDA, 0xDE,
 0xFA, 0xD9, 0xF8, 0x8F, 0x9F, 0xA8, 0xF1, 0xCC, 0xF3, 0x98, 0xDB, 0x45, 0xD9, 0xAF, 0xDF, 0xD0,
 0xF8, 0xD8, 0xF1, 0x8F, 0x9F, 0xA8, 0xCA, 0xF3, 0x88, 0x09, 0xDA, 0xAF, 0x8F, 0xCB, 0xF8, 0xD8,
 0xF2, 0xAD, 0x97, 0x8D, 0x0C, 0xD9, 0xA5, 0xDF, 0xF9, 0xBA, 0xA6, 0xF3, 0xFA, 0xF4, 0x12, 0xF2,
 0xD8, 0x95, 0x0D, 0xD1, 0xD9, 0xBA, 0xA6, 0xF3, 0xFA, 0xDA, 0xA5, 0xF2, 0xC1, 0xBA, 0xA6, 0xF3,
 0xDF, 0xD8, 0xF1, 0xBA, 0xB2, 0xB6, 0x86, 0x96, 0xA6, 0xD0, 0xCA, 0xF3, 0x49, 0xDA, 0xA6, 0xCB,
 0xF8, 0xD8, 0xB0, 0xB4, 0xB8, 0xD8, 0xAD, 0x84, 0xF2, 0xC0, 0xDF, 0xF1, 0x8F, 0xCB, 0xC3, 0xA8,
/* bank # 7 */
 0xB2, 0xB6, 0x86, 0x96, 0xC8, 0xC1, 0xCB, 0xC3, 0xF3, 0xB0, 0xB4, 0x88, 0x98, 0xA8, 0x21, 0xDB,
 0x71, 0x8D, 0x9D, 0x71, 0x85, 0x95, 0x21, 0xD9, 0xAD, 0xF2, 0xFA, 0xD8, 0x85, 0x97, 0xA8, 0x28,
 0xD9, 0xF4, 0x08, 0xD8, 0xF2, 0x8D, 0x29, 0xDA, 0xF4, 0x05, 0xD9, 0xF2, 0x85, 0xA4, 0xC2, 0xF2,
 0xD8, 0xA8, 0x8D, 0x94, 0x01, 0xD1, 0xD9, 0xF4, 0x11, 0xF2, 0xD8, 0x87, 0x21, 0xD8, 0xF4, 0x0A,
 0xD8, 0xF2, 0x84, 0x98, 0xA8, 0xC8, 0x01, 0xD1, 0xD9, 0xF4, 0x11, 0xD8, 0xF3, 0xA4, 0xC8, 0xBB,
 0xAF, 0xD0, 0xF2, 0xDE, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xD8, 0xF1, 0xB8, 0xF6,
 0xB5, 0xB9, 0xB0, 0x8A, 0x95, 0xA3, 0xDE, 0x3C, 0xA3, 0xD9, 0xF8, 0xD8, 0x5C, 0xA3, 0xD9, 0xF8,
 0xD8, 0x7C, 0xA3, 0xD9, 0xF8, 0xD8, 0xF8, 0xF9, 0xD1, 0xA5, 0xD9, 0xDF, 0xDA, 0xFA, 0xD8, 0xB1,
 0x85, 0x30, 0xF7, 0xD9, 0xDE, 0xD8, 0xF8, 0x30, 0xAD, 0xDA, 0xDE, 0xD8, 0xF2, 0xB4, 0x8C, 0x99,
 0xA3, 0x2D, 0x55, 0x7D, 0xA0, 0x83, 0xDF, 0xDF, 0xDF, 0xB5, 0x91, 0xA0, 0xF6, 0x29, 0xD9, 0xFB,
 0xD8, 0xA0, 0xFC, 0x29, 0xD9, 0xFA, 0xD8, 0xA0, 0xD0, 0x51, 0xD9, 0xF8, 0xD8, 0xFC, 0x51, 0xD9,
 0xF9, 0xD8, 0x79, 0xD9, 0xFB, 0xD8, 0xA0, 0xD0, 0xFC, 0x79, 0xD9, 0xFA, 0xD8, 0xA1, 0xF9, 0xF9,
 0xF9, 0xF9, 0xF9, 0xA0, 0xDA, 0xDF, 0xDF, 0xDF, 0xD8, 0xA1, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xAC,
 0xDE, 0xF8, 0xAD, 0xDE, 0x83, 0x93, 0xAC, 0x2C, 0x54, 0x7C, 0xF1, 0xA8, 0xDF, 0xDF, 0xDF, 0xF6,
 0x9D, 0x2C, 0xDA, 0xA0, 0xDF, 0xD9, 0xFA, 0xDB, 0x2D, 0xF8, 0xD8, 0xA8, 0x50, 0xDA, 0xA0, 0xD0,
 0xDE, 0xD9, 0xD0, 0xF8, 0xF8, 0xF8, 0xDB, 0x55, 0xF8, 0xD8, 0xA8, 0x78, 0xDA, 0xA0, 0xD0, 0xDF,
/* bank # 8 */
 0xD9, 0xD0, 0xFA, 0xF8, 0xF8, 0xF8, 0xF8, 0xDB, 0x7D, 0xF8, 0xD8, 0x9C, 0xA8, 0x8C, 0xF5, 0x30,
 0xDB, 0x38, 0xD9, 0xD0, 0xDE, 0xDF, 0xA0, 0xD0, 0xDE, 0xDF, 0xD8, 0xA8, 0x48, 0xDB, 0x58, 0xD9,
 0xDF, 0xD0, 0xDE, 0xA0, 0xDF, 0xD0, 0xDE, 0xD8, 0xA8, 0x68, 0xDB, 0x70, 0xD9, 0xDF, 0xDF, 0xA0,
 0xDF, 0xDF, 0xD8, 0xF1, 0xA8, 0x88, 0x90, 0x2C, 0x54, 0x7C, 0x98, 0xA8, 0xD0, 0x5C, 0x38, 0xD1,
 0xDA, 0xF2, 0xAE, 0x8C, 0xDF, 0xF9, 0xD8, 0xB0, 0x87, 0xA8, 0xC1, 0xC1, 0xB1, 0x88, 0xA8, 0xC6,
 0xF9, 0xF9, 0xDA, 0x36, 0xD8, 0xA8, 0xF9, 0xDA, 0x36, 0xD8, 0xA8, 0xF9, 0xDA, 0x36, 0xD8, 0xA8,
 0xF9, 0xDA, 0x36, 0xD8, 0xA8, 0xF9, 0xDA, 0x36, 0xD8, 0xF7, 0x8D, 0x9D, 0xAD, 0xF8, 0x18, 0xDA,
 0xF2, 0xAE, 0xDF, 0xD8, 0xF7, 0xAD, 0xFA, 0x30, 0xD9, 0xA4, 0xDE, 0xF9, 0xD8, 0xF2, 0xAE, 0xDE,
 0xFA, 0xF9, 0x83, 0xA7, 0xD9, 0xC3, 0xC5, 0xC7, 0xF1, 0x88, 0x9B, 0xA7, 0x7A, 0xAD, 0xF7, 0xDE,
 0xDF, 0xA4, 0xF8, 0x84, 0x94, 0x08, 0xA7, 0x97, 0xF3, 0x00, 0xAE, 0xF2, 0x98, 0x19, 0xA4, 0x88,
 0xC6, 0xA3, 0x94, 0x88, 0xF6, 0x32, 0xDF, 0xF2, 0x83, 0x93, 0xDB, 0x09, 0xD9, 0xF2, 0xAA, 0xDF,
 0xD8, 0xD8, 0xAE, 0xF8, 0xF9, 0xD1, 0xDA, 0xF3, 0xA4, 0xDE, 0xA7, 0xF1, 0x88, 0x9B, 0x7A, 0xD8,
 0xF3, 0x84, 0x94, 0xAE, 0x19, 0xF9, 0xDA, 0xAA, 0xF1, 0xDF, 0xD8, 0xA8, 0x81, 0xC0, 0xC3, 0xC5,
 0xC7, 0xA3, 0x92, 0x83, 0xF6, 0x28, 0xAD, 0xDE, 0xD9, 0xF8, 0xD8, 0xA3, 0x50, 0xAD, 0xD9, 0xF8,
 0xD8, 0xA3, 0x78, 0xAD, 0xD9, 0xF8, 0xD8, 0xF8, 0xF9, 0xD1, 0xA1, 0xDA, 0xDE, 0xC3, 0xC5, 0xC7,
 0xD8, 0xA1, 0x81, 0x94, 0xF8, 0x18, 0xF2, 0xB0, 0x89, 0xAC, 0xC3, 0xC5, 0xC7, 0xF1, 0xD8, 0xB8,
/* bank # 9 */
 0xB4, 0xB0, 0x97, 0x86, 0xA8, 0x31, 0x9B, 0x06, 0x99, 0x07, 0xAB, 0x97, 0x28, 0x88, 0x9B, 0xF0,
 0x0C, 0x20, 0x14, 0x40, 0xB0, 0xB4, 0xB8, 0xF0, 0xA8, 0x8A, 0x9A, 0x28, 0x50, 0x78, 0xB7, 0x9B,
 0xA8, 0x29, 0x51, 0x79, 0x24, 0x70, 0x59, 0x44, 0x69, 0x38, 0x64, 0x48, 0x31, 0xF1, 0xBB, 0xAB,
 0x88, 0x00, 0x2C, 0x54, 0x7C, 0xF0, 0xB3, 0x8B, 0xB8, 0xA8, 0x04, 0x28, 0x50, 0x78, 0xF1, 0xB0,
 0x88, 0xB4, 0x97, 0x26, 0xA8, 0x59, 0x98, 0xBB, 0xAB, 0xB3, 0x8B, 0x02, 0x26, 0x46, 0x66, 0xB0,
 0xB8, 0xF0, 0x8A, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x8B, 0x29, 0x51, 0x79, 0x8A, 0x24, 0x70, 0x59,
 0x8B, 0x20, 0x58, 0x71, 0x8A, 0x44, 0x69, 0x38, 0x8B, 0x39, 0x40, 0x68, 0x8A, 0x64, 0x48, 0x31,
 0x8B, 0x30, 0x49, 0x60, 0x88, 0xF1, 0xAC, 0x00, 0x2C, 0x54, 0x7C, 0xF0, 0x8C, 0xA8, 0x04, 0x28,
 0x50, 0x78, 0xF1, 0x88, 0x97, 0x26, 0xA8, 0x59, 0x98, 0xAC, 0x8C, 0x02, 0x26, 0x46, 0x66, 0xF0,
 0x89, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x24, 0x70, 0x59, 0x44, 0x69, 0x38, 0x64, 0x48, 0x31, 0xA9,
 0x88, 0x09, 0x20, 0x59, 0x70, 0xAB, 0x11, 0x38, 0x40, 0x69, 0xA8, 0x19, 0x31, 0x48, 0x60, 0x8C,
 0xA8, 0x3C, 0x41, 0x5C, 0x20, 0x7C, 0x00, 0xF1, 0x87, 0x98, 0x19, 0x86, 0xA8, 0x6E, 0x76, 0x7E,
 0xA9, 0x99, 0x88, 0x2D, 0x55, 0x7D, 0xD8, 0xB1, 0xB5, 0xB9, 0xA3, 0xDF, 0xDF, 0xDF, 0xAE, 0xD0,
 0xDF, 0xAA, 0xD0, 0xDE, 0xF2, 0xAB, 0xF8, 0xF9, 0xD9, 0xB0, 0x87, 0xC4, 0xAA, 0xF1, 0xDF, 0xDF,
 0xBB, 0xAF, 0xDF, 0xDF, 0xB9, 0xD8, 0xB1, 0xF1, 0xA3, 0x97, 0x8E, 0x60, 0xDF, 0xB0, 0x84, 0xF2,
 0xC8, 0xF8, 0xF9, 0xD9, 0xDE, 0xD8, 0x93, 0x85, 0xF1, 0x4A, 0xB1, 0x83, 0xA3, 0x08, 0xB5, 0x83,
/* bank # 10 */
 0x9A, 0x08, 0x10, 0xB7, 0x9F, 0x10, 0xD8, 0xF1, 0xB0, 0xBA, 0xAE, 0xB0, 0x8A, 0xC2, 0xB2, 0xB6,
 0x8E, 0x9E, 0xF1, 0xFB, 0xD9, 0xF4, 0x1D, 0xD8, 0xF9, 0xD9, 0x0C, 0xF1, 0xD8, 0xF8, 0xF8, 0xAD,
 0x61, 0xD9, 0xAE, 0xFB, 0xD8, 0xF4, 0x0C, 0xF1, 0xD8, 0xF8, 0xF8, 0xAD, 0x19, 0xD9, 0xAE, 0xFB,
 0xDF, 0xD8, 0xF4, 0x16, 0xF1, 0xD8, 0xF8, 0xAD, 0x8D, 0x61, 0xD9, 0xF4, 0xF4, 0xAC, 0xF5, 0x9C,
 0x9C, 0x8D, 0xDF, 0x2B, 0xBA, 0xB6, 0xAE, 0xFA, 0xF8, 0xF4, 0x0B, 0xD8, 0xF1, 0xAE, 0xD0, 0xF8,
 0xAD, 0x51, 0xDA, 0xAE, 0xFA, 0xF8, 0xF1, 0xD8, 0xB9, 0xB1, 0xB6, 0xA3, 0x83, 0x9C, 0x08, 0xB9,
 0xB1, 0x83, 0x9A, 0xB5, 0xAA, 0xC0, 0xFD, 0x30, 0x83, 0xB7, 0x9F, 0x10, 0xB5, 0x8B, 0x93, 0xF2,
 0x02, 0x02, 0xD1, 0xAB, 0xDA, 0xDE, 0xD8, 0xF1, 0xB0, 0x80, 0xBA, 0xAB, 0xC0, 0xC3, 0xB2, 0x84,
 0xC1, 0xC3, 0xD8, 0xB1, 0xB9, 0xF3, 0x8B, 0xA3, 0x91, 0xB6, 0x09, 0xB4, 0xD9, 0xAB, 0xDE, 0xB0,
 0x87, 0x9C, 0xB9, 0xA3, 0xDD, 0xF1, 0xB3, 0x8B, 0x8B, 0x8B, 0x8B, 0x8B, 0xB0, 0x87, 0x20, 0x28,
 0x30, 0x38, 0xB2, 0x8B, 0xB6, 0x9B, 0xF2, 0xA3, 0xC0, 0xC8, 0xC2, 0xC4, 0xCC, 0xC6, 0xA3, 0xA3,
 0xA3, 0xF1, 0xB0, 0x87, 0xB5, 0x9A, 0xD8, 0xF3, 0x9B, 0xA3, 0xA3, 0xDC, 0xBA, 0xAC, 0xDF, 0xB9,
 0xA3, 0xFE, 0xF2, 0xAB, 0xC4, 0xAA, 0xF1, 0xDF, 0xDF, 0xBB, 0xAF, 0xDF, 0xDF, 0xA3, 0xA3, 0xA3,
 0xD8, 0xD8, 0xD8, 0xBB, 0xB3, 0xB7, 0xF1, 0xAA, 0xF9, 0xDA, 0xFF, 0xD9, 0x80, 0x9A, 0xAA, 0x28,
 0xB4, 0x80, 0x98, 0xA7, 0x20, 0xB7, 0x97, 0x87, 0xA8, 0x66, 0x88, 0xF0, 0x79, 0x51, 0xF1, 0x90,
 0x2C, 0x87, 0x0C, 0xA7, 0x81, 0x97, 0x62, 0x93, 0xF0, 0x71, 0x71, 0x60, 0x85, 0x94, 0x01, 0x29,
/* bank # 11 */
 0x51, 0x79, 0x90, 0xA5, 0xF1, 0x28, 0x4C, 0x6C, 0x87, 0x0C, 0x95, 0x18, 0x85, 0x78, 0xA3, 0x83,
 0x90, 0x28, 0x4C, 0x6C, 0x88, 0x6C, 0xD8, 0xF3, 0xA2, 0x82, 0x00, 0xF2, 0x10, 0xA8, 0x92, 0x19,
 0x80, 0xA2, 0xF2, 0xD9, 0x26, 0xD8, 0xF1, 0x88, 0xA8, 0x4D, 0xD9, 0x48, 0xD8, 0x96, 0xA8, 0x39,
 0x80, 0xD9, 0x3C, 0xD8, 0x95, 0x80, 0xA8, 0x39, 0xA6, 0x86, 0x98, 0xD9, 0x2C, 0xDA, 0x87, 0xA7,
 0x2C, 0xD8, 0xA8, 0x89, 0x95, 0x19, 0xA9, 0x80, 0xD9, 0x38, 0xD8, 0xA8, 0x89, 0x39, 0xA9, 0x80,
 0xDA, 0x3C, 0xD8, 0xA8, 0x2E, 0xA8, 0x39, 0x90, 0xD9, 0x0C, 0xD8, 0xA8, 0x95, 0x31, 0x98, 0xD9,
 0x0C, 0xD8, 0xA8, 0x09, 0xD9, 0xFF, 0xD8, 0x01, 0xDA, 0xFF, 0xD8, 0x95, 0x39, 0xA9, 0xDA, 0x26,
 0xFF, 0xD8, 0x90, 0xA8, 0x0D, 0x89, 0x99, 0xA8, 0x10, 0x80, 0x98, 0x21, 0xDA, 0x2E, 0xD8, 0x89,
 0x99, 0xA8, 0x31, 0x80, 0xDA, 0x2E, 0xD8, 0xA8, 0x86, 0x96, 0x31, 0x80, 0xDA, 0x2E, 0xD8, 0xA8,
 0x87, 0x31, 0x80, 0xDA, 0x2E, 0xD8, 0xA8, 0x82, 0x92, 0xF3, 0x41, 0x80, 0xF1, 0xD9, 0x2E, 0xD8,
 0xA8, 0x82, 0xF3, 0x19, 0x80, 0xF1, 0xD9, 0x2E, 0xD8, 0x82, 0xAC, 0xF3, 0xC0, 0xA2, 0x80, 0x22,
 0xF1, 0xA6, 0x2E, 0xA7, 0x2E, 0xA9, 0x22, 0x98, 0xA8, 0x29, 0xDA, 0xAC, 0xDE, 0xFF, 0xD8, 0xA2,
 0xF2, 0x2A, 0xF1, 0xA9, 0x2E, 0x82, 0x92, 0xA8, 0xF2, 0x31, 0x80, 0xA6, 0x96, 0xF1, 0xD9, 0x00,
 0xAC, 0x8C, 0x9C, 0x0C, 0x30, 0xAC, 0xDE, 0xD0, 0xDE, 0xFF, 0xD8, 0x8C, 0x9C, 0xAC, 0xD0, 0x10,
 0xAC, 0xDE, 0x80, 0x92, 0xA2, 0xF2, 0x4C, 0x82, 0xA8, 0xF1, 0xCA, 0xF2, 0x35, 0xF1, 0x96, 0x88,
 0xA6, 0xD9, 0x00, 0xD8, 0xF1, 0xFF,
};



// Helper Math Classes
class Quaternion {
  public:
  float w;
  float x;
  float y;
  float z;
  
  Quaternion() {
    w = 1.0f;
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
  }
  Quaternion(float * n) {
    setQuaternion(n[0], n[1], n[2], n[3]);
  }
  Quaternion(long * n) {
    setQuaternion((float)n[0], (float)n[1], (float)n[2], (float)n[3]);
  }
  Quaternion setQuaternion(float * n) {
    setQuaternion(n[0], n[1], n[2], n[3]);
  }
  Quaternion setQuaternion(long * n) {
    setQuaternion((float)n[0], (float)n[1], (float)n[2], (float)n[3]);
  }
  Quaternion(float nw, float nx, float ny, float nz) {
    setQuaternion(nw, nx, ny, nz);
  }
  Quaternion setQuaternion(float nw, float nx, float ny, float nz) {
    w = nw;
    x = nx;
    y = ny;
    z = nz;
  }
  Quaternion getProduct(Quaternion q) {
    // Quaternion multiplication is defined by:
    //     (Q1 * Q2).w = (w1w2 - x1x2 - y1y2 - z1z2)
    //     (Q1 * Q2).x = (w1x2 + x1w2 + y1z2 - z1y2)
    //     (Q1 * Q2).y = (w1y2 - x1z2 + y1w2 + z1x2)
    //     (Q1 * Q2).z = (w1z2 + x1y2 - y1x2 + z1w2
    return Quaternion(
    w*q.w - x*q.x - y*q.y - z*q.z,  // new w
    w*q.x + x*q.w + y*q.z - z*q.y,  // new x
    w*q.y - x*q.z + y*q.w + z*q.x,  // new y
    w*q.z + x*q.y - y*q.x + z*q.w); // new z
  }

  Quaternion getConjugate() {
    return Quaternion(w, -x, -y, -z);
  }
  
  float getMagnitude() {
    return sqrt(w*w + x*x + y*y + z*z);
  }
  
 // Quaternion :: normalize() {
  Quaternion normalize() {
    float m = getMagnitude();
   // w /= m;
   // x /= m;
   // y /= m;
  //  z /= m;
  //  return this;
   return Quaternion(
      w /= m, // new w
      x /= m, // new x
      y /= m, // new y
      z /= m); // new z
  } 
  
  Quaternion getNormalized() {
    Quaternion r(w, x, y, z);
    r.normalize();
    return r;
  }
};

class VectorInt16 {
  public:
  int16_t x;
  int16_t y;
  int16_t z;

  VectorInt16() {
    x = 0;
    y = 0;
    z = 0;
  }
  
  VectorInt16(int16_t nx, int16_t ny, int16_t nz) {
    x = nx;
    y = ny;
    z = nz;
  }


  float getMagnitude() {
    return sqrt((float)x*(float)x + (float)y*(float)y + (float)z*(float)z);
  }

  VectorInt16 :: normalize() {
    float m = getMagnitude();
    //x /= m;
    //y /= m;
    //z /= m;
    //return this;
    return VectorInt16(x /= m,y /= m,z /= m);
  }
  
  VectorInt16 getNormalized() {
    VectorInt16 r(x, y, z);
    r.normalize();
    return r;
  }
  
  VectorInt16 :: rotate(Quaternion *q) {
    // http://www.cprogramming.com/tutorial/3d/quaternions.html
    // http://www.euclideanspace.com/maths/algebra/realNormedAlgebra/quaternions/transforms/index.htm
    // http://content.gpwiki.org/index.php/OpenGL:Tutorials:Using_Quaternions_to_represent_rotation
    // ^ or: http://webcache.googleusercontent.com/search?q=cache:xgJAp3bDNhQJ:content.gpwiki.org/index.php/OpenGL:Tutorials:Using_Quaternions_to_represent_rotation&hl=en&gl=us&strip=1
    
    // P_out = q * P_in * conj(q)
    // - P_out is the output vector
    // - q is the orientation quaternion
    // - P_in is the input vector (a*aReal)
    // - conj(q) is the conjugate of the orientation quaternion (q=[w,x,y,z], q*=[w,-x,-y,-z])
    Quaternion p(0, x, y, z);

    // quaternion multiplication: q * p, stored back in p
    p = q -> getProduct(p);

    // quaternion multiplication: p * conj(q), stored back in p
    p = p.getProduct(q -> getConjugate());

    // p quaternion is now [0, x', y', z']
    //x = p.x;
    //y = p.y;
    //z = p.z;
    return VectorInt16(p.x,p.y,p.z);
  }

  VectorInt16 getRotated(Quaternion *q) {
    VectorInt16 r(x, y, z);
    r.rotate(q);
    return r;
  }
};

class VectorFloat {
  public:
  float x;
  float y;
  float z;

  VectorFloat() {
    x = 0;
    y = 0;
    z = 0;
  }
  
  VectorFloat(float nx, float ny, float nz) {
    x = nx;
    y = ny;
    z = nz;
  }

  float getMagnitude() {
    return sqrt(x*x + y*y + z*z);
  }

  VectorFloat :: normalize() {
    float m = getMagnitude();
    //x /= m;
    //y /= m;
    //z /= m;
    //return this;
    return VectorFloat( x /= m,y /= m,z /= m);
  }
  
  VectorFloat getNormalized() {
    VectorFloat r(x, y, z);
    r.normalize();
    return r;
  }
  
  VectorFloat :: rotate(Quaternion *q) {
    Quaternion p(0, x, y, z);

    // quaternion multiplication: q * p, stored back in p
    p = q -> getProduct(p);

    // quaternion multiplication: p * conj(q), stored back in p
    p = p.getProduct(q -> getConjugate());

    // p quaternion is now [0, x', y', z']
    //x = p.x;
    //y = p.y;
    //z = p.z;
   // return this;
     return VectorFloat( p.x,p.y,p.z);
  }

  VectorFloat getRotated(Quaternion *q) {
    VectorFloat r(x, y, z);
    r.rotate(q);
    return r;
  }
};


#endif
