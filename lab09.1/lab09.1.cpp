
#include <iostream>
#include <iomanip>
#include <cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "Enter x_start: ";
    cin >> x_p;

    cout << "Enter x_end: ";
    cin >> x_k;

    cout << "Enter dx: ";
    cin >> dx;

    cout << "Enter eps: ";
    cin >> e;

    cout << endl;

    cout << "/n--------------------------------------------------------\n";
    cout << setw(10) << "x"
        << setw(15) << "cos(x)"
        << setw(15) << "Sum"
        << setw(15) << "N" << endl;
    cout << "/n--------------------------------------------------------\n";

    x = x_p;

    while (x <= x_k) {
        sum();

        cout << fixed << setprecision(6)
            << setw(10) << x
            << setw(15) << cos(x)
            << setw(15) << s
            << setw(15) << n << endl;

        x += dx;
    }

    return 0;
}
