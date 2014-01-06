#include<stdio.h>
int main() {
  long int i,j;
  long int a,b,c;
  scanf ("%ld %ld %ld",&a,&b,&c);
  while ( !(a == 0 && b==0 && c==0 ) ) {
    if ( b-c==a-b ) {
      c+=c-b;
      printf("AP %ld\n",c);  
    }
    else if ( c/b == b/a && c%b==0) {
      c*=c/b;
      printf("GP %ld\n",c);
    }
    else if ( b/c == a/b  && b%c==0) {
      c/=b/c;
      printf("GP %ld\n",c);
    }
    scanf ("%ld %ld %ld",&a,&b,&c);
  }
  return 0;
}

