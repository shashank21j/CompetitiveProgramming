#include<stdio.h>
int main() {
  int t,i,ng,nm;
  scanf("%d",&t);
  int j,k;
  for (i=0;i<t;i++) {
    scanf("%d %d",&ng,&nm);
    int max1=0;int max2=0;
    for (j=0;j<ng;j++) {
      scanf("%d",&k);
      if ( k> max1 ) {
        max1=k;
      }    
    }
    for (j=0;j<nm;j++) {
      scanf("%d",&k);
      if ( k> max2 ) {
        max2=k;
      }    
    }
    if (max2>max1) printf("MechaGodzilla\n");
    else if (max1>=max2)printf("Godzilla\n");
    else printf("uncertain\n");
  }
  return 0;
}




