#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]){
    ifstream in("ex11-file-io.cpp");
    in.seekg(0, ios::end);
    streampos pos = in.tellg();
    cout << "---the file's size is " << pos << endl;
    in.seekg(-pos/10, ios::end);
    streampos pos2 = in.tellg();
    in.seekg(0, ios::beg);
    cout << in.rdbuf();
    cout << "---file stream position moved." << endl;
    in.seekg(pos2);
    cout << in.rdbuf();
    
    return 0;
}
