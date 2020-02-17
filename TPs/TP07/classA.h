#ifndef CLASS_A
#define CLASS_A
#include "ObjectCounters.h"

class A : public ObjectCounters<A> {
private:
    int a{};
public:
    A() { ++count.iCD; }
    A(int x) : a(x) { ++count.iCI; }
    A(const A&) { ++count.iCC; }
    A(A&&) { ++count.iCM; }
    A& operator=(const A&x) {
        if (this != &x) ++count.iAC;
        return *this;
    }
    A& operator=(A &&) {
        ++count.iAM;
        return *this;
    }
    ~A() { ++count.iDD; }
};

#endif // CLASS_A
