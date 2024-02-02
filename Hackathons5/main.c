#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c=0;

#define SIZE c

int main() {
    char str[] = "Merhaba TUB";
    char ters_str[SIZE]; // SIZE'ı kullanarak dizi boyutunu belirle

    int str_uzunluk = strlen(str);
    printf("Cumlenin uzunlugu: %d\n", str_uzunluk);

    int k = 0, i = str_uzunluk - 1; // i'nin başlangıç değeri cümlenin sonunda olmalı

    while (str[i] != ' ' && i >= 0) { // karakter kontrolünde ve döngü şartında düzeltmeler
        ters_str[k] = str[i];
        c++;
        i--;
        k++;

    }

    ters_str[k] = '\0'; // ters_str'yi bir C-string olarak sonlandır

    printf("Tersten yazilisi: %s\n", ters_str);
    printf("Uzunlugu: %d\n", c);

    return 0;
}
