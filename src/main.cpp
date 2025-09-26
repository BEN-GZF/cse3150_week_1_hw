#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

using namespace MathUtils;
using namespace AdvancedMath;
using namespace std;

int main()
{
    int a = 3;
    int b = 4;

    cout << add(a, b) << endl;
    cout << multiply(a, b) << endl;
    cout << square(a) << endl;

    return 0;
}
