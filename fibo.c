#include <stdio.h>

void Fibonacci(int n)
{

    static long  long int first=0,second=1,sum;

    if(n>0)
    {
         sum = first + second;
         first = second;
         second = sum;
         printf("%lld ",sum);
         Fibonacci(n-1);
    }

}


int main(){

    int k,n;
    long long int i=0,j=1,f;
    system("clear");
    printf("nechta fibonachi chop etilsin? ");
    scanf("%d",&n);
    

    printf("Fibonacci Seriyasi: ");
    printf("%d %d ",i,j);
    Fibonacci(n);

    return 0;
}
