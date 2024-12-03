#include <stdio.h>
//standard input output useful functions
int main()
{
    // int stores integers without decimals =>19
    // float stores floating point numbers with decimals => 19.19
    // char stores single characters 'a' , 'B'

    int intVariable = 19;
    int intVariable2 = 10;
    float floatVariable = 19.19191919191;
    char charVariable = 'a';
    // strings are technically objects. C is not object oriented language. We will use char arrays for strings
    char name[]="Onur Alp Aydın"; //array of characters
    // printf(intVariable); invalid conversion from 'int' to 'const char*' [-fpermissive]gcc
    /* printf(floatVariable);cannot convert 'float' to 'const char*'gcc
argument of type "float" is incompatible with parameter of type "const char *"C/C++(167)*/
    // printf(charVariable);invalid conversion from 'char' to 'const char*' [-fpermissive]gcc
    double doubleVariable=3.141592653589793; //8 bytes(64 bits of precision )15-16 digits.
    /*Format Specifiers
    Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.*/
    // %d or %i	int
    // %f or %F	float
    // %lf	double
    // %c	char
    // %s	Used for strings (text)
    printf("int value: %d \n", intVariable);
    printf("float value :%f \n", floatVariable);
    printf("char value: %c \n", charVariable);
    printf("int sum: %d \n", intVariable + intVariable2);
    printf("My favorite number is: %d \n", 15);
    printf("display string %s \n",name);
    printf("display double variable %lf \n",doubleVariable);
    printf("display more digits double  %0.15lf \n",doubleVariable);//more precise
    printf("display more digits float  %0.15f \n",floatVariable);



    // Assign-reassign variables
    int myNum;
    myNum = intVariable;
    myNum = 99;
    printf("int value: %d \n", myNum);
    // Multiple Variable Declaration
    int x = 1, y = 2, z = 33;
    int a, b, c;
    a = b = c = 6;
    // print("%d \n", a + b + c);
    // error exited with code=1;
    printf("%d \n", a + b + c);
    printf("x+y+z=%d \n", x + y + z);
    printf("x+y+z=%d \n", x + y + z);
    printf("\" escape char example \"");
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
    // exit code of program
    // exited with code=1 means you have error
}
