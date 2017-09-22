#include <iostream>
#include <stdexcept>
using namespace std;

typedef bool PREDICATE(int);    //define predicate function type

class array{
private:
    int *head;
    size_t len; //current length
    size_t capacity;    //max capacity
public:
    //array(const array& a):capacity(a.capacity), len(a.len), head(a.head){}
    array(const array& a):capacity(a.capacity), len(0), head(new int[a.capacity]){
        for(size_t i = 0; i < a.len; i++) push_bask(a.head[i]);
    }
    array():head(nullptr), capacity(0), len(0){}
    array(size_t c):capacity(c), len(0), head(c ? new int[c] : nullptr){}
    array(size_t c, int *d):capacity(c), len(0), head(new int[c]){
        for (size_t i = 0; i < c; i++) push_bask(d[i]);
    }
    ~array(){ empty(); }

    void empty(){ delete [] head; len = 0; head = nullptr; }

    void push_bask(int val){
        if(capacity == 0) throw out_of_range("the array is zero-sized.");
        if(len >= capacity) throw out_of_range("the array is full");
        head[len++] = val;
    }

    int index(size_t i){
        if(i >= len) throw out_of_range("index out of range");
        return head[i];
    }

    size_t size(){ return len; }

    void traverse(PREDICATE pred){  //traverse, pred is PREDICATE
        for(size_t i = 0; i < len; i++) pred(head[i]);
    }

};

bool print(int v){ cout << v << ' '; return true; }

int main(int argc, char const *argv[]){
    int d[] = {5, 6, 7, 8};
    array a(4, d), b(a);
    b.traverse(print);
    b.~array();
    a.traverse(print);
    return 0;
}
