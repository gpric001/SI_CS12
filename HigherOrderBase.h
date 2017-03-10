class MapFunction {
    public:
        virtual double apply(double n) = 0;
};

class FilterFunction {
    public:
        virtual bool apply(double n) = 0;
};
