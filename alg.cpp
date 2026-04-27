#include <iostream>
using namespace std;
int cauculo(int a, int b, double soma) {
    if (a % 2 == 0){
        cout << "O número é par" << endl;
    }
    soma = a + b;
    return soma;
}
int main () {
    int a, b, result;
    double soma;

    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o segundo número: ";    
    cin >> b;

    result = cauculo(a, b, soma);
}