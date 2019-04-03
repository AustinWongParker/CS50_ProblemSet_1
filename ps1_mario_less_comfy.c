/* Austin Wong-Parker's CS50 Problem Set 1 Lab 'Mario' 
 * Disclaimer: the following code is not the best solution; all work done is my own. */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramid_height;
    printf("Height: ");
    scanf("%d", &pyramid_height);
    while (pyramid_height < 0 || pyramid_height > 8) {
        printf("Height: ");
        scanf("%d", &pyramid_height);
    }
    /*
     * Right-Aligning with Dots
     */
    for(int i = 0; i < pyramid_height; i = i + 1){
        for(int j = 0; j < i+1; j = j + 1){
            printf("#");
        }
        printf("\n");
    }
    
    /*
     * Left-Aligning with #'s
     * 
    for(int i = 0; i < pyramid_height; i = i + 1 ){
        for(int j = 0; j<i+1; j = j+1){
        printf("#");
        }
        printf("\n");
    }
    */
    
}
