#include <iostream>
#include <ctype.h>

using namespace std;

int main() {

    int entrada[4];
    cin >> entrada[0];
    cin >> entrada[1];
    cin >> entrada[2];
    cin >> entrada[3];

    string senha, minuscula, maiuscula, numero;

    cin >> senha;

    for(int i=0; i<senha.size(); i++){
        if(islower(senha[i])){
            minuscula = minuscula + senha[i];
        } else if(isupper(senha[i])){
            maiuscula = maiuscula + senha[i];
        } else if(isdigit(senha[i])){
            numero = numero + senha[i];
        } else {
            cout << "Algo inesperado aconteceu" << "\n";
        }
    }

    if(senha.size()<entrada[0] || senha.size()<6){
        cout << "Ufa :)" << "\n";
    } else if(minuscula.size()<entrada[1]) {
        cout << "Ufa :)" << "\n";
    } else if(maiuscula.size()<entrada[2]){
        cout << "Ufa :)" << "\n";
    } else if(numero.size()<entrada[3]){
        cout << "Ufa :)" << "\n";
    } else {
        cout << "Ok =/";
    }
}



