#include <iostream>
using namespace std;

class circle{
private:
    static int counter;

public:
    static int incCounter(){ return ++counter; }
    static void showCounter() { cout << counter << endl; }
};

int circle::counter = 0;

int main(int argc, char const *argv[]){
    cout << "No object: "; circle::showCounter();

    circle c1;
    circle::incCounter();
    circle c2;
    c2.incCounter();
    cout << "Two objects: "; circle::showCounter();
    cout << "Two objects(byc1): "; c1.showCounter();
    cout << "Two objects(byc2): "; c2.showCounter();
    
    return 0;
}
