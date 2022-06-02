/*function i c++

//return_type function_name ([arg1_type arg1_name,arg2_type arg21_name]){
    code
}   */


#include <stdio.h>

float max (int x, int y){
    if (x>y){
        return x ;
    }else
    {
        return y;
    }
    

}

//main fuction that doesn´t recieve any parameter and returns an integer

int main(){

    int a = 10, b = 20 ;

    //calling he function

    int m = max(a,b);
    
    printf ("the maximum value is : %d \n", m);
    return 0;
}
