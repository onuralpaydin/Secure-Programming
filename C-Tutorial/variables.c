#include <stdio.h>
int main()
{
    // int stores integers without decimals =>19
    // float stores floating point numbers with decimals => 19.19
    // char stores single characters 'a' , 'B'

    int intVariable = 19;
    int intVariable2 = 10;
    float floatVariable = 19.19;
    char charVariable = 'a';
    // printf(intVariable); invalid conversion from 'int' to 'const char*' [-fpermissive]gcc
    /* printf(floatVariable);cannot convert 'float' to 'const char*'gcc
argument of type "float" is incompatible with parameter of type "const char *"C/C++(167)*/
    // printf(charVariable);invalid conversion from 'char' to 'const char*' [-fpermissive]gcc
    /*Format Specifiers
    Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.*/
    printf("int value: %d \n", intVariable);
    printf("float value :%f \n", floatVariable);
    printf("char value: %c \n", charVariable);
    printf("int sum: %d \n", intVariable + intVariable2);
    printf("My favorite number is: %d", 15);
    // %d or %i	int
    // %f or %F	float
    // %lf	double
    // %c	char
    // %s	Used for strings (text)

    // Assign-reassign variables
    int myNum;
    myNum = intVariable;
    myNum = 99;
    printf("int value: %d \n", myNum);
    // Multiple Variable Declaration
    int x = 1, y = 2, z = 33;
    int a, b, c;
    a = b = c = 6;
    printf("%d \n", a + b + c);
    printf("x+y+z=%d \n", x + y + z);
    printf("x+y+z=%d \n", x + y + z);
    // naming conventions
    /*
    The general rules for naming variables are:
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
    */
    return 0;
}
