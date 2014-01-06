#include<stdio.h>
#include<string.h>
int main() {
  char s[110];
  int a[110];
  a[0]=0;
  int i;
  while (scanf("%s",&s)!=EOF) {
    int len=strlen(s);
    if(len==1 && (s[0]=='1'|| s[0]=='0')) {printf("%s\n",s); continue;}
    for (i=0;i<len;i++) {
      a[i+1]=s[i]-'0';
    }
    int t=len;
    int car=0;
    int temp;
    while (a[t]==0) {
      a[t]=9;
      t-=1;
    }
    a[t]-=1;
    t=len;
    while (t!=0) {
      temp=(a[t]*2)+car;
      a[t]=temp%10;
      car=temp/10;
      t--;
    }
    a[t]+=car;
    for (i=0;i<=len;i++) {
      if (a[i]==0 && i==0 ) continue;
      printf("%d",a[i]);
    }
    printf("\n");
    a[0]=0;
  }
  return 0;
}


