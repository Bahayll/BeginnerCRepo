#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d",fact(4));
    printf("\n%d",fib(5));
    return 0;
}


int fib_iterasyon(int n){
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else
      {
        int a = 0, b = 1, temp = 0;
        for (int i = 1; i <= n - 2; i++)      {
            temp = a;
            a = b;
            b = b + temp;
}
        return b;
     }
}



int fib_rec(int n)
        {
            if (n == 1) return 0;
            else if (n == 2) return 1;//1,1,2,3....n<2 return 1,,,, 0,1,1,2,3,5...n<2 return n
            else return fib_rec(n - 1) + fib_rec(n - 2);
        }




 int fak_ite(int n)
        {
            int f = 1;
            for (int i = 1; i <= n; i++)
            {
                f = f * i;
            }
            return f;
        }




int fak_rec(int n)
{
            if (n == 0) return 1;
            else return n * fak_rec(n - 1);
}



int us_ite(int x, int n)
        {
            int f = 1;
            for (int i = 1; i <= n; i++)
            {
                f = f * x;
            }
            return f;
        }




int us_rec(int x, int n)
        {
            if (n == 0) return 1;
            else if (n == 1) return x;
            else if (n % 2 == 0) return us_rec(x*x,n/2); //
            else return x*us_rec(x * x, n / 2);
        }




int fact(int sayi){

if(sayi==1) return 1;
else
    return(sayi*fact(sayi-1));

}





int fib(int sayi){
if(sayi==1 || sayi == 0)
    return sayi;
else
    return fib(sayi-1)+fib(sayi-2);

}



int usrec(int x, int y)
        {
            if (x == 0)
                return (1);
            if (x > 0 && y == 0)
                return (1);
            if (x > 0 && y == 1)
                return (x);
            if (x > 0 && y > 1)
                return (x*usrec(x, y - 1));
            return 0;
        }




int girilenSayiyaKadarTopla(int x)
{
            if (x == 1)
                return 1;
            return x + girilenSayiyaKadarTopla(x - 1);
}




int asalSayi(int x, int i)
{
            if (x < 2)
                return 0;
            if (i == 1)
                return 1;
            if (x % i == 0)
                return 0;
            return asalSayi(x, i - 1);
}



int obeb(int x, int y){
        if (y == 0)
                return x;
            return obeb(y, x % y);
}



int obeb2(int x, int y)
        {
                    if (x == y)
                return x;
            if (x > y)
                return obeb(x - y, y);
            return obeb(x, y - x);
        }



int okek(int x, int y)
        {
            return x * y / obeb(x, y);
        }
