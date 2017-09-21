#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a[] = {1, 2, 3, 4, 5, 6};

    for (auto&& val:a) ++val;

    for(auto val:a) cout << val << ' ';
    cout << endl;

    for(auto val:{1.1, 2.2, 3.3, 4.4, 5.5}) cout << val << ' ';
    cout << endl;

    auto list = {1.1, 2.2, 3.3, 4.4, 5.5};
    for(auto val:list) cout << val << ' ';
    cout << endl;

    int *p = a;

    int (*q)[6] = &a;
    for(auto val:*q) --val;

    return 0;
}
