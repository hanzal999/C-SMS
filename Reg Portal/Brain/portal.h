
using namespace std;

class portal
{
private:   // PRIVATE MEEMBERS OF CLASS
    student student_array[ARR_SIZE];
    int student_count;
    teacher teacher_array[ARR_SIZE];
    int teacher_count;
    course course_array[ARR_SIZE];
    int course_count;
    student_reg student_reg_array[ARR_SIZE];
    int student_reg_count;
    course_reg course_reg_array[ARR_SIZE];
    int course_reg_count;

public:      // CONSTRUCTORS AND DESTRUCTOR
    portal();
    portal(student s_arr[ARR_SIZE], int s_count, teacher t_arr[ARR_SIZE], int t_count, course c_arr[ARR_SIZE], int c_count, student_reg sr_arr[ARR_SIZE], int sr_count, course_reg cr_arr[ARR_SIZE], int cr_count);
    ~portal();
    portal(portal &pr);

    // STUDENT CLASS FUNCTIONS
    void set_student_count(int);
    int get_student_count();
    void set_student_array(student s_arr[ARR_SIZE]);
    void get_student_array(student s_arr[ARR_SIZE]);
    void add_student(student s);
    void update_student(int index, student s);
    void delete_student(int index);
    student get_student(int n);

    // TEACHER CLASS FUNCTIONS
    int get_teacher_count();
    void set_teacher_count(int n);
    void get_teacher_array(teacher t_arr[ARR_SIZE]);
    void set_teacher_array(teacher t_arr[ARR_SIZE]);
    void add_teacher(teacher t);
    void update_teacher(int index, teacher t);
    void delete_teacher(int index);
    teacher get_teacher(int n);

    // COURSE CLASS FUNCTIONS
    int get_course_count();
    void set_course_count(int n);
    void get_course_array(course c_arr[ARR_SIZE]);
    void set_course_array(course c_arr[ARR_SIZE]);
    void add_course(course c);
    void update_course(int index, course c);
    void delete_course(int index);
    course get_course(int n);

    // STUDENT REGISTRATION CLASS FUNCTIONS
    int get_student_reg_count();
    void set_student_reg_count(int n);
    void get_student_reg_array(student_reg sr_arr[ARR_SIZE]);
    void set_student_reg_array(student_reg sr_arr[ARR_SIZE]);
    void add_student_reg(student_reg sr);
    void update_student_reg(int index, student_reg sr);
    void delete_student_reg(int index);
    student_reg get_student_reg(int n);

    // COURSE REGISTRATION CLASS FUNCTIONS
    int get_course_reg_count();
    void set_course_reg_count(int n);
    void get_course_reg_array(course_reg cr_arr[ARR_SIZE]);
    void set_course_reg_array(course_reg cr_arr[ARR_SIZE]);
    void add_course_reg(course_reg cr);
    void update_course_reg(int index, course_reg cr);
    void delete_course_reg(int index);
    course_reg get_course_reg(int n);
};
