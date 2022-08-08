# include <stdio.h>

struct student
{
    int r;
    int m,p;
    float per;
};

int main(){
    int i, n;
    printf("Enter for how many students you want to print percentage: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){

    printf("\nRoll no  ");
    scanf("%d",&s[i].r);
    printf("\nPHY and MATHS  ");
    scanf("%d %d",&s[i].m,&s[i].p);
    s[i].per = (s[i].m + s[i].p)/2.0;   // type casting
    printf("\nPercentage = %f\n\n", s[i].per);    

    }
    return 0;

}