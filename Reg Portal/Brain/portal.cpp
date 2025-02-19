#include"../master_header.h"
// EMPOTY CONSTRUCTOR
portal::portal()
{
    for(int i=0;i<ARR_SIZE;i++){
        student_array[i].set_roll_no(" ");
        student_array[i].set_age(" ");
        student_array[i].set_specialization(" ");
        student_array[i].set_name(" ");
        student_array[i].set_gender(" ");
        teacher_array[i].set_name(" ");
        teacher_array[i].set_qualification(" ");
        teacher_array[i].set_spec(" ");
        teacher_array[i].set_age(0);
        course_array[i].set_course_code(0);
        course_array[i].set_name(" ");
        course_array[i].set_dep(" ");
        course_reg_array[i].set_course_i(0);
        course_reg_array[i].set_teacher_i(0);
        student_reg_array[i].set_student_i(0);
        student_reg_array[i].set_course_reg_i(0);
    }
    student_count = 0;
    teacher_count = 0;
    course_count = 0;
    student_reg_count = 0;
    course_reg_count = 0;
}
// PARAMETERISED CONSTRUCTOR
portal::portal(student s_arr[ARR_SIZE],int s_count,teacher t_arr[ARR_SIZE],int t_count,course c_arr[ARR_SIZE],int c_count,student_reg sr_arr[ARR_SIZE],int sr_count,course_reg cr_arr[ARR_SIZE],int cr_count)

{
    for(int i = 0;i<ARR_SIZE;i++)
    {
        student_array[i] = s_arr[i];
        teacher_array[i] = t_arr[i];
        course_array[i] = c_arr[i];
        student_reg_array[i] = sr_arr[i];
        course_reg_array[i] = cr_arr[i];
    }
    student_count = s_count;
    teacher_count = t_count;
    course_count = c_count;
    student_reg_count = sr_count;
    course_reg_count = cr_count;
}
// DESTRUCTOR
portal::~portal()
{
}
// COPY CONSTRUCTOR
portal::portal(portal &p)
{
    for(int i = 0;i<ARR_SIZE;i++)
    {
        student_array[i] = p.student_array[i];
        teacher_array[i] = p.teacher_array[i];
        course_array[i] = p.course_array[i];
        student_reg_array[i] = p.student_reg_array[i];
        course_reg_array[i] = p.course_reg_array[i];
    }
    student_count = p.student_count;
    teacher_count = p.teacher_count;
    course_count = p.course_count;
    student_reg_count = p.student_reg_count;
    course_reg_count = p.course_reg_count;
}

        // STUDENT CLASS FUNCTIONS

void portal::set_student_count(int c)
{
    student_count = c;
}

int portal::get_student_count()
{
    return student_count;
}

void portal::set_student_array(student stud_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        student_array[i] = stud_arr[i];
    }
}
void portal::get_student_array(student stud_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        stud_arr[i] = student_array[i];
    }
}

void portal::add_student(student s)
{
    student_array[student_count++] = s;
}

void portal::update_student(int num, student s)
{
    student_array[num - 1] = s;
}

void portal::delete_student(int num)
{
    student s;
    student_array[num - 1] = s;
}

student portal::get_student(int num)
{
    return student_array[num-1];
}

        // TEACHER CLASS FUNCTIONS

void portal::set_teacher_count(int c)
{
    teacher_count = c;
}

int portal::get_teacher_count()
{
    return teacher_count;
}

void portal::set_teacher_array(teacher t_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        teacher_array[i] = t_arr[i];
    }
}

void portal::get_teacher_array(teacher t_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        t_arr[i] = teacher_array[i];
    }
}

void portal::add_teacher(teacher t)
{
    teacher_array[teacher_count++] = t;
}

void portal::update_teacher(int num, teacher t)
{
    teacher_array[num - 1] = t;
}

void portal::delete_teacher(int num)
{
    teacher t;
    teacher_array[num - 1] = t;
}

teacher portal::get_teacher(int num)
{
    return teacher_array[num-1];
}

        // COURSE CLASS FUNCTIONS

void portal::set_course_count(int c)
{
    course_count = c;
}

int portal::get_course_count()
{
    return course_count;
}

void portal::set_course_array(course c_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        course_array[i] = c_arr[i];
    }
}

void portal::get_course_array(course c_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        c_arr[i] = course_array[i];
    }
}

void portal::add_course(course c)
{
    course_array[course_count++] = c;
}

void portal::update_course(int num, course c)
{
    course_array[num - 1] = c;
}

void portal::delete_course(int num)
{
    course c;
    course_array[num - 1] = c;
}

course portal::get_course(int num)
{
    return course_array[num-1];
}

        // STUDENT_REGISTRATION CLASS FUNCTIONS

void portal::set_student_reg_count(int c)
{
    student_reg_count = c;
}

int portal::get_student_reg_count()
{
    return student_reg_count;
}

void portal::set_student_reg_array(student_reg sr_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        student_reg_array[i] = sr_arr[i];
    }
}
void portal::get_student_reg_array(student_reg sr_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        sr_arr[i] = student_reg_array[i];
    }
}

void portal::add_student_reg(student_reg sr)
{
    student_reg_array[student_reg_count++] = sr;
}

void portal::update_student_reg(int num, student_reg sr)
{
    student_reg_array[num - 1] = sr;
}

void portal::delete_student_reg(int num)
{
    student_reg sr;
    student_reg_array[num - 1] = sr;
}

student_reg portal::get_student_reg(int num)
{
    return student_reg_array[num-1];
}

        // COURSE_REGISTRATION CLASS FUNCTIONS

void portal::set_course_reg_count(int c)
{
    course_reg_count = c;
}

int portal::get_course_reg_count()
{
    return course_reg_count;
}

void portal::set_course_reg_array(course_reg cr_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        course_reg_array[i] = cr_arr[i];
    }
}

void portal::get_course_reg_array(course_reg cr_arr[ARR_SIZE])
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cr_arr[i] = course_reg_array[i];
    }
}

void portal::add_course_reg(course_reg cr)
{
    course_reg_array[course_reg_count++] = cr;
}

void portal::update_course_reg(int num, course_reg cr)
{
    course_reg_array[num - 1] = cr;
}

void portal::delete_course_reg(int num)
{
    course_reg cr;
    course_reg_array[num - 1] = cr;
}

course_reg portal::get_course_reg(int num)
{
    return course_reg_array[num-1];
}