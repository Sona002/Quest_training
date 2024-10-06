
#include <stdio.h>

void main() 
{
    int rows = 5;  

    for (int i = 0; i < rows; i++) 
    {
        if (i == 0 || i == rows / 2 || i == rows - 1) 
        {
            printf(" *****\n"); //pattern for First, middle, and last rows
        } 
        else if (i < rows / 2) 
        {
            printf("*\n"); //pattern before the middle at left
        } 
        else 
        {
            printf("     *\n"); //pattern after the middle at right
        }
    }
}
