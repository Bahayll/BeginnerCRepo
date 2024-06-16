#include <stdio.h>

// Function prototypes
int fact(int n);
int fib(int n);
int fib_iterasyon(int n);
int fib_rec(int n);
int fak_ite(int n);
int fak_rec(int n);
int us_ite(int x, int n);
int us_rec(int x, int n);
int usrec(int x, int y);
int girilenSayiyaKadarTopla(int x);
int asalSayi(int x, int i);
int obeb(int x, int y);
int obeb2(int x, int y);
int okek(int x, int y);

int main()
{
    // Testing the factorial function
    printf("Factorial of 4 (iterative): %d\n", fak_ite(4));
    printf("Factorial of 4 (recursive): %d\n", fak_rec(4));

    // Testing the fibonacci functions
    printf("\nFibonacci of 5 (iterative): %d\n", fib_iterasyon(5));
    printf("Fibonacci of 5 (recursive): %d\n", fib_rec(5));

    // Testing the power functions
    printf("\nPower of 2^3 (iterative): %d\n", us_ite(2, 3));
    printf("Power of 2^3 (recursive): %d\n", us_rec(2, 3));

    // Testing other functions
    printf("\nSum from 1 to 5: %d\n", girilenSayiyaKadarTopla(5));
    printf("Is 7 a prime number? %s\n", asalSayi(7, 7) ? "Yes" : "No");
    printf("GCD of 12 and 18: %d\n", obeb(12, 18));
    printf("LCM of 12 and 18: %d\n", okek(12, 18));

    return 0;
}

// Function definitions

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int fib_iterasyon(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        int a = 0, b = 1, temp = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            temp = a;
            a = b;
            b = b + temp;
        }
        return b;
    }
}

int fib_rec(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib_rec(n - 1) + fib_rec(n - 2);
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
    if (n == 0)
        return 1;
    else
        return n * fak_rec(n - 1);
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
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n % 2 == 0)
        return us_rec(x * x, n / 2);
    else
        return x * us_rec(x * x, n / 2);
}

int usrec(int x, int y)
{
    if (x == 0)
        return 1;
    if (x > 0 && y == 0)
        return 1;
    if (x > 0 && y == 1)
        return x;
    if (x > 0 && y > 1)
        return x * usrec(x, y - 1);
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

int obeb(int x, int y)
{
    if (y == 0)
        return x;
    return obeb(y, x % y);
}

int obeb2(int x, int y)
{
    if (x == y)
        return x;
    if (x > y)
        return obeb2(x - y, y);
    return obeb2(x, y - x);
}

int okek(int x, int y)
{
    return x * y / obeb(x, y);
}
