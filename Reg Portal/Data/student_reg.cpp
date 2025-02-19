#include"../master_header.h"

// DEFINITIONS OF STUDENT REGISTRATION CLASS FUNCTIONS
student_reg::student_reg()
{
    student_i = 0;
    course_reg_i = 0;
}

student_reg::student_reg(int s_i,int cr_i)
{
    student_i = s_i;
    course_reg_i = cr_i;
}

student_reg::student_reg(student_reg &sr)
{
    student_i = sr.student_i;
    course_reg_i = sr.course_reg_i;
}

student_reg::~student_reg()
{

}

void student_reg::set_student_i(int s_i)
{
    student_i = s_i;
}

int student_reg::get_student_i()
{
    return student_i;
}

void student_reg::set_course_reg_i(int cr_i)
{
    course_reg_i = cr_i;
}

int student_reg::get_course_reg_i()
{
    return course_reg_i;
}