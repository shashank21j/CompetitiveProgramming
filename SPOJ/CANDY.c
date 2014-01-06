#include<stdio.h>
#include<strings.h>
int main() {
  int n,i,j,m;
  scanf("%d",&n);
  while (n!=-1) {
    int a[n];
    int sum=0;
    int avg;
    int ans=0;
    for (i=0;i<n;i++) {
      scanf("%d",&a[i]);
      sum+=a[i];
    }
    if (sum%n!=0) {
      printf("-1\n");
    }
    else {
      avg=sum/n;
      for (i=0;i<n;i++) {
        if (a[i]>avg) { ans+= (a[i]-avg); }
      } 
      printf("%d\n",ans);
    }
    scanf("%d",&n);
  }
  return 0;
}    


