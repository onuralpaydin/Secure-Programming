#include <stdio.h>
int main()
{
    //int stores integers without decimals =>19
    //float stores floating point numbers with decimals => 19.19
    //char stores single characters 'a' , 'B' 

    int intVariable = 19;
    float floatVariable = 19.19;
    char charVariable='a';
    // printf(intVariable); invalid conversion from 'int' to 'const char*' [-fpermissive]gcc
    /* printf(floatVariable);cannot convert 'float' to 'const char*'gcc
argument of type "float" is incompatible with parameter of type "const char *"C/C++(167)*/
    //printf(charVariable);invalid conversion from 'char' to 'const char*' [-fpermissive]gcc


}
