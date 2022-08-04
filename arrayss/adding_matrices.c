# include <stdio.h>


int main(){
    int r,c,i,j;
    r -= 1;    
    c -= 1;
    printf("Enter the values of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\n\n\n\n");
    int a[r][c], b[r][c], add[r][c];


    //Taking input for a
    printf("Taking input for a\n");
    for (i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            scanf("%d",& a[i][j]);
        }
       printf("\n"); 
    }
    

    //Taking input for b
    printf("Taking input for b\n");
    for (i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            scanf("%d",& b[i][j]);
        }
      printf("\n");
    }
 
    //Adding matrices and printing it...

    for (i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            printf(" %d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    return 0;

}