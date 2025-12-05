#include <iostream>
using namespace std;

int main() {
    int v[8];
    int i;
    int maior, menor;
    int posMaior, posMenor;

    for(i = 0; i < 8; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> v[i];
    }

    maior = v[0];
    menor = v[0];
    posMaior = 0;
    posMenor = 0;

    for(i = 1; i < 8; i++) {
        if(v[i] > maior) {
            maior = v[i];
            posMaior = i;
        }
        if(v[i] < menor) {
            menor = v[i];
            posMenor = i;
        }
    }

    cout << "Maior valor: " << maior << " na posicao " << posMaior << endl;
    cout << "Menor valor: " << menor << " na posicao " << posMenor << endl;

    return 0;
}
