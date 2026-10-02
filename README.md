# student-performance-analyzer-cpp
A beginner-friendly C++ project for analyzing student marks, grades, and performance

# Student Performance Analyzer

A terminal-based **C++ application** designed to systematically input and track student academic metrics. This project demonstrates foundational concepts in procedural programming, console data streams, and dynamic data storage.

### Core Features
* **Dynamic Input Handling:** Processes a user-specified number of student records during runtime.
* **Vector-Based Storage:** Utilizes the C++ Standard Template Library (`std::vector`) for safe memory allocation.
* **Formatted Console Output:** Uses structured text barriers to create a clean command-line user interface.

### Tech Stack
* **Language:** C++
* **Libraries:** Standard Template Library (`iostream`, `vector`, `iomanip`, `string`)

### Source Code (`main.cpp`)

```cpp
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    
    cout << "===========================================\n";
    cout << "      STUDENT PERFORMANCE ANALYZER\n";
    cout << "===========================================\n\n";
    
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
    
    cout << "\n\n";
    return 0;
}
```
