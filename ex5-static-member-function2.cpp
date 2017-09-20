#include <iostream>
using namespace std;

class circle{
private:
    static int counter;

public:
    string tag;
    static int& Counter(){ return counter; }
    static void showCounter(const circle &c){
        cout << c.tag << ": " << counter << endl;
    }
};

int circle::counter = 0;

int main(int argc, char const *argv[]){
    circle c1, c2;
    c1.tag = "c1";
    ++circle::Counter();
    circle::showCounter(c1);
    c2.tag = "c2";
    ++circle::Counter();
    circle::showCounter(c2);

    return 0;
}
