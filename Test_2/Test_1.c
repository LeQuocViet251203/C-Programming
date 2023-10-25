#include <stdio.h> 
#include <stdlib.h> 
int main(){
     for (int i = 1000; i <= 1001; i++)
    {
        int check = 0 , num = i ; 
        while(num != 0 ){
            check = check * 10 + (i % 10); 
            num /= 10 ; 
            }
        printf("%d\n", check) ; 
     } 
     return 0 ;
}