#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not,i,top=0; // top=0 yapmazsan sa�ma de�erler ��kabilir
                     // �st�ne ekleme yapt���n de�erleri genelde
                     //s�f�rla!!!
    for(i=0;i<3;i++){
      printf("%d.Notu Giriniz: ",i+1);
      scanf("%d",&not); // scanfte & koymay� unutma!!
      top+=not;

    }
    printf("\nTop=%d",top);

    float ort;
    ort=top/(float)i;
    printf("\nOrtalama=%.2f",ort); // ort float tipinde oldu�u i�in
                                // yer tutucuda o tipte olmal�d�r.






    return 0;
}
