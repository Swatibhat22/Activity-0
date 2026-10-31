#include <stdio.h>
int main(){
    int intArray[5];
    float floatArray[5];

    int *ptr= intArray;
    float *ptr1= floatArray;

    void *genericptr=NULL;
    int choice;
    int i;

    printf("Enter 5 integer values:\n");
    for(int i=0; i<5; i++){
        scanf("%d", (ptr+i));
    }

    printf("Enter 5 float values:\n");
    for(int i=0; i<5; i++){
        scanf("%f",(ptr1+i));
    }

    printf("\nSelect Choice:\n");
    printf("1.intArray\n 2.floatArray\n");
    scanf("%d",&choice);

    if(choice==1){
        genericptr=intArray;
    }
    else if(choice==2){
        genericptr=floatArray;
    }
    else{
        printf("Invalid choice\n");
        return 0;
    }

    if(genericptr==NULL){
        printf("genericptr is NULL\n");
    }

    printf("Enter the value of index(0 to 4):");
    scanf("%d",&i);
    if(i>=0 && i<5){
        if(genericptr==intArray){
            printf("Value at index %d is:%d",i,*((int*)genericptr+i));
        }
        else{
            printf("Value at index %d is:%f",i,*((float*)genericptr+i));
        }
    }
    else{
        printf("Invalid index\n");
    }
    return 0;
}