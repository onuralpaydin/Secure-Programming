#include <stdio.h> //header file library that lets us work with input and output functions

int main()
{
    // nother thing that always appear in a C program is main(). This is called a function. Any code inside its curly brackets {} will be executed.
    //  The compiler ignores white spaces. However, multiple lines makes the code more readable.
    printf("Hello World1!\n"); // a function used to output/print text to the screen
    // When you are working with text, it must be wrapped inside double quotations marks "".
    // \n creates new line
    // printf(end statements with ;); //will not work . Expects ""
    printf("\tHello World2!\n"); // \t Creates a horizontal tab
    printf("Hello World3!\\\n"); // \\ Inserts a backslash character (\)
    printf("Hello World4!\"\n"); // \" Inserts a double quote character
    printf("end statements with ;"); // a function used to output/print text to the screen
    return 0;//return 0 ends the main() function.
}