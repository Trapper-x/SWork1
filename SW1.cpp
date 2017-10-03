#include <iostream>
using namespace std;
int main(){
    // 12
    unsigned int n = 0;
    cout << "enter variable n > 9: ";
    cin >> n;
    cout << "number of units is " << n % 10 << endl;
    cout << "number of tens is " << n / 10 << endl;
    // 13
    unsigned int N = 0;
    cout << "enter variable N > 99: ";
    cin >> N;
    cout << "number of tens is " << (N - (N / 100) * 100) / 10 << endl;
    cout << "number of hundreds is " << N / 100 << endl;
    return 0;
}
