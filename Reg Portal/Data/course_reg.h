#include<iostream>
#include<cstdio>
using namespace std;

class course_reg{
    private:       // PRIVATE MEMBERS
        int course_i;
        int teacher_i;

    public:       // CONSTRUCTORS AND DESTRUCTOR
    course_reg();
    course_reg(int , int);
    course_reg(course_reg &cr);
    ~course_reg();

    // GETTERS AND SETTERS
    int get_course_i();
    void set_course_i(int);
    int get_teacher_i();
    void set_teacher_i(int);
};