using namespace std;
#include<iostream>
#include<fstream>
int main(){
    int cont;
    int salir;
    struct alumno{
           string nombre;
           string apellido;
           float nota;
   }
	
	alumno[9];
	
	for(cont=0;cont<9;cont++){
	
	
	cout<<"Dime el nombre del alumno: ";
	cin>>alumno[cont].nombre;
	
	cout<<"Dime su apellido: ";
	cin>>alumno[cont].apellido;
	
	cout<<"Dime su nota: ";
	cin>>alumno[cont].nota;
	
}
   
     cout<<endl<<"Toca cualquier tecla";
     cin>>salir;
     return 0;
}
