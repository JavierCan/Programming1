#include <iostream>
using namespace std ;

int main (){
    int saldo = 1000;
    int  accion ;
    int cant ;
    cout << "¿Que accion desea realizar?\n";
    cout << "Retirar = 1 , Depositar =2 , Consulta de saldo = 3\n";
    cin >> accion;
    switch (accion){
        case 1 : 
    cout << " usted ha elegido RETIRAR ";
    cout << "ingrese la cantidad a retirar\n";    
    cin >> cant;
       if (cant <1000)
       {
           cout << "ha retirado : "<< cant << endl;
           cout<<"su saldo restante es : " << 1000-cant << endl ;
       } else {
           cout <<"saldo insuficiente\n";
       }

    break;
    case 2 :
    cout<< "elija la cantidad a ingresar\n";
    cin >> cant ;
    cout <<"usted tiene actualmente \n"<<  saldo + cant << endl ;
    break;
    case 3 :
    cout << "su saldo es : "<< saldo << endl;
    break;
        default : cout<< "datos erroneos\n";
    break;
    }
}