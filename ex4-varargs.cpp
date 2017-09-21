#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int n, int v1, ...){
    int s = v1;

    va_list vlist;
    va_start(vlist, v1);
    while(--n) s += va_arg(vlist, int);
    va_end(vlist);

    return s;
}

int main(int argc, char const *argv[]){
    cout << sum(3, 1, 2, 3) << endl;
    cout << sum(5, 1, 2, 3, 4, 5) << endl;
    
    return 0;
}

