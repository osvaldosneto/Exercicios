#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> lista;
    int n=1;
    while(n != 0) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            string nome, instituicao;
            cin >> nome;
            cin >> instituicao;
            lista.push_front(instituicao);
        }
        while (!lista.empty()) {
            int ns = lista.size();
            string inst = lista.back();
            lista.remove(inst);
            cout << inst << " " << ns - lista.size() << "\n";
        }
    }
}