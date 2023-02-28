#ifndef  DATA_H
#define DATA_H
#include <string>
using namespace std;

class Data
{
    private:
        record *start;
        string file_name;
        int read_file();
        int write_file();
        record* reverse_list(record*); //reverse llist
        void delete_all_records();

    public:
        Data();
        Data(string);
        ~Data();
        int add_record(string, string, int, string);
        int print_record(string);
        int modify_record(string, string, string);
        void print_all_records();
        int delete_record(string);
        void reverse_list();
};
#endif