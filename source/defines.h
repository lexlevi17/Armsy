/*
 * defines.h
 *

 *
 *  Created on: Sep 20, 2015
 *      Author: lexlevi
 */

#ifndef SOURCE_DEFINES_H_
#define SOURCE_DEFINES_H_

/* Constants */

const float PI = 3.141592653589;
const float SEMITONE_UP = 1.059463;
const float SEMITONE_DOWN = 0.9438743;

/* Types */

typedef char FLAG;

/* Pins */

#define LED_PIN			GPIO_Pin_1

//pins for I2S
#define I2S3_WS_PIN 	GPIO_Pin_4   //port A
#define I2S3_MCLK_PIN 	GPIO_Pin_7   //port C
#define I2S3_SCLK_PIN 	GPIO_Pin_10  //port C
#define I2S3_SD_PIN 	GPIO_Pin_12  //port C


#endif /* SOURCE_DEFINES_H_ */
