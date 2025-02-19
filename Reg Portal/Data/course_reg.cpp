#include"course_reg.h"

// DEFINITIONS OF COURSE REGISTRATION CLASS FUNCTIONS
course_reg::course_reg()
{
    course_i = 0;
    teacher_i = 0;
}

course_reg::course_reg(int c_i,int t_i)
{
    course_i = c_i;
    teacher_i = t_i;
}

course_reg::course_reg(course_reg &cr)
{
    course_i = cr.course_i;
    teacher_i = cr.teacher_i;
}

course_reg ::~course_reg()
{

}

void course_reg::set_course_i(int c_i)
{
    course_i = c_i;
}

int course_reg::get_course_i()
{
    return course_i;
}

void course_reg::set_teacher_i(int t_i)
{
    teacher_i = t_i;
}

int course_reg::get_teacher_i()
{
    return teacher_i;
}