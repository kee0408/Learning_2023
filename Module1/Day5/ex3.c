#include <stdio.h>
struct Time 
{
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time time1, struct Time time2) 
{
    struct Time difference;
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;
    if (diffSeconds < 0)
    diffSeconds = -diffSeconds;
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;
    return difference;
}
int main()
 {
    struct Time time1, time2, difference;
    printf("Enter the first time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Enter the second time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
    difference = calculateTimeDifference(time1, time2);
    printf("Difference between the two time periods: %d:%d:%d\n",difference.hours, difference.minutes, difference.seconds);
    return 0;
}
