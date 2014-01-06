#include<stdio.h>

int main() {
  int n,i;
  scanf("%d",&n);
  while (n!=0) {
    int a[100002];
    int b[100002];
    for (i=1;i<n+1;i++) {
      scanf("%d",&a[i]);
      b[a[i]]=i;
    }
    int flag=0;
    for (i=1;i<n+1;i++) {
      if (a[i]!=b[i]) {
        flag=1;
        break;
      }
    }             
    if(flag==0) printf("ambiguous\n");
    else printf("not ambiguous\n");
    scanf("%d",&n);
  }
  return 0;    
}


