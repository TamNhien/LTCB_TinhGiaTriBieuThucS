#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double S = 0.0;

    cout << "Nhap so nguyen duong n : ";
    cin >> n;

    for (int i = 1; i <= n; ++i) S += 1.0 / (i * i * i);

    cout << fixed << setprecision(5) << "Gia tri cua bieu thuc S la : " << S << endl;

    return 0;
}
