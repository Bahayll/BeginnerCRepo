#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pointerler 8 byte yer kaplar
    // int 4 byte yer kaplar
    int d[8] = {4, 1024, 10, 5, 1004, 16, 1012, 1};
    int* x = &d[0];
    int* y = &d[3];
    int* z = &d[6];

    // x işaretçisinin adresi ve içeriği
    printf("Pointer x: %p\n", (void*)x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Address of &x + 1: %p\n", (void*)((char*)&x + sizeof(int*)));
    printf("Address of &x + 2: %p\n", (void*)((char*)&x + 2 * sizeof(int*)));
    printf("Value pointed by x + 4: %d\n", *x + 4);

    // d dizisinin adresleri
    printf("Address of d[0]: %p\n", (void*)&d[0]);
    printf("Address of d[0] + 1: %p\n", (void*)(&d[0] + 1));
    printf("Address of d[0] + 2: %p\n", (void*)(&d[0] + 2));
    printf("Address of d[0] + 3: %p\n", (void*)(&d[0] + 3));
    printf("Address of d[0] + 4: %p\n", (void*)(&d[0] + 4));

    printf("\n");

    // &x kullanımı
    printf("Dereferenced address of x: %p\n", (void*)*(&x));
    printf("Dereferenced address of x + 1: %d\n", (int)(*(&x + 1)));
    printf("Dereferenced address of x + 2: %d\n", (int)(*(&x + 2)));
    printf("Dereferenced address of x + 3: %d\n", (int)(*(&x + 3)));
    printf("Dereferenced address of x + 4: %d\n", (int)(*(&x + 4)));

    printf("\n");

    // **(&x) kullanımı
    printf("Double dereferenced address of x: %d\n", **(&x));
    printf("Double dereferenced address of x + 4: %d\n", **(&x + 4));

    printf("\n");

    // y işaretçisinin adresi ve içeriği
    printf("Pointer y: %p\n", (void*)y);
    printf("Address of y: %p\n", (void*)&y);
    printf("Address of &y + 1: %p\n", (void*)((char*)&y + sizeof(int*)));
    printf("Address of &y + 2: %p\n", (void*)((char*)&y + 2 * sizeof(int*)));
    printf("Value pointed by y: %d\n", *y);

    // d[3] dizisinin adresleri
    printf("Address of d[3]: %p\n", (void*)&d[3]);
    printf("Address of d[3] + 1: %p\n", (void*)(&d[3] + 1));
    printf("Address of d[3] + 2: %p\n", (void*)(&d[3] + 2));
    printf("Address of d[3] + 3: %p\n", (void*)(&d[3] + 3));
    printf("Address of d[3] + 4: %p\n", (void*)(&d[3] + 4));

    printf("\n");

    // z işaretçisinin adresi ve içeriği
    printf("Pointer z: %p\n", (void*)z);
    printf("Address of z: %p\n", (void*)&z);
    printf("Value pointed by z: %d\n", *z);
    printf("Value pointed by z + 1: %d\n", *z + 1);
    printf("Value pointed by z + 2: %d\n", *z + 2);
    printf("Value pointed by z + 3: %d\n", *z + 3);
    printf("Value pointed by z + 4: %d\n", *z + 4);

    // d[6] dizisinin adresleri
    printf("Address of d[6]: %p\n", (void*)&d[6]);
    printf("Address of d[6] + 1: %p\n", (void*)(&d[6] + 1));
    printf("Address of d[6] + 2: %p\n", (void*)(&d[6] + 2));
    printf("Address of d[6] + 3: %p\n", (void*)(&d[6] + 3));
    printf("Address of d[6] + 4: %p\n", (void*)(&d[6] + 4));

    printf("\n");

    // &z kullanımı
    printf("Dereferenced address of z: %p\n", (void*)*(&z));
    printf("Dereferenced address of z + 1: %p\n", (void*)*(&z + 1));
    printf("Dereferenced address of x + 2: %p\n", (void*)*(&x + 2));
    printf("Dereferenced address of x + 3: %p\n", (void*)*(&x + 3));
    printf("Dereferenced address of x + 4: %p\n", (void*)*(&x + 4));

    printf("\n");

    // **(&z) kullanımı
    printf("Double dereferenced address of z: %d\n", **(&z));
    printf("Double dereferenced address of z + 1: %d\n", **(&z + 1));
    printf("Double dereferenced address of z + 2: %d\n", **(&z + 2));
    printf("Double dereferenced address of z + 3: %d\n", **(&z + 3));
    printf("Double dereferenced address of z + 4: %d\n", **(&z + 4));

    return 0;
}
