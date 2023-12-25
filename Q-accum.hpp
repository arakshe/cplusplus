#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <string>
using namespace std;

template <typename Iterator, typename T, typename Predicate>
T conditional_accum(Iterator begin, Iterator end, T init, Predicate pred) {
    T sum = init;
    for (Iterator it = begin; it != end; ++it) {
        if (pred(*it)) {
            sum += *it;
        }
    }
    return sum;
}