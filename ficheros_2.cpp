#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("mi fichero.txt");
    string mensaje;
    int salir;
    getline(fichero,mensaje);
    cout<<"La primera linea dice: ";
    cout<<mensaje<<endl;
    fichero.close();
    cin>>salir;
    return 0;
}
