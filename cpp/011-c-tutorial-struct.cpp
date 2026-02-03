#include <iostream>   // Provides cin and cout
#include <string>     // Provides string class

using namespace std;

/*
    Structure to store student details
*/
struct Student {
    int age;            // Stores age of the student
    string first_name;  // Stores first name of the student
    string last_name;   // Stores last name of the student
    int standard;       // Stores standard (class) of the student
};

int main() {
    Student st;   // Create a Student object

    // Read student details from input
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;

    // Print student details in required format
    cout << st.age << " "
         << st.first_name << " "
         << st.last_name << " "
         << st.standard;

    return 0;     // End of program
}
