#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b, media;
    float p1, p2;
    p1 = 3.5;
    p2 = 7.5;
    cin >> a;
    cin >> b;
    media = ((a*p1) + (b*p2)) / (p1 + p2);
    cout << fixed;
    cout << setprecision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}