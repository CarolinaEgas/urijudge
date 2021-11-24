#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double area, pi, raio;    
    pi = 3.14159;
    cin >> raio;
    area = pi*(raio*raio);
    cout << setprecision(4) << fixed;
    cout << "A=" << area <<endl;
    return 0;
}