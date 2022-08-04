# include <stdio.h>

struct student
{
    int r;
    int m,p;
    float per;
};

int main(){
    int i;
    struct student s[3];
    for(i=0;i<3;i++){

    printf("Roll no");
    scanf("%d",&s[i].r);
    printf("PHY and MATHS");
    scanf("%d %d",&s[i].m,&s[i].p);
    s[i].per = (s[i].m + s[i].p)/2.0;   // type casting
    printf("Percentage = %f", s[i].per);    

    }
    return 0;

}