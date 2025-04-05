/*

Дадена е квадратна матрица А с реални числа с N реда и N колони (N≤10).
Матрицата да е дефинирана като двумерен масив в главната функция. Да се
съставят следните функции:

    a) Функция за въвеждане на размерността на матрицата и стойностите за
    елементите й;

    b) Функция, която намира и извежда на екрана стойността и индексите на
    най-големия от елементите, намиращи се на главния диагонал на
    матрицата.

*/

#include <iostream>
using namespace std;

void inputMatrix(double matrix[][10], int &n) {
    do {
        cout << "Enter the dimension of the square matrix (1-10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void findLargestDiagonalElement(double matrix[][10], int n) {
    double maxElement = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < n; i++) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
            maxRow = i;
            maxCol = i;
        }
    }

    cout << "The largest element on the main diagonal is: " << maxElement << endl;
    cout << "Its indices are: [" << maxRow << "][" << maxCol << "]" << endl;
}

int main() {
    double A[10][10];
    int N;

    inputMatrix(A, N);

    cout << "\nThe entered matrix is:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n";
    findLargestDiagonalElement(A, N);

    return 0;
}
