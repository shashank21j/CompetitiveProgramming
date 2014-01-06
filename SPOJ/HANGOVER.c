#include<stdio.h>
int main() {
  float n;
  float m[300];
  int i;
  float cnt=1;
  m[0]=0;
  float tmp=0;
  for (i=1;i<300;i++) {
    tmp+=1/(cnt+1);
    m[i]=tmp;
    cnt+=1;
  }
  int min=0; 
  int max=300;
  int mid;
  scanf ("%f",&n);
  while (n>0.00) {
    while (max-min>1) {
      mid= ( min + max )/2;

      if ( m[mid] > n ) {
        max=mid;
      }
      else if ( m[mid] < n ) {
        min = mid;
      }
    }
    if(m[mid]<n) mid++;
    printf("%d card(s)\n",mid);
    scanf ("%f",&n);
    min=0;
    max=300;
  }
  return 0;    
}

