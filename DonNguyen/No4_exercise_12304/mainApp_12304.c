#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() 
{
	char ch1, ch2;
	int first, second, result;

	// get input values
	printf("Please provide 2 hexa characters: ");
	scanf("%c %c", &ch1, &ch2);

	// change to decimal
	first = hex_to_dec(ch1);
	second = hex_to_dec(ch2);
	if (first == 16 || second == 16) {
		printf("ERROR: Please input valid HEX values \n");
	}
	else {		
		result = (16 * first) + second;
		printf("the DEC result is %d\n", result);
	}
	system("pause");
	return 0;
}

int hex_to_dec(char ch) {
	ch = toupper(ch);
	int res;
	switch(ch)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		res = ch - '0';
		break;
	case 'A':
		res = 10;
		break;
	case 'B':
		res = 11;
		break;
	case 'C':
		res = 12;
		break;
	case 'D':
		res = 13;
		break;
	case 'E':
		res = 14;
		break;
	case 'F':
		res = 15;
		break;
	default:
		res = 16;
		break;
	}
	return res;
}
