/*
Quan ly danh sach sinh vien 
*/
#include<stdio.h> 
#include<string.h>
#include<time.h> 
struct Date{
    int ngay , thang  , nam ; 
};
struct Sinhvien{
    int id , tuoi ; 
    char ten[50] , hocluc[10] ; 
    char gioitinh[5] , malop[30] ; 
    struct Date ngaysinh; 
    float diem_mon_1 , diem_mon_2 , diem_mon_3 , diemtrungbinh ; 

};
void xoaXuongDong(char x[]){
    size_t len = strlen(x) ; 
    if(x[len -1] == '\n')
    x[len-1] = '\0' ; 
}

void Nhapsinhvien(struct Sinhvien *sv){
    scanf("%d%d" , &sv->id , &sv->tuoi) ; 
    fflush(stdin) ; 
    fgets(sv->ten ,sizeof(sv->ten),stdin ) ; 
    xoaXuongDong(sv->ten) ; 
    fflush(stdin) ;
    fgets(sv->gioitinh , sizeof(sv->gioitinh) , stdin) ; 
    xoaXuongDong(sv->gioitinh) ; 
    scanf("%d%d%d", &sv->ngaysinh.ngay , &sv->ngaysinh.thang , &sv->ngaysinh.nam); 
    scanf("%f%f%f" , &sv->diem_mon_1 , &sv->diem_mon_2 , &sv->diem_mon_3) ;
    fflush(stdin);
    fgets(sv->malop, sizeof(sv->malop), stdin) ;
    xoaXuongDong(sv->malop);
}
void InSinhVien(struct Sinhvien sv){
    printf("%d\t%s\t%s\t%s\t%d/%d/%d\t%d\t%.2f\t%.2f\t%.2f\t",sv.id , sv.ten , sv.gioitinh , sv.malop , sv.ngaysinh.ngay , sv.ngaysinh.thang , sv.ngaysinh.nam , sv.tuoi , sv.diem_mon_1 , sv.diem_mon_2 , sv.diem_mon_3);
}
int main(){
    struct Sinhvien sv1; 
    Nhapsinhvien(&sv1); 
    InSinhVien(sv1); 
    return 0 ;
}