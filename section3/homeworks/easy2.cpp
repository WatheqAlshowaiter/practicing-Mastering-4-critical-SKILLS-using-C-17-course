#include <iostream>
using namespace std;

int main()
{
    string name1;
    string id1;    // Although looks as integer, no guarantee (make be big or has letters)
    double grade1; // Although looks as integer, but grade could be 30.5

    string name2;
    string id2;
    double grade2;

    cout << "What is student 1 name: ";
    cin >> name1;
    cout << "\nHis id: ";
    cin >> id1;
    cout << "\nHis math exam grade: ";
    cin >> grade1;

    cout << "\nWhat is student 2 name: ";
    cin >> name2;
    cout << "\nHis id: ";
    cin >> id2;
    cout << "\nHis math exam grade: ";
    cin >> grade2;

    cout << "\nStudents grades in math\n";
    cout << name1 << " "
         << "with id (" << id1 << ") "
         << " got grade: " << grade1 << "\n";

    cout << name2 << " with id (" << id2 << ") got grade: " << grade2 << "\n";

    cout << "Average grade is " << (grade1 + grade2) / 2.0;

    return 0;
}