#include <stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

void insert(int index,int val,struct Array *arr){
    if(index>=0&&index<=arr->length){
        for(int i=arr->length;i>index-1;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=val;
        arr->length+=1;
    }
}

int main() {
    struct Array arr;
    int n,i;
    printf("Enter size of an array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter number of numbers");
    scanf("%d",&n);


    printf("Enter all element\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;

    Display(arr);

    insert(1,6,&arr);

    Display(arr);

    return 0;
}
