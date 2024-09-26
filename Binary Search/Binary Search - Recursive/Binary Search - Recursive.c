#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recursiveBinarySearch(int arr[], int target, int left, int right){
    if(left > right){
        printf("%d is not found\n", target);
        return;
    }

    int mid = (left+right) / 2;
    if(target < arr[mid]){
        recursiveBinarySearch(arr, target, left, mid-1);
    }
    else if(target > arr[mid]){
        recursiveBinarySearch(arr, target, mid+1, right);
    }
    else{
        printf("%d is found in index %d\n", target, mid);
        return;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target;
    printf("Insert a number to be searched : "); scanf("%d", &target);

    int len = sizeof(arr) / sizeof(int);
    int left = 0;
    int right = len-1;

    recursiveBinarySearch(arr, target, left, right);
    return 0;
}
