#include"data_header.h"

// DEFINITIONS OF STUDENT CLASS FUNCTIONS
student::student(string r,string nam,string s_age,string sex,string spec)
{
    roll_no = r;
    name = nam;
    age = s_age;
    gender = sex;
    specialization = spec;
}

student::student()
{
    roll_no = " ";
    name = " ";
    age = " ";
    gender = " ";
    specialization = " ";
}

student::student(student &s)
{
    roll_no = s.roll_no;
    name = s.name;
    age = s.age;
    gender = s.gender;
    specialization = s.specialization;
}

student::~student(){}


void student::set_roll_no(string r)
{
    roll_no = r;
}

string student::get_roll_no()
{
    return roll_no;
}

void student::set_age(string a)
{
    age = a;
}

string student::get_age()
{
    return age;
}

void student::set_gender(string g)
{
    gender = g;
}

string student::get_gender()
{
    return gender;
}

void student::set_name(string s_name)
{
    name = s_name;
}

string student::get_name()
{
    return name;
}
void student::set_specialization(string spec)
{
    specialization = spec;
}

string student::get_specialization()
{
    return specialization;
}
