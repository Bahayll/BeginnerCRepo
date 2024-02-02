#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not,i,top=0; // top=0 yapmazsan saçma deðerler çýkabilir
                     // üstüne ekleme yaptýðýn deðerleri genelde
                     //sýfýrla!!!
    for(i=0;i<3;i++){
      printf("%d.Notu Giriniz: ",i+1);
      scanf("%d",&not); // scanfte & koymayý unutma!!
      top+=not;

    }
    printf("\nTop=%d",top);

    float ort;
    ort=top/(float)i;
    printf("\nOrtalama=%.2f",ort); // ort float tipinde olduðu için
                                // yer tutucuda o tipte olmalýdýr.






    return 0;
}
