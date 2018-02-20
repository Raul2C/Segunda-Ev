//programa agenda
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char otro='n';
  string numero;
  string nombre;
  ifstream agenda("ficheroAgenda.txt");
  while (otro=='n'){
        cout<<"Introduce el nombre tu colega: ";
        cin>>nombre;
        cout<<"Introduce su numero de telefono";
        cin>>numero;
        cout<<"¿Deseas introducir otro amigo (s/n)?: ";
        cin>>otro;
  }
return 0;
}
