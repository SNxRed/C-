#include <iostream>
using namespace std;
/*
Escriba un programa que imprima los numeros que se enncuentran entre 1 y 200. El programa debe imprimir en pantalla los numeros en grupos de 20, pregunte al usuario si quiere o no
continuar visualizando el siguiente grupo de numero 
*/
int main(){
    
    char flag;
    int aux = 20; 
    
    /*for(int i = 0; i < 200; i++){ //codigo #1 
       cout <<i+1<<endl;
       if(i + 1 == aux){
    
        cout<<"Ingrese n si no quieres que salga la otra secuencia"<<endl;
        cout<<"si desea continuar presione cualquier otra tecla"<<endl;
        flag = getc(stdin); // Deja el programa en espera hasta que precionen alguna tecla
           
        if(flag == 'n'){
            break;
        }
        aux = aux + 20;       
       }
    }*/

    for(int i = 0; i < 200; i ++){
        cout<< i + 1 <<endl;

        if(i + 1 == 200){
            break;
        }

        if(i + 1 == aux){
            cout<<"Ingrese Y si quire seguir ejecutando el programa y N si desaea terminalo."<<endl;
            cin>>flag;
            if(flag == 'n'){
                break;
            }
            aux = aux + 20;
        }
    }
    
    return 0;
}
