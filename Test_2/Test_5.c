#include <stdio.h> 
#include <stdlib.h> 
void FileopenFunc(char filename[]){
    FILE *f ; 
    int count = 0 ; 
    char check[100] ;  
    f = fopen(filename , "r") ;
    if(f == NULL){
        printf("Cant open the file") ; 
        exit(1) ; 
    }
    int i = 0 ; 
    while(!feof(f)){
        fscanf(f , "%c\n" , &check[i]);
        i++ ;  
    }
    fclose(f) ; 
    i = 0 ; 
    for (; i < count; i++)
    {
        if(check[i] >= 65 && check[i] <= 90)
        count++; 
    }
    printf("the number of capital letter is: %d" , count) ; 
}
int main(){
    char filename[100] ; 
    printf("Input the file name: ") ; 
    fflush(stdin) ; 
    fgets(filename , sizeof(filename) , stdin) ; 
    FileopenFunc(filename) ;
}