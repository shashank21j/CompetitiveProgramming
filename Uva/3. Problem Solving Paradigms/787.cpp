#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME
#define SIZE 700
#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif

class Bignum{

    int no[SIZE];   


    public:

        Bignum operator *(Bignum& x){ // overload the * operator
        /*
            34 x 46
            -------
               204          // these values are stored in the
              136           // two dimensional array mat[][];
            -------
             1564   // this the value stored in "Bignum ret"
        */                              
		    Bignum ret;             
		    int carry=0;
		    int mat[2*SIZE+1][2*SIZE]={0};
		    for(int i=SIZE-1;i>=0;i--){
		        for(int j=SIZE-1;j>=0;j--){
		            carry += no[i]*x.no[j];
		            if(carry < 10){
		                mat[i][j-(SIZE-1-i)]=carry;
		                carry=0;
		            }
		            else{
		                mat[i][j-(SIZE-1-i)]=carry%10;
		                carry=carry/10;
		            }
		        }
		    }
		    for(int i=1;i<SIZE+1;i++){
		        for(int j=SIZE-1;j>=0;j--){
		            carry += mat[i][j]+mat[i-1][j];

		            if(carry < 10){

		                mat[i][j]=carry;

		                carry=0;

		            }

		            else{

		                mat[i][j]=carry%10;

		                carry=carry/10;

		            }
		        }
		    }
		    for(int i=0;i<SIZE;i++)
		        ret.no[i]=mat[SIZE][i];
		    return ret;
}



Bignum (){

    for(int i=0;i<SIZE;i++)

        no[i]=0;

}


Bignum (string _no){

    for(int i=0;i<SIZE;i++)

        no[i]=0;

    int index=SIZE-1;

    for(int i=_no.length()-1;i>=0;i--,index--){

        no[index]=_no[i]-'0';

    }

}


void print(){

    int start=0;

    for(int i=0;i<SIZE;i++)

    if(no[i]!=0){

        start=i;

        break;      // find the first non zero digit. store the index in start.

    }

    for(int i=start;i<SIZE;i++) // print the number starting from start till the end of array.

        cout<<no[i];

    cout<<endl;

    return;

}
bool operator >(Bignum &b ) {
	int start1=0;
    for(int i=0;i<SIZE;i++) {
    	if(no[i]!=0){
        	start1=i;
        	break;      
    	}	
    }
    int start2 = 0;
    for(int i=0;i<SIZE;i++) {
    	if(b.no[i]!=0){
        	start2=i;
        	break;      
    	}	
    }
    if (start1 > start2) {
    	return false;
    }
    else if (start1 <start2) {
    	return true;
    }
    while (1) {
    	if (no[start1] == b.no[start2]) continue;
    	else if (no[start1] > b.no[start2]) return true;
    	else return false;
    }
    return 0;
}
 };
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	vector<int> v;
	int t;
	while(ISTREAM>>t) {
		while (t!= -999999) {
			v.push_back(t);
			ISTREAM>>t;
		}
		Bignum max("-9999999");
		for (unsigned int i = 0;i<v.size();i++) {
			cout<<v[i]<<" ";
			Bignum p("1");
			for (unsigned int j = i; j<v.size();j++) {
				string temp = "";
				int te = v[j];
				while (te!=0) {
					temp += te+48;
				}
				string n1="";
				for (int k = temp.length()-1; k >= 0; k--) {
					n1+=temp[k];
				}
				Bignum n2(n1);
				p=p*n2;

				if ( p > max) {
					max = p;
				}
			}
		}
		cout<<endl;
		v.clear();
		max.print();
	}
	return 0;
}
