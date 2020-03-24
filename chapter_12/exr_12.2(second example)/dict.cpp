#include "dict.h"

Dict::Dict(): data(make_shared<map<string, string>>()){
}

Dict::Dict(ifstream &ruleFile){
    string key, value;
    map<string, string> temp;
    while(ruleFile >> key && getline(ruleFile, value)){
        temp[key] = value;
    }
    data = make_shared<map<string, string>>(temp);
}

string &Dict::transform(string &word){
    map<string, string>::iterator it = data->find(word);
    if(it != data->end())
        return it->second;
    else
        return word;
}
