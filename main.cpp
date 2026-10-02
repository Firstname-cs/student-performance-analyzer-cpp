#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "====================================\n";
    cout << "     STUDENT PERFORMANCE ANALYZER\n";
    cout << "====================================\n\n";

    cout << "Enter number of students: ";
    cin >> n;

    vector<string> name(n);
    vector<float> marks(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> name[i];

        cout << "Enter marks (out of 100): ";
        cin >> marks[i];
    }

    cout << "\n\n========== PERFORMANCE REPORT ==========\n";

    float total = 0;
    int highestIndex = 0;

    for (int i = 0; i < n; i++) {
        total += marks[i];

        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }

        string grade;

        if (marks[i] >= 90)
            grade = "A+";
        else if (marks[i] >= 80)
            grade = "A";
        else if (marks[i] >= 70)
            grade = "B";
        else if (marks[i] >= 60)
            grade = "C";
        else if (marks[i] >= 50)
            grade = "D";
        else
            grade = "F";

        cout << name[i]
             << " | Marks: " << fixed << setprecision(1) << marks[i]
             << " | Grade: " << grade << endl;
    }

    float average = total / n;

    cout << "\n----------------------------------------\n";
    cout << "Class Average: " << fixed << setprecision(2)
         << average << endl;

    cout << "Top Performer: " << name[highestIndex]
         << " (" << marks[highestIndex] << " marks)" << endl;

    cout << "========================================\n";

    return 0;
}
