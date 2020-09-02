#include <stdio.h>



const int KIND = 1;
const int ADD =2 ;
const int MIN = 4;

int opStatus;

void SetShowStatus(int ste) ;
void ShowOperationResult( int n1 , int n2 );

int main(void)
{
    SetShowStatus(KIND | ADD | MIN);
    printf("1차 출력 ...  \n");
    
    ShowOperationResult(5,2);
    print("\n")

    SetShowStatus(ADD|MIN);
    printf("2차 출력\n");
    ShowOperationResult(4,3);
    printf("\n");
    
}

void SetShowStatus ( int ste)
{
opStatus = ste;
}

void ShowOperationResult ( int n1 , int n2)
{
if(opStatus &KIND)
    if(opStatus&ADD)
        printf("")

}


// const int TRUE = 1;
// const int FALSE = 0;
// int kindSte;
// int addSte;
// int minSte;

// void SetkindStd(int ste);
// void SetAddOpSte(int ste);
// void SetMinOpSte(int ste);
// void ShowOperationResult(int n1,int n2);


// void SetkindStd(int ste)
// {
// . = ste;

// }

// void SetAddOpSte(int ste)
// {
//     addSte=ste;
// }
// void SetMinOpSte(int ste)
// {
//     minSte = ste;
// }

// int main(void)

// {
//     SetkindStd(TRUE);
//     SetAddOpSte(TRUE);
//     SetMinOpSte(TRUE);

//     printf("1차 출려... \n");
//     ShowOperationResult(5,2);
//     printf("\n");
//     SetkindStd(FALSE);
//     SetAddOpSte(FALSE);
//     printf("2차출력...\n");
//     ShowOperationResult(4,3);
//     printf("\n");
    
    
// }

// void ShowOperationResult(int n1, int n2)
// {
//     if(kindSte)
//     {
//         if(addSte)
//             printf("%d와 %d 합은 %d 입니다. \n",n1 , n2,n1+n2);

//         if(minSte)
//             printf("%d와 %d 차는 %d 입니다. \n",n1,n2,n1-n2);
              
//     }
//     else
//     {
//         if(addSte)
//             printf("%d + %d  = %d 입니다. \n",n1,n2,n1+n2);

//         if(minSte)
//             printf("%d - %d  = %d 입니다. \n",n1,n2,n1-n2);
            

//     }


// }
