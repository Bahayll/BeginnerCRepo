#include <stdio.h>

int main() {
    int bolunen, bolen, bolum, kalan;

    printf("Bölünen: ");
    scanf("%d", &bolunen);

    printf("Bölen: ");
    scanf("%d", &bolen);

    if (bolen == 0) {
        printf("Tanımsız\n");
        return 0;
    }

    if (bolunen == 0) {
        printf("Sonuç = 0\n");
        return 0;
    }

    bolum = bolunen / bolen;
    kalan = bolunen % bolen;

    printf("Bölüm = %d\n", bolum);
    printf("Kalan = %d\n", kalan);

    return 0;
}
