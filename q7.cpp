#include <iostream>
using namespace std;

int main() {
    int v[10];
    int i, x;
    int pos = -1; 

    for(i = 0; i < 10; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> v[i];
    }

    cout << "Digite o numero X: ";
    cin >> x;

    for(i = 0; i < 10; i++) {
        if(v[i] == x) {
            pos = i;
            break; // na primeira vez que ele achar o loop acaba.
        }
    }

    if(pos == -1)
        cout << "X nao esta no vetor." << endl;
    else
        cout << "X encontrado na posicao " << pos << endl;

    return 0;
}
