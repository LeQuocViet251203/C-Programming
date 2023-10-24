/*
Enums 
*/
/*
typedef
*/
#include <stdio.h> 
typedef struct User{
    char name[25] ; 
    int id ; 
}User;
typedef char user[25] ; 
enum Size{
    Small = 34 , Medium = 31 , Large = 35 , Extralarge = 40, Tovl = 50
} ; 
enum Size shoeSize[10] ; 
int main(){
    shoeSize[0] = Medium ; 
    printf("%d", shoeSize[0]);
    printf("cai enum nang %d bytes ", sizeof(shoeSize));
    user user1 = "Bro" ; 
    User newuser = {"Bro", "313213123"} ; 
    User newuser2 = {"Borwhat" , "1312312312"} ; 
    
}