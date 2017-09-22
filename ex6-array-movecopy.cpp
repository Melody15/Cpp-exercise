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
        cout << "copy constructor" << endl;
    } //len(0) because len would add in push_back()
    //move copy constructor
    array (array&& a):capacity(a.capacity), len(a.len), head(a.head){
        a.head = nullptr;
        cout << "move copy constructor" << endl;
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
    int d[] = {1, 2, 3, 4, 5, 6, 7, 8};
    array a(8, d), b(a), c(move(a));
    b.traverse(print);
    cout << endl;
    c.traverse(print);
    //a.traverse(print); error a has been delete
    return 0;
}
