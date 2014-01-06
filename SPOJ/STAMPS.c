#include<stdio.h>

int main() {
    int i,j,n,w,b;
    int brr[1000];
    int sum;
    int max;
    int ind;
    int count;
    scanf("%d",&n);
    for ( i=0;i<n;i++ ) {
      scanf("%d %d",&w,&b);
      for ( j=0;j<b;j++ ) {
        scanf("%d",&brr[j]);
      }
      sum = 0;
      count=0;
      while ( sum<w ) {
        count++;
        max=0;
        for (j=0;j<b;j++ ){
          if ( brr[j]>max ) {
            max=brr[j];
            ind=j;                 
          }           
        }
        brr[ind]=0;
        sum+=max;
        if (count>b) break;
      }
      printf ("Scenario #%d:\n",i+1);
      if (sum>=w) printf("%d\n",count);
      else printf("impossible\n");
      printf("\n");
    }
    return 0;
}


