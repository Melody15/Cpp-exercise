#include <iostream>
using namespace std;

void reverse(){
    char c;
    cin >> c;
    if(c == '.') return;

    reverse();
    cout << c;
}

int main(int argc, char const *argv[]){
    cout << "Please type in the string: ";
    reverse();
    
    return 0;
}