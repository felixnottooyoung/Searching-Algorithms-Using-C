#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void iterativeBinarySearch(int arr[], int target, int left, int right){
    int isFound = 0;
    while(left <= right){
        int mid = (left+right) / 2;
        if(target < arr[mid]){
            right = mid-1;
        }
        else if(target > arr[mid]){
            left = mid+1;
        }
        else{
            printf("%d is found at index %d\n", target, mid);
            isFound = 1;
            return;
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
    int left = 0;
    int right = len-1;

    iterativeBinarySearch(arr, target, left, right);
    return 0;
}
