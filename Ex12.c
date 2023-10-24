/*
Working with files txt
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    // fptr = fopen("newprogram.txt","w") ;
    fptr = fopen("newprogram.txt", "r") ;
    if(fptr == NULL){
    printf("\nLoi tao hoac mo file") ;
    exit(1);
    }
    int n ; 
    fscanf(fptr , "%d" , &n) ; 
    printf("gia tri cua n = %d", n);
    // int n ; 
    // printf("Nhap vao man hinh 1 con so: ");
    // scanf("%d", &n) ; 
    // fprintf(fptr , "%d" , n) ;  
    fclose(fptr) ; 
    return 0 ; 
}
