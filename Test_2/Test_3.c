#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void DeletethenextLine(char n1[]){
    size_t len = strlen(n1) ; 
    if(n1[len - 1] == '\n')
        n1[len-1] = '\0' ; 
}
void InputtheFilename(char n1[], size_t SIZE){
    printf("input the file name: ") ;
    fflush(stdin) ; 
    fgets(n1, SIZE , stdin) ; 
    DeletethenextLine(n1) ; 
    printf("the first file name was: %s" , n1) ; 
}
void CopytoanotherFile(int x[] , int n , char name[]){
    FILE *f ;
    f = fopen(name , "w") ; 
    if(f == NULL){
        printf("cant open the file") ;
        return ; 
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(f , "%d\n" , x[i]) ; 
    }
    fclose(f) ; 
}
int main(){
    char n1[100] , n2[100] ;
    int arr[10] ; 
    size_t SIZE = sizeof(n1) ; 
    InputtheFilename(n1 , SIZE) ; 
    InputtheFilename(n2 , SIZE) ; 
    FILE *f ; 
    f = fopen(n1 , "r") ; 
    if(f == NULL){
        printf("Cant open the file") ; 
        exit(1) ;
    }
    int i = 0 ; 
    while(!feof(f)){
        fscanf(f , "%d" , &arr[i]) ;
        i++ ;  
    }
    fclose(f) ;
    CopytoanotherFile(arr , 10 , n2) ; 
    return 0 ; 
}