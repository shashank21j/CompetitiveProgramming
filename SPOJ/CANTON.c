#include<stdio.h>
#include<math.h>

int main() {
  int n,i;
  int m;
  int root,number,num,den,diff;
  scanf("%d",&n);
  for (i=0;i<n;i++) {
    scanf("%d",&m);
    root=(sqrt(1+(8*m))-1)/2;
    number=(root*(root+1))/2;
    if (root%2==0) {
      num=root;
      den=1;
      diff=m-number;
      if (diff==1) {
        num+=1;
      }
      else if (diff > 1 ){
        num+=1;
        num=num-(diff-1);
        den=den+diff-1;
      }
    }
    else {
      num=1;
      den=root;
      diff=m-number;
      if (diff==1) {
        den+=1;
      }
      else if (diff > 1 ){
        den+=1;
        num=num+diff-1;
        den=den-(diff-1);
      }
    }
    printf("TERM %d IS %d/%d\n",m,num,den);
  }
  return 0;
}    


