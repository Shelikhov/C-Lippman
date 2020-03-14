#include "read.h"

istream &Read::readIn(istream &threadIn, string &str){
    getline(threadIn, str);
    return threadIn;
}

istream &Read::readIn(istream &threadIn, int &val){
    threadIn >> val;
    return threadIn;
}

istream &Read::readIn(istream &threadIn, double &val){
    threadIn >> val;
    return threadIn;
}
