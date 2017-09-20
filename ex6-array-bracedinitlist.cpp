#include <iostream>
#include <stdexcept>
using namespace std;

class array{
private:
    int *head;
    size_t len; //current length
    size_t capacity;    //max capacity

public:
    array():array(0){}
    array(size_t c):capacity(c), len(0), head(c ? new int[c] : nullptr){}
    array(initializer_list <int> list):array(list.size()){
        for(auto val :list) push_bask(val);
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
};

int main(int argc, char const *argv[]){
    array a{1, 2, 3, 4, 5, 6, 7};
    for(size_t i = 0; i < a.size(); i++) cout << a.index(i) <<' ';

    return 0;
}
