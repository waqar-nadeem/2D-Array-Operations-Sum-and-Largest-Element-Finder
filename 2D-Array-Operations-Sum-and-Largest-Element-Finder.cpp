#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int array[100][100];
    int sum = 0;
    int largest;

    cout << "\nEnter elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
            sum += array[i][j];

            if (i == 0 && j == 0)
                largest = array[i][j];
            else if (array[i][j] > largest)
                largest = array[i][j];
        }
    }

    cout << "\nSum of all elements: " << sum << endl;
    cout << "Largest element in the array: " << largest << endl;

    return 0;
}
