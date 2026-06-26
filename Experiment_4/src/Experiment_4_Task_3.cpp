#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        string id;
        double grade;
    
    public:
        Student() : grade(0.0) {}

        Student(string n, string i, double g) : name(n), id(i), grade(g)
        {
            setName(n);
            setGrade(g);
            setId(i);
        }

        void setName(string n)
        {
            if (!n.empty())
            {
                name = n;
            }
            else
            {
                cout << "Warning: Invalid name value \"" << n << "\" rejected. Name remains \"" << name << "\"." << endl;
            }
        }

        void setGrade(double g)
        {
            if (g >= 0.0 && g <= 100.0)
            {
                grade = g;
            }
            else
            {
                cout << "Warning: Invalid grade value \"" << g << "\" rejected. Grade remains \"" << grade << "\"." << endl;
            }
        }

        void setId(string i)
        {
            if (!i.empty())
            {
                id = i;
            }
            else
            {
                cout << "Warning: Invalid ID value \"" << i << "\" rejected. ID remains \"" << id << "\"." << endl;
            }
        }

        string getName() const
        {
            return name; 
        }

        string getId() const
        {
            return id;
        }

        double getGrade() const
        {
            return grade;
        }

        void displayInfo() const
        {
            cout << "Name: " << name << ", ID: " << id << ", Grade: " << fixed << setprecision(2) << grade << endl;
        }
};

int main()
{
    Student students[3] =
    {
        Student("Alice", "2024001", 95),
        Student("Bob", "2024002", 82.5),
        Student("Cindy", "2024003", 76)
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ": ";
        students[i].displayInfo();
    }

    return 0;
}