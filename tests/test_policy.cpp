#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{71, 82, 9, 19, 11};
    assert(score_signal(signal_case_1) == 185);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{67, 95, 10, 19, 5};
    assert(score_signal(signal_case_2) == 158);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{93, 80, 26, 23, 9};
    assert(score_signal(signal_case_3) == 167);
    assert(classify_signal(signal_case_3) == "accept");
}
