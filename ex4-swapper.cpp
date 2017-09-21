#include <iostream>
using namespace std;

void swapPtr(int *pa, int *pb){ int t = *pa; *pa = *pb; *pb = t; }
void swapRef(int &a, int &b){ int t = a; a = b; b = t; }

int main(int argc, char const *argv[]){
    int i = 10, j = 20;
    cout << "Pointer version:" << endl;
    cout << "i = " << i << ", j = " << j << endl;
    swapPtr(&i, &j);
    cout << "i = " << i << ", j = " << j << endl;

    i = 10; j = 20;
    cout << "Reference version:" << endl;
    cout << "i = " << i << ", j = " << j << endl;
    swapRef(i, j);
    cout << "i = " << i << ", j = " << j << endl;

    return 0;
}
