//
// Created by vscilab on 11/20/2018.
//
#include <iostream>
using namespace std;
#include "threeintegersort.h"
int x1, x2, x3;
int main()
{
    cout << "Input three integers to sort: " << endl;
    cin >> x1 >> x2 >> x3;
    int output1 = x1;
    int output2 = x2;
    int output3 = x3;


    edu::vcccd::vc::csv13::sort(output1, output2, output3);
    cout << output1 << "" << output2 << "" << output3 << endl;

    return 0;
}
