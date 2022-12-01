// Якубовський Владислав, РІ-11, АП, ЛР 13.1
#include <iostream>
#include <math.h>
#include <iomanip>

#include "var.h"
#include "reccurent.h"
#include "summarize.h"

using namespace std;

using namespace namespaceVar;
using namespace namespaceReccurent;
using namespace namespaceSummarize;

int main()
{
    cout << "Enter \"xInital\": "; cin >> xInital;
    cout << "Enter \"xFinal\": "; cin >> xFinal;
    cout << "Enter \"dx\": "; cin >> dx;
    cout << "Enter \"eps\": "; cin >> eps; cout << endl;

    x = xInital;

    cout << fixed;
    cout << "-------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(5) << "|"
        << setw(10) << "lg(x + 1)" << setw(10) << "|"
        << setw(7) << "sum" << setw(7) << "|"
        << setw(5) << "n" << setw(5) << "|"
        << endl;
    cout << "-------------------------------------------------------" << endl;

    while (x <= xFinal)
    {
        Summarize();

        cout << "|" << setw(5) << setprecision(2) << x << setw(5) << "|"
            << setw(10) << setprecision(5) << log(x + 1) << setw(10) << "|"
            << setw(7) << setprecision(4) << sum << setw(7) << "|"
            << setw(5) << n << setw(5) << "|"
            << endl << "-------------------------------------------------------"
            << endl;

        x += dx;
    }

    cin.get();

    return 0;
}
