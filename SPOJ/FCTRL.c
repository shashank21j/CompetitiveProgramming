#include<stdio.h>
#include<math.h>
int main(){
    long long int n,i;
    scanf("%lld",&n);
    for (i=0 ; i<n ; i++){
            long long int num,count;
            long long int arg;
            count=0;
            scanf("%lld",&num);
            arg=1;
            while(num>=pow(5,arg)){
                                          count+=num/pow(5,arg++);
                    }
            printf("%lld\n",count);
        }
    return 0;
}
