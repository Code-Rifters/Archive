#include <iostream>
using namespace std;
class team
{
private:
    int age;
    string name;
    int experence;

public:
    team()
    {
        cout << "the member entered" << endl;
    } // constructor
    ~team()
    {
        cout << "the member leaved" << endl;
    } // destructor

    void set_age(int a)
    {
        age = a;
    } // set element
    int get_age()
    {
        return age;
    } // get element

    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }

    void set_experence(int ex)
    {
        experence = ex;
    }
    int get_experence()
    {
        return experence;
    }

    int average()
    {
        return experence;
    }
};
