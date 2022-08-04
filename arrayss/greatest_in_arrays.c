# include <stdio.h>


int main(){
    int arr[5], x, great, y;
    for (x=0;x<=4;x++){
        scanf("%d", & arr[x]);
    }
    great = arr[0];
    for(y=0;y<=4;y++){
        if(great<arr[y]){
            great = arr[y];
        }
    }
    printf("\n\n%d is the greatest among the entered values",great);
    return 0;

}