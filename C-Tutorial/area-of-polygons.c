#include <stdio.h>
#include <stdlib.h>

int main()
{
    int triangle_base = 5, triangle_height = 12, rectangle_width = 8, rectangle_height = 10, square_width = 4;
    printf("Area of the rectangle is: %d \n", rectangle_height * rectangle_width);
    printf("Area of the square is: %d \n", square_width * square_width);
    printf("Area of the triangle is: %d \n", (triangle_base * triangle_height) / 2);
    return 0;
}