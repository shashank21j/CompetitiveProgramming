#include<stdio.h>
int main() {
  int n,i;
  scanf("%d",&n);
  for (i=0;i<n;i++) {
    int x,y;
    scanf("%d %d",&x,&y);
    if (x<2 && y!=x) {
      printf("No Number\n"); 
    }
    else if (x%2==0) {
      if (y==x) printf("%d\n",(2*x));
      else if (y==(x-2)) printf("%d\n",(2*x)-2);
      else printf("No Number\n");
    }
    else if (x%2==1) {
      if (y==x) printf("%d\n",(2*x)-1);
      else if (y==(x-2)) printf("%d\n",(2*x)-3);
      else printf("No Number\n");
    }            
  }
  return 0;
}








