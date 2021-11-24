#include <iostream>
using namespace std;
int main() {
    //tipo nome;
    //tipo nome = valor;

    int vidas=0;
    char letra='C';
    double decimal=5.2;
    float decimal2=5.2;
    bool vivo=true;   
    string nome="Carolina";

    cout <<"Digite o número de vidas:";
    cin >> vidas;
    cout <<"Digite uma letra:";
    cin >> letra;
    cout <<"Digite o dinheiro:";
    cin >> decimal;
    cout <<"Digite seu nome:";
    cin >> nome;

    cout << "\n" << vidas << "\n" << letra << "\n" << decimal << "\n" << nome << "\n";

    return 0;
}