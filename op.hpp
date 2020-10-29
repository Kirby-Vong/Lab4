#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        double v;
        Op(double value) : Base() {
            v = value;
        }
        virtual double evaluate() { return v; }
        virtual std::string stringify() { return ""; }
};

#endif //__OP_HPP__
