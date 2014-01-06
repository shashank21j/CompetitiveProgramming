#include<stdio.h>
int main() {
  int n,i;
  int p[100000];
  for (i=0;i<12;i++) {
    p[i]=i;
  }
  for (i=12;i<100000;i++) {
    p[i]=p[i/2]+p[i/3]+p[i/4];
  }
  while (scanf("%d",&n)!=EOF) {
    if ( n<100000 ) {
      printf("%d\n",p[n]);
    }
    else {
      int a[100000];
      a[0]=n;
      int m1,m2,m3;
      int counter=0;
      long long int sum=0;
      while (counter!=-1) {
        if ( a[counter] < 100000 ){
          sum+=p[a[counter]];
          counter--;
          continue;
        }
        m1=a[counter]/2;
        m2=a[counter]/3;
        m3=a[counter]/4;
        if ( m1+m2+m3>a[counter] ) {
          a[counter++]=m1;
          a[counter++]=m2;
          a[counter]=m3;
        }
      }
      printf("%lld\n",sum);
    }
  }
  return 0;
}


