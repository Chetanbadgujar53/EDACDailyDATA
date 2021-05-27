#include<stdio.h>
#include<stdlib.h>


#pragma pack(1) // It will pack memory one byte at a time

struct student
{

    int rollno; //1 + 1 + 1 + 1 
    int marks; //1 + 1 + 1 + 1 
    char grade; //1 
};
int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}




/*//*
//in this example ... memory packing will be done by 4bytes everytime
struct student
{

    int rollno;
    int marks;
    char grade;
};
int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}


/*
struct student
{

    int i; //8bytes (4 will be used, 4 slack bytes)
    char grade;  //1byte (3bytes slack)
    double d; 
 
};
int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}




/*
struct student
{

    int i; //8bytes (4 wil be used , 4 will be slack bytes)
    double d; // 8bytes
    char grade; // 8bytes
};
int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}


*/

/*
struct student
{
    char ch;
    int i;
};
int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));//8
    return 0;
}


/*


struct student
{
    int id;  //4bytes
    int rollno; //4bytes 
    int marks; // 4bytes 
    char grade; // 4 bytes (1byte will be used)
    char ch; // (remaining 1 byte will be used)
    char ch1; //reminaing 1 byte will be used) ( 1byte slack byte)
     int result; //4 bytes
 
};

int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}

*//*
struct student
{
    int id;
    int rollno;
    int marks;
    char grade;
    int result;
    char ch;
    char ch1;
    char ch2;
    int num;


};

int main(void)
{
    struct student s1;
    printf("Size : %d",sizeof(s1));
    return 0;
}

*/