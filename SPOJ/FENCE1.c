#include<stdio.h>
#include<math.h>
int main() {
  int n;
  float ans;
  scanf("%d",&n);
  while (n!=0){
    ans=n*(n/M_PI)/2;
    printf("%.2f\n",ans);
    scanf("%d",&n);
  }
  return 0;
}


