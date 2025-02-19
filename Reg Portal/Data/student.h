#include<string>
#include<cstring>

using namespace std;

class student{
    private:    // PRIVATE MEMBERS
    string roll_no;
    string name;
    string age;
    string gender;
    string specialization;

    public:     // CONSTRUCTORS AND DESTRUCTOR
    student(string,string,string,string,string);
    student();
    student(student &s);
    ~student();

    // GETTERS AND SETTERS
    void set_roll_no(string);
    string get_roll_no();
    void set_age(string);
    string get_age();
    void set_gender(string);
    string get_gender();
    void set_name(string);
    string get_name();
    void set_specialization(string);
    string get_specialization();
};