#include "../master_header.h"

using namespace std;
// EMPOTY CONSTRUCTOR
interface::interface()
{
    portal p;
    e_portal = p;
}
// PARAMETERISED CONSTRUCTOR
interface::interface(portal p)
{
    e_portal = p;
}
// COPY CONSTRUCTOR
interface::interface(interface &i)
{
    e_portal = i.e_portal;
}
// DESTRUCTOR
interface::~interface()
{
}
// SETTER OF E_PORTAL
void interface::set_e_portal(portal p)
{
    e_portal = p;
}
// GETTER OF E_PORTAL
portal interface::get_e_portal()
{
    return e_portal;
}
// CREATED GLOBAL OBJECTS OF DIFFERENT CLASSES
portal p;
// --------------------- MAIN MENU ---------------------------
void interface::run_menu()
{
    while(1){
    cout << "---------------MAIN MENU---------------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Open Student Management System" << endl;
    cout << "2. Press 2 To Open Teacher Management System" << endl;
    cout << "3. Press 3 To Open Course Management System" << endl;
    cout << "4. Press 4 To Open Course Registration System" << endl;
    cout << "5. Press 5 To Open Student Registration System" << endl;
    cout << "6. Press -3 To Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT FUNCTIONS
    switch (choice)
    {
    case 1:
    {
        student_menu();
        break;
    }
    case 2:
    {
        teacher_menu();
        break;
    }
    case 3:
    {
        course_menu();
        break;
    }
    case 4:
    {
        course_reg_menu();
        break;
    }
    case 5:
    {
        student_reg_menu();
        break;
    }
    case -3:
    {
        cout << "Program ended on danish request" << endl;
        exit(-3);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// ----------------------- STUDENT MANAGEMENT PORTION ----------------------
void interface::student_menu()
{
    while(1){
    cout << "---------------STUDENT MENU---------------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Create Student List" << endl;
    cout << "2. Press 2 To Add Student" << endl;
    cout << "3. Press 3 To Update Student at an Index" << endl;
    cout << "4. Press 4 To Print List of Students" << endl;
    cout << "5. Press 5 To Delete Student" << endl;
    cout << "6. Press 6 To Get Student at an Index" << endl;
    cout << "7. Press 0 To Move Back to Main Menu" << endl;
    cout << "8. Press -1 to Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT FUNCTIONS
    switch (choice)
    {
    case 1:
    {
        i_f_creat_stud_list();
        break;
    }
    case 2:
    {
        i_f_add_stud();
        break;
    }
    case 3:
    {
        i_f_update_stud();
        break;
    }
    case 4:
    {
        i_f_print_stud_list();
        break;
    }
    case 5:
    {
        i_f_delete_stud();
        break;
    }
    case 6:
    {
        i_f_get_student();
        break;
    }
    case 0:
    {
        return;
        break;
    }
    case -1:
    {
        cout << "Exiting the Program" << endl;
        exit(-1);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// FUNCTION TO ADD A STUDENT
void interface::i_f_add_stud()
{
    string n, age, gen, name, spec;
    cout << "Enter the Student's Roll No: " << endl;
    cin >> n;
    fflush(stdin);
    cout << "Enter the Student's Name: " << endl;
    getline(cin, name);
    cout << "Enter the Student's Age: " << endl;
    cin >> age;
    cout << "Enter the Student's Gender(M/F): " << endl;
    cin >> gen;
    fflush(stdin);
    cout << "Enter the Student's Specialization: " << endl;
    getline(cin, spec);
    student s(n, name, age, gen, spec);
    p.add_student(s);
    cout << endl << "STUDENT ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO UPDATE STUDENT AT SPECIFIC INDEX
void interface::i_f_update_stud()
{
    int n = 0;
    cout << "Enter the Position from which You want to Update the Student: " << endl;
    cin >> n;
    int num = p.get_student_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't exists: " << endl << endl;
        getch();
        i_f_update_stud();
    }
    else
    {
        string r, age, gen, name, spec;
        cout << endl << "Enter the New Student's Roll No: " << endl;
        cin >> r;
        fflush(stdin);
        cout << "Enter the New Student's Name: " << endl;
        getline(cin, name);
        cout << "Enter the New Student's Age: " << endl;
        cin >> age;
        cout << "Enter the New Student's Gender(M/F): " << endl;
        cin >> gen;
        fflush(stdin);
        cout << "Enter the New Student's Specialization: " << endl;
        getline(cin, spec);
        student s1(r, name, age, gen, spec);
        p.update_student(n, s1);
        cout << endl << "STUDENT UPDATED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO ADD STUDENT LIST
void interface::i_f_creat_stud_list()
{
    int num;
    cout << "Enter How many Students You want to Add: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl << "Enter the Credentials of Student " << i + 1 << endl << endl;
        string n, gen, age, name, spec;
        cout << "Enter the Student's Roll No: " << endl;
        cin >> n;
        fflush(stdin);
        cout << "Enter the Student's Name: " << endl;
        getline(cin, name);
        cout << "Enter the Student's Age: " << endl;
        cin >> age;
        cout << "Enter the Student's Gender(M/F): " << endl;
        cin >> gen;
        fflush(stdin);
        cout << "Enter the Student's Specialization: " << endl;
        getline(cin, spec);
        student s(n, name, age, gen, spec);
        p.add_student(s);
    }
    cout << endl << num << " STUDENTS ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO PRINT ALREDY PRESENT STUDENT DETAILS
void interface::i_f_print_stud_list()
{
    int num = p.get_student_count();
    student arr[ARR_SIZE];
    p.get_student_array(arr);
    if (num == 0)
    {
        cout << "No Student Present in the List, First Add Student" << endl << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Student's Name: " << arr[i].get_name() << endl;
            cout << "    Student's Roll No: " << arr[i].get_roll_no() << endl;
            cout << "    Student's Age: " << arr[i].get_age() << endl;
            cout << "    Student's Gender: " << arr[i].get_gender() << endl;
            cout << "    Student's Specialization: " << arr[i].get_specialization() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO DELETE A STUDENT AT SPECIFIC INDEX
void interface::i_f_delete_stud()
{
    int n = 0;
    cout << "Enter the Position from which You want to Delete the Student: " << endl;
    cin >> n;
    int num = p.get_student_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_delete_stud();
    }
    else
    {
        p.delete_student(n);
        cout << endl << "STUDENT DELETED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO GET A STUDENT AT SPECIFIC INDEX
void interface::i_f_get_student()
{
    int n;
    student arr[ARR_SIZE];
    p.get_student_array(arr);
    cout << "Enter the Position of Student in the List that You want to Get: " << endl;
    cin >> n;
    int num = p.get_student_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_get_student();
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << endl << i + 1 << ".  Student's Name: " << arr[i].get_name() << endl;
                cout << "    Student's Roll No: " << arr[i].get_roll_no() << endl;
                cout << "    Student's Age: " << arr[i].get_age() << endl;
                cout << "    Student's Gender: " << arr[i].get_gender() << endl;
                cout << "    Student's Specialization: " << arr[i].get_specialization() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}
// ----------------------- TEACHER MANAGEMENT PORTION -------------------
void interface::teacher_menu()
{
    while(1){
    cout << "---------------TEACHER MENU---------------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Create Teacher List" << endl;
    cout << "2. Press 2 To Add Teacher" << endl;
    cout << "3. Press 3 To Update Teacher at an Index" << endl;
    cout << "4. Press 4 To Print List of Teachers" << endl;
    cout << "5. Press 5 To Delete Teacher" << endl;
    cout << "6. Press 6 To Get Teacher at an Index" << endl;
    cout << "7. Press 0 To Move Back to Main Menu" << endl;
    cout << "8. Press -1 to Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT FUNCTIONS
    switch (choice)
    {
    case 1:
    {
        i_f_creat_teach_list();
        break;
    }
    case 2:
    {
        i_f_add_teach();
        break;
    }
    case 3:
    {
        i_f_update_teach();
        break;
    }
    case 4:
    {
        i_f_print_teach_list();
        break;
    }
    case 5:
    {
        i_f_delete_teach();
        break;
    }
    case 6:
    {
        i_f_get_teacher();
        break;
    }
    case 0:
    {
        return;
        break;
    }
    case -1:
    {
        cout << "Exiting the Program" << endl;
        exit(-1);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// FUNCTION TO ADD A TEACHER
void interface::i_f_add_teach()
{
    float age;
    string name, spec, qual;
    fflush(stdin);
    cout << "Enter the Teacher's Name: " << endl;
    getline(cin, name);
    cout << "Enter the Teacher's Age: " << endl;
    cin >> age;
    fflush(stdin);
    cout << "Enter the Teacher's Qualification: " << endl;
    getline(cin, qual);
    fflush(stdin);
    cout << "Enter the Teacher's Specialization: " << endl;
    getline(cin, spec);
    teacher t(name, spec, age, qual);
    p.add_teacher(t);
    cout << endl << "TEACHER ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO UPDATE TEACHER AT SPECIFIC INDEX
void interface::i_f_update_teach()
{
    int n = 0;
    cout << "Enter the Position from which You want to Update the Teacher: " << endl;
    cin >> n;
    int num = p.get_teacher_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exists: " << endl << endl;
        getch();
        i_f_update_teach();
    }
    else
    {
        float age;
        string name, spec, qual;
        fflush(stdin);
        cout << endl << "Enter the New Teacher's Name: " << endl;
        getline(cin, name);
        cout << "Enter the New Teacher's Age: " << endl;
        cin >> age;
        fflush(stdin);
        cout << "Enter the New Teacher's Qualification: " << endl;
        getline(cin, qual);
        fflush(stdin);
        cout << "Enter the New Teacher's Specialization: " << endl;
        getline(cin, spec);
        teacher t(name, spec, age, qual);
        p.update_teacher(n, t);
        cout << endl << "TEACHER UPDATED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO ADD TEACHER LIST
void interface::i_f_creat_teach_list()
{
    int num;
    cout << "Enter How many Teachers You want to Add: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl << "Enter the Credentials of Teacher " << i + 1 << endl << endl;
        float age;
        string name, spec, qual;
        fflush(stdin);
        cout << "Enter the Teacher's Name: " << endl;
        getline(cin, name);
        cout << "Enter the Teacher's Age: " << endl;
        cin >> age;
        fflush(stdin);
        cout << "Enter the Teacher's Qualification: " << endl;
        getline(cin, qual);
        fflush(stdin);
        cout << "Enter the Teacher's Specialization: " << endl;
        getline(cin, spec);
        teacher t(name, spec, age, qual);
        p.add_teacher(t);
    }
    cout << endl << num << " TEACHERS ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO PRINT ALREADY PRESENT TEACHER LIST
void interface::i_f_print_teach_list()
{
    int num = p.get_teacher_count();
    teacher arr[ARR_SIZE];
    p.get_teacher_array(arr);
    if (num == 0)
    {
        cout << "No Teacher Present in the List, First Add Teacher" << endl << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Teacher's Name: " << arr[i].get_name() << endl;
            cout << "    Teacher's Age: " << arr[i].get_age() << endl;
            cout << "    Teacher's Qualification: " << arr[i].get_qualification() << endl;
            cout << "    Teacher's Specialization: " << arr[i].get_spec() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO DELETE TEACHER AT SPECIFIC INDEX
void interface::i_f_delete_teach()
{
    int n = 0;
    cout << "Enter the Position from which You want to Delete the Teacher: " << endl;
    cin >> n;
    int num = p.get_teacher_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_delete_teach();
    }
    else
    {
        p.delete_teacher(n);
        cout << endl << "TEACHER DELETED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO GET TEACHER AT SPECIFIC INDEX
void interface::i_f_get_teacher()
{
    int n;
    teacher arr[ARR_SIZE];
    p.get_teacher_array(arr);
    cout << "Enter the Position of Teacher in the List that You want to Get: " << endl;
    cin >> n;
    int num = p.get_teacher_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_get_teacher();
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << endl << i + 1 << ".  Teacher's Name: " << arr[i].get_name() << endl;
                cout << "    Teacher's Age: " << arr[i].get_age() << endl;
                cout << "    Teacher's Qualification: " << arr[i].get_qualification() << endl;
                cout << "    Teacher's Specialization: " << arr[i].get_spec() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}
// ----------------------- COURSE MANAGEMENT PORTION ------------------------
void interface::course_menu()
{
    while(1){
    cout << "---------------COURSE MENU---------------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Create Course List" << endl;
    cout << "2. Press 2 To Add Course" << endl;
    cout << "3. Press 3 To Update Course at an Index" << endl;
    cout << "4. Press 4 To Print List of Course" << endl;
    cout << "5. Press 5 To Delete Course" << endl;
    cout << "6. Press 6 To Get Course at an Index" << endl;
    cout << "7. Press 0 To Move Back to Main Menu" << endl;
    cout << "8. Press -1 to Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT FUNCTIONS
    switch (choice)
    {
    case 1:
    {
        i_f_creat_course_list();
        break;
    }
    case 2:
    {
        i_f_add_course();
        break;
    }
    case 3:
    {
        i_f_update_course();
        break;
    }
    case 4:
    {
        i_f_print_course_list();
        break;
    }
    case 5:
    {
        i_f_delete_course();
        break;
    }
    case 6:
    {
        i_f_get_course();
        break;
    }
    case 0:
    {
        return;
        break;
    }
    case -1:
    {
        cout << "Exiting the Program" << endl;
        exit(-1);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// FUNCTION TO ADD A COURSE
void interface::i_f_add_course()
{
    int code;
    string name, dep;
    fflush(stdin);
    cout << "Enter the Course's Name: " << endl;
    getline(cin, name);
    cout << "Enter the Course's Code: " << endl;
    cin >> code;
    fflush(stdin);
    cout << "Enter the Course's Department: " << endl;
    getline(cin, dep);
    course c(name, dep, code);
    p.add_course(c);
    cout << endl << "COURSE ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO UPDATE COURSE AT SPECIFIC INDEX
void interface::i_f_update_course()
{
    int n = 0;
    cout << "Enter the Position from which You want to Update the Course: " << endl;
    cin >> n;
    int num = p.get_course_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exists: " << endl << endl;
        getch();
        i_f_update_course();
    }
    else
    {
        int code;
        string name, dep;
        fflush(stdin);
        cout << endl << "Enter the New Course's Name: " << endl;
        getline(cin, name);
        cout << "Enter the New Course's Code: " << endl;
        cin >> code;
        fflush(stdin);
        cout << "Enter the New Course's Department: " << endl;
        getline(cin, dep);
        course c(name, dep, code);
        p.update_course(n, c);
        cout << endl << "COURSE UPDATED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO ADD A LIST OF COURSES
void interface::i_f_creat_course_list()
{
    int num;
    cout << "Enter How many Courses You want to Add: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl << "Enter the Credentials of Course " << i + 1 << endl << endl;
        int code;
        string name, dep;
        fflush(stdin);
        cout << "Enter the Course's Name: " << endl;
        getline(cin, name);
        cout << "Enter the Course's Code: " << endl;
        cin >> code;
        fflush(stdin);
        cout << "Enter the Course's Department: " << endl;
        getline(cin, dep);
        course c(name, dep, code);
        p.add_course(c);
    }
    cout << endl << num << " COURSES ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO PRINT LIST OF ALREADY PRESENT COURSES
void interface::i_f_print_course_list()
{
    int num = p.get_course_count();
    course arr[ARR_SIZE];
    p.get_course_array(arr);
    if (num == 0)
    {
        cout << "No Course Present in the List, First Add Course" << endl << endl << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Course's Name: " << arr[i].get_name() << endl;
            cout << "    Course's Code: " << arr[i].get_course_code() << endl;
            cout << "    Course's Department: " << arr[i].get_dep() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO DELETE COURSE AT SPECIFIC INDEX
void interface::i_f_delete_course()
{
    int n = 0;
    cout << "Enter the Position from which You want to Delete the Course: " << endl;
    cin >> n;
    int num = p.get_course_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_delete_course();
    }
    else
    {
        p.delete_course(n);
        cout << endl << "COURSE DELETED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO GET A COURSE AT SPECIFIC INDEX
void interface::i_f_get_course()
{
    int n;
    course arr[ARR_SIZE];
    p.get_course_array(arr);
    cout << "Enter the Position of Course in the List that You want to Get: " << endl;
    cin >> n;
    int num = p.get_course_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_get_course();
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << endl << i + 1 << ".  Course's Name: " << arr[i].get_name() << endl;
                cout << "    Course's Code: " << arr[i].get_course_code() << endl;
                cout << "    Course's Department: " << arr[i].get_dep() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}
// ------------------------ COURSE REGISTRATION PORTION --------------------
void interface::course_reg_menu()
{
    while(1){
    cout << "----------COURSE REGISTRATION MENU----------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Create Course Registrations List" << endl;
    cout << "2. Press 2 To Add Course Registration" << endl;
    cout << "3. Press 3 To Update Course Registration at an Index" << endl;
    cout << "4. Press 4 To Print List of Course Registrations" << endl;
    cout << "5. Press 5 To Delete Course Registration" << endl;
    cout << "6. Press 6 To Get Course Registration at an Index" << endl;
    cout << "7. Press 0 To Move Back to Main Menu" << endl;
    cout << "8. Press -1 to Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT FUNCTIONS
    switch (choice)
    {
    case 1:
    {
        i_f_creat_course_reg_list();
        break;
    }
    case 2:
    {
        i_f_add_course_reg();
        break;
    }
    case 3:
    {
        i_f_update_course_reg();
        break;
    }
    case 4:
    {
        i_f_print_course_reg_list();
        break;
    }
    case 5:
    {
        i_f_delete_course_reg();
        break;
    }
    case 6:
    {
        i_f_get_course_reg();
        break;
    }
    case 0:
    {
        return;
        break;
    }
    case -1:
    {
        cout << "Exiting the Program" << endl;
        exit(-1);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// FUNCTION TO ADD COURSE REGISTRATION
void interface::i_f_add_course_reg()
{
    int n = p.get_course_count();
    course arr[ARR_SIZE];
    p.get_course_array(arr);
    if (n == 0)
    {
        cout << "No Course Present in the List, First Go Back and Add Course" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ".  Course's Name: " << arr[i].get_name() << endl;
            cout << "    Course's Code: " << arr[i].get_course_code() << endl;
            cout << "    Course's Department: " << arr[i].get_dep() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int number = p.get_teacher_count();
    teacher arr1[ARR_SIZE];
    p.get_teacher_array(arr1);
    if (number == 0)
    {
        cout << "No Teacher Present in the List, First Go Back and Add Teacher" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << ".  Teacher's Name: " << arr1[i].get_name() << endl;
            cout << "    Teacher's Age: " << arr1[i].get_age() << endl;
            cout << "    Teacher's Qualification: " << arr1[i].get_qualification() << endl;
            cout << "    Teacher's Specialization: " << arr1[i].get_spec() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int t_i, c_i;
    cout << "Enter the Teacher's Index, whom You want to Assign the Course: " << endl;
    cin >> t_i;
    if(t_i > number || t_i <= 0)
    {
        cout << "Available Teachers Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
        cout << "Re-Enter the Teacher's Index, whom You want to Assign the Course: " << endl;
        cin >> t_i;
    }
    cout << "Enter the Course's Index, that You wnat to Assign: " << endl;
    cin >> c_i;
    if(c_i > n || c_i <= 0)
    {
        cout << "Available Courses Count: " << n << " and Index Should be 1 or High to Available Count" << endl << endl;
        cout << "Re-Enter the Course's Index, that You wnat to Assign: " << endl;
        cin >> c_i;
    }
    course_reg cr(t_i, c_i);
    p.add_course_reg(cr);
    cout << endl << "COURSE REGISTRATION ADDED SUCCESSFULLY" << endl << endl << endl;

    teacher array[ARR_SIZE];
    p.get_teacher_array(array);
    for (int i = 0; i < t_i; i++)
    {
        if (i == t_i - 1)
        {
            cout << "    Teacher's Name: " << array[i].get_name() << endl;
            cout << "    Teacher's Age: " << array[i].get_age() << endl;
            cout << "    Teacher's Qualification: " << array[i].get_qualification() << endl;
            cout << "    Teacher's Specialization: " << array[i].get_spec() << endl;
        }
    }
    course arr2[ARR_SIZE];
    p.get_course_array(arr2);
    for (int i = 0; i < c_i; i++)
    {
        if (i == c_i - 1)
        {
            cout << "    Course's Name: " << arr2[i].get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO UPDATE COURSE REGISTRATION OF SPECIFIC INDEX
void interface::i_f_update_course_reg()
{
    int t_i, c_i;
    int n = 0;
    int number = p.get_teacher_count();
    int numb = p.get_course_count();
    cout << "Enter the Position from which You want to Update the Course Registration: " << endl;
    cin >> n;
    int num = p.get_course_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exists: " << endl << endl;
        getch();
        i_f_update_course_reg();
    }
    else
    {
        cout << endl << "Enter the New Teacher's Index, whom You want to Assign the Course: " << endl;
        cin >> t_i;
        if(t_i > number || t_i <= 0)
        {
            cout << "Available Teachers Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the New Teacher's Index, whom You want to Assign the Course: " << endl;
            cin >> t_i;
        }
        cout << "Enter the New Course's Index, that You wnat to Assign: " << endl;
        cin >> c_i;
        if(c_i > numb || c_i <= 0)
        {
            cout << "Available Courses Count: " << numb << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the New Course's Index, that You wnat to Assign: " << endl;
            cin >> c_i;
        }
        course_reg cr(t_i, c_i);
        p.update_course_reg(n, cr);
        cout << endl << "COURSE REGISTRATION UPDATED SUCCESSFULLY" << endl << endl << endl;

        teacher arr1[ARR_SIZE];
        p.get_teacher_array(arr1);
        for (int i = 0; i < t_i; i++)
        {
            if (i == t_i - 1)
            {
                cout << "    Teacher's Name: " << arr1[i].get_name() << endl;
                cout << "    Teacher's Age: " << arr1[i].get_age() << endl;
                cout << "    Teacher's Qualification: " << arr1[i].get_qualification() << endl;
                cout << "    Teacher's Specialization: " << arr1[i].get_spec() << endl;
            }
        }
        course arr2[ARR_SIZE];
        p.get_course_array(arr2);
        for (int i = 0; i < c_i; i++)
        {
            if (i == c_i - 1)
            {
                cout << "    Course's Name: " << arr2[i].get_name() << endl;
                cout << "-----------------------------------------------" << endl  << endl;
            }
        }
    }
    getch();
}
// FUNCTION TO ADD LIST OF COURSE REGISTRATIONS
void interface::i_f_creat_course_reg_list()
{
    int n = p.get_course_count();
    course arr[ARR_SIZE];
    p.get_course_array(arr);
    if (n == 0)
    {
        cout << "No Course Present in the List, First Go Back and Add Course" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ".  Course's Name: " << arr[i].get_name() << endl;
            cout << "    Course's Code: " << arr[i].get_course_code() << endl;
            cout << "    Course's Department: " << arr[i].get_dep() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int number = p.get_teacher_count();
    teacher array[ARR_SIZE];
    p.get_teacher_array(array);
    if (number == 0)
    {
        cout << "No Teacher Present in the List, First Go Back and Add Teacher" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << ".  Teacher's Name: " << array[i].get_name() << endl;
            cout << "    Teacher's Age: " << array[i].get_age() << endl;
            cout << "    Teacher's Qualification: " << array[i].get_qualification() << endl;
            cout << "    Teacher's Specialization: " << array[i].get_spec() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int num;
    cout << "Enter How many Course Registrations You want to Add: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl << "Enter the Credentials of Course Registration " << i + 1 << endl << endl;
        int t_i, c_i;
        cout << "Enter the Teacher's Index, whom You want to Assign the Course: " << endl;
        cin >> t_i;
        if(t_i > number || t_i <= 0)
        {
            cout << "Available Teachers Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the Teacher's Index, whom You want to Assign the Course: " << endl;
            cin >> t_i;
        }
        cout << "Enter the Course's Index, that You wnat to Assign: " << endl;
        cin >> c_i;
        if(c_i > n || c_i <= 0)
        {
            cout << "Available Courses Count: " << n << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the Course's Index, that You wnat to Assign: " << endl;
            cin >> c_i;
        }
        course_reg c(t_i, c_i);
        p.add_course_reg(c);

        teacher arr1[ARR_SIZE];
        p.get_teacher_array(arr1);
        for (int i = 0; i < t_i; i++)
        {
            if (i == t_i - 1)
            {
                cout << "    Teacher's Name: " << arr1[i].get_name() << endl;
                cout << "    Teacher's Age: " << arr1[i].get_age() << endl;
                cout << "    Teacher's Qualification: " << arr1[i].get_qualification() << endl;
                cout << "    Teacher's Specialization: " << arr1[i].get_spec() << endl;
            }
        }
        course arr2[ARR_SIZE];
        p.get_course_array(arr2);
        for (int i = 0; i < c_i; i++)
        {
            if (i == c_i - 1)
            {
                cout << "    Course's Name: " << arr2[i].get_name() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
        getch();
    }
    cout << endl << num << " COURSE REGISTRATIONS ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO PRINT LIST OF ALREADY PRESENT COURSE REGISTRATIONS
void interface::i_f_print_course_reg_list()
{
    int num = p.get_course_reg_count();
    course_reg arr[ARR_SIZE];
    p.get_course_reg_array(arr);
    if (num == 0)
    {
        cout << "No Course Registration Present in the List, First Add Course Registration" << endl << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            int t_i = arr[i].get_teacher_i();
            teacher t = p.get_teacher(t_i);
            int c_i = arr[i].get_course_i();
            course c = p.get_course(c_i);
            cout << i + 1 << ".  Teacher's Name: " << t.get_name() << endl;
            cout << "    Course's Name: " << c.get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO DELETE COURSE REGISTRATION OF SPECIFIC INDEX
void interface::i_f_delete_course_reg()
{
    int n = 0;
    cout << "Enter the Position from which You want to Delete the Course Registration: " << endl;
    cin >> n;
    int num = p.get_course_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_delete_course_reg();
    }
    else
    {
        p.delete_course_reg(n);
        cout << endl << "COURSE REGISTRATION DELETED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO GET COURSE REGISTRATION AT SPECIFIC INDEX
void interface::i_f_get_course_reg()
{
    int n;
    course_reg arr[ARR_SIZE];
    p.get_course_reg_array(arr);
    cout << "Enter the Position of Course Registration in the List that You want to Get: " << endl;
    cin >> n;
    int num = p.get_course_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_get_course_reg();
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                int t_i = arr[i].get_teacher_i();
                teacher t = p.get_teacher(t_i);
                int c_i = arr[i].get_course_i();
                course c = p.get_course(c_i);
                cout << endl << i + 1 << ".  Teacher's Name: " << t.get_name() << endl;
                cout << "    Course's Name: " << c.get_name() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}
// ----------------- STUDENT REGISTRATION PORTION ---------------
void interface::student_reg_menu()
{
    while(1){
    cout << "----------STUDENT REGISTRATION MENU----------" << endl << endl;
    cout << "What do You Want to Do, Select an Option from Below" << endl;
    cout << "1. Press 1 To Create Student Registrations List" << endl;
    cout << "2. Press 2 To Add Student Registration" << endl;
    cout << "3. Press 3 To Update Student Registration at an Index" << endl;
    cout << "4. Press 4 To Print List of Student Registrations" << endl;
    cout << "5. Press 5 To Delete Student Registration" << endl;
    cout << "6. Press 6 To Get Student Registration at an Index" << endl;
    cout << "7. Press 0 To Move Back to Main Menu" << endl;
    cout << "8. Press -1 to Exit" << endl;
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    cout << endl << endl;
    // SWITCH CASE STATEMENTS TO PERFORM DIFFERENT OPERATIONS
    switch (choice)
    {
    case 1:
    {
        i_f_creat_student_reg_list();
        break;
    }
    case 2:
    {
        i_f_add_student_reg();
        break;
    }
    case 3:
    {
        i_f_update_student_reg();
        break;
    }
    case 4:
    {
        i_f_print_student_reg_list();
        break;
    }
    case 5:
    {
        i_f_delete_student_reg();
        break;
    }
    case 6:
    {
        i_f_get_student_reg();
        break;
    }
    case 0:
    {
        return;
        break;
    }
    case -1:
    {
        cout << "Exiting the Program" << endl;
        exit(-1);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl << endl;
        break;
    }
    }
}
}
// FUNCTION TO ADD A STUDENT REGISTRATION
void interface::i_f_add_student_reg()
{
    int number = p.get_student_count();
    student array[ARR_SIZE];
    p.get_student_array(array);
    if (number == 0)
    {
        cout << "No Student Present in the List, First Go Back and Add Student" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << ".  Student's Name: " << array[i].get_name() << endl;
            cout << "    Student's Roll No: " << array[i].get_roll_no() << endl;
            cout << "    Student's Age: " << array[i].get_age() << endl;
            cout << "    Student's Gender: " << array[i].get_gender() << endl;
            cout << "    Student's Specialization: " << array[i].get_specialization() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int num = p.get_course_reg_count();
    course_reg arr[ARR_SIZE];
    p.get_course_reg_array(arr);
    if (num == 0)
    {
        cout << "No Course Registration Present in the List, First Go Back and Add Course Registration" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            int t_i = arr[i].get_teacher_i();
            teacher t = p.get_teacher(t_i);
            int c_i = arr[i].get_course_i();
            course c = p.get_course(c_i);
            cout << i + 1 << ".  Teacher's Name: " << t.get_name() << endl;
            cout << "    Course's Name: " << c.get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int s_i, cr_i;
    cout << "Enter the Student's Index, whom You want to Assign the Course: " << endl;
    cin >> s_i;
    if(s_i > number || s_i <= 0)
    {
        cout << "Available Students Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
        cout << "Re-Enter the Student's Index, whom You want to Assign the Course: " << endl;
        cin >> s_i;
    }
    cout << "Enter the Course Registration's Index, that You wnat to Assign: " << endl;
    cin >> cr_i;
    if(cr_i > num || cr_i <= 0)
    {
        cout << "Available Course Registrations Count: " << num << " and Index Should be 1 or High to Available Count" << endl << endl;
        cout << "Re-Enter the Course Registration's Index, that You wnat to Assign: " << endl;
        cin >> cr_i;
    }
    student_reg sr(s_i, cr_i);
    p.add_student_reg(sr);
    cout << endl << "STUDENT REGISTRATION ADDED SUCCESSFULLY" << endl << endl << endl;

    student arr1[ARR_SIZE];
    p.get_student_array(arr1);
    for (int i = 0; i < s_i; i++)
    {
        if (i == s_i - 1)
        {
            cout << i + 1 << ".  Student's Name: " << arr1[i].get_name() << endl;
            cout << "    Student's Roll No: " << arr1[i].get_roll_no() << endl;
            cout << "    Student's Age: " << arr1[i].get_age() << endl;
            cout << "    Student's Gender: " << arr1[i].get_gender() << endl;
            cout << "    Student's Specialization: " << arr1[i].get_specialization() << endl;
        }
    }
    course_reg arr2[ARR_SIZE];
    p.get_course_reg_array(arr2);
    for (int i = 0; i < cr_i; i++)
    {
        if (i == cr_i - 1)
        {
            int t_i = arr2[i].get_teacher_i();
            teacher t = p.get_teacher(t_i);
            int c_i = arr2[i].get_course_i();
            course c = p.get_course(c_i);
            cout << "    Assigned Course's Name: " << c.get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO UPDATE STUDENT REGISTRATION AT SPECIFIC INDEX
void interface::i_f_update_student_reg()
{
    int n = 0;
    int numb = p.get_course_reg_count();
    int number = p.get_student_count();
    cout << "Enter the Position from which You want to Update the Student Registration: " << endl;
    cin >> n;
    int num = p.get_student_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exists: " << endl << endl;
        getch();
        i_f_update_student_reg();
    }
    else
    {
        int s_i, cr_i;
        cout << endl << "Enter the New Student's Index, whom You want to Assign the Course: " << endl;
        cin >> s_i;
        if(s_i > number || s_i <= 0)
        {
            cout << "Available Students Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the New Student's Index, whom You want to Assign the Course: " << endl;
            cin >> s_i;
        }
        cout << "Enter the New Course Registration's Index, that You wnat to Assign: " << endl;
        cin >> cr_i;
        if(cr_i > numb || cr_i <= 0)
        {
            cout << "Available Course Registrations Count: " << numb << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the New Course Registration's Index, that You wnat to Assign: " << endl;
            cin >> cr_i;
        }
        student_reg sr(s_i, cr_i);
        p.update_student_reg(n, sr);
        cout << endl << "STUDENT REGISTRATION UPDATED SUCCESSFULLY" << endl << endl << endl;

        student arr1[ARR_SIZE];
        p.get_student_array(arr1);
        for (int i = 0; i < s_i; i++)
        {
            if (i == s_i - 1)
            {
                cout << i + 1 << ".  Student's Name: " << arr1[i].get_name() << endl;
                cout << "    Student's Roll No: " << arr1[i].get_roll_no() << endl;
                cout << "    Student's Age: " << arr1[i].get_age() << endl;
                cout << "    Student's Gender: " << arr1[i].get_gender() << endl;
                cout << "    Student's Specialization: " << arr1[i].get_specialization() << endl;
            }
        }
        course_reg arr2[ARR_SIZE];
        p.get_course_reg_array(arr2);
        for (int i = 0; i < cr_i; i++)
        {
            if (i == cr_i - 1)
            {
                int t_i = arr2[i].get_teacher_i();
                teacher t = p.get_teacher(t_i);
                int c_i = arr2[i].get_course_i();
                course c = p.get_course(c_i);
                cout << "    Assigned Course's Name: " << c.get_name() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}
// FUNCTION TO ADD LIST OF STUDENT REGISTRATIONS
void interface::i_f_creat_student_reg_list()
{
    int number = p.get_student_count();
    student array[ARR_SIZE];
    p.get_student_array(array);
    if (number == 0)
    {
        cout << "No Student Present in the List, First Go Back and Add Student" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << ".  Student's Name: " << array[i].get_name() << endl;
            cout << "    Student's Roll No: " << array[i].get_roll_no() << endl;
            cout << "    Student's Age: " << array[i].get_age() << endl;
            cout << "    Student's Gender: " << array[i].get_gender() << endl;
            cout << "    Student's Specialization: " << array[i].get_specialization() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int num = p.get_course_reg_count();
    course_reg arr[ARR_SIZE];
    p.get_course_reg_array(arr);
    if (num == 0)
    {
        cout << "No Course Registration Present in the List, First Go Back and Add Course Registration" << endl << endl;
        return;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            int t_i = arr[i].get_teacher_i();
            teacher t = p.get_teacher(t_i);
            int c_i = arr[i].get_course_i();
            course c = p.get_course(c_i);
            cout << i + 1 << ".  Teacher's Name: " << t.get_name() << endl;
            cout << "    Course's Name: " << c.get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    int n;
    cout << "Enter How many Student Registrations You want to Add: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s_i, cr_i;
        cout << endl << "Enter the Credentials of Student Registration " << i + 1 << endl << endl;
        cout << "Enter the Student's Index, whom You want to Assign the Course: " << endl;
        cin >> s_i;
        if(s_i > number || s_i <= 0)
        {
            cout << "Available Students Count: " << number << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the Student's Index, whom You want to Assign the Course: " << endl;
            cin >> s_i;
        }
        cout << "Enter the Course Registration's Index, that You wnat to Assign: " << endl;
        cin >> cr_i;
        if(cr_i > num || cr_i <= 0)
        {
            cout << "Available Course Registrations Count: " << num << " and Index Should be 1 or High to Available Count" << endl << endl;
            cout << "Re-Enter the Course Registration's Index, that You wnat to Assign: " << endl;
            cin >> cr_i;
        }
        student_reg sr(s_i, cr_i);
        p.add_student_reg(sr);

        student arr1[ARR_SIZE];
        p.get_student_array(arr1);
        for (int i = 0; i < s_i; i++)
        {
            if (i == s_i - 1)
            {
                cout << i + 1 << ".  Student's Name: " << arr1[i].get_name() << endl;
                cout << "    Student's Roll No: " << arr1[i].get_roll_no() << endl;
                cout << "    Student's Age: " << arr1[i].get_age() << endl;
                cout << "    Student's Gender: " << arr1[i].get_gender() << endl;
                cout << "    Student's Specialization: " << arr1[i].get_specialization() << endl;
            }
        }
        course_reg arr2[ARR_SIZE];
        p.get_course_reg_array(arr2);
        for (int i = 0; i < cr_i; i++)
        {
            if (i == cr_i - 1)
            {
                int t_i = arr2[i].get_teacher_i();
                teacher t = p.get_teacher(t_i);
                int c_i = arr2[i].get_course_i();
                course c = p.get_course(c_i);
                cout << "    Assigned Course's Name: " << c.get_name() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
        getch();
    }
    cout << endl << n << " STUDENT REGISTRATIONS ADDED SUCCESSFULLY" << endl << endl << endl;
    getch();
}
// FUNCTION TO PRINT LIST OF ALREADY PRESENT STUDENT REGISTRATIONS
void interface::i_f_print_student_reg_list()
{
    int num = p.get_student_reg_count();
    student_reg arr[ARR_SIZE];
    p.get_student_reg_array(arr);
    if (num == 0)
    {
        cout << "No Student Registration Present in the List, First Add Student Registration" << endl << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            int s_i = arr[i].get_student_i();
            student s = p.get_student(s_i);
            int cr_i = arr[i].get_course_reg_i();
            course_reg cr = p.get_course_reg(cr_i);
            int c_i = cr.get_course_i();
            course c = p.get_course(c_i);
            cout << i + 1 << ".  Student's Name: " << s.get_name() << endl;
            cout << "    Assigned Course's Name: " << c.get_name() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    getch();
}
// FUNCTION TO DELETE STUDENT REGISTRATION OF SPECIFIC INDEX
void interface::i_f_delete_student_reg()
{
    int n = 0;
    cout << "Enter the Position from which You want to Delete the Student Registration: " << endl;
    cin >> n;
    int num = p.get_student_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_delete_student_reg();
    }
    else
    {
        p.delete_student_reg(n);
        cout << endl << "STUDENT REGISTRATION DELETED SUCCESSFULLY" << endl << endl << endl;
    }
    getch();
}
// FUNCTION TO GET STUDENT REGISTRATION AT SPECIFIC INDEX
void interface::i_f_get_student_reg()
{
    int n;
    student_reg arr[ARR_SIZE];
    p.get_student_reg_array(arr);
    cout << "Enter the Position of Student Registration in the List that You want to Get: " << endl;
    cin >> n;
    int num = p.get_student_reg_count();
    if (n > num || n <= 0)
    {
        cout << endl << "Index don't Exist: " << endl << endl;
        getch();
        i_f_get_student_reg();
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                int s_i = arr[i].get_student_i();
                student s = p.get_student(s_i);
                int cr_i = arr[i].get_course_reg_i();
                course_reg cr = p.get_course_reg(cr_i);
                int c_i = cr.get_course_i();
                course c = p.get_course(c_i);
                cout << endl << i + 1 << ".  Student's Name: " << s.get_name() << endl;
                cout << "    Assigned Course's Name: " << c.get_name() << endl;
                cout << "-----------------------------------------------" << endl << endl;
            }
        }
    }
    getch();
}