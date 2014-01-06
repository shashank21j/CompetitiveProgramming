#include<stdio.h>
#include<math.h>
int main() {
  int n;
  scanf("%d",&n);
  int i;
  int t=sqrt(n);
  int 
    sum=(t*(t+1))/2;
  for (i=t+1;i<=n;i++) {
    sum+=n/(i);
  }
  printf ("%d\n",sum);
  return 0;
}
