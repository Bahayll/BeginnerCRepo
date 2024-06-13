#include <stdio.h>
#include <stdlib.h>

int x = 5;          // Global variable x
static int y = 1;   // Static variable y

int main() {
    printf("x=%d", x);  // Prints global x, which is 5
    {
        int x = 10;  // Local variable x inside a block
        fonk(x, y);  // Calls fonk with local x (10) and global y (1)
        printf("\nx=%d , y=%d", x, fonk2(y));  // Prints local x (10) and calls fonk2 with global y (1)
    }
    printf("\nx=%d", x);  // Prints global x again, which is 5
    fonk(x, y);  // Calls fonk with global x (5) and global y (1)
    printf("\nx=%d , y=%d", x, fonk2(y));  // Prints global x (5) and calls fonk2 with global y (1)
    x = 10;  // Updates global x to 10
    printf("\nx=%d , y=%d", fonk3(), fonk3());  // Calls fonk3 twice, returns y*3 (global y is 1), so prints 3 and 3
    y = fonk3();  // Updates global y to y*3, so y becomes 3
    printf("\ny=%d", ++y);  // Prints incremented y, which is now 4
    return 0;
}

void fonk(int a, int b) {
    a *= 5;  // Multiplies local a by 5
    printf("\na=%d", a);  // Prints multiplied a
    printf("\na=%d", --a + 2);  // Decrements a by 1 and adds 2
    printf("\na=%d", a++ + 10);  // Adds 10 to current a value and increments a afterwards
    printf("\na=%d", ++a);  // Increments a by 1
}

int fonk2(int c) {
    return c * 2;  // Returns c multiplied by 2
}

int fonk3() {
    return y * 3;  // Returns global y multiplied by 3
}
