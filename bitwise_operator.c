#include<stdio.h>
int main(){
    /* Bitwise operator*/
    /*six bitwise operator
    Bitwise AND operator        =   &
    Bitwise OR operator         =   |
    Bitwise NOT operator        =   ~
    Bitwise Left shift operator =   <<
    Bitwise right shift operator=   >>
    Bitwise XOR operator        =   ^  */

    char a = 4, b = 7;       // char is 8 bit data.

    char c1 = a&b;            // Bitwise  4&7 = (00000100)&(00000111)
    char d1 = a&&b;           // Logical  4&&7 value>0 logically represents as true so, true & true = true (1).

    printf("Bitwise: %d Logical: %d \n",c1,d1);
    char c2 = a|b;            // Bitwise  4|7 = (00000100)|(00000111)
    char d2 = a||b;           // Logical  4||7 value>0 logically represents as true so, true | true = true (1).
    printf("Bitwise: %d Logical: %d \n",c2,d2);

    //Bitwise not operator:
    char c3 = ~6;            // Bitwise  ~4   = -5
    printf("Bitwise: %d \n",c3);


    //Left shift operator:
    char d4 = a<<2;           //That means a is left shifted by 2 position
    // result after left shifted is 00010000 is 16 trailing points are filled with zeros.
    // we can also calculate result by formula (left operand * 2^right operand)
    printf("Bitwise: %d\n",d4);


    //Right shift operator:
    char d5 = a>>1;           //That means a is right shifted by 2 position
    // result after right shifted is 00000010 is 2 trailing points are filled with zeros.
    // we can also calculate result by formula (left operand / 2^right operand)
    printf("Bitwise: %d \n",d5);

    // Bitwise XOR operator:
    char c6 = a^b;            // Bitwise  4^7 = (00000100)^(00000111)= (00000011).
    printf("Bitwise: %d \n",c6);

    return 0;
}
