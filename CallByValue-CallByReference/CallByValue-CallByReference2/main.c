#include <stdio.h>
#include <stdlib.h>


//              Call by Reference

// herhangi bir geri d�nd�rme yok
// dizi �st�nde adres �zerinde de�i�iklik yap�yoruz bu y�zden geri de�er d�nd�rmemize gerek
// kalmayacak dizi �zerinde yap�lan i�lemler kal�c� olur..
// dikkat edilmesi gerekn nokta dizi �zerinde de�i�iklik olaca��ndan fonksiyona komple
// dizi g�nderilmeli.....
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1);
    printf("%d",d1[2]);
    return 0;
}
void fonk(int a[]){
a[2]*=2;
}
