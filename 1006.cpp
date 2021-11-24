#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c, media;
    int p1, p2, p3;
    p1 = 2;
    p2 = 3;
    p3 = 5;
    cin >> a;
    cin >> b;
    cin >> c;
    media = ((a*p1) + (b*p2)+ (c*p3)) / (p1 + p2 + p3);
    cout << fixed;
    cout << setprecision(1);
    cout << "MEDIA = " << media << endl;

    return 0;
}