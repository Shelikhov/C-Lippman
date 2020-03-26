#include "dict.h"

Dict::Dict(): data(make_shared<map<string, string>>()){
}

Dict::Dict(ifstream &ruleFile){//To create empty map.
    string key, value;
    map<string, string> temp;
    while(ruleFile >> key && getline(ruleFile, value)){
        temp[key] = value;
    }
    data = make_shared<map<string, string>>(temp);
}

string &Dict::transform(string &word){//To transform word from dictionary.
    map<string, string>::iterator it = data->find(word);
    if(it != data->end())
        return it->second;
    else
        return word;
}

void Dict::showAll(){//To output whole dictionary.
    cout << "KEY\tVALUE\n";
    for(const pair<string, string> &el : *data){
        cout << el.first << "\t" << el.second << "\n";
    }
}
