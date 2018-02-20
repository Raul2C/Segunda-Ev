#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("mi fichero.txt");
    string mensaje;
    int salir;
    int nlinea;
    cout<<"El texto dice: "<<endl;
    while(fichero.eof()!=1){
      if(fichero.eof()!=1){
      getline(fichero,mensaje);
      cout<<mensaje<<endl;
      }
    }  
    fichero.close();
    cin>>salir;
    return 0;
}
