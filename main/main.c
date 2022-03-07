/* Copyright (c) 2017 pcbreflux. All Rights Reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>. *
 */
#include <string.h>
#include <stdlib.h>

#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "esp_system.h"
#include "bh1750.h"


#define TAG "MAIN"

void app_main() {

    float lux;

    bh1750_init();
    lux = bh1750_read();

    printf("LUX IS: %f", lux);
    bh1750_deinit();
    // ESP_LOGI(TAG,"free DRAM %u IRAM %u",esp_get_free_heap_size(),xPortGetFreeHeapSizeTagged(MALLOC_CAP_32BIT));
    // xTaskCreate(oled_lux_task, "oled_lux_task", 4096, NULL, 5, NULL);

}

