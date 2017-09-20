#include <iostream>
using namespace std;

class circle{
private:
    double x, y;
    double r;

public:
    void create(double xx, double yy, double rr){ x = xx; y = yy; r = rr;}
    void draw(){
        cout << "circle:r = " << r << ", center@ (" << x << "," << y << ")" << endl;
    }    
    double area(){ return 3.14 * r * r; }
};

int main(int argc, char const *argv[]){
    circle c;
    c.create(0, 0, 3);
    c.draw();
    cout << "area = " << c.area() << endl;
    return 0;
}
