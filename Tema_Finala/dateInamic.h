#ifndef DATEINAMIC_H
#define DATEINAMIC_H

template <typename X>
class Date {
private:
    X a, b;

public:
    Date(X a, X b) : a(a), b(b) {}

    X getA() const 
    { 
        return a; 
    }
    X getB() const 
    { 
        return b; 
    }

    void setA(X a) { this->a = a; }
    void setB(X b) { this->b = b; }
};

#endif