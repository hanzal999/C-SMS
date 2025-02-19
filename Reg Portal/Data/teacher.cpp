#include"../master_header.h"

// DEFINITIONS OF TEACHER CLASS FUNCTIONS
teacher::teacher(string n,string spec,float t_age,string qual)
{
    name = n;
    specialization = spec;
    age = t_age;
    qualification = qual;
}

teacher::teacher()
{
    name = " ";
    specialization = " ";
    age = 0;
    qualification = " ";
}

teacher::teacher(teacher &t)
{
    name = t.name;
    specialization = t.specialization;
    age = t.age;
    qualification = t.qualification;
}

teacher::~teacher(){}

void teacher::set_age(float a)
{
    age = a;
}

float teacher::get_age()
{
    return age;
}

void teacher::set_name(string n)
{
    name = n;
}

string teacher::get_name()
{
    return name;
}

void teacher::set_spec(string spec)
{
    specialization = spec;
}

string teacher::get_spec()
{
    return specialization;
}

void teacher::set_qualification(string qual)
{
    qualification = qual;
}

string teacher::get_qualification()
{
    return qualification;
}