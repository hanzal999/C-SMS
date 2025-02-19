#include<string>
#include<cstring>

using namespace std;

class teacher
{
    private:   // PRIVATE MEMBERS
    string name;
    string specialization;
    float age;
    string qualification;

    public:      // CONSTRUCTORS AND DESTRUCTOR
    teacher(string,string,float,string);
    teacher();
    teacher(teacher &t);
    ~teacher();

    // GETTERS AND SETTERS
    void set_age(float);
    float get_age();
    void set_qualification(string);
    string get_qualification();
    void set_name(string);
    string get_name();
    void set_spec(string);
    string get_spec();
};