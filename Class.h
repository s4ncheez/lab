#ifndef Class_h
#define Class_h
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace Class {
    class File_stream {
    private:
        string filename;
        ifstream file;
    public:
        explicit File_stream(string name);
        bool open();
        bool close();
        string getname();
        bool check_is_open();
        bool check_is_end();
        string get_next_line();
        string get_next_word();
    };
}

#endif //Class_h