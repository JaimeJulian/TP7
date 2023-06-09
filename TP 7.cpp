#include <bits/stdc++.h>
#include <string>

using namespace std;

int ContarLetraA(string F){
	
	int cont=0;
	
	for(int i=0;i<F.size();i++){
		
		if(F[i]=='a'||F[i]=='A'||F[i]=='e'||F[i]=='E'||F[i]=='i'||F[i]=='I'||F[i]=='o'||F[i]=='O'||F[i]=='u'||F[i]=='U'){
		cont++;
		}
	}
	return cont;
}
int main( ){
	
	string F;
	int V;
	
	cout<<"Ingresar una frase"<<endl;
	
	getline(cin,F);

	V=ContarLetraA(F);
	cout<<"La frase tenia "<<V<<" vocales"<<endl;
return 0;
}
