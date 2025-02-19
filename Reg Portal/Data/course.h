#include<string>
#include<iostream>


using namespace std;

class course{
    private:    // PRIVATE MEMBERS
    int course_code;
    string name;
    string department;

    public:      // CONSTRUCTORS AND DESTRUCTOR
    course(string,string,int);
    course();
    course(course &c);
    ~course();

    // GETTERS AND SETTERS
    void set_course_code(int);
    int get_course_code();
    void set_name(string);
    string get_name();
    void set_dep(string);
    string get_dep();
};