#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
typedef struct{
    int x ,y ; 
}Coordinate; 
void InputCordinate(Coordinate *N1){
    printf("Input the x:") ; 
    scanf("%d" , &N1->x) ; 
    printf("\nInput the y:") ; 
    scanf("%d" , &N1->y) ; 
}
void Checkcoincide(Coordinate *N1 , Coordinate *N2){
    if(N1->x == N2->x && N1->y == N2->y)
    printf("They are coincident") ; 
    else
    printf("They are not coincident"); 
}
void Distancebetween(Coordinate N1 , Coordinate N2){
     printf("\n%.2f" , sqrt(pow(N1.x - N2.x,2) + pow(N1.y - N2.y, 2))); 
}
int main(){
    Coordinate FIRST , SECOND , THIRD ; 
    Coordinate *AddFIRST = &FIRST  ; 
    Coordinate *AddSECOND = &SECOND  ; 
    InputCordinate(AddFIRST) ; InputCordinate(AddSECOND);
    Checkcoincide(AddFIRST , AddSECOND) ; 
    Distancebetween(FIRST , SECOND) ; 
}