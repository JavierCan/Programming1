#include <iostream>


using namespace std ;


int sum (int x, int y, int z = 0, int w =0){
    return (x+ y+ z+w);

}

int main (){

    //first statement

    cout << sum (10, 15) << endl;
    cout << "\n";
    //second statement

    cout << sum (10, 15, 25) << endl;
    cout << "\n";

    // third statement
    cout << sum(10, 15, 25, 50)<< endl;
    cout << "\n";

    return 0; 
}