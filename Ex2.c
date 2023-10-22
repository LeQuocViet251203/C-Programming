#include<stdio.h>
#include<math.h>
/*
Kiểu struct và con trỏ 
Bài tập phân số : rút gọn , cộng , trừ , nhân , chia 2 phân số 

*/
struct person{
    int age ; 
    float weight ; 
}; 
struct Phanso{
    int tuSo ; 
    int mauSo ; 
}; 
void nhapPhanSo(struct Phanso *ps){
printf("\nNhap vao tu so: ") ; 
scanf("%d", &ps->tuSo) ; 
do{
printf("\nNhap vao mau so: ") ; 
scanf("%d", &ps->mauSo) ; 
}while(ps->mauSo == 0); 
if(ps->mauSo<0){
    ps->mauSo*= -1 ; 
    ps->tuSo*= -1 ; 
}
}
void rutGon(struct Phanso *ps){
    //tim UCLN
    int a = ps->tuSo , b = ps->mauSo ; 
    int USCLN = 1 ; 
    a = abs(a) ; 
    if(a == 0)
    USCLN = a + b ; 
    else{
        while(a!= b){
            if(a > b)
            a = a - b ;
            else 
            b = b - a ;  
        }
    }
    USCLN = a ; 
    ps->tuSo /= USCLN ; 
    ps->mauSo /= USCLN ; 
}
void PrintPhanso(struct Phanso ps){
rutGon(&ps);
if(ps.mauSo == 1)
printf("%d", ps.tuSo); 
else 
printf("%d/%d",ps.tuSo ,ps.mauSo) ; 
}
struct Phanso nhanhHaiPhanSo(struct Phanso ps1, struct Phanso ps2){
struct Phanso result ; 
result.tuSo = ps1.tuSo * ps2.mauSo  ; 
result.mauSo = ps1.mauSo * ps2.tuSo ; 
return result;
}
struct Phanso nhanhHaiPhanSo(struct Phanso ps1, struct Phanso ps2){
struct Phanso result ; 
result.tuSo = ps1.tuSo * ps2.tuSo  ; 
result.mauSo = ps1.mauSo * ps2.mauSo ; 
return result; 
}
struct Phanso truHaiPhanSo(struct Phanso ps1, struct Phanso ps2){
struct Phanso result ; 
result.tuSo = ps1.tuSo * ps2.mauSo - ps1.mauSo * ps2 .tuSo ; 
result.mauSo = ps1.mauSo * ps2.mauSo ; 
return result; 
}
struct Phanso congHaiPhanSo(struct Phanso ps1, struct Phanso ps2){
struct Phanso result ; 
result.tuSo = ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2 .tuSo ; 
result.mauSo = ps1.mauSo * ps2.mauSo ; 
return result; 
}
int main(){
    // struct person *personPtr , person1 ; 
    // personPtr = &person1 ; 
    // printf("Enter age: ") ; 
    // scanf("%d", &personPtr->age) ; 
    // printf("\nEnter weight: ") ;
    // scanf("%f", &personPtr->weight) ; 
    // printf("\nDisplaying: ") ; 
    // printf("\nAge: %d", personPtr->age) ; 
    // printf("\nWeight: %.f", personPtr->weight) ;
    struct Phanso ps1, ps2 ; 
    printf("Nhap phan so thu nhat: \n"); 
    nhapPhanSo(&ps1);
    printf("\nNhap phan so thu hai: "); 
    nhapPhanSo(&ps2);
    printf("\nPhan so vua nhap la: ");
    PrintPhanso(ps1) ; 
    printf("\t") ; 
    PrintPhanso(ps2) ; 
    printf("\n") ;
    PrintPhanso(ps1); printf("\t+\t") ; PrintPhanso(ps2); printf("\t=\t") ; PrintPhanso(congHaiPhanSo(ps1,ps2)) ;
    return 0 ;
}