#include <iostream> 
using namespace std; 

int main () {
    double temp, total;

    cout << "Olá, informe seu tempo de permanencia no Estacionamento A: ";
    cin >> temp;

       if (temp <= 0) {
      cout << " \n Tempo inválido";
      total = 0;
    }
    else if (temp <= 1) {
      total = 8;
    }
   else if (temp <=3 ) {
      total = 12;
    }
    else if (temp  <= 5) {
      total = 18;
    }
     if  (temp > 5 ) {
      total = total + 5;
    }
 
    cout << "O valor total de sua permanencia é de: R$" << total << ",00";
  }
