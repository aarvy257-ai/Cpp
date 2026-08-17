#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes[] = {2000, 500, 200, 100, 50, 20, 10};
    int countNotes[7] = {0};

    for (int i = 0; i < 7; i++) {
        if (amount >= notes[i]) {
            countNotes[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    cout << "\nBreakdown of notes:\n";
    int totalNotes = 0;
    for (int i = 0; i < 7; i++) {
        if (countNotes[i] > 0) {
            cout << notes[i] << " : " << countNotes[i] << endl;
            totalNotes += countNotes[i];
        }
    }

    cout << "Total number of notes = " << totalNotes ;

    return 0;
}
