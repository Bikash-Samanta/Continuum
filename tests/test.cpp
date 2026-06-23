#include <continuum/Number/bigint.hpp>

using namespace continuum;

int main() {
    BigInt a("0x1234567890abcdef");
    BigInt b("0xfedcba0987654321");

    for (int i = 0; i < 1000; ++i)
        a *= b;
    
    a.print(stdout);
    b.print(stdout);
    return 0;
}