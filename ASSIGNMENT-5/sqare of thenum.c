// C Program to Find Square and Cube of a Number
#include <stdio.h>
int main(){
    int num, square, cube;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Finding Square
    square = num * num;
    
    // Finding Cube
    cube = num * num * num;
    
    // Displaying result
    printf("Square of %d is: %d \n", num, square);
    printf("Cube of %d is: %d", num, cube);
    
    return 0;
}
