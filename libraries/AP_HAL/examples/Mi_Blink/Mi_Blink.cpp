
// Practica 1: Blink LED
// Tarjeta: Pixhawk 6C
// Firmware experimental independiente

#include <AP_HAL/AP_HAL.h>

const AP_HAL::HAL& hal = AP_HAL::get_HAL();

// LED rojo integrado
const uint8_t LED = 90;

void setup()
{
    // Configurar GPIO como salida
    hal.gpio->pinMode(LED, HAL_GPIO_OUTPUT);

    // Apagar inicialmente el LED
    hal.gpio->write(LED, 1);
}

void loop()
{
    // Encender LED
    hal.gpio->write(LED, 0);
    hal.scheduler->delay(500);

    // Apagar LED
    hal.gpio->write(LED, 1);
    hal.scheduler->delay(500);
}

AP_HAL_MAIN();
