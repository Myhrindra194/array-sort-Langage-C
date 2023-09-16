#include<stdio.h>
#include<stdlib.h>
#include"fonction.h"

void main(int argc, char *argv[]){
    int array[9] = {30,5,4,8,0,16,50,-6,-7};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);
    printf("Initial value of Array: ");
    printArray(array,sizeOfArray);

    // Call the method of sort 
    // bubbleSort(array,sizeOfArray);
    // insertSort(array,sizeOfArray);
    // selectSort(array,sizeOfArray);
    printf("Array sorted: ");
    printArray(array,sizeOfArray);
    
}