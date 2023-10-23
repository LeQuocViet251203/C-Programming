/*
Pointer in Dynamic memory allocation
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n ;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n) ;
    // int* ptr = (int*)malloc(n*sizeof(int));
    int *ptr = (int*)calloc(n,sizeof(int)); 
    if(ptr == NULL){
    printf("\nError: Khong cap phat duoc"); 
    exit(0); 
    }
    // for(int i = 0 ; i < n ; i++){
    //     scanf("%d", ptr + i) ; 
    // }
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(ptr + i) ) ; 
    }
    int x; 
    printf("so luong phan tu can them la: ") ; 
    scanf("%d", &x) ;
    ptr = (int*)realloc(ptr, (x + n) * sizeof(int)); 
        if (ptr != NULL) {
        for (int i = n; i < x + n; i++) {
        *(ptr + i) = 0;
        }
        for (int i = 0; i < x + n; i++) {
            printf("%d\t", *(ptr + i));
        }
    } else {
        printf("Error: Khong cap phat duoc bo nho them");
    }

    free(ptr); // Free the dynamically allocated memory.
 
    return 0 ;
}
