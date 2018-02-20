/*Este programa sirve para devolver el mayor de los numeros introducidos*/
#include<iostream>

int main(){
   int cont;
   int numero;
   int mayor;
   int salir;
   /*Bucle de tipo for. cont++ significa cont=cont+1*/
   mayor=0;
   for(cont=1;cont<=10;cont++){
      std::cout<<"Dime un numero entero: ";
      std::cin>>numero;
      if(numero>mayor){
         mayor=numero;
      }
   }
   std::cout<<"El mayor es: "<<mayor <<std::endl;
   std::cout<<"Pulse cualquier tecla para salir";
   std::cin>>salir;
   return 0;
}
