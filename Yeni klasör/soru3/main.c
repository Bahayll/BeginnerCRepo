#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int bir,on,yuz,bin;
    int count;

    printf("4 basamakli bir sayi giriniz : ");//ne girdiðinizin bi önemi yok
    scanf("%d",&a);

    for(int a =1000;a<10000;a++){
        bin=a/1000;
        yuz=(a-(bin*1000))/100;
        on=(a-(bin*1000 + yuz*100))/10;
        bir=(a-(bin*1000 + yuz*100 + on*10));
        if(bir + yuz == on + bin){
                printf("%d\n",a);
                count++;
        }
    }

    printf("\n%d kadar vardir",count);
    return 0;
}
