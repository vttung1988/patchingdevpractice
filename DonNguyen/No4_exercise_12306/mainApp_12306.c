#include <stdio.h>
#include <stdbool.h>

// define global struct type
struct Date
{
	int day;
	int month;
	int year;
};

// function to find the next day
struct Date get_next_day(struct Date curDate) {
	struct Date nextDate = curDate;
	switch (curDate.day)
	{
	case 28:
		// check if it is 28/2 ?
		if (curDate.month == 2) {
			if (curDate.year % 4 == 0) {
				// nam nhuan
				nextDate.day++;
			}
			else {
				// 28/2 normal year
				nextDate.day = 1;
				nextDate.month++;
			}
		}
		else {
			nextDate.day++;
		}
		break;
	case 29:
		// check if it is 29/2 of "nam nhuan"
		if (curDate.month == 2) {
			nextDate.day = 1;
			nextDate.month++;
		}
		else {
			nextDate.day++;
		}
		break;
	case 30:
		if (curDate.month == 4 || curDate.month == 6 || curDate.month == 9 || curDate.month == 11) {
			nextDate.day = 1;
			nextDate.month++;
		}
		else {
			nextDate.day++;
		}
		break;
	case 31:
		nextDate.day = 1;
		nextDate.month++;
		break;
	default:
		nextDate.day++;
		break;
	}

	if (nextDate.month == 13) {
		nextDate.month = 1;
		nextDate.year++;
	}

	return nextDate;
}

// function check if input values is valid
bool check_date_valid(struct Date date) {
	bool res = true;
	if (date.day < 1 || date.day > 31) {
		res = false;
	}
	else if (date.month < 1 || date.month > 12) {
		res = false;
	}
	else if (date.day == 31 && (date.month == 2 || date.month == 4 || date.month == 6 || date.month == 9 || date.month == 1)) {
		res = false;
	}
	else if (date.day == 29 && date.month == 2 && (date.year % 4) != 0) {
		res = false;
	}
	return res;
}

int main() {

	// define variable	
	struct Date curDate;
	struct Date nextDate;

	// get input values
	printf("Input: ");
	scanf_s("%d %d %d", &curDate.day, &curDate.month, &curDate.year);

	// process and Display result
	if (check_date_valid(curDate)) {
		nextDate = get_next_day(curDate);
		printf("\nDate following %d:%d:%d is %d:%d:%d\n", curDate.day, curDate.month, curDate.year, nextDate.day, nextDate.month, nextDate.year);
	}
	else {
		printf("\nError: your input date is not valid, please try another one...\n");
	}
	
	system("pause");
	return 0;
}

