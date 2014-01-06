#include<stdio.h>
int main () {
  int n;
  scanf("%d",&n);
  while (n!=0) {
    int cnt=0;
    int i=1;
    int ptr=0;
    int t;
    int stack[1000];
    while (cnt!=n) {
      scanf("%d",&t);
      if ( t==i ) {
        i++;
        while ( stack[ptr-1]==i ) {
          i++;
          ptr--;
        }
      }
      else {
        stack[ptr++]=t;
      }
      cnt++;
    }
    if ( i==n+1 ) {
      printf("yes\n");
    }
    else printf("no\n");
    scanf("%d",&n);
  }
  return 0;
}


