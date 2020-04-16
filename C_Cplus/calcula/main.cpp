#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n=0, cont=0, total=0;
    string in;
    const char *mem;
    bool soma;

    cin >> n;
    while(n !=0){
        cin >> in;
        for(int i=0; i<in.size(); i++) {
            if (isdigit(in[i])){
                mem = mem + in[i];
            } else if (in[i] == '+'){
                int a = atoi(mem);
                total = total + atoi(mem);
            } else {
                total = total - atoi(mem);
            }
        }

    }
    cout << total;

}
