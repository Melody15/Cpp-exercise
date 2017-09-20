#include <iostream>
#include <stdexcept>
using namespace std;

class array{
private:
    int *head;
    size_t len; //current length
    size_t capacity;    //max capacity

public:
    void create(size_t c){
        capacity = c;
        head = c ? new int[c] : nullptr;
        len = 0;
    }

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
    
    void empty(); 
};
void array::empty(){ delete[] head; len = 0; head = nullptr; }

int main(int argc, char const *argv[]){
    array a;
    a.create(5);
    for (int i = 1; i <= 5; i++){
        a.push_bask(i);
    }
    for (size_t i = 0; i < a.size(); i++){
        cout << a.index(i) << ' ';
    }
    a.empty();
    return 0;
     
}

