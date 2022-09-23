#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

int rut;
int aux=0;
int a=0;
int bc=0; // bibliocreditos de el usuario
int b; // opciones a elegir 
int c=0;
int BCB=0; //biblio creditos de la biblioteca 
int cont=0;   // cantidad de libros comprados
int cont_2=0; // cantidad de libros prestados (se entiende que solo se le puede prestar un libro al kusuario por eso los libros prestados y la cantidad de ususarios es al misma )
int cont_3=0; // cantidad de libros restados del stock
int rut_2; 
cout<<"----------------------------------------instrucuiones--------------------------------------"<<endl;
cout<<"---En el caso que su rut termine en K remplazarlo por el numero 1"<<endl;
cout<<"---Solo se puede prestar un libro por usuario"<<endl;
cout<<"---Ingrese el numero 1 para prestar un libro:"<<endl;
cout<<"---Ingrese el numero 2 para ver la cantidad de libros disponibles:"<<endl;
cout<<"---Ingrese el numero 3 para para comprar un libro"<<endl;
cout<<"---Ingrese el numero 4 para restar un libro al stock sin costo alguno:"<<endl;
cout<<"---Ingrese el numero 5 para verificar cuantos libros fueron prestados:"<<endl;
cout<<"---Ingrese el numero 6 para verificar la cantidad de libros actuales respecto a la inicial:"<<endl;  
cout<<"---Ingrese el numero 7 si quiere terminar el programa:"<<endl;
cout<<" "<<endl;

      srand(time(NULL) );
      int random= rand() % 2000 +1 + 5000;
    
while(1==1){
	 
	 if(BCB>= 15000){
     	cout<<"Libros comprados:"<<cont<<endl;
     	cout<<"Libros prestados:"<<cont_2<<endl;
     	cout<<"Libros quitados:"<<cont_3<<endl;
     	cout<<"Promedio de bibliocreditos asignados:"<<(BCB+(cont*1000)) /cont_2<<endl;
     	cout<<"Ganancia del dia en BiblioCreditos:"<<(cont_2-cont)*1000<<endl;
     	return 0;
     	}
     	
	 cout<<"ingrese la opcion deseada:"<<endl;
     cin>>b;
   
     if(b==1){  // prestar un libro a un usuario
     
    	cout<<"ingrese Rut del usuario:"<<endl;
    	cin>>rut;
    	rut_2=rut;
    	for(int i=1; i<=9; i++){
    		a= rut%10;
    		aux= a +aux;
    		rut=rut/10;
    		
		}
			bc= (aux*50)+bc;
			
			cout<<"bibliocreditos del usuario:"<<bc<<endl;
			
		    if(bc>=1000){
		    	cout<<"si se puede prestar un libro a este usuario:"<<endl;
		    	random=random-1;
		    	cont_2=cont_2+1;
		    	BCB=BCB+1000;
			}else{
				cout<<"no se puede prestar libros a este usuario:"<<rut_2<<endl;
			}
				bc=0;   // para poder reseterar el contador 
				aux=0;
				
	}else if(b==2){  // ver cantidad de libros diponibles en el stock
		cout<<"cantidad de libros en stock:"<<random<<endl;
		
	}else if(b==3){  // agregar un libro al stock (comprar libro)
		
	   if(BCB>=1000){
	   	
	      random=random+1;
	      cont=cont + 1;
	      BCB=BCB-1000;
	      
		  cout<<"comprar un libro:"<<random<<endl;
		}else{
		  cout<<"BiblioCreditos insuficientes"<<endl;
		}
		
	}else if(b==4){  // restar un libro del stock sin costo
	
	 cout<<"restar un libro del stock"<<endl;
		random=random-1; 
		cont_3=cont_3+1;
		
	}else if(b==5){  // ver catidad de libros prestados 
		cout<<"cantidad de libros prestados:"<<cont_2<<endl;
		
	}else if(b==6){  // libros actuales y maximos 
	
	    cout<<"cantidad de libros iniciales"<<random+cont_2-cont+cont_3<<endl;
		cout<<"cantidad de libros actuales:"<<random<<endl;
		cout<<"stock maximo de libros:"<<random+cont+cont_2+cont_3<<endl;
	}else if(b==7){
		cout<<"Libros comprados:"<<cont<<endl;
     	cout<<"Libros prestados:"<<cont_2<<endl;
     	cout<<"Libros quitados:"<<cont_3<<endl;
     	cout<<"Promedio de bibliocreditos asignados:"<<(BCB+(cont*1000))/cont_2<<endl;
     	cout<<"Ganancia del dia en BiblioCreditos:"<<(cont_2-cont)*1000<<endl;
		return 0;
	}

}
	
return 0;
}
