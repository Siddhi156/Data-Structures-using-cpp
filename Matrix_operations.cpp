#include <iostream>
using namespace std;

int main() {
    int r, c, ch;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix A:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter matrix B:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    do {
        cout << "\n1.Add  2.Sub  3.Mul  4.Exit\nChoice: ";
        cin >> ch;

        if (ch == 1 || ch == 2) {
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    C[i][j] = (ch == 1) ? A[i][j] + B[i][j] : A[i][j] - B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }

        else if (ch == 3) {
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    C[i][j] = 0;
                    for (int k = 0; k < c; k++)
                        C[i][j] += A[i][k] * B[k][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }

    } while (ch != 4);

    return 0;
}
