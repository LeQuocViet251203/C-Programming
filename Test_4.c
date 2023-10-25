#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <stdbool.h> 
#include <ctype.h>
void swap(int *x , int *y , int *z){
    int temp = *x ; 
    *x = *y ;
    *y = *z ; 
    *z = temp ; 
}
void IndexofDuplicate(int arr[] , size_t n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] == arr[i]){
                printf("the first number got duplicated is %d at %d" , arr[i] , i) ;
                exit(1) ; 
            }
        }
    }
}
void AddressoftheMax(int arr[] , int n){
    int max = 0 ;
    int *f; 
    int flag = 0 ; 
    for (int i = 0; i < n ; i++)
    {
        if(arr[i] > max){
        max = arr[i] ;
        flag = i ; 
        f = &arr[i] ;  
        }
    }
    printf("max : %d index : %d at address : %p" , max , flag , f); 
}
bool isVowels(char c){
    if(c == 'o' || c == 'a' || c == 'i' || c == 'e' || c == 'u')
    return 1; 
    return 0 ;
}
void CountVowelandCosso(char arr[]){
    int vowels = 0 , cosso = 0 ;
    for (int i = 0; arr[i] != '\0'; i++)
    {   
        char lowercaseletter = tolower(arr[i]) ; 
        if(arr[i] == ' ' && arr[i] != '\n')
            continue; 
        if(isVowels(lowercaseletter))
            vowels++ ; 
        else
            cosso++ ; 
    }
    printf("vowels: %d cosso: %d ", vowels , cosso) ;
}
void FizzBuzzGame(int n){
    char Output[20] = "" ;
    if(n % 3== 0) strcat(Output ,"FIZZ") ; 
    if(n % 5 == 0) strcat(Output, "BUZZ") ;
    if(Output[0] != '\0')
    printf("the number of %d is :%s\n" , n ,  Output) ;  
}
int main(){
        // for (int i = 10; i <= 20; i++)
        // {
        //     FizzBuzzGame(i);
        // } 
        // char arr[100] ;
        // printf("input the string: "); 
        // fflush(stdin) ; 
        // fgets(arr , sizeof(arr) , stdin) ; 
        // CountVowelandCosso(arr) ;         
         int arr[] = {1,2,3,4,5,6,7,8,2} ;
         size_t n = sizeof(arr)/sizeof(arr[0]) ; 
        // IndexofDuplicate(arr , n) ;  
        // AddressoftheMax(arr , n) ;
        swap(&arr[0] , &arr[1] , &arr[2]); 
        printf("%d %d %d" , arr[0] , arr[1] , arr[2]) ;
        return 0 ;
}