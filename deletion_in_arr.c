#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDelition(int arr[],int size,int index){
    if (size <= 0){
        printf("There are no more element in the given array ");
        return;
    }
    else{
        for (int i = index; i <= size; i++){
            arr[i] = arr[i+1];
        }
    }
}
int main(){

    int marks[10] = {10,20,30,40,50,60};
    int size = 6,capacity = 10;
    int element,index;

        printf("Enter the Element you want to Add and at which Index (element then index) : ");
        scanf("%d",&index);
        display(marks,size);
        indDelition(marks,size,index);
        size--;
        display(marks,size);
   
    return 0;
}