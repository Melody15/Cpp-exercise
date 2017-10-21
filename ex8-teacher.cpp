#include <iostream>
#include <string>
using namespace std;

class title{
protected:
    string titlename;

public:
    title(const string& t):titlename(t){}
    title(const title& t):titlename(t.titlename){}
    title& operator = (const title& t){
        titlename = t.titlename;
        return *this;
    }
    const string getTitle() const { return titlename; }
    
};

class professor: public title{
public:
    professor():title("Professor"){}

};

class lecturer: public title{
public:
    lecturer():title("Lecturer"){}
    
};

class assistant: public title{
public:
    assistant():title("Assistant"){}
    
};

class teacher{
protected:
    string name;
    title theTitle;

public:
    teacher(const string& n, const title t):name(n), theTitle(t){}
    void info(){
        cout << theTitle.getTitle() << ' ' << name << endl;
    }
    void promote(const title& t){
        cout << theTitle.getTitle() << ' ' << name << "was promoted to" << t.getTitle() << endl;
        theTitle = t;
    }
    
};

const professor PROFESSOR;
const lecturer LECTURER;
const assistant ASSISTANT;

int main(int argc, char const *argv[]){
    teacher* faculty[] = {new teacher("David", PROFESSOR), new teacher("Linda", LECTURER), new teacher("Carl", ASSISTANT)};
    for (int i = 0; i < 3; i++){
        faculty[i]->info();
    }
    faculty[1]->promote(PROFESSOR);
    faculty[1]->info();
    return 0;
}
