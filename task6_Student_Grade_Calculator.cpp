#include <iostream>
using namespace std;
int main()
{
    int numSubjects;
    double totalGrade = 0;

    cout << "enter the number of subjects";
    cin >> numSubjects;

    // input grade for the each subjects
    for (int i = 0; i < numSubjects; i++)
    {

        double grade;
        cout << "enter the grade for subject" << i + 1 << " :";
        cin >> grade;

        totalGrade += grade;
    }

    double averageGrade = totalGrade / numSubjects;

    cout << "Average Grade :" << averageGrade << endl;
    return 0;
}
