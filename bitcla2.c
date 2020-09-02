#include <stdio.h>

int main()
{
    int n1= 15;
    int n2 = 20;
    int n3 = -1;
    int n4 = 0;
    int andresult = n1&n2;
    int orresult = n1|n2;
    int xorresult = n1^n2;
    int notresult =~n3;
    int notresutl2 =~n4;

    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);

    printf("andresutl = %d",andresult);
    printf("orresult = %d \n",orresult);
    printf("xorresult = %d\n",xorresult );
    printf("notresutl1 = %d\n", notresult);
    printf(" notresutl2 = %d \n", notresutl2);
    
}