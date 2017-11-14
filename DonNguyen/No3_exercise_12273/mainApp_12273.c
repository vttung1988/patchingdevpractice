#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float celsius, fahrenheit;

	// input celsius value
	printf("Please provide the temperature by Celsius: ");
	scanf_s("%f", &celsius);

	// convert from C to F
	// (°C × 9/5) + 32 = °F
	fahrenheit = (celsius * 9 / 5) + 32;

	// display the result
	printf("%0.1f degrees Celsius converts to %0.1f degrees Fahrenheit. \n", celsius, fahrenheit);
	system("pause");
	return 0;
}