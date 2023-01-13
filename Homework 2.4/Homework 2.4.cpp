// Homework 2.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day;
    printf("Hello! Enter the number of the day of the week:\n");
	scanf("%i", &day);
	switch (day)
	{
	case 1:
		{
			printf("Monday\n");
		}
	break;
	case 2:
		{
			printf("Tuesday\n");
		}
	break;
	case 3:
		{
			printf("Wednesday\n");
		}
	break;
	case 4:
		{
			printf("Thursday\n");
		}
	break;
	case 5:
		{
			printf("Friday\n");
		}
	break;
	case 6:
		{
			printf("Saturday\n");
		}
	break;
	case 7:
		{
			printf("Sunday\n");
		}
	break;
	default:
		{
			printf("Error. Incorrect number. There are 7 days in a week.\n");
		}
	break;
	}
}
