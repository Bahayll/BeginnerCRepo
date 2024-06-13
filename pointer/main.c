#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pointerler 8 byte yer kaplar
    //int 4 byte yer kaplar
    int d[8]={4,1024,10,5,1004,16,1012,1};
     int* x = &d[0];
     int* y = &d[3];
     int* z = &d[6];
     printf("%p\n",x);
     printf("%p\n",&x);
     printf("%p\n",&x+1);
     printf("%p\n",&x+2);
     printf("%d\n",*x+4);
     printf("%p\n",&d[0]);
     printf("%p\n",&d[0]+1);
     printf("%p\n",&d[0]+2);
     printf("%p\n",&d[0]+3);
     printf("%p\n",&d[0]+4);


     printf("\n");

     printf("%p\n",*(&x));
      printf("%d\n",*(&x+1));
     printf("%d\n",*(&x+2));
     printf("%d\n",*(&x+3));
     printf("%d\n",*(&x+4));

      printf("\n");

     printf("%d\n",**(&x));
     printf("%d\n",**(&x+4));


     printf("\n");

     printf("%p\n",y); //pointer içerisinde tutulan adres
     printf("%p\n",&y); //pointerin kendi adresi
     printf("%p\n",&y+1); // pointerler 8 byte yer kaplar

     printf("%p\n",&y+2);
     printf("%d\n",*y);  // pointer içerisinde tutulan deðer
     printf("%p\n",&d[3]);
     printf("%p\n",&d[3]+1);
     printf("%p\n",&d[3]+2);
     printf("%p\n",&d[3]+3);
     printf("%p\n",&d[3]+4);


     printf("\n");

     printf("%p\n",z); //pointer içerisinde tutulan adres
     printf("%p\n",&z); //pointerin kendi adresi
     printf("%d\n",*z);  // pointer içerisinde tutulan deðer
     printf("%d\n",*z+1);
     printf("%d\n",*z+2);
     printf("%d\n",*z+3);
     printf("%d\n",*z+4);
     printf("%p\n",&d[6]);
     printf("%p\n",&d[6]+1);
     printf("%p\n",&d[6]+2);
     printf("%p\n",&d[6]+3);
     printf("%p\n",&d[6]+4);



     printf("\n");

     printf("%p\n",*(&z));
      printf("%p\n",*(&z+1));
     printf("%p\n",*(&x+2));
     printf("%p\n",*(&x+3));
     printf("%p\n",*(&x+4));

     printf("\n");

        printf("%d\n",**(&z));
      printf("%d\n",**(&z+1));
     printf("%d\n",**(&z+2));
     printf("%d\n",**(&z+3));
     printf("%d\n",**(&z+4));





}
