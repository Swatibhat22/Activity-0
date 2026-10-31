#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(2* sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(1);
    }
    
    for(int i = 0; i <=1; i++) {
        printf("Enter value for ptr[%d]: ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i <=1; i++) {
        printf("Address: %p\n", (void*)&ptr[i]);
        printf("Values: %d\n",ptr[i]);
    }

    
    ptr=(int*)realloc(ptr,4 * sizeof(int));
    for(int i = 2; i <=3; i++) {
        printf("Enter value for ptr[%d]: ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i <=3; i++) {
        printf("Address: %p\n", (void*)&ptr[i]);
        printf("Values: %d\n",ptr[i]);
    }
    
}