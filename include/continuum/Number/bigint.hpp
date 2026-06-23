#pragma once
#ifndef _BIG_INT_
#define _BIG_INT_

#include "dsa/array.hpp"


using _BlockType = unsigned long long;
using _SizeType = unsigned long long;

namespace continuum {
    class BigInt : public dsa::array<unsigned long long> {
    public:
        BigInt(const char* _Hex);
    public:
        bool operator> (const BigInt& _That)const;
        bool operator< (const BigInt& _That)const;
        bool operator>=(const BigInt& _That)const;
        bool operator<=(const BigInt& _That)const;


        BigInt& operator<<=(const unsigned long long _Shift);
        BigInt& operator>>=(const unsigned long long _Shift);
        BigInt& operator|=(const BigInt& _That);
        BigInt& operator&=(const BigInt& _That);
        BigInt& operator^=(const BigInt& _That);
        BigInt& operator+=(const BigInt& _That);
        BigInt& operator-=(const BigInt& _That);
        BigInt& operator*=(const BigInt& _That);
        // constexpr UnsignedInt& operator/=(const UnsignedInt& _That)noexcept;
        // constexpr UnsignedInt& operator%=(const UnsignedInt& _That)noexcept;

    public:
        void print(FILE* file)const;
    };

    void _print(const BigInt& x);
}


#endif