#include <stdio.h>
#include <stdlib.h>

int a = 3; // Global variable 'a'

int fonk(int); // Function prototype for 'fonk'
int fonkl(int); // Function prototype for 'fonkl'
void fonk3(); // Function prototype for 'fonk3'

int main()
{
    int b = 10;

    
    b += a++; 
    printf("A=%d", b);

   
    {
        a--; 
        b *= --a; 
        printf("\nA=%d, B=%d", b, a);
    }

    // Operation 3
    printf("\nA=%d, B=%d", a, b);

    
    b = fonk(b);
    printf("\nB=%d", b);

   
    a = fonkl(b);
    printf("\nA=%d", a);

   
    fonk3();
    printf("\nA=%d", b); 
    printf("\nB=%d", a); 

    return 0;
}
