/*
 * nrf24l01.c
 *
 *  Created on: Nov 26, 2020
 *      Author: lth
 */

#include "nrf24l01.h"
#include "main.h"

SPI_HandleTypeDef *hspi;

void nrf24l01_init(SPI_HandleTypeDef *init_hspi) {
	hspi = init_hspi;
}
