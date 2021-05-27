#include<stdio.h>
#include<stdlib.h>

//read the contents from file
int main(void)
{
    FILE *fptr; // FILE is predefined structure (stdio)
    char ch;

    fptr=fopen("src.txt","r"); //r is mode reading the file 
        //fopen(filename,mode)

    if(fptr==NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch=fgetc(fptr))!=EOF)
    {
        fputc(ch,stdout);
        //stdout standard output stream
         //console /terminal
    }
    //fgetc() used to get the character wherever file pointer is pointing 
    //EOF : End of FILE

    fclose(fptr);
    return 0;
}