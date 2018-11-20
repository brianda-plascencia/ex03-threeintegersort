//
// Created by vscilab on 11/20/2018.
//
#include <cmath>
using namespace std;

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int sort(int &num1, int &num2, int &num3) {
                    if (num1 > num2) {
                        int temp = num1;
                        num1 = num2;
                        num2 = temp;
                        if (num1 > num3) {
                            int temp = num1;
                            num1 = num3;
                            num3 = temp;
                            if (num2 > num3) {
                                int temp = num2;
                                num2 = num3;
                                num3 = temp;

                            }
                        }
                    }

                }
            }
        }
    }
}



