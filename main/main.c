/* Standard Libs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* FreeRTOS specific */
#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "freertos/task.h"

/* ESP32 IDF Specific */
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_ota_ops.h"
#include "esp_sleep.h"
#include "esp_system.h"
#include "rtc_wdt.h"

/* TAG for Debug Messages */
#define TAG "MAIN"

void app_main() {
    rtc_wdt_disable();

    esp_log_level_set("*", ESP_LOG_INFO);

    ESP_LOGW("---", "BOOTING! Build at:");
    ESP_LOGW("---", __DATE__);
    ESP_LOGW("---", __TIME__);

    vTaskDelete(NULL);
}
