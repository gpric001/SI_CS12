#include "HigherOrderFunctions.h"

double Square::apply(double n) {
    return n * n;
}

double F1::apply(double n) {
    return 3 * n * n * n + 5 * n * n + 2 * n + 9;
}

bool IsEven::apply(double n) {
    return (static_cast<int>(n) % 2 == 0);
}

bool IsOdd::apply(double n) {
    return (static_cast<int>(n) % 2 != 0);
}
