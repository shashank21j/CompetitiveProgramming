#include <iostream>
using namespace std;

int main() {
  
    int A,B,t;
    do{
            cin>>A;
            cin>>B;
            
            if(A==-1 || B==-1)
            return 0;
            
            
            if(A<B)
            {
                        t=B;
                        B=A;
                        A=t;
                    }
            
            if(A%(B+1)==0)
            cout<<A/(B+1)<<endl;
            else
            cout<<(A/(B+1))+1<<endl;
            
        }while(1);
    
  return 0;
}
