#include <stdio.h>

int main() {
	float centimeters, inches, temp_inches_value;
	int feet;

	// input celsius value
	printf("Please provide the value by centimeter: ");
	scanf_s("%f", &centimeters);

	// calc
	temp_inches_value = centimeters / 2.54;
	feet = (int)(temp_inches_value / 12);
	inches = temp_inches_value - (float)(feet * 12);

	printf("%0.1f centimeters is %d feet %0.1f inches.\n\n", centimeters, feet, inches);
	system("pause");
}