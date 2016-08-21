#include <bits/stdc++.h>
using namespace std;
int main() {
	float a,b,c,d;
	float avg;
	cin>>a>>b>>c>>d;
	cout<<fixed<<setprecision(1);
	avg = (2*a + 3*b + 4*c + d)/10;
	cout<<"Media: "<<avg<<endl;
	if (avg >= 7.0) {
		cout<<"Aluno aprovado."<<endl;
	}
	else if (avg < 5.0) {
		cout<<"Aluno reprovado."<<endl;
	}
	else {
		cout<<"Aluno em exame."<<endl;
		float e;
		cin>>e;
		cout<<"Nota do exame: "<<e<<endl;
		avg = (avg + e)/2;
		if (avg >= 5.0) {
			cout<<"Aluno aprovado."<<endl;		
		}
		else {
			cout<<"Aluno reprovado."<<endl;
		}
		cout<<"Media final: "<<avg<<endl;
	}
	return 0;
}