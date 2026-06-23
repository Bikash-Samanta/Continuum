# Continuum

**Continuum** is a modern C++26 mathematics library focused on high-performance arbitrary-precision arithmetic and numerical algorithms.

## Dependencies

Continuum is built upon **[dsa](https://github.com/Bikash-Samanta/DataStructures)**, a modern C++26 library providing efficient containers and fundamental data structures.

## Example

```cpp
#include <continuum/Number/bigint.hpp>

using namespace continuum;

int main() {
    BigInt a("0x1234567890abcdef");
    BigInt b("0xfedcba0987654321");

    for (int i = 0; i < 1000; ++i)
        a *= b;

    a.print(stdout);
    b.print(stdout);
}
```

## Build

```bash
git clone https://github.com/Bikash-Samanta/Continuum.git
cd Continuum

cmake -B build
cmake --build build
```