#include <stdio.h>
#include <stdlib.h>

int main(){

    //step 1: create array
    int length = 10; 
    int arr[length]; 

    //step 2: populate array with random values
    int i; 
    for(i = 0; i < length-1; i++){
        arr[i] = rand(); 
    }
    //step 3: set last value to 0
    arr[length-1] = 0; 

    //step 4: print values in array
    for(i = 0; i < length; i++){
        printf("arr[%d]: %d\n", i, arr[i]); 
    }

    //step 5: create separate array
    int rra[length]; 

    //step 6: reverse array only pointer variables
    int *arrp = arr;
    int *rrap = rra;  
    for(i = 0; i < length; i++){
        *(rra + i) = *(arrp + ((length-1) - i)); 
    }

    for(i = 0; i < length; i++){
        printf("rra[%d]: %d\n", i, *(rra + i)); 
    }

    return 0; 
}
