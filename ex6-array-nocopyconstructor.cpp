#include <iostream>
using namespace std;

class array{
public:
    array(){ cout << "array(): counter = " << ++counter << endl; }
    array(const array& a);	
    ~array(){ cout << "~array(): counter = " << --counter << endl; }
    static int counter;
    
};

int array::counter = 0;

array::array(const array& a){
    cout << "copy array():counter = " << ++counter << endl;
}

array f(array t){
    cout << "f(): counter = " << array::counter << endl;
    return t;
}

int main(int argc, char const *argv[]){
    array a;
    f(a);
    return 0;
}
