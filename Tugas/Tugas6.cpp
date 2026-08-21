#include <iostream>
using namespace std;

int main() {
    int nilai = 95;
    switch (nilai / 10) {
        case 9:
            cout << "Nilai sempurna" << endl;
            break;
        case 8:
            cout << "kamu dapat B" << endl;
            break;
        case 7:
            cout << "kamu dapat C" << endl;
            break;
        case 6:
            cout << "kamu dapat D" << endl;
            break;
        default:
            cout << "kamu dapat E" << endl; 
    }
    return 0;
}
