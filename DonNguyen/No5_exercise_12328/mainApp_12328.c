#include <stdio.h>

int main() {
	
	int input_value, sum = 0;

	do
	{
		printf("input number: ");
		scanf_s("%d", &input_value);
		if(input_value != -999)
			sum += input_value;
	} while (input_value != -999);
	printf("\nSum of all input nummber is: %d \n", sum);
	system("pause");
	return 0;
}