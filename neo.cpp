#include<iostream>

using namespace std;
int contarUnos(int x){
int cont = 0;
int a = 0;

while(x > 0){
    a = x % 10;
    if(a == 1){
        cont = cont + 1;
    }
    x = x / 10;
}

return cont;
}
int main(){
    int x = 0;

    cout << "Ingrese un numero: ";
    cin >> x;
    cout << contarUnos(x)<<endl;

    return 0;
}