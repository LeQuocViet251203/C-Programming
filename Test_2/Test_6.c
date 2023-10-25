#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
typedef struct{
    char name[100] , code[100];
    float score ;  
}Student; 
void DeltheNextLine(char charac[]){
    size_t n = strlen(charac) ;
    if(charac[n - 1] == '\n')
    charac[n-1] == '\0' ; 
}
void InputStudent(Student *student){
    printf("input the student name:") ; 
    fflush(stdin) ; 
    fgets(student->name , sizeof(*student->name) , stdin) ;
    DeltheNextLine(*student->name) ; 
    printf("input the code:"); 
    fflush(stdin) ; 
    fgets(student->code , sizeof(*student->code) , stdin) ;
    DeltheNextLine(*student->code) ; 
    scanf("%f" , student->score) ;  
}
void InputStudenttofile(Student Studentlist[], char filename[], size_t n){
    FILE *f ; 
    f = fopen(filename , "w") ; 
    if(f == NULL){
        printf("Cant open file") ; 
        exit(1) ;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(f , "%15s %15s %5.2f" , Studentlist[i]) ;
    }
    fclose(f) ;
}
int main(){
    Student Studentlist[10] ; 
    char filename[100] ; 
    fflush(stdin) ; 
    fgets(filename , sizeof(filename) , stdin) ;
    DeltheNextLine(filename) ; 
    size_t n = sizeof(Studentlist) / sizeof(Studentlist[0]) ; 
    for (int i = 0; i < n; i++)
    {
        InputStudent(&Studentlist[i]) ; 
    }
    InputStudenttofile(Studentlist , filename , n ) ;
}