#include <stdio.h>

int main(void) {
  int i,n;
  int count=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2){
    printf("P\n");
  }
  else{
    printf("NP\n");
  }
  return 0;
}
