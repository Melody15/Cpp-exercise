#include <iostream>
using namespace std;

int mod(int e1, int e2){
    if(e1 == 0) throw int(e1);
    if(e2 == 0) throw long(e2);

    return e1 % e2;
}

int main(int argc, char const *argv[]){
    int e1, e2;

    while(true){
        cout << "please input two numbers: " << endl;
        cin >> e1 >> e2;
        if(e1 + e2 == 0) break;
    
        try{
            cout << e1 << " mod " << e2 << " = " << mod(e1, e2) << endl;
        }catch(int){
            cout << "It doesn't make sense when numerator is 0." << endl;
        }catch(long){
            cout << "Denominator cannot be zero." << endl;
        }
    }
    cout << "Game over." << endl;
    
    return 0;
}