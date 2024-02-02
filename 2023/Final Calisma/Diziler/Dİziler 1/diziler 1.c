
#include <stdio.h>
#include <stdlib.h>

// Call by Value (deðere göre çaðýrma)
// Call by Referance (referans adrese göre çaðýrma)
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1[2]);// tek eleman gönderdeiðimiz için tek deðer karþýlýyor dizinin tümünü göndermedik bu yüzden yapmak istediðimizi yapmayacak
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a){

a=a*2;

}


