#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10]={0},i,j,l=48;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char *str;
    str = malloc(1024 * sizeof(char));
    scanf("%[^\n]",str);
    str = realloc(str, strlen(str)+1);
    
    for(i=0;i<10;i++)
    {
        for(j=0;*(str+j)!='\0';j++){
            if(*(str+j)==l){
                a[i]++;
            }
        }
        l++;
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
