#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	
	ifstream archivo;
	
	archivo.open("hackers.txt");
	
    string nombres[1485];
	string apellidos[1485];
	string alias_2[1485];
	int edades[1485];
	string ubicaciones[1485];
	string roles[1485];
	string IPs[1485];
	string afiliaciones[1485];
	string T_A[8]={"Tarh_Andishan", "TeaMp0isoN", "Fsociety", "CCM", "NPCM", "LSC", "Anonymous", "-"};

	string nombre; 
	string apellido;
	string alias;
	int edad;
	string ubicacion;
	string rol; 
	string IP;
	string afiliacion;
	
	int i= 0;
	int cont= 0;
	int cont_3=0;
    float prom=0;
	
	while(archivo >> nombre >> apellido >> alias >> edad >> ubicacion >> rol >> IP >> afiliacion){
		
	 nombres[i] = nombre;
	 apellidos[i] = apellido;
	 alias_2[i] = alias;
	 edades[i] = edad;
	 ubicaciones[i] = ubicacion;
	 roles[i] = rol;
	 IPs[i] = IP;
	 afiliaciones[i] = afiliacion;	
	 i++;
}
	 for(int i=0; i<1485; i++){
		if(afiliaciones[i] == "Fsociety"){
			cout <<"Afiliados a Fsociety:"<< nombres[i] <<" "<< apellidos[i]<<endl;
		 }
	  }	 	
	  
	  cout<<endl;
	  
	  for(int i=0; i<1485; i++){
	  	if(afiliaciones[i]== "-"){
	  		cout<<"No pertenecen a ninguna afiliacion:"<< nombres[i]<<" "<< apellidos[i]<<endl;
		  }
	  }
	
	cout<<endl;
	
	for(int i=0; i<1485; i++){
		if(roles[i]=="Lider"){
			cout<<"Alias de todos los que fueron lideres:"<<alias_2[i]<<endl;
		}
	}
	
	cout<<endl;
	
	for(int i=0; i<1485; i++){
		if(roles[i]!="Lider"  && IPs[i]== "46.70.113.194"){
			cout<<"Direccion IP 46.70.113.194 y no son lider: "<<alias_2[i]<<endl;
		}
	}
	
	cout<<endl;
	
	for(int i=0; i<1485; i++){
		if(nombres[i]== "Elliot" && apellidos[i]=="Alderson"){
			cout<<"Direccion IP y ubicacion de Elliot Alderson: "<< IPs[i] <<" "<< ubicaciones[i]<<endl;
		}
	}
	
	cout<<endl;
	
	for(int i=0; i<1485; i++){
		if(afiliaciones[i]== "Anonymous"){
			cont_3= edades[i] + cont_3;
			cont++;
		}
		
	}
	prom= cont_3/cont;
	cout<<"Edad preomedio de la afiliacion anonymous: "<<prom<<endl;;
	cout<<endl;
	
	int aux[8]{0,0,0,0,0,0,0};

	for(int i=0; i<1485; i++){
		for(int j=0; j<8; j++){
			if(afiliaciones[i]== T_A[j]){
				aux[j]++;
			}
		}
	}
	
	int maximo = aux[0];
    int posi=0;
	
    for(int i=0; i<8; i++){
	    if(aux[i]> maximo){
	     	maximo =aux[i];
		    posi= i;
     	}	  
     }
    cout<<"La afiliacion con mas miembros es:"<< T_A[posi]<<" "<< maximo;
     
	archivo.close();
	
	return 0;
}
