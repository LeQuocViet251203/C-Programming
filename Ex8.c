/*
Truyen tham chieu va truyen tham tri
*/
#include <stdio.h>
void swap_Thamrit(int a , int b){
    int temp = a ; a = b ; b = temp ; 
}
void swap_Thamchieu(int *a, int *b){
    int temp = *a ; *a = *b ; *b = temp ; 
}
int main(){
    int a , b ; 
    printf("Nhap vao 2 so a , b : ") ; 
    scanf("%d%d", &a, &b) ; 
    swap_Thamchieu(&a , &b); 
    printf("gia tri a la : %d va gia tri b la  %d", a ,b );
}