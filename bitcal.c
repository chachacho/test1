#include <stdio.h>

unsigned char GetBit(unsigned char dest_data, unsigned char bit_num)
{
    unsigned char bit_state =0;
    if(bit_num<8){
        bit_state = dest_data & (0x01<<bit_num);
        bit_state = bit_state >> bit_num;
        
    }
    return bit_state;
    
}

void main()
{
    unsigned char lamp_state = 0x76,bit_state ;
    int i;
    printf("%X -> ",lamp_state);
    for(i = 0;i<8 ; i++){
bit_state = GetBit(lamp_state,7-i);
printf("%d",bit_state);
    }
printf("\n");


}

// #include <stdio.h>

// unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
// {
// if(bit_num <8) dest_data = dest_data| (0x01<<bit_num);

// return dest_data;
// }

// void main ()
// {
//     unsigned char lamp_state = 0x77;
//     printf("%X ->", lamp_state);
//     lamp_state = ResetBit(lamp_state,3);
//     printf("%X\n",lamp_state);




// }