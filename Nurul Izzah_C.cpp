#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    
    cout << "Input number A and B : ";
    // stores two int numbers in A and B respectively in the same line
    cin >> a >> b;
     
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    int bagi = a / b;
    int mod = a % b;
    cout << "A + B : " << tambah << endl;
    cout << "A - B : " << kurang << endl;
    cout << "A * B : " << kali << endl;
    cout << "A / B : " << bagi << endl;
    cout << "A % B : " << mod << endl;
}
