#include <stdio.h>

int main(){

    //int arr[] = {3, 7, 5, 68, 9};
    /*
    float numbers [3];
    numbers[0] = 3.24f;
    numbers[1] = 4.5f;
    numbers[2] = 67.36f;
    */ 
    //char words [] = "Hello World";
    int array[3][4] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {10, 12, 14, 16}
    };
    printf("%d", array[0][1] );
    return 0;
}