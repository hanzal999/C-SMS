#include"course.h"

// DEFINITIONS OF COURSE CLASS FUNCTIONS
course::course(string n,string d,int c)
{
    name = n;
    department = d;
    course_code = c;
}

course::course()
{
    name = " ";
    department = " ";
    course_code = 0;
}

course::course(course &c)
{
    name = c.name;
    department = c.department;
    course_code = c.course_code;
}

course::~course()
{

}

void course::set_course_code(int c)
{
    course_code = c;
}

int course::get_course_code()
{
    return course_code;
}

void course::set_name(string n)
{
    name = n;
}

string course::get_name()
{
    return name;
}

void course::set_dep(string dep)
{
    department = dep;
}

string course::get_dep()
{
    return department;
}