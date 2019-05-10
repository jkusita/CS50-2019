#include <cs50.h>
#include <stdio.h>
#include <string.h>
 
// A program that checks if the input can be the lengths of a triangle.

void valid_triangle(void);

int main(void)
{
    valid_triangle();
}

void valid_triangle(void)
{
    float side1;
    float side2;
    float side3;
    
    // Makes sure the length is positive.
    do
    {
        side1 = get_float("Length of side 1: ");
    }
    while (side1 < 0);
    do
    {
        side2 = get_float("Length of side 2: ");
    }
    while (side2 < 0);
    do
    {
        side3 = get_float("Length of side 3: ");
    }
    while (side3 < 0);

    // Checks if lengths can make up a triangle.
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
