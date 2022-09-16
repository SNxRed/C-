#include<iostream>
#include<stdio.h>
using namespace std;

class Auto{
private:
string marca, modelo, patente;
int ano;
bool permiso;

public:
Auto(string marca, string modelo, string patente, int ano, bool permiso){
    this->marca = marca;
    this->modelo = modelo;
    this->patente = patente;
    this->ano = ano;
    this->permiso = permiso;
}

void set_Marca(string marca){
    this->marca = marca;
}

void set_Modelo(string modelo){
    this->modelo = modelo;
}

void set_Patente(string patente){
    this->patente = patente;
}

void set_Ano(int ano){
    this->ano = ano;
}

void set_Permiso(bool permiso){
    this->permiso = permiso;
}

string get_Patente(){
    return patente;
}

int get_Ano(){
    return ano;
}

bool get_Permiso(){
    return permiso;
}

char DigitoRestriccion(){
    return patente[5];
}

int Edad(){
    return 2022 - ano;
}

bool TieneRestriccion(char digito){
    return digito == DigitoRestriccion();
}

};
int main(){
    Auto *a_1 = new Auto("Toyota","Yaris","ABCD39",1980,false);

    Auto *viejo = new Auto("Ford","SO","AA1234",1950,true);

    cout<<"Ingrese digito restriccion de hoy";
    char d;

    cin>>d;
    return 0;
}