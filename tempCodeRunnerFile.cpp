#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string grade;
    cout << "Press Enter 3 times to reveal your future. \n";
    for (int i=0;i<3;i++) {
        cin.get();
    }
    srand(time(0));
    int o = rand()%9;
    switch(o) {
        case 0:
            grade = "A";
            break;
        case 1:
            grade = "B+";
            break;
        case 2:
            grade = "B";
            break;
        case 3:
            grade = "C+";
            break;
        case 4:
            grade = "C";
            break;
        case 5:
            grade = "D+";
            break;
        case 6:
            grade = "D";
            break;
        case 7:
            grade = "F";
            break;
        default:
            grade = "w";
            break;
    }
    cout << "You will get " << grade << " in this 261102.";
    return 0;
}