using namespace std;

#include<iostream>
 int main(){
     int pepito[5];
     int cont;
     int salir;
     for(cont=0;cont<5;cont++){
       cout<<"Dime un numero: ";
       cin>>pepito[cont];
     }
     cout<<"Mira mi vector relleno: ";
     for(cont=0;cont<5;cont++){
       cout<<"pepito["<<cont<<"]="<<pepito[cont]<<endl;
     }
     cout<<"Toca cualquier tecla";
     cin>>salir;
     return 0;
}     
