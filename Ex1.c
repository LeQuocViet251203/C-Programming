#include "stdio.h"
/*
struct StructureName{
    dataType member1 ; 
    dataType member2 ; 
}
*/
struct Person{
    char name[50] ; 
    int citNo ; 
    float salary ; 
}person3 ,person4 , p[20]; //tạo ra 1 biến toàn cục
struct Date{
    int day ;
    int month ; 
    int year ; 
};
void inputDate(struct Date *d){
    printf("input day: ") ; 
    scanf("%d" , &d->day);
    printf("\ninput month: ") ; 
    scanf("%d" , &d->month);
    printf("\ninput year: ") ; 
    scanf("%d" , &d->year);
}
void printDate(struct Date d){
    printf("%d/%d/%d", d.day , d.month , d.year) ;
}
int checkDate(struct Date d) {
    if (d.day < 0 || d.month < 0 || d.year < 0)
        return 0;
    if (d.month > 12)
        return 0;
    if (d.month == 2) {
        if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
            if (d.day > 29)
                return 0;
        } else {
            if (d.day > 28)
                return 0;
        }
    }
    if (d.month % 2 != 0 || d.month == 8 || d.month == 10 || d.month == 12) {
        if (d.day > 31)
            return 0;
    } else {
        if (d.day > 30)
            return 0;
    }
    return 1;
}
int main(){
    struct Person person1 , person2 , p[20] ; 
    struct Date myDate ; 
    inputDate(&myDate) ; 
    printf("\n---\n") ; 
    printDate(myDate) ; 
    printf("\nKiem tra ngay hop le: %s" , checkDate(myDate)==1?"Ngay hop le":"Ngay khong hop le"); 
    return 0 ;
}