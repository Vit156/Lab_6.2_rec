#include <iostream>
#include <iomanip>  
#include <time.h>   

using namespace std;

void CreateRec(int a[], const int size, const int Low, const int High, int i);
void PrintRec(int a[], const int size, int i);
void MinMaxRec(int a[], const int size, int& minResult, int& maxResult, int i);

int main() {

    const int N = 24;
    const int LOW = -10;
    const int HIGH = 14;

    int a[N];

    srand((unsigned)time(NULL));

    CreateRec(a, N, LOW, HIGH, 0); 

    cout << "Initial array (Recursive):" << endl << "------------------------------------------------------------------------------------------------" << endl;
    PrintRec(a, N, 0); 
    cout << "------------------------------------------------------------------------------------------------" << endl << endl;

    int min_val = a[0];
    int max_val = a[0];

    MinMaxRec(a, N, min_val, max_val, 1);

    double avg = (min_val + max_val) / 2.0;

    cout << "Min element = " << min_val << endl;
    cout << "" << endl;
    cout << "Max element = " << max_val << endl;
    cout << "" << endl;
    cout << "Average of Min and Max = " << avg << endl;

    return 0;
}

void CreateRec(int a[], const int size, const int Low, const int High, int i) {

    if (i >= size) {
        return;
    }

    a[i] = Low + rand() % (High - Low + 1);

    CreateRec(a, size, Low, High, i + 1);
}

void PrintRec(int a[], const int size, int i) {

    if (i >= size) {
        cout << endl;
        return;
    }

    cout << setw(4) << a[i];

    PrintRec(a, size, i + 1);
}

void MinMaxRec(int a[], const int size, int& minResult, int& maxResult, int i) {

    if (i >= size) {
        return;
    }

    if (a[i] > maxResult) {
        maxResult = a[i];
    }
    if (a[i] < minResult) {
        minResult = a[i];
    }
    MinMaxRec(a, size, minResult, maxResult, i + 1);
}