#include <Arduino.h>
#include <WisBlock-API.h>

void log_test() {
    printf("----- Log test message! -----");

    if(g_ble_uart_is_connected){
        printf("----- BLE connected test! -----");
    } else {
        printf("----- BLE not connected, maybe? -----");
    }
}