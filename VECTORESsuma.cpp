using namespace std;

#include<iostream>
 int main(){
     int vector1[5];
     int vector2[5];
     int cont;
     int salir;
     int suma[5];
     cout<<"Dictame el primer vector"<<endl;
     for(cont=0;cont<5;cont++){
       cout<<"Dime un numero: ";
       cin>>vector1[cont];
     }
      cout<<"Ahora vamos con el segundo vector."<<endl;
      for(cont=0;cont<5;cont++){
       cout<<"Dime un numero: ";
       cin>>vector2[cont];
     }
     //Ahora sumamos
     cout<<"La suma vale: ";
     for(cont=0;cont<5;cont++){
       suma[cont]=vector1[cont]+vector2[cont];
       if(cont==0) cout<<"["<<suma[cont]<<",";
       if(cont==4) cout<<suma[cont]<<"]";
       if(cont!=0 && cont!= 4) cout<<suma[cont]<<",";
     }
     cout<<endl<<"Toca cualquier tecla";
     cin>>salir;
     return 0;
}     
