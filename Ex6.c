/*
Pointer
*/
/*
Pointers with arrays
*/
/*
Pointers with function 
*/
#include <stdio.h.> 
// Truyen tham tri
void swap1(int a,int b){
    int temp = a ;
    a = b ; b = temp ; 
}
// Truyen tham chieu su dung con tro
void swap2(int *a, int *b){
    int temp = *a ;
    *a = *b ; *b = temp ; 
}

int main(){
    int a = 5 , b =10 ; 
    // swap1(a , b); 
    swap2(&a , &b) ;
    printf("gia tri cua a : %d va gia tri cua b : %d", a, b);
    int x[] = {3,3,5,4,5}; 
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
        printf("%p\t", &x[i]); 
    }
    int var , var1; 
    int arr[10] ; 
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d",arr + i);
    // }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]); 
    }
    int* p; 
    //  p = &x ; 
    int *p1;
    int* p2 , p3 = 5 ;
    p2 = &p3 ; 
    // p = &p1 ; 
    // scanf("%d",&var);
    // printf("address of var: %p" , &var);
    // printf("\naddress of var: %p" , &var1);
    // printf("\nsize of &var: %d" , sizeof(&var));
    // printf("\nsize of p: %d" , sizeof(p));
    printf("\nvalue of p2: %d" , *p2);
    printf("\naddress of p3: %p" , p2);
    *p2 = 6 ; 
    printf("\nvalue of p2: %d" , *p2);
    // printf("\naddress of p1: %p" , p);
    printf("\naddress of x: %p" , x);
    printf("\naddress of x0: %p" , &x[0]);
    printf("\nvalue of x0: %d" , x );
}