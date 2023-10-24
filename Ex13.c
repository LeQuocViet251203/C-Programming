/*
Working with binary files
*/
 #include <stdio.h> 
 #include <stdlib.h> 
 typedef struct {
    int ngay , thang , nam ; 
 }Ngaysinh; 
 int main(){
    FILE *f ; 
    // f = fopen("new2program.bin","wb");
    f = fopen("new2program.bin","rb");
    if(f == NULL){
        printf("\n Loi tao file!") ; 
        exit(1) ; 
    }
    Ngaysinh n1[2] , n2 , n3 , n4[5]; 
    n4[0].ngay = 25 ; 
    n4[0].thang = 12 ; 
    n4[0].nam = 2003 ; 
    n4[1].ngay = 25 ; 
    n4[1].thang = 12 ; 
    n4[1].nam = 2003 ; 
    // fwrite(&n4[0] , sizeof(Ngaysinh) , 2 , f );
    fread(&n1, sizeof(Ngaysinh) , 2 , f) ;
    printf("%d\t%d\t%d" , n1[0].ngay , n1[0].thang , n1[0].nam) ;
      printf("\n%d\t%d\t%d" , n1[1].ngay , n1[1].thang , n1[1].nam) ;
    fclose(f) ; 
 }