/* [SERVO 1] Servo connection */
#define SRV1 3 // "PWM" on "SERVO 1" port

/* [SERVO 2] Servo connection */
#define SRV2 2 // "PWM" on "SERVO 2" port

/* [RC RECEIVER] Interface for 8 channel receiver */
#define RC_PWM1  A8 // "CH1" on "RC RECEIVER" port
#define RC_PWM2  A9 // "CH2" on "RC RECEIVER" port
#define RC_PWM3 A10 // "CH3" on "RC RECEIVER" port
#define RC_PWM4 A11 // "CH4" on "RC RECEIVER" port
#define RC_PWM5 A12 // "CH5" on "RC RECEIVER" port
#define RC_PWM6 A13 // "CH6" on "RC RECEIVER" port
#define RC_PWM7 A14 // "CH7" on "RC RECEIVER" port
#define RC_PWM8 A15 // "CH8" on "RC RECEIVER" port

/* [MOTOR DRIVER] Right motor driver (BTS7960) and encoder */
#define R_PWM1  4 // "RPWM" on "MOTOR DRIVER" port on the right side
#define L_PWM1  5 // "LPWM" on "MOTOR DRIVER" port on the right side
#define EN1     9 // "EN" on "MOTOR DRIVER" port on the right side
#define ENC_RA 13 // "CHA" on "RIGHT ENCODER" port after passed 100kHz LPF
#define ENC_RB 12 // "CHB" on "RIGHT ENCODER" port after passed 100kHz LPF

/* [MOTOR DRIVER] Left motor driver (BTS7960) and encoder */
#define R_PWM2  6 // "RPWM" on "MOTOR DRIVER" port on the left side
#define L_PWM2  7 // "LPWM" on "MOTOR DRIVER" port on the left side
#define EN2     8 // "EN" on "MOTOR DRIVER" port on the left side
#define ENC_LA 11 // "CHA" on "LEFT ENCODER" port after passed 100kHz LPF
#define ENC_LB 10 // "CHB" on "LEFT ENCODER" port after passed 100kHz LPF

/* [UART CH 1] Additional UART port, access with Serial1 */
#define TX1 18 // "TX1" on "UART CH 1" port
#define RX1 19 // "RX1" on "UART CH 1" port

/* [UART CH 2] Additional UART port, access with Serial2 */
#define TX2 16 // "TX2" on "UART CH 2" port
#define RX2 17 // "RX2" on "UART CH 2" port

/* [UART CH 3] Additional UART port, access with Serial3 */
#define TX3 14 // "TX3" on "UART CH 3" port
#define RX3 15 // "TX3" on "UART CH 3" port

/* [GENERAL I2C] General I2C port */
#define SDA 20 // "SDA" on "GENERAL I2C" port
#define SCL 21 // "SCL" on "GENERAL I2C" port

/* [GENERAL SPI] General SPI port */
#define MISO 50 // "MISO" on "GENERAL SPI" port
#define MOSI 51 // "MOSI" on "GENERAL SPI" port
#define SCK  52 // "SCK" on "GENERAL SPI" port
#define SS1  53 // "SS1" on "GENERAL SPI" port
#define SS2  24 // "SS2" on "GENERAL SPI" port
#define SS3  23 // "SS3" on "GENERAL SPI" port
#define SS4  22 // "SS4" on "GENERAL SPI" port

/* [ADC] Interface for ADC */
#define ADC1 A1 // "A1" on "ADC" port
#define ADC2 A2 // "A2" on "ADC" port
#define ADC3 A3 // "A3" on "ADC" port

/* [LED] Internal LED indicator */
#define BLUE_LED 31
#define RED_LED  30

/* [EEPROM AT24C32] Description for AT24C32 IC */
/* 1. AT24C32 communicate with I2C */
/* 2. Address of AT24C32 is 0x50 */
/* 3. Have write protection (WP); HIGH = DISABLE WRITE; LOW = ENABLE WRITE */
#define WP 25

/* [IMU MPU6050] Description for MPU6050 module */
/* 1. MPU6050 communicate with I2C */
/* 2. Address of MPU6050 is 0x69 */

/* [RTC DS3231] Description for DS3231 module */
/* 1. DS3231 communicate with I2C */
/* 2. Address of DS3231 is 0x68 */
/* 3. Module has internal EEPROM with address 0x57 */

/* [COMPASS QMC5883L] Description for QMC5883L module */
/* 1. QMC5883L communicate with I2C */
/* 2. Address of QMC5883L is 0x0D */
/* 3. Usually, IC marking is HMC, but it is actually QMC */


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
