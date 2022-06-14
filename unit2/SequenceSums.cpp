/* Realize a program that return a sum 
from a sequence of integers using the gauss formula to sum n numbers*/
// ask the user enter the value of n//
// n (n+1 )/2 = 1+2+3+4+5+6+7+8+9 //

#include <iostream>

using namespace std ;
int Gausformula (int);


int main (){
    int n , result ;
    cout << "give the number ";
    cin>> n ;
    result = Gausformula (n) ;
    cout << "the sum of sequence "<< n << "  =  "<< result<< endl ;
    return 0;
 }

int Gausformula (int n){
    if (n>1)
    {
        return n + Gausformula(n-1) ; // se toman los numero menores a n hasta llegar a uno y devuelve la funcion suma //
    }else
    {
        return 1 ;
    }
    
    


}


