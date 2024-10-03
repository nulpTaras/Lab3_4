#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R;
    double x;
    double y;
    cout << "Введіть значення R: ";
    cin >> R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    
    if (
        
        (x >= -R && x <= 0 && y >= 0 && y <= R) ||
        (x >= 0 && x <= R && y >= 0 && y <= R) ||
        (x >= -R && x <= 0 && y >= -R && y <= 0) ||
        (x >= 0 && x <= R && y >= -R && y <= 0) ||
        (pow(x + R, 2) + pow(y, 2) <= pow(R, 2) && x <= 0 && y >= 0) ||
        (pow(x - R, 2) + pow(y, 2) <= pow(R, 2) && x >= 0 && y <= 0)) {
        
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

