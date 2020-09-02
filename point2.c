// #include <stdio.h>
#include <stdio.h>

void main()
{
  int data = 0x12345678, i;
  char *p = (char *)&data;

  for (i =0;i<4;i++)
  {
    printf("%X ,",*p );
p++;
  }



    
}
// int main(void)
// {
// 	int num1=3;
// 	char num2='A';
// 	double num3=3.15;

// 	// printf("num1ÀÇ ÀúÀåÀ§Ä¡: %#x \n", &num1);
// 	// printf("num2ÀÇ ÀúÀåÀ§Ä¡: %#x \n", &num2);
// 	// printf("num3ÀÇ ÀúÀåÀ§Ä¡: %#x \n\n", &num3);

// 	printf("num1ÀÇ ÁÖŒÒ °ª Å©±â: %d \n", sizeof(num1));
// 	// printf("num2ÀÇ ÁÖŒÒ °ª Å©±â: %d \n", num2);\

// 	return 0;
// }


// // #include <stdio.h>

// // int main(void)
// // {
// //     int num1= 3;
// //     char num2='A';
// //     double num3=3.15;

// //     printf("num1의 저장위치 : %#x \n", &num1);
// //     printf("num2의 저장위치 : %#x \n",&num2);  
// //     printf("num3의 저장위치 : %#x \n",&num3);


// //     printf("num1의 주소값 크기 : %d \n",sizeof(&num1));
// //     printf("num2의 주소값 크기: %d \n",sizeof(&num2));  
// //     printf("num3의 주소값 크기: %d \n",sizeof(&num3));



// // }