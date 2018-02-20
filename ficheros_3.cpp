#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("mi fichero.txt");
    string mensaje;
    int salir;
    int nlinea;
    cout<<"El texto dice: "<<endl;
    for(int nlinea=0;nlinea<=3;nlinea++){
      getline(fichero,mensaje);
      cout<<mensaje<<endl;
      }
    fichero.close();
    cin>>salir;
    return 0;
}
