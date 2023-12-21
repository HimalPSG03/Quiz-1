#include <stdio.h>
int main() {
    int totalHoursNeeded, numDays, numWorkers;
    printf("Enter total number of hours needed: ");
    scanf("%d", &totalHoursNeeded);
    printf("Enter number of days: ");
    scanf("%d", &numDays);
    printf("Enter number of workers: ");
    scanf("%d", &numWorkers);
    int totalWorkingHours = numDays * 8 - (numDays / 10) * 8;
    int totalWorkingHoursWithOvertime = totalWorkingHours + numWorkers * 2 * numDays;
    int hoursDifference = totalHoursNeeded - totalWorkingHoursWithOvertime;
    if (hoursDifference <= 0) {
        printf("Yes! %d hours left.\n", -hoursDifference);
    } else {
        printf("Not enough time! %d hours needed.\n", hoursDifference);
    }
    return 0;
}