#include<stdio.h>  
int main()  
{  
    int num, count, fact = 1;  
  
    printf("Enter a number to find its Factorial\n");  
    scanf("%d", &num);  
  
    for(count = 1; count <= num; count++)  
    {  
        fact = fact * count;  
    }  
  
    printf("Factorial of %d is %d\n", num, fact);  
  
    return 0;  
}  