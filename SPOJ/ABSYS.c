#include<stdio.h>
#include<string.h>
long long int fun(char *a,int t) {
  int n=0;
  int k;
  for (k=0;k<t;k++) {
    n*=10;
    n=n+a[k]-'0';
  }
  return n;
}
int main() {
  char a[50];
  char b[50];
  char c[50];
  int n;
  int j;
  scanf("%d ",&n);
  for (j=0;j<n;j++) {
    scanf("%s + %s = %s ",a,b,c);
    int f1=0;
    int i;
    for (i=0;i<strlen(a);i++) {
      if (!isdigit(a[i]) ) {f1=1; break;}
    }
    for (i=0;i<strlen(b);i++) {
      if (f1!=0) break;
      if (!isdigit(b[i]) ) {f1=2; break;}
    }
    for (i=0;i<strlen(c);i++) {
      if (f1!=0) break;
      if (!isdigit(c[i]) ) {f1=3; break;}
    }
    if (f1==1) {
      long long int b1=fun(b,strlen(b));
      long long int c1=fun(c,strlen(c));
      long long int a1=c1-b1;
      printf("%lld + %lld = %lld\n",a1,b1,c1);
    }
    else if (f1==2) {
      long long int a1=fun(a,strlen(a));
      long long int c1=fun(c,strlen(c));
      long long int b1=c1-a1;
      printf("%lld + %lld = %lld\n",a1,b1,c1);
    }
    else if (f1==3) {
      long long int a1=fun(a,strlen(a));
      long long int b1=fun(b,strlen(b));
      long long int c1=b1+a1;
      printf("%lld + %lld = %lld\n",a1,b1,c1);
    }
    else {
      long long int a1=fun(a,strlen(a));
      long long int b1=fun(b,strlen(b));
      long long int c1=fun(c,strlen(c));
      printf("%lld + %lld = %lld\n",a1,b1,c1);
    }
  }
  return 0;
}



