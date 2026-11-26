#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>

using namespace std;

void vectorDemo() {
    vector<int> marks = {85, 92, 78, 64, 88};
    marks.push_back(95);
    
    cout << "Student Marks: ";
    for (int m : marks) {
        cout << m << " ";
    }
    cout << "\nMarks of Student 3: " << marks[2] << "\n\n";
}

void listDemo() {
    list<string> cities = {"Pune", "Mumbai", "Nashik"};
    cities.push_front("Chhatrapati Sambhajinagar");
    cities.push_back("Nagpur");
    
    cout << "Examination Centers: ";
    for (const string& city : cities) {
        cout << city << " -> ";
    }
    cout << "END\n\n";
}

void setDemo() {
    set<int> prnList = {72105, 72101, 72103, 72101, 72108, 72103};
    prnList.insert(72102);
    
    cout << "Sorted Unique PRN List: ";
    for (int prn : prnList) {
        cout << prn << " ";
    }
    cout << "\n\n";
}

void mapDemo() {
    map<int, string> studentRecord;
    studentRecord[3101] = "Parashar Bam";
    studentRecord[3102] = "Aarambha Deshmukh";
    studentRecord[3103] = "Ayush Bhamare";
    studentRecord[3104] = "Sughosh Dharasurkar";
    
    cout << "Roll No -> Student Name Mapping:\n";
    for (const auto& entry : studentRecord) {
        cout << "Roll No: " << entry.first << " | Name: " << entry.second << "\n";
    }
    cout << "\n";
}

int main() {
    vectorDemo();
    listDemo();
    setDemo();
    mapDemo();
    return 0;
}
