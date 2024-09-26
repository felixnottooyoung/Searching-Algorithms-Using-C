#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recursiveLinearSearch(int arr[], int target, int len, int indexN){
    if(indexN == len){
        printf("%d is not found\n", target);
        return;
    }

    if(arr[indexN] == target){
        printf("%d is found at index %d\n", target, indexN);
    }
    else{
        recursiveLinearSearch(arr, target, len, indexN+1);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target;
    printf("Insert a number to be searched : "); scanf("%d", &target);

    int len = sizeof(arr) / sizeof(int);
    int indexN = 0;
    recursiveLinearSearch(arr, target, len, indexN);
    return 0;
}
