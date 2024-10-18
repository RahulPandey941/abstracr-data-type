#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indInsertion(int arr[],int size,int index,int element,int capacity){
    if (size >= capacity){
        printf("There is no more space in tha given array ");
        return;
    }
    else{
        for (int i = size; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }
}
int main(){

    int marks[10] = {10,20,30,40,50,60};
    int size = 6,capacity = 10;
    int element,index;

        printf("Enter the Element you want to Add and at which Index (element then index) : ");
        scanf("%d %d",&element,&index);
        display(marks,size);
        indInsertion(marks,size,index,element,capacity);
        size++;
        display(marks,size);
   
    return 0;
}