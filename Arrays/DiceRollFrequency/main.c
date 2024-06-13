#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Including <time.h> for srand() function




// Function to simulate rolling a die and returning the result
int RollDie() {
    return 1 + rand() % 6; // Generates a random number between 1 and 6
}

// Function to roll the die multiple times and count frequencies
void CountFrequencies(int frequencies[]) {
    int i;
    for (i = 0; i < 5; i++) { // Roll the die 5 times
        switch (RollDie()) { // Roll the die and switch based on result
            case 1: frequencies[0]++; break; 
            case 2: frequencies[1]++; break; 
            case 3: frequencies[2]++; break; 
            case 4: frequencies[3]++; break; 
            case 5: frequencies[4]++; break; 
            case 6: frequencies[5]++; break; 
        }
    }

    // Display frequencies of each die roll result that occurred
    for (i = 0; i < 6; i++) {
        if (frequencies[i] > 0) { // Print only if the frequency is greater than zero
            printf("%d occurred %d times.\n", i + 1, frequencies[i]);
        }
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator with current time

    int frequencies[6] = {0}; // Array to store frequencies of each die roll result

    CountFrequencies(frequencies); // Call function to roll the die and count frequencies

    return 0;
}
