#include<stdio.h>

// print the array element
void printArray(int array [],int size){
    for(unsigned int i = 0; i < size; i++)
         printf("%d ",array[i]);
    printf("\n");
}

// bubble sort ascending order
void bubbleSort(int array [], int size){
    int permutations = 1;

        while (permutations > 0) {
            permutations = 0;
            for (int i = 0; i < size - 1; i++) {
                if (array[i] > array[i + 1]) {
                    int tmp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = tmp;
                    permutations++;
                }
            }
        }
}



// insert sort ascending order 
void insertSort(int array [], int size){
    int tmp = 0, i = 0, j = 0;
    for(int i = 0; i < size ; i++ ){
        j = i;
        while( j > 0 && array[j-1] > array[j]){
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
 
            j--;
        }

    }
}






// select sort ascending order
void selectSort(int array [], int size){
    int tmp = 0, i = 0, j = 0;
    for(i = 0; i < size - 1; i++){
        int min = i;
        for(j = i + 1; j < size ; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        if(min != i){
            tmp = array[i];
            array[i] = array[min];
            array[min] = tmp;
        }

    } 
}

