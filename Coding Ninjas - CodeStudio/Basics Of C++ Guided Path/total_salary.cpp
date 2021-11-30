#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int basic;
    char grade;
    cin >> basic >> grade;
    int totalSalary = basic + round((0.2 * basic) + (0.5 * basic) - (0.11 * basic));
    switch(grade) {
        case 'A':
            totalSalary += 1700;
            break;
        case 'B':
            totalSalary += 1500;
            break;
        default:
            totalSalary += 1300;
    }
    cout << totalSalary << endl;
    return 0;
}