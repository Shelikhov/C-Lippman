#include "print.h"

ostream &Print::printOut(ostream &threadOut, const string &str){
    threadOut << str << endl;
    return threadOut;
}

ostream &Print::printOut(ostream &threadOut, const unsigned &val){
    threadOut << val << endl;
    return threadOut;
}
