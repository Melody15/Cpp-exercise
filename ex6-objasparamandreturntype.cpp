#include <iostream>
#include <string>
using namespace std;

class array{
public:
    string tag;
    array(string t):tag(t){
        cout << "constructor: " << tag << endl;
    }
    array(const array&a):tag("copyed " + a.tag){
        cout << "copy constructor: " << tag << endl;
    }
    ~array(){
        cout << "destructor: " << tag << endl;
    }
};

void f1(array a){}  //ֵ����
void f2(array* a){} //ָ�����
void f3(array& a){} //���ò���

array ga("global object");

array g1() { return ga; } //����ֵ
array* g2() { return &ga; } //����ָ��
array& g3() { return ga; } //��������

int main(int argc, char const *argv[]){
    
    cout << "=== call f1(array) ===" << endl; f1(ga);
    cout << "=== call f2(array*) ===" << endl; f2(&ga);
    cout << "=== call f3(array&) ===" << endl; f3(ga);
    cout << "=== callarray g1() ===" << endl; g1();
    cout << "=== callarray* g2() ===" << endl; g2();
    cout << "=== callarray& g3() ===" << endl; g3();

    return 0;
}
