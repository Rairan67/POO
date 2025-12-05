#include <iostream>
using namespace std;

int main() {
    int v[5];
    int i;
    int soma = 0;
    float media;

    // Ler valores
    for(i = 0; i < 5; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> v[i];
    }


     cout << "Valores digitados:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << v[i] << " "; //"" para ter espaço entre os numeros
    }
    cout << "\n";
    
    for(i = 0; i < 5; i++) {
        soma += v[i];
    }

    media = soma / 5.0;

    cout << "Soma = " << soma << endl;
    cout << "Media = " << media << endl;

    return 0;
}
