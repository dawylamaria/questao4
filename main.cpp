#include <iostream>

/* questao4*/

using namespace std;
int main(int argc, char** argv) {
	double nota1;
	double nota2;
	double nota3;
	double nota4;
	
	cout <<"Digite a primeira nota bimestral:"<< endl;
	
	cin >> nota1;
	
	cout <<"Digite a segunda nota bimestral:"<< endl;
	
	cin>> nota2;
	
	cout <<"Digite a terceira nota bimestral:"<< endl;
	
	cin >> nota3;
	
	cout <<"Digite a quarta nota bimestral:"<< endl;
	
	cin >> nota4;
	
	cout << "Media:" << (nota1 + nota2 + nota3 + nota4) / 4 << endl;


	system("pause");
	return 0;
}
