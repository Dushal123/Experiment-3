// Dushal kella
// 24070123053

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "Point lies in 1st quadrant";
    else if (x < 0 && y > 0)
        cout << "Point lies in 2nd quadrant";
    else if (x < 0 && y < 0)
        cout << "Point lies in 3rd quadrant";
    else if (x > 0 && y < 0)
        cout << "Point lies in 4th quadrant";
    else if (x == 0 && y == 0)
        cout << "Point lies at the origin";
    else if (x == 0)
        cout << "Point lies on the Y-axis";
    else if (y == 0)
        cout << "Point lies on the X-axis";

    return 0;
}

// OUTPUT
// Enter x-coordinate: 11
// Enter y-coordinate: 11
// Point lies in 1st quadrant
// Enter x-coordinate: 11
// Enter y-coordinate: 0
// Point lies on the X-axis
// Enter x-coordinate: 0
// Enter y-coordinate: 0
// Point lies at the origin
