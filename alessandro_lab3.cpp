#include <iostream>

#include <sstream>

#include <fstream>

#include <string>

using namespace std;

//funcion para pasar a binario
void binario(int);
/*crear matriz
char** createMatrix(int n);
//imprime una matriz en la consola
void printMatrix(int);
//liberar memoria
void freeMatrix(int , char**);
//rellenar matriz
void rellenarMatriz(int);
*///darle vuelta a la matriz
void transpuestaMatriz(int);

int main(){
	int resp = 's';
	int opcion;
	while(resp=='s'||resp=='S'){
		int num = 0;
		cout<<"MENU:\n"<<"1) Ejercicio 1\n"<<"2) Ejercicio 2\n"<<"3) Salir"<<endl;
		cin>>opcion;
		
		if(opcion==1){
			cout<<"Ingrese un numero: "<<endl;
			cin>>num;
			for(int i = 0 ; i<=num ; i++){
		
				binario(i);
				cout<<endl;
		}//fin for
			
		}//if opcion 1
		if(opcion==2){
			int tamano;
			cout<<"Ingrese numero de filas y columnas nxn: "<<endl;
			cin>>tamano;		
			transpuestaMatriz(tamano);							
		}//if opcion 2


	cout<<"Desea continuar[s/n]: "<<endl;
	cin>>resp;

 }//fin while
}//fin main

void binario(int b){
	
	int cont=0;
	int size=0;
	int x = b;
	stringstream acum2;
	string acum;
	while (b > 0){
		if(b%2==0){
			b=b/2;
			acum =  "0"+acum;
			
			size++;
	}//fin if
		else{
			b=b/2;
			
			acum =  "1"+acum;
			cont++;
			size++;
	}//fin else
		
}//fin while
 
	if(cont%2==0){
		cout<<"El numero "<<x<<" es malvado. "<<endl;
	}else{
		cout<<"El numero "<<x<<" no es malvado. "<<endl;
}//fin if
	string binario;
	while(size != 0 ){
		binario = binario +  acum.substr(0,size);
		size=size-1;	

}//fin for
	if(x == 0)
	 binario = "0";
	cout<<"El numero binario es: " << binario <<endl;
}//fin binario




/*void rellenarMatriz(int size){
int acum=0;
 for(int i = 0; i < size; i++){
  for(int j = 0; j < size; j++){
	y[i][j] = acum;
	acum++;
		
	}	
}
}*///fin metodo

void transpuestaMatriz(int size){
int temporal[size][size];
int y[size][size];
int acum=0;
 for(int i = 0; i < size; i++){
  for(int j = 0; j < size; j++){
        y[i][j] = acum;
        acum++;

        }
}
for(int i = 0; i < size; i++){
  for(int j = 0; j < size; j++){
   cout<<" "<<y[i][j];
 }
  cout<<endl;
  }
  cout<<endl;

int temporalAcum = size-1;
 for(int i = 0; i < size; i++){
   for(int j = 0; j < size ; j++){
	temporal[j][temporalAcum] = y[i][j];
}
 temporalAcum--;
}
for(int i = 0; i < size; i++){
  for(int j = 0; j < size; j++){
   cout<<" "<<temporal[i][j];
 } 
  cout<<endl;
  }
cout<<endl;


}//fin metodo
