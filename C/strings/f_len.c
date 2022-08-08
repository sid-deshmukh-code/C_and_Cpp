#include<stdio.h>



int main(){
    int len,i;
    len = 0;
    char strf[20];
    scanf("%c",&strf);
    for (i = 0; strf[i]!='\0'; i++)
    {
        len++;                                // we have a in-built function to find length of a string called "strlen()" 
    }                                         // present in strings.h   header file
    printf("%d",len);
    return 0;

}