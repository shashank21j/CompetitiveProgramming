#include<stdio.h>
int main() {
  int n,i,j,m;
  scanf("%d",&n);
  for (i=0;i<n;i++) {
    scanf("%d",&m);
    int men[m];
    int women[m];
    int menh[11]={0};
    int womenh[11]={0};
    for (j=0;j<m;j++) {
      scanf("%d",&men[j]);
      menh[men[j]]++;
    }
    for (j=0;j<m;j++) {
      scanf("%d",&women[j]);
      womenh[women[j]]++;
    }
    int t1=10;
    int t2=10;
    int sum=0;
    while (t1!=0) {
      if (menh[t1]==0) { t1-=1; continue; }
      if (womenh[t2]==0) { t2-=1; continue; }
      sum+=t1*t2;
      menh[t1]-=1;
      womenh[t2]-=1;
    }
    printf("%d\n",sum);
  }
  return 0;
}    


