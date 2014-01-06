#include<stdio.h>

int main(){
  int i,j;
  int test;
  int cnt=1;
  int primelist[3500]={0};
  primelist[0]=2;
  for (i=3;i<32000;i=i+2) {
    test=1;
    for (j=0;j<3500;j++) {
      if (primelist[j]==0) break;
      else if (primelist[j]*primelist[j]>i) break;
      else if (i%primelist[j]==0) {test=0; break;}
    }
    if(test==1) primelist[cnt++]=i;
  }


  int num;
  int n,m;
  scanf("%d",&num);

  for (i=0;i<num;i++) {
    scanf("%d %d",&m,&n);
    int k,k1,k2;
    if (m<2) m=2;
    int primes[100000]={0};
    int t=n-m;
    for (j=0;j<3402;j++){
      if (primelist[j]*primelist[j]>n) break;

      if (m%primelist[j]==0) {k1=m/primelist[j];}
      else {k1=m/primelist[j] + 1;}
      if (n%primelist[j]==0) {k2=n/primelist[j];}
      else {k2=n/primelist[j];}


      for (k=k1;k<=k2;k++) {
        if (k==1) continue;
        primes[k*primelist[j]-m]=1;
      }

    }        
    for (j=0;j<t+1;j++) {
      if(primes[j]==0) {
        printf("%d\n",j+m);
      }
    }

  }       
  return 0;
}



