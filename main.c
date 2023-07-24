#include <stdio.h>

// Function prototypes
float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float fahrenheitToKelvin(float fahrenheit);
float kelvinToCelsius(float kelvin);
float kelvinToFahrenheit(float kelvin);

int main() {
    float temperature;
    char originalUnit;

    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    printf("Enter the original unit of measurement (C, F, or K): ");
    scanf(" %c", &originalUnit);

    float celsius, fahrenheit, kelvin;

    switch (originalUnit) {
        case 'C':
        case 'c':
            celsius = temperature;
            fahrenheit = celsiusToFahrenheit(celsius);
            kelvin = celsiusToKelvin(celsius);
            break;

        case 'F':
        case 'f':
            fahrenheit = temperature;
            celsius = fahrenheitToCelsius(fahrenheit);
            kelvin = fahrenheitToKelvin(fahrenheit);
            break;

        case 'K':
        case 'k':
            kelvin = temperature;
            celsius = kelvinToCelsius(kelvin);
            fahrenheit = kelvinToFahrenheit(kelvin);
            break;

        default:
            printf("Invalid unit of measurement. Please use C, F, or K.\n");
            return 1;
    }

    printf("%.2f degrees Celsius\n", celsius);
    printf("%.2f degrees Fahrenheit\n", fahrenheit);
    printf("%.2f Kelvin\n", kelvin);

    return 0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin * 9 / 5) - 459.67;
}
