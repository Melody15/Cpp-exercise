#include <iostream>
using namespace std;

class circle{
public:
    static int counter;
};

int circle::counter = 0;

int main(int argc, char const *argv[]){
    cout << "No object: " << circle::counter << endl;
    circle c1;
    ++circle::counter;
    circle c2;
    ++c2.counter;
    cout << "Two objects: " << circle::counter << endl;
    cout << "Two objects(byc1): " << c1.counter << endl;
    cout << "Two objects(byc2): " << c2.counter << endl;

    return 0;
}
