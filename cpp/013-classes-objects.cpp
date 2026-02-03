#include <iostream>   // Provides cin and cout for input and output
#include <sstream>    // Provides stringstream for building strings
#include <string>     // Provides string class

using namespace std;

/*
    Class Student to store and manage student details
*/
class Student {
private:
    int age;               // Stores age of the student
    int standard;          // Stores standard (class) of the student
    string first_name;     // Stores first name
    string last_name;      // Stores last name

public:
    // Setter for age
    void set_age(int age) {
        this->age = age;
    }

    // Getter for age
    int get_age() {
        return age;
    }

    // Setter for standard
    void set_standard(int standard) {
        this->standard = standard;
    }

    // Getter for standard
    int get_standard() {
        return standard;
    }

    // Setter for first name
    void set_first_name(string first_name) {
        this->first_name = first_name;
    }

    // Getter for first name
    string get_first_name() {
        return first_name;
    }

    // Setter for last name
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }

    // Getter for last name
    string get_last_name() {
        return last_name;
    }

    // Returns student details as a single formatted string
    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    // Read input values
    cin >> age >> first_name >> last_name >> standard;

    // Create Student object
    Student st;

    // Set values using setter functions
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    // Output values using getter functions
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;   // End of program
}
