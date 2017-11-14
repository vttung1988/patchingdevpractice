#include <stdio.h>
#include <ctype.h>

int main() 
{
	char ch;
	int a, u, e, i, o, total, rest;
	a = u = e = i = o = rest = total = 0;

	while ((ch = getchar()) != EOF && ch != '\n') // new-line character, \n = OA in hex. So you can compare with 10 in DEC
	{	
		total++;
		ch = toupper(ch);
		switch (ch)
		{
		case 'A':
			a++;
			break;
		case 'U':
			u++;
			break;
		case 'E':
			e++;
			break;
		case 'I':
			i++;
			break;
		case 'O':
			o++;
			break;
		default:
			break;
		}
	}
	rest = total - (a + u + e + i + o);
	printf("Numbers of characters:\na   %d ; e   %d ; i   %d ; o   %d ; u   %d ; rest  %d; total %d\n", a, u, e, i, o, rest, total);
	printf("Percentages of total: \na   %0.1f%% ; e   %0.1f%% ; i   %0.1f%% ; o   %0.1f%% ; u   %0.1f%% ; rest  %0.1f%% \n", 
		   (float)(a * 100 /total), (float)(u * 100 / total), (float)(e * 100 / total), (float)(i * 100 / total), (float)(o * 100 / total), (float)(rest * 100 / total));
	system("pause");
	return 0;
}