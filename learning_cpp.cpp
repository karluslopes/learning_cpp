#include <iostream>
using namespace std;

int main() {
    int n1, n2, corte;
    float media;
    string result1, result2;

    cout << "Primeira Nota: ";
    cin >> n1;
    cout << "Segunda Nota: ";
    cin >> n2;

    media = (float(n1)+float(n2))/2;
    corte = 7;

    cout << "Nota Média: " << media << "\n\n";

    //Operador ternário 1
    (media < corte) ? result1="Reprovado" : result1="Aprovado";
    cout << "Situação 1: " << result1 << "\n";

    //Operador ternário 2 (MELHOR VERSÃO)
    result2 = (media < corte) ? "Reprovado" : "Aprovado";
    cout << "Situação 2: " << result2 << "\n";

    return 0;
}

