#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a = 0;
    int& ra = a;
    cout <<"a="<<a<<','<<"ra="<<ra<<endl;
    ++ra;
    cout <<"a="<<a<<','<<"ra="<<ra<<endl;
    int b = 3;
    ra = b; //�ⲻ�����ð� ���Ǹ�ֵ
    cout <<"a="<<a<<','<<"b="<<b<<','<<"ra="<<ra<<endl;
    
    return 0;
}