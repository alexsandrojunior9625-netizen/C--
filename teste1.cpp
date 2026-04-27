#include <iostream>
using namespace std;

int main () {
	string nome [3];
	char rq [5], q [5];
	// rq = resposta correta da questão; q = resposta dada pelo aluno
	double mturma = 0, maluno [3];
	
	cout << "CADASTRO DE GABARITO: " << endl;
	
    for (int i = 0; i <= 4; i++) {
        cout << "Qual a resposta da questão: N" << i + 1 << ": " << endl;
        cin >> rq [i];
        
        if (rq[i] != 'a' && rq[i] != 'b' && rq[i] != 'c' && rq[i] != 'd'){
            cout << "Resposta inválida!!!! ";
            return 0;
        }
    }
    cout << "CADASTRO DE ALUNOS: " << endl;
    
    for (int i = 0; i <= 2; i++){
         cout << "Informe o nome do aluno " << i + 1 << ": " << endl;
         cin >> nome [i];
         for (int x = 0; x <= 4; x++){
             cout << "Resposta do aluno " << nome [i] << " na questão " << x + 1 << ": " << endl;
             cin >> q[x];
         }
    }
}