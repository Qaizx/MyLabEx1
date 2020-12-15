#include<iostream>
using namespace std;

int x=1, even = 0, old = 0;

int main(){

    while(x!=0){

        if(x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x %2 == 0){
            even++;
        }else{
            old++;
        }
    }

    }


    cout << "#Even numbers = " << even-1 << endl;
    cout << "#Odd numbers = " << old;
    return 0;
}
