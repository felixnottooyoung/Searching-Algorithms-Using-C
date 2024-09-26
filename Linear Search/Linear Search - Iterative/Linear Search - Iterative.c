#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void iterativeLinearSearch(int arr[], int target, int len){
    int isFound = 0;
    for(int i=0;i<len;i++){
        if(arr[i] == target){
            printf("%d is found at index %d\n", target, i);
            isFound = 1;
            break;
        }
    }

    if(!isFound){
        printf("%d is not found\n", target);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target;
    printf("Insert a number to be searched : "); scanf("%d", &target);

    int len = sizeof(arr) / sizeof(int);
    iterativeLinearSearch(arr, target, len);
    return 0;
}
