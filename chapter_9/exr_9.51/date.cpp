#include "date.h"

Date::Date(string &str): day(0), month(0), year(0){
    int format = checkFormat(str);
    convertFormat(format, str);
}

void Date::printRes(){
    cout << "Month:\t" << month << "\nDay:\t" << day << "\nYear:\t" << year << "\n";
}

int Date::checkFormat(string &str){
    if(isdigit(str[0]))
        return 1;
    else{
        string::size_type pos = 0;
        while(isalpha(str[pos]))
            ++pos;
        if(pos == 3)
            return 2;
        else
            return 3;
    }
}

void Date::convertFormat(int &format, string &str){
    switch (format){
    case 1:{
        string word;
        char delim = '/';
        istringstream ss(str);
        getline(ss, word, delim);
        day = stoi(word);
        word.clear();
        getline(ss, word, delim);
        month = stoi(word);
        word.clear();
        getline(ss, word, delim);
        year = stoi(word);
        break;
    }
    case 2:{
        for(vector<string>::size_type ind = 0; ind != months.size(); ++ind){
            if(str.find(months[ind]) != string::npos){
                month = ind + 1;
                break;
            }
        }
        string word;
        string::size_type pos = str.find_first_of(numbers);
        while(isdigit(str[pos])){
            word.append(1, str[pos]);
            ++pos;
        }
        day = stoi(word);
        pos = str.find_last_of(numbers);
        word.clear();
        while(isdigit(str[pos])){
            word.insert(0, 1, str[pos]);
            --pos;
        }
        year = stoi(word);
        break;
    }
    case 3:{
        for(vector<string>::size_type ind = 0; ind != Months.size(); ++ind){
            if(str.find(Months[ind]) != string::npos){
                month = ind + 1;
                break;
            }
        }
        string word;
        string::size_type pos = str.find_first_of(numbers);
        while(isdigit(str[pos])){
            word.append(1, str[pos]);
            ++pos;
        }
        day = stoi(word);
        pos = str.find_last_of(numbers);
        word.clear();
        while(isdigit(str[pos])){
            word.insert(0, 1, str[pos]);
            --pos;
        }
        year = stoi(word);
        break;
    }
    default:{
        cout << "Format is wrong!\n";
        break;
    }
    }
}
