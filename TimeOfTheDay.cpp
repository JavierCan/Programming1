#include <iostream>
using namespace std;

int main () {
    int time ;
    cout << "what time is it? ";
    cin >> time ;
if (time){
    if (time <12 ) {
        cout << "good morning\n";}
        if (time == 12){
            cout <<"it´s noon\n";
            }
    if (time >= 12 && time <=18 ){
        cout <<"good afternoon\n";}
        if (time >=19 && time <=24) {
            cout << "good night\n";}
        if (time == 24) {
                cout << "it´s midnight\n";

            }
    
}
    return 0;
    }
    
