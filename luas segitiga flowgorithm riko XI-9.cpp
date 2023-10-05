#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double luas;
    int alas;
    int tinggi;
    
	cout << "Masukkan tinggi : ";
    cin >> tinggi;
    cout << "Masukkan alas : ";
    cin >> alas;
    luas = alas * tinggi * 0.5;
    cout << "Jadi :";
    cout << luas << endl;
    return 0;
}

