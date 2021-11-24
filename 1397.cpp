#include <iostream>
using namespace std;
int main() {
    int N;
    int A, B;
    int n;
    int pa, pb;
    while (cin >> N && N!=0) {
        pa = 0;
        pb = 0;
        for (n=0; n<N; n++) {
            cin >> A >> B;
            if (A > B) {
                pa = pa + 1;
            } else {
                if (A < B) {
                    pb++;
                }
            }
        }
        cout << pa << " " << pb << endl;
    }
    return 0;
}