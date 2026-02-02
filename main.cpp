#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 10;
    int scores[SIZE] = { 85, 72, 60, 94, 68, 77, 88, 91, 54, 70 };

    int sum = 0;
    int passedCount = 0;
    int highest = scores[0];
    int lowest = scores[0];

    for (int i = 0; i < SIZE; i++) {
        sum += scores[i];

        if (scores[i] >= 70) {
            passedCount++;
        }

        if (scores[i] > highest) {
            highest = scores[i];
        }

        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    double average = static_cast<double>(sum) / SIZE;

    cout << "Class Summary Report" << endl;
    cout << "---------------------" << endl;
    cout << "Number of students: " << SIZE << endl;
    cout << fixed << setprecision(2);
    cout << "Average score: " << average << endl;
    cout << "Students who passed (>= 70): " << passedCount << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;

    return 0;
}
