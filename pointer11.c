#include <stdio.h>

int main ()
{
    int num= 999999999;
    float *ptr;
    ptr=&num;

    printf("data1 = : %f \n",*ptr);
    printf("data1 = : %d \n",*ptr); //포인터 형에 따라서 저장방식이 결정된다.
    


    // int data1;
    // char data2;
    // double data3;
    // int *ptr1= &data1;
    // char *ptr2= &data2;
    // double *ptr3=&data3;


    // *ptr1=100;
    // *ptr2=100;
    // *ptr3=100;

    // printf("data1 = : %d \n",*ptr1);
    // printf("data1 = : %c \n",*ptr2);
    // printf("data1 = : %f \n",*ptr3); //포인터의 형은 포인터가 가리키는 메모리 공간의 데이터 저장 및 참조 방식을 결정한다.
//     int num= 10;
//     int *ptr;
//     ptr=&num;

//     printf("포인터 ptr이 가리키는 변수 값  : %d \n ",*ptr);
//     printf("num에 저장된 값. :   : %d \n ",num);

//     *ptr=20;
//     printf("포인터 ptr이 가리키는 변수 값  : %d \n ",*ptr);
//     printf("num에 저장된 값. :   : %d \n ",num);
//  (*ptr)++;
//  printf("포인터 ptr이 가리키는 변수 값  : %d \n ",*ptr);
//     printf("num에 저장된 값. :   : %d \n ",num); // *ptr은 그냥 num 변수이다.

        
    
    
    // int num1=3;
    // char num2= 'A';
    // double num3=3.15;

    // int *ptr1 = &num1;
    // char *ptr2 = &num2;
    // double *ptr3 = &num3;

    // printf("num1의 저장위치 %p, \n",ptr1);
    // printf("num2의 저장위치 %p, \n",ptr2);
    // printf("num3의 저장위치 %p, \n",ptr3);
    
    // printf(" 포인터 변수 ptr1 의 크기 %ld ",sizeof(ptr1));

    // printf(" 포인터 변수 ptr2 의 크기 %ld ",sizeof(ptr2));
    
    // printf(" 포인터 변수 ptr3 의 크기 %ld ",sizeof(ptr3));





}



// #include <stdio.h>

// int main(void)
// {
//     int num1= 3;
//     char num2= 'A';
//     double num3 = 3.15;

//     printf("num1의 저장 위치 :%p \n",&num1);
//     printf("num2의 저장 위치 :%p \n",&num2);
//     printf("num3의 저장 위치 :%p \n\n",&num3);

//     printf("num1의 주소값의 크기 : %ld \n",sizeof(num1));

    

    



// }