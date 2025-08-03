#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "\nLogical Operators:" << endl;
    cout << "(a > 0 && b > 0): " << ((a > 0) && (b > 0)) << endl;
    cout << "(a < 0 || b > 0): " << ((a < 0) || (b > 0)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    cout << "\nAssignment Operators:" << endl;
    int c = a;
    cout << "c = " << c << endl;
    c += b;
    cout << "c += b: " << c << endl;
    c -= b;
    cout << "c -= b: " << c << endl;
    c *= b;
    cout << "c *= b: " << c << endl;
    c /= b;
    cout << "c /= b: " << c << endl;
    c %= b;
    cout << "c %= b: " << c << endl;

    cout << "\nIncrement/Decrement Operators:" << endl;
    int x = 5;
    cout << "x = " << x << endl;
    cout << "x++ = " << x++ << endl;
    cout << "Now x = " << x << endl;
    cout << "++x = " << ++x << endl;
    cout << "x-- = " << x-- << endl;
    cout << "Now x = " << x << endl;
    cout << "--x = " << --x << endl;

    cout << "\nConditional Operator:" << endl;
    int max = (a > b) ? a : b;
    cout << "Max of a and b is: " << max << endl;

    return 0;
}
Output:
Arithmetic Operators:
a + b = 15
a - b = 5
a * b = 50
a / b = 2
a % b = 0

Relational Operators:
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0

Logical Operators:
(a > 0 && b > 0): 1
(a < 0 || b > 0): 1
!(a == b): 1

Assignment Operators:
c = 10
c += b: 15
c -= b: 10
c *= b: 50
c /= b: 10
c %= b: 0

Increment/Decrement Operators:
x = 5
x++ = 5
Now x = 6
++x = 7
Now x = 6
++x = 7
++x = 7
x-- = 7
Now x = 6
--x = 5
Conditional Operator:
Max of a and b is: 10

