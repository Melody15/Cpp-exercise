#include <iostream>
#include <functional>
#include <map>
using namespace std;

typedef map<string, string, greater<string>> DICTIONARY;

const DICTIONARY initDict(){
    DICTIONARY dict;
    dict["zoo"] = "动物园";
    dict["mammal"] = "哺乳动物";
    dict["felid"] = "猫科动物";
    dict["tiger"] = "老虎";
    dict["lynx"] = "猞猁";
    return dict;
}

string lookup(string word, DICTIONARY dict){
    if(dict.find(word) == dict.end())
        return string("未收录词条");
    return dict[word];
}

int main(int argc, char const *argv[]){
    DICTIONARY dict = initDict();

    string word;
    while(true){
        cout << "请输入英文单词.输入'quit'退出程序" << endl;
        cin >> word;
        if(word == "quit") break;
        cout << lookup(word, dict) << endl;
    }
    
    cout << "===字典中的全部单词列表如下===" << endl;
    for( DICTIONARY::iterator itr = dict.begin(); itr != dict.end(); ++itr)
        cout << itr->first << "\t" << itr->second << endl;

    return 0;
}
