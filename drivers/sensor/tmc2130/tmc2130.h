/*
 * Copyright (c) 2020 None
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_SENSOR_TMC2130_TMC2130_H_
#define ZEPHYR_DRIVERS_SENSOR_TMC2130_TMC2130_H_

#include <zephyr/types.h>
#include <device.h>

struct tmc2130_data
{
	struct device *spi;
	struct spi_config spi_cfg;
	struct spi_cs_control spi_cs_control;
};

#endif /* ZEPHYR_DRIVERS_SENSOR_TMC2130_TMC2130_H_ */
