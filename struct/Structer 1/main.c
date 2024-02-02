#include <stdio.h>
#include <stdlib.h>

struct myVar{ //bu bir int gibi değişken türüdür bunu ana fonksityonda çağırmak için tamamını yazıp bir ad vermemiz gereklidir.
int a ;
char c;
};

int main()
{
    struct myVar var1={2,'c'};
    struct myVar var2;
    var2.a=5;   // struct lafı geçtiğinde nokta notasyonu kullanmayı unutma eğer pointer ise -> notasyonunu kulanmayı unutmaaa
    var2.c='b';
    struct myVar var3;
    printf("myVar var3 adlý struct yapýsýnýn  elemanlarýný girin = "); // 2k
    scanf("%d",&var3.a);
    scanf("%c",&var3.c);

    printf("var1.a=%d, \t var1.c=%c \n",var1.a,var1.c);
    printf("\n var2.a=%d, \t var2.c=%c \n",var2.a,var2.c);
    printf("\n var3.a=%d, \t var3.c=%c \n",var3.a,var3.c);

    return 0;
}
