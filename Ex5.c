/*
Union 
*/
#include<stdio.h>
union Ngay_1{
    int ngay , thang , nam ;
} uNgay;
struct Ngay_2{
    int ngay , thang , nam ;
} sNgay ; 
int main(){
    printf("Kich co kieu Union: %d bytes", sizeof(uNgay)) ; 
    printf("\nKich co kieu Struct : %d bytes", sizeof(sNgay)) ;
    union Ngay_1 n1 ; 
    n1.ngay = 15 ; 
    printf("\n%d", n1.ngay); 
    n1.thang = 2 ; 
    printf("\n%d", n1.thang);
    // n1.nam = 2003 ; 
    // printf("\n%d\t%d\t%d", n1.ngay , n1.thang ,n1.nam) ; 
    printf("\n%d", n1.ngay); 
    printf("\n%d", n1.thang);
    struct Ngay_2 n2 ; 
    n2.ngay = 15 ; 
    n2.thang = 2 ; 
    n2.nam = 2003 ; 
    printf("\n%d\t%d\t%d", n2.ngay , n2.thang ,n2.nam) ; 
}