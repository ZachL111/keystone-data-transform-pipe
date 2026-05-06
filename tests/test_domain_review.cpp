#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{50, 54, 17, 78};
    assert(domain_review_score(item) == 181);
    assert(domain_review_lane(item) == "ship");
}
