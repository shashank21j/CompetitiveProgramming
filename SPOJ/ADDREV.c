#include<stdio.h>
int main() {
    int n,i;
    long long int n1,n2;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
            int m1=0,m2=0;
            scanf ("%lld %lld",&n1,&n2);
            while (n1!=0){
                          m1=(m1+(n1%10))*10;
                          n1=n1/10;
                    }
            n1/=10;
            while (n2!=0){
                          m2=(m2+(n2%10))*10;
                          n2=n2/10;
                    }
            n2/=10;
            long long int t=m1+m2,t1=0;
            while (t!=0){
                          t1=(t1+(t%10))*10;
                          t=t/10;
                    }
            printf("%lld\n",t1/10);
        }
    return 0;
}
              
    



