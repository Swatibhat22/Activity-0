#include <stdio.h>
int main(){
    int n,arr[100];
    int sum=0;
    int *ptr;
    ptr=arr;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(int i=0; i<n; i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum of array elements:%d",sum);
    return 0;
}