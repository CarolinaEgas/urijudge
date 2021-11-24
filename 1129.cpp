#include <iostream>
using namespace std;
int main() {
    int N, n, valor, soma, pos, i;
    int papel[5];
    char letras[5] = {'A', 'B', 'C', 'D', 'E'};
    while (cin >> N && N!=0) {
        for (n=0; n<N; n++) {
            for (i=0; i<5; i++) {
                cin >> valor;
                if (valor<=127) {
                    papel[i] = 1;
                } else {
                    papel[i] = 0;
                }
            }
            pos = 0;
            soma = 0;
            for (i=0; i<5; i++) {
                soma = soma + papel[i];
                if (papel[i]==1) {
                    pos = i;
                }
            }
            if (soma==1) {
                cout << letras[pos];
            } else {
                cout << "*";
            }
            cout << endl;
        } 
    }
    return 0;
}