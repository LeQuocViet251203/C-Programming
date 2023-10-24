/*
Recursion 
*/
#include <stdio.h> 
int giaithua(int n){
    if(n == 0 || n == 1){
        return 1; 
    }
    return n * giaithua(n-1) ; 
}
void InNhiPhan(int x){
    if(x == 0)
        return; 
    else{
        int r = x % 2 ;
        InNhiPhan(x / 2) ;
        printf("%d", r); 
    }
}
int Fibonacci(int n){
    if(n == 0)
    return 0; 
    else if(n == 1 || n == 2)
    return 1; 
    else
    return Fibonacci(n-1) + Fibonacci(n-2) ; 
}
int main(){
    int n ; 
    do{
        printf("Nhap vao n lon hon 1: "); 
        scanf("%d", &n) ; 
    }while(n < 0) ; 
    // printf("giai thua cua %d = %d ", n , giaithua(n)); 
    // InNhiPhan(n) ;
    printf("%d" ,  Fibonacci(n)) ;
}