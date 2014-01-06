#include<stdio.h>
int main() {
  int a,d;
  int i;
  int at,de1,de2,at2;
  int min1,min2;
  scanf("%d %d",&a,&d);
  while( a!=0 && d!=0 ) {
    at2=99999;
    de2=99999;
    min1=99999;
    min2=99999;
    for (i=0;i<a;i++) {
      scanf("%d",&at);
      if (at<=min1) {
        at2=min1;
        min1=at;
      }
      else if (at>min1 && at<at2) {
        at2=at;
      }
    }
    for (i=0;i<d;i++) {
      scanf("%d",&de1);
      if (de1<=min2) {
        de2=min2;
        min2=de1;
      }
      else if(de1>min2 && de1<de2) {
        de2=de1;
      }
    }
    if ((min1>=de2)||(min1==min2&&min1==de2)) printf("N\n");
    else printf("Y\n");
    scanf("%d %d",&a,&d);
  }
  return 0;
}

