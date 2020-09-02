#include <stdio.h>

void Swap(int *prt1,int *prt2)
{
    int temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}
void main()
{
    int start = 96 , end = 6;
    printf("현재값 = %d,  %d ",start , end);

    if(start > end)
    {
        Swap(&start , &end);
    }
    printf("현재값 = %d,  %d ",start , end);
}



    // void Test (short *ptr)
    // {
    //     short soft = 0;
    //     soft = *ptr;
    //     *ptr = 3;
    //     printf("soft는  = %d ",soft);

    // }
    // void main()
    // {
    //     short tips = 5;
    //     Test(&tips);
    //     printf("%d ssss",tips);

    // }


    // short birthday;
    // short *prt; //포인터 변수 선언
    // prt =&birthday; // birthday 변수의 주소를 ptr변수에 대입  포인터 *이 없다면  주소를 입력하는것
    // // * ptr 이라면 가리키는 주소에 갑ㅅ 을 입력하는 것

    // printf("birthdayt 변수의 주소는 %p 입니다.\n" , prt);

