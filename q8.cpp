#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string busca;
    int i;
    bool encontrado = false;

    // Ler os nomes
    for(i = 0; i < 6; i++) {
        cout << "Digite o nome " << i+1 << ": ";
        cin >> nomes[i];
    }

    // Nome a ser buscado
    cout << "Digite o nome que deseja buscar: ";
    cin >> busca;

    // Procurar no vetor
    for(i = 0; i < 6; i++) {
        if(nomes[i] == busca) {
            encontrado = true;
            break;
        }
    }

    // Resultado
    if(encontrado)
        cout << "O nome existe no vetor." << endl;
    else
        cout << "O nome NAO esta no vetor." << endl;

    return 0;
}
