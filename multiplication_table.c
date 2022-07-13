#include <stdio.h>

int main(){

int i, table;

printf("Enter a number to print its multiplication table: ");
scanf("%d",& table);

for (i=1;i<=10;i++){

printf("%d x %d = %d\n",& table, i, table*i);


}

return 0;



}
