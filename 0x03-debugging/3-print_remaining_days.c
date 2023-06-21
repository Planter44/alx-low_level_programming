#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days -Taking a date and prints days are
 * left in the year, taking leap years into account.
 * @month: The month in number format,
 * @day: The day of month,
 * @year: The year.
 * Return: void.
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
