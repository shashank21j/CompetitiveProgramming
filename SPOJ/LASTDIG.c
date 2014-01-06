#include<stdio.h>
int i;
int p(int a,int b) {
  int j;
  int temp=a;
  if (b==0)b=4;
  for (j=1;j<b;j++) {a*=temp;}
  return a%10;
}
int main () {
  int n;
  scanf("%d",&n);
  for (i=0;i<n;i++) {
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==0) printf("1\n");
    else if (a==0) printf("0\n");
    else printf("%d\n",p(a,b%4));
  }
  return 0;
}


