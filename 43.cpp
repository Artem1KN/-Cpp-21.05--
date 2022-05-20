#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;
    long long maxPow = pow(3, n / 3);

    if (n % 3 == 1)
        maxPow = maxPow * 4 / 3;

    if (n % 3 == 2)
        maxPow = maxPow * 2;

    fout << maxPow;

    return 0;
}