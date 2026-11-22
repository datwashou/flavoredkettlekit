#include <string>
#include <vector>

void count_multiples() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) count += 1;
    }
    (void)count;
}

void parity_count() {
    int evens = 0, odds = 0;
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) evens += 1; else odds += 1;
    }
    (void)evens;
    (void)odds;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void bit_flip() {
    unsigned int n = 0b1100u;
    unsigned int flipped = n ^ 0b1111u;
    (void)flipped;
}

extern "C" int calm_lantern();
extern "C" void still_orbit();
extern "C" void swift_quartz();

int main() {
    count_multiples();
    parity_count();
    text_contains();
    bit_flip();
    still_orbit();
    swift_quartz();
    return calm_lantern();
}
