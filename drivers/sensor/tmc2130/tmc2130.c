/* tmc2130.c - Driver for TMC2130 stepper driver */

/*
 * Copyright (c) 2020 None
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <drivers/sensor.h>
#include <init.h>
#include <drivers/gpio.h>
#include <sys/byteorder.h>
#include <sys/__assert.h>
#include <drivers/spi.h>
#include <logging/log.h>

#include "tmc2130.h"

LOG_MODULE_REGISTER(TMC2130, CONFIG_SENSOR_LOG_LEVEL);

static int tmc2130_sample_fetch(struct device *dev, enum sensor_channel chan)
{
	struct tmc2130_data *data = dev->driver_data;
   return 0;
}

static int tmc2130_channel_get(struct device *dev,
			       enum sensor_channel chan,
			       struct sensor_value *val)
{
   struct tmc2130_data *data = dev->driver_data;
   return 0;
}

static const struct sensor_driver_api tmc2130_api_funcs = {
	.sample_fetch = tmc2130_sample_fetch,
	.channel_get = tmc2130_channel_get,
};


int tmc2130_init(struct device *dev)
{
	struct tmc2130_data *data = dev->driver_data;
	return 0;
}

static struct tmc2130_data tmc2130_data;

DEVICE_AND_API_INIT(tmc2130, DT_INST_0_TMC2130_LABEL, tmc2130_init, &tmc2130_data,
		    NULL, POST_KERNEL, CONFIG_SENSOR_INIT_PRIORITY,
		    &tmc2130_api_funcs);
