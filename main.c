#include <stdio.h>

int Wynik (int a, int b)
{
    return (a+b)*(a-b);
}

int main() {
    printf("Hello World!!!!\n");
    printf("W pierwszym branchu; 2*3=%d\n", Wynik(2,3));

    return 0;
}