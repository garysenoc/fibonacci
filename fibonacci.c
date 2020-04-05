#include <stdio.h>

int fibonacci(int n){
return (n==0) ? 0 : (n==1) ? 1 : (fibonacci(n-1) + fibonacci(n-2));// use ternary and recursion to shorten code
}

int main()
{
    int val=0,res=0,i;
    printf("Serie Recursiva de Fibonacci\n\n");
    printf("Ingresa el numero de valores a mostrar: ");
	scanf("%d",&val);
    printf ("\n");

    for(i=0;i<=val-1;i++)
    {
        res = fibonacci(i);
        printf("[ %d ]", res);
    }
    return 0;
}
