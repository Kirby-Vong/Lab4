#include <iostream>

#include "op.hpp"
#include "rand.hpp"
#include "base.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "div.hpp"

using namespace std;
int main() {
    srand(time(NULL));
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    mult* garbage1 = new mult(seven, four);
    add* garbage2 = new add(three, garbage1);
    Sub* minus = new Sub(garbage2, two);
    Rand* rand = new Rand();
    cout << rand << endl;
    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0;
}
