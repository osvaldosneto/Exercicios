#include <iostream>

using namespace std;

int main() {

    int n=0;
    cin >> n;

    int total=0;
    int chute=0;

    for (int i=0; i<n; i++){
        int valor = 0;
        cin >> valor;
        total = valor + total;
    }

    cin >> chute;

    if(chute == total){
        cout << "Acertou" << "\n";
    } else {
        cout << "Errou" << "\n";
    }
}
