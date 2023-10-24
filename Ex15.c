/*
Arrays of struct in binary files
*/
#include <stdio.h> 
#include <stdlib.h> 
struct Sinhvien{

};
void Nhapphimbatky(){
    printf("Nhap vao phim bat ky") ; 
    getch() ; 
}
void XuatvaoFile(struct Sinhvien ds[], int *n){
    char tenFile[100] ; 
    printf("Nhap vao duong dan va ten file: "); 
    fflush(stdin) ; 
    fgets(tenFile , sizeof(tenFile) , stdin ) ; 
    FILE *f ; 
    f = fopen(tenFile , "wb"); 
    if(f == NULL){
        printf("loi mo file de ghi"); 
        return ; 
    }
    fwrite(n , sizeof(*n) , 1 , f); 
    for (int i = 0; i < n; i++)
    {
        fwrite(ds + i , sizeof(struct Sinhvien) , 1 , f );
    }
    fclose(f);
}
void Mofiledoc(struct Sinhvien ds[], int *n){
    char tenFile[100] ; 
    printf("Nhap vao duong dan va ten file: "); 
    fflush(stdin) ; 
    fgets(tenFile , sizeof(tenFile) , stdin ) ; 
    FILE *f ; 
    f = fopen(tenFile , "wb"); 
    if(f == NULL){
        printf("loi mo file de ghi"); 
        return ; 
    }
    fread(n , sizeof(*n) , 1 , f); 
    for (int i = 0; i < n; i++)
    {
        fread(ds + i , sizeof(struct Sinhvien) , 1 , f );
    }
    fclose(f);
}