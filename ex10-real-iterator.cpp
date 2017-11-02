#include <iostream>
using namespace std;

template <typename T>
class linkedList{
private:
    struct node{
        T data;
        node *next;
    };
    typedef node * NODEPTR;
    NODEPTR head;

public:
    linkedList(): head(nullptr){}
    linkedList& push_front(T e){
        NODEPTR p = new node;
        p->data = e;
        p->next = nullptr;

        if(head != nullptr) p->next = head;
        head = p;

        return *this;
    }
    
    typedef NODEPTR _range;
    class iterator{
    private:
        _range p;
    public:
        iterator(): p(nullptr) {}
        iterator(const linkedList& ll): p(ll.head) {}

        iterator& operator = (const iterator& itr){
            p = itr.p;
            return *this;
        }
        iterator& operator ++ (){
            p = p->next;
            return *this;
        }
        bool operator != (const iterator& itr){
            return p != itr.p;
        }
        T& operator * () { return p->data; }
    };

    iterator begin() { return iterator(*this); }
    iterator end() { return iterator(); }
    
};

int main(int argc, char const *argv[]){
    linkedList<int> list;
    list.push_front(0); list.push_front(1); list.push_front(2);
    list.push_front(3); list.push_front(4); list.push_front(5);

    for(linkedList<int>::iterator itr = list.begin(); itr != list.end(); ++itr)
        cout << *itr << ' ';
    
    return 0;
}