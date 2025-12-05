#include <iostream>
using namespace std;

int main() {
    int v[5];
    int i;

    for(i = 0; i < 5; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> v[i];
    }

    cout << "Valores digitados:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << v[i] << " "; //"" para ter espaço entre os numeros
    }

    return 0;
}
