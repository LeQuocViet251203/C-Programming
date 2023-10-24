/*
Arrays 
*/
#include <stdio.h> 
#include <conio.h> 
int arr[5] ; 

int CreateArr(int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] = i ;
    }
    return arr ; 
}
int main(){
    char gt ; 
    int a[10] ; 
    float b [100] ; 
    char c[1000] ; 
    int size = 5 ; 
    int* myArr = CreateArr(size) ; 
    for (int i = 0; i < size; i++)
    {
        printf("%d", *myArr + i); 
    }
    
}