#include<iostream>
#include<string>
#include<forward_list>

using namespace std;

int main(){
    forward_list<string> flst;

    string str;
    cout << "Enter line:\n";
    while(getline(cin, str)){
        forward_list<string>::iterator it = flst.begin();
        forward_list<string>::iterator prev = flst.before_begin();

        for(; it != flst.end(); ++it, ++prev){
            if(*it == str){
                flst.insert_after(it, str);
                break;
            }
        }
        if(it == flst.end())
            flst.insert_after(prev, str);

        for(string el : flst)
            cout << el << "\t";
        cout << "\nEnter line:\n";
    }
}
