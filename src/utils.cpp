#include <Arduino.h>
#include <WisBlock-API.h>

void log (const char *message) {
    printf(message);
    printf("\n");
}

void log(const char *tag, const char *message) {
    printf("[%s] %s\n", tag, message);

    if (g_ble_uart_is_connected) {
        g_ble_uart.printf("[%s] %s\n", tag, message);
    }
}