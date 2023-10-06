#include "FixedPointArithmetic.hpp"

StackElementOption FixedPointAdd(StackElement_t a, StackElement_t b)
{
    return {a + b, EVERYTHING_FINE};
}

StackElementOption FixedPointSubtract(StackElement_t a, StackElement_t b)
{
    return {a - b, EVERYTHING_FINE};
}

StackElementOption FixedPointMultiply(StackElement_t a, StackElement_t b)
{
    return {(a / NUMBER_MULTIPLIER) * (b / NUMBER_MULTIPLIER) * NUMBER_MULTIPLIER, EVERYTHING_FINE};
}

StackElementOption FixedPointDivide(StackElement_t a, StackElement_t b)
{
    if (b == 0)
        return {POISON, ERROR_ZERO_DIVISION};

    return {(StackElement_t)((double)a / (double)b * NUMBER_MULTIPLIER), EVERYTHING_FINE};
}