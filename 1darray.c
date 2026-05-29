#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,sum=0;
    // printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    if(n<1||n>1000){
        printf("\nPlease enter a value between 1 & 1000. . . . .\nOperation terminated. . . . . . . ");
        return 0;
    }
    int *arr = (int *)malloc(n*(sizeof(int *)));
    for(i=0;i<n;i++){
        // printf("enter data :");
        scanf("%d",&arr[i]);
            if(arr[i]<1||arr[i]>1000){
        printf("\nPlease enter a value between 1 & 1000. . . . .\nOperation terminated. . . . . . . ");
        return 0;
    }
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}