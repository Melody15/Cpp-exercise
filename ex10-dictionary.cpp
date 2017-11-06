#include <iostream>
#include <functional>
#include <map>
using namespace std;

typedef map<string, string, greater<string>> DICTIONARY;

const DICTIONARY initDict(){
    DICTIONARY dict;
    dict["zoo"] = "����԰";
    dict["mammal"] = "���鶯��";
    dict["felid"] = "è�ƶ���";
    dict["tiger"] = "�ϻ�";
    dict["lynx"] = "���";
    return dict;
}

string lookup(string word, DICTIONARY dict){
    if(dict.find(word) == dict.end())
        return string("δ��¼����");
    return dict[word];
}

int main(int argc, char const *argv[]){
    DICTIONARY dict = initDict();

    string word;
    while(true){
        cout << "������Ӣ�ĵ���.����'quit'�˳�����" << endl;
        cin >> word;
        if(word == "quit") break;
        cout << lookup(word, dict) << endl;
    }
    
    cout << "===�ֵ��е�ȫ�������б�����===" << endl;
    for( DICTIONARY::iterator itr = dict.begin(); itr != dict.end(); ++itr)
        cout << itr->first << "\t" << itr->second << endl;

    return 0;
}
