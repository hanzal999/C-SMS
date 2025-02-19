
using namespace std;

class student_reg
{
    private:   // PRIVATE MEMBERS
        int student_i;
        int course_reg_i;

    public:    // CONSTRUCTORS AND DESTRUCTOR
    student_reg();
    student_reg(int, int);
    student_reg(student_reg &cr1);
    ~student_reg();

    // GETTERS AND SETTERS
    int get_student_i();
    void set_student_i(int);
    int get_course_reg_i();
    void set_course_reg_i(int);
};