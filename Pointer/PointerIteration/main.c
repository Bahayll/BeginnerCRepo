#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[3] = {10, 20, 30}, *dptr, i;

    // dptr, d dizisinin başlangıcına işaret eder
    dptr = d;

    // 1. Döngü: Pointer aritmetiği kullanarak dptr ile elemanlara erişme
    for(i = 0; i < 3; i++)
        printf("%d\n", *(dptr + i));

    // dptr'yi tekrar d dizisinin başlangıcına ayarlıyoruz
    dptr = d;

    // 2. Döngü: Dizinin elemanlarına pointer dizi gösterimi kullanarak erişme
    for(i = 0; i < 3; i++)
        printf("%d\n", dptr[i]);

    // dptr'yi tekrar d dizisinin başlangıcına ayarlıyoruz
    dptr = d;

    // 3. Döngü: Dizinin elemanlarına doğrudan d ile erişme
    for(i = 0; i < 3; i++)
        printf("%d\n", *(d + i));

    // dptr'yi tekrar d dizisinin başlangıcına ayarlıyoruz
    dptr = d;

    // 4. Döngü: dptr işaretçisinin işaret ettiği değeri yazdırma
    for(i = 0; i < 3; i++)
        printf("\n%d\n", *(dptr));

    // dptr'yi tekrar d dizisinin başlangıcına ayarlıyoruz
    dptr = d;

    // 5. Döngü: dptr'yi her döngüde bir ileri kaydırarak elemanlara erişme
    for(i = 0; i < 3; i++)
    {
        printf("\n%d\n", *(dptr));
        dptr++;
    }

    return 0;
}
