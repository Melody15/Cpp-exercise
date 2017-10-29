#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class array{
private:
    T *head;
    size_t len;
    size_t capacity;
public:
    array(size_t c, T *d):capacity(c), len(0), head(c ? new T[c] : nullptr){
        for (size_t i = 0; i < c; i++)
            push_back(d[i]);
    }
    ~array() { delete [] head; }

    void push_back(T val){
        if(capacity == 0) throw out_of_range("the array is zero-sized.");
        if(len >= capacity) throw out_of_range("the array is full.");
        head[len++] = val;
    }

    void traverse(bool pred(T)){
        if(!head) return;
        for (size_t i = 0; i < len; i++)
            pred(head[i]);
    }
};

bool print(int val){
    cout << val << ' ';
    return true;
}

int main(int argc, char const *argv[]){
    int d[] = {5, 6, 7, 8};
    array <int> a(4,d);
    a.traverse(print);
    return 0;
}