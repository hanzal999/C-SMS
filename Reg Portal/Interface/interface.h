
using namespace std;

class interface{
    private:  // PRIVATE MEMBERS
    portal e_portal;

    public:  // CONSTRUCTORS AND DESTRUCTOR
    interface();
    interface(portal p);
    interface(interface &i);
    ~interface();
    // GETTER SETTER OF PRIVATE MEMBER
    void set_e_portal(portal p);
    portal get_e_portal();

    // MENU FUNCTIONS
    void run_menu();
    void student_menu();
    void teacher_menu();
    void course_menu(); 
    void course_reg_menu();
    void student_reg_menu();

    // STUDENT MANAGEMENT PORTION
    void i_f_add_stud();
    void i_f_update_stud();
    void i_f_creat_stud_list();
    void i_f_print_stud_list();
    void i_f_delete_stud();
    void i_f_get_student();

    // TEACHER MANAGEMENT PORTION
    void i_f_add_teach();
    void i_f_update_teach();
    void i_f_creat_teach_list();
    void i_f_print_teach_list();
    void i_f_delete_teach();
    void i_f_get_teacher();

    // COURSE MANAGEMENT PORTION
    void i_f_add_course();
    void i_f_update_course();
    void i_f_creat_course_list();
    void i_f_print_course_list();
    void i_f_delete_course();
    void i_f_get_course();

    // COURSE REGISTRATION PORTION
    void i_f_add_course_reg();
    void i_f_update_course_reg();
    void i_f_creat_course_reg_list();
    void i_f_print_course_reg_list();
    void i_f_delete_course_reg();
    void i_f_get_course_reg();

    // STUDENT REGISTRATION PORTION
    void i_f_add_student_reg();
    void i_f_update_student_reg();
    void i_f_creat_student_reg_list();
    void i_f_print_student_reg_list();
    void i_f_delete_student_reg();
    void i_f_get_student_reg();
};