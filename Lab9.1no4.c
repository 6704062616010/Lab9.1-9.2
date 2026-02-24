#include <stdio.h>
void swapValue(int *a,int *b,int *c);
void swapArray(int a[],int b[],int size);
int main(){
    int a=1,b=2,c=3;
    printf("Before swap function: a=%d,b=%d,c=%d\n",a,b,c);
    swapValue(&a,&b,&c);   
    printf("After swap function: a=%d,b=%d,c=%d\n",a,b,c);
    int arr1[] ={1,2,3,4};
    int arr2[] ={5,6,7,8};
    int size = 4;
    printf("\nBefore swapArray:\n");
    for(int i=0; i<size; i++)
        printf("arr1[%d]=%d  arr2[%d]=%d\n",i,arr1[i],i,arr2[i]);
    swapArray(arr1,arr2,size);
    printf("\nAfter swapArray:\n");
    for(int i=0; i<size; i++)
        printf("arr1[%d]=%d  arr2[%d]=%d\n",i,arr1[i],i,arr2[i]);
    return 0;
}
void swapValue(int *a,int *b,int *c){
    int temp=*a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapArray(int a[], int b[], int size) {
    for(int i = 0; i<size; i++) {
        int temp=a[i];
        a[i] =b[i];
        b[i] =temp;
    }
}