#include<stdio.h>
#include<stdlib.h>

struct student // name of structure student
{
    int rn; //data members of struture / elements of structure
    int marks;
    char grade;
}s1,s2;

int main(void)
{

    //struct student s1,s2;
    s1.rn=1;
    s1.marks=75;
    s1.grade='A';

    s2=s1; 
    printf("Roll No = %d ",s1.rn);
    printf("Makrs = %d ",s1.marks);
    printf("Grade = %c",s1.grade);

    printf("\n S2 Record : %d %d %c",s2.rn,s2.marks,s2.grade);
    
  
    return 0;
}
