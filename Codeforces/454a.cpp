#include<iostream>

using namespace std;

int main() {
 int n,p;
 cin >> n;
 p = n/2;
 for (int i=0 ; i < p ; i++ ) { 
  for (int j=i ; j < p ; j++ ) {
   cout<<"*";
  }
  for (int j=0; j< 2*i+1; j++) {
   cout<<"D";
  }
  for (int j=i ; j < p ; j++ ) {
   cout<<"*";
  }
  cout<<endl;
 }
 for (int j=0 ; j< n ; j++ ) {
  cout<<"D";
 }
 cout <<endl; 
 for (int i=0 ; i < p ; i++ ) { 
  for (int j=0 ; j <= i ; j++ ) {
   cout<<"*";
  }
  for (int j=0; j<2*p - 2*i - 1; j++) {
   cout<<"D";
  }
  for (int j=0 ; j<= i ; j++ ) {
   cout<<"*";
  }
  cout<<endl;
 }
 return 0;
}
