#include <iostream>
#include "Class.h"

using namespace std;
using namespace Class;

int main() {
    //File_stream fin{"testlab.txt"};
    File_stream fin{};
    bool cond = fin.open();
    cout << cond << endl;
    string line = fin.get_next_word();
    cout << line << endl;
    string line2 = fin.get_next_line();
    cout << line2 << endl;
    bool check = fin.check_is_end();
    cout << check << endl;
    string namefile = fin.getname();
    cout << namefile << endl;
    return 0;
}
