/*
Working with arrays in files (txt)
*/
#include <stdio.h>
#include <stdlib.h> 
void nhapMang(int x[] , int *n){
    do{
        printf("\nNhap vao n: ") ; 
        scanf("%d" , n) ; 
    }while(*n<=0); 
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &x[i] ) ; 
    }
}
void xuatMang(int x[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i] ) ; 
    }
}
void xuatFile(int x[] , int n , char tenfile[]){
FILE *f ; 
f = fopen(tenfile, "w");
if(f == NULL){
    printf("\nloi mo file"); 
    return;
}
fprintf(f, "%d\n" , n) ; 
for (int i = 0; i < n; i++)
{
    fprintf(f, "%d\n" , x[i]) ; 
}
fclose(f); 
}

void nhapFile(int x[] , int *n , char tenfile[]){
FILE *f ; 
f = fopen(tenfile, "r");
if(f == NULL){
    printf("\nloi mo file"); 
    return;
}
int i = 0 ;
while(!feof(f)){
    fscanf(f, "%d" , &x[i]); 
    i++ ; 
}
*n = i ; 
fclose(f); 
}

void nhapFile2(int x[] , int *n , char tenfile[]){
FILE *f ; 
f = fopen(tenfile, "r");
if(f == NULL){
    printf("\nloi mo file"); 
    return;
}
fscanf(f, "%d" , n) ; 
for (int i = 0; i < *n; i++)
{
    fscanf(f, "%d" , &x[i]) ; 
}
fclose(f); 
}

int main(){
    int a[100] ; 
    int n ; 
    // nhapMang(a , &n); 
    // xuatMang(a , n) ; 
    // xuatFile(a , n , "new3program"); 
    nhapFile(a , &n ,"new3program.txt" ) ;
    xuatMang(a , n) ; 
}
