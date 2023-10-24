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
void Tinhdiemtrungbinh(struct Sinhvien *sv){
    sv->diemtrungbinh = (sv->diem_mon_1 + sv->diem_mon_2 + sv->diem_mon_3) / 3 ; 
}
void Xeploai(struct Sinhvien *sv){
    if(sv->diemtrungbinh > 8)
    strcpy(sv->hocluc,"Gioi"); 
    else if(sv->diemtrungbinh > 7)
    strcpy(sv->hocluc,"Kha"); 
    else if(sv->diemtrungbinh > 5 )
    strcpy(sv->hocluc,"Trungbinh") ;
    else 
    strcpy(sv->hocluc,"Yeu"); 
}
void Tinhtuoi(struct Sinhvien *sv){
    time_t TIME = time(0); 
    struct tm* NOW = localtime(&TIME) ; 
    int namhientai = NOW->tm_year + 1900 ; 
    sv->tuoi = namhientai - sv->ngaysinh.nam   ; 
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
    printf("%d\t%s\t%s\t%s\t%d/%d/%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%s",sv.id , sv.ten , sv.gioitinh , sv.malop , sv.ngaysinh.ngay , sv.ngaysinh.thang , sv.ngaysinh.nam , sv.tuoi , sv.diem_mon_1 , sv.diem_mon_2 , sv.diem_mon_3 , sv.diemtrungbinh , sv.hocluc);
}
void CapNhatSinhVien(struct Sinhvien *sv1){
    Nhapsinhvien(sv1); 
    Tinhtuoi(sv1) ; 
    Tinhdiemtrungbinh(sv1) ; 
    Xeploai(sv1); 
}
void NhapdanhsachSinhVien(struct Sinhvien ds[] , int n){
    n = 0  ; 
    do{
        printf("Nhap n vao: ") ; 
        scanf("%d" , &n); 
    }while(n <= 0); 
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao sinh vien thu %d" , i) ; 
        CapNhatSinhVien(&ds[i]); 
    }
}
void XuatdanhsachSinhVien(struct Sinhvien ds[] , int n){
     for (int i = 0; i < n; i++)
    {
       InSinhVien(ds[i]) ; 
       printf("\n") ; 
    }
}
float Maxdiemtrungbinh(struct Sinhvien ds[] , int n) {
    int max = ds[0].diemtrungbinh;
     for (int i = 0; i < n; i++)
     {
        if(ds[i].diemtrungbinh > max)
        max = ds[i].diemtrungbinh ; 
     }
     return max ;
}
void XuatSinhvienxeploaigioi(struct Sinhvien ds[] , int n){
    for (int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].hocluc, "GIOI") == 0){
        InSinhVien(ds[i]) ;
        printf("\n"); 
        }
    }
}
int timsinhvientheoten(struct Sinhvien ds[] , int n , char ten[]){
for (int i = 0; i < n; i++)
{
    if(strstr(ds[i].ten , ten))
    return 1 ; 
}
return 0 ;
}
void xoaSinhvientheoID(struct Sinhvien ds[] , int n , int id){
    for (int i = 0; i < n; i++)
    {
        if(ds[i].id == id){
            for (int j = i; j < n; j++)
            {
                ds[j] = ds[j+1] ; 
            }
            n-- ;
        }
    }
}
void sapxepSinhvientheodiemtrungbinh(struct Sinhvien ds[], int n){
    for (int i = 0; i < n - 1; i++)
    {
    for (int j = i + 1 ; j < n; j++)
    {
        if(ds[j].diemtrungbinh < ds[i].diemtrungbinh){
            struct Sinhvien TEMP = ds[i]; 
            ds[i] = ds[j] ; 
            ds[j] = TEMP ; 
        }
    }
    }
    
}
void sapxepSinhvientheoten(struct Sinhvien ds[], int n){
    for (int i = 0; i < n - 1; i++)
    {
    for (int j = i + 1 ; j < n; j++)
    {
        if(strcmp(strupr(ds[i].ten),strupr(ds[j].ten)) < 0 ){
            struct Sinhvien TEMP = ds[i]; 
            ds[i] = ds[j] ; 
            ds[j] = TEMP ; 
        }
    }
    }
    
}
int main(){
    struct Sinhvien sv1; 
    int n ; 
    struct Sinhvien ds[100] ; 
    // CapNhatSinhVien(&sv1); 
    // InSinhVien(sv1); 
    // NhapdanhsachSinhVien(ds , n); 
    // XuatdanhsachSinhVien(ds , n); 
    return 0 ;
}