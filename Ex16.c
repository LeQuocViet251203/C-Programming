/*
String
*/
#include <stdio.h> 
#include <string.h>
void xoaxuongDong(char x[]){
    size_t len = strlen(x) ; 
    if(x[len-1] == '\n'){
    x[len-1] = '\0'; 
    }
}
int main(){
    char ten[50] ; 
    int tuoi ; 
    scanf("%d" , &tuoi) ; 
    getchar(); 
    printf("Nhap vao ten cua ban: "); 
    // scanf("%s" , ten) ; 
    fgets(ten, sizeof(ten) , stdin) ; 
    xoaxuongDong(ten) ; 
    // printf("\nTen da nhap la: %s " , ten ) ;
    puts(ten) ; 
    printf("Tuoi:%d" ,strlen(ten)) ;
}