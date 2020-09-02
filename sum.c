#include <stdio.h>

int Sum(int a, int b)
{
    int sum;
    sum =a+b;
    
    return sum;
}

void main ()
{
    int result;
    result = Sum(1,2);
        printf("결과 %d\n",result);
    char data =-1;
    printf ("%d , %u\n",data ,data);

    int perdata = 7;
    printf("[%d], [%5d] ",perdata ,perdata   );

}