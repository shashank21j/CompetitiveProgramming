#include<stdio.h>
#include<string.h>
int main() {
  long long int a[50];
  int i;
  a[0]=1;
  a[1]=2;
  for (i=2;i<50;i++) {
    a[i]=a[i-1]+a[i-2];
  }
  char n[5001];
  scanf("%s",&n);
  while (n[0]!='0') {
    int t1=0;
    int p=strlen(n);
    int cnt=0;
    int flag1=0;
    long long int sum=1;
    while (cnt!=p) {
      if( n[cnt]=='1' || n[cnt]=='2' ) {
        t1++;
        flag1=1;
      }
      else if (flag1==1 && n[cnt]=='0' && p==2 ){
        sum*=a[t1-1];
        t1=0;
        flag1=0;
      }
      else if (flag1==1 && n[cnt-2]>='3' && n[cnt-2]<='9' && n[cnt]=='0'){
        sum*=a[t1-1];
        t1=0;
        flag1=0;
      }
      else if (flag1==1 && n[cnt-1]=='1' && n[cnt]<='9' && n[cnt]>='3'){
        sum*=a[t1];
        t1=0;
        flag1=0;
      }
      else if (flag1==1 && n[cnt-1]=='1' && n[cnt]=='0'){
        if(t1>1){
          sum*=a[t1-2];}
        else sum*=a[t1-1];
        t1=0;
        flag1=0;
      }
      else if (flag1==1 && n[cnt-1]=='2' && n[cnt]<='6' && n[cnt]>='3'){
        sum*=a[t1];
        t1=0;
        flag1=0;
      }
      else if (flag1==1 && n[cnt-1]=='2' && n[cnt]=='0'){
        if(t1>1){
          sum*=a[t1-2];}
        else sum*=a[t1-1];
        t1=0;
        flag1=0;
      }

      else if (flag1==1){
        sum*=a[t1-1];
        t1=0;
      }
      else {
        t1=0;
      }     

      cnt++;
    }
    if (t1!=0)sum*=a[t1-1];
    printf("%lld\n",sum);
    scanf("%s",&n);
  }
  return 0;
}



