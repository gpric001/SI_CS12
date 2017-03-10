#include "HigherOrderBase.h"

class Square : public MapFunction {
    public:
        double apply(double n);
};

class F1 : public MapFunction {
    public:
        double apply(double n);
};

class IsEven : public FilterFunction {
    public:
        bool apply(double n);
}

class IsOdd : public FilterFunction {
    public:
        bool apply(double n);
}
