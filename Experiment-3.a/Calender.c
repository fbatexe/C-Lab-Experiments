// 4. According to the gregorian calendar, it was Monday on the date 01/01/01. 
// If Any year is input through the keyboard 
// write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main() {
    int year, leapyears = 0, days = 0;
    int dayweek;

    printf("Enter the year : ");
    scanf("%d" , &year);

    for (int i = 0; i <= year; i++) {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
            leapyears++;
        }
    }
    days = (year - 1)*365 + leapyears;
    dayweek = days%7;

    printf("1st January on %d will be ", year);
    switch(dayweek) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
        default :
            break;
    }
    return 0;
}