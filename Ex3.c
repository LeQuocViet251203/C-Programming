/*
truct lồng nhau 
*/
#include<stdio.h> 
struct Point{
    float x ; 
    float y ; 
}; 

struct triangle{
    struct Point a , b , c  ;
};

struct circle{
    struct Point c ;
    float r ; 
}; 
struct rectangle{
    struct Point a , b ,c , d; 
};
struct polygon{
    struct Point ps[100] ;
    int n ;  
};
struct polygon2{
    struct Point *ps;
}; 

// struct Date{
//     int day , month , year ; 
// };

struct person{
    char name[100] ; 
    // struct Date dateofBirth ;
    struct Date{
        int day , month , year ; 
    }dateofBirth; // khong nen
    float weight ;  
}person1 , person2;