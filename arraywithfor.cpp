//array[10] llenar anualmente con un ciclo for para que el usuario escoja que numeros poner
//6, 0,1,3,5,8,5,7,5,2,6

//imprimir el primero, el quinto y el decimo lugar
//6, 8, 6

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int array[10];
	
	for(int i=0; i<=10; i++){
		
		cout<<"Enter a number: ";
		cin>>array[i];
						
	};
	
cout<<"The number in the position 1 is: "<<array[0]<<endl;
cout<<"The number in the position 5 is: "<<array[5]<<endl;
cout<<"The number in the position 10 is: "<<array[10]<<endl;
	
}
