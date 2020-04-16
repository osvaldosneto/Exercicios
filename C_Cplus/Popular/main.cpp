#include <iostream>

using namespace std;

int main() {
    int n=0, max[100], contador=0;
    cin >> n;
    while(n != 0){
        max[contador] = 0;
        int soma[n], voto;
        for(int i=0; i<n; i++){
            soma[i]=0;
        }
        for (int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> voto;
                if(voto == 1){
                    soma[j]++;
                }
            }
        }
        for(int i=0; i<n; i++) {
            if(soma[i]>max[contador]){
                max[contador] = soma[i];
            }
        }
        contador ++;
        cin >> n;
    }
    for(int i=0; i<contador; i++){
        cout << max[i] << "\n";
    }
}
