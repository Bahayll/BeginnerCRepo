#include <stdio.h>
#include <stdlib.h>


/* This code calculates how many days it will take Furkan to finish a novel of 1000 pages by reading 10 pages on the first day and increasing the daily reading by 5 pages more than the previous day.
The number of pages read each day is calculated using the variable 'sayfa', accumulated in the variable 'okunansayfa'. The variable 'gun' keeps track of the day count. When the 'okunansayfa' value 
reaches 1000, the loop ends, and it prints the number of days taken.*/


int main() {
    int pagesPerDay = 10; // Starting number of pages read per day
    int days = 0; // Day count
    int totalPagesRead = 0; // Total pages read so far

    while (totalPagesRead < 1000) {
        totalPagesRead += pagesPerDay; // Add today's pages to total
        pagesPerDay += 5; // Increase pages read for the next day
        days++; // Increment day count
    }

    printf("It will take %d days to finish the novel.\n", days);

    return 0;
}
