#ifndef UNTITLEDDDDDDDDDD_COMPLEX_H
#define UNTITLEDDDDDDDDDD_COMPLEX_H

#include <bits/stdc++.h>
using namespace std;
class BigDecimalInt{
private:
    string bigint;
public:
    BigDecimalInt(string x);
    BigDecimalInt(int x);

    BigDecimalInt operator+ (BigDecimalInt num);

    bool operator< (BigDecimalInt num);
    bool operator> (BigDecimalInt num);
    bool operator== (BigDecimalInt num);
    BigDecimalInt operator= (BigDecimalInt num);
    friend ostream& operator << (ostream& out, BigDecimalInt &num);
    friend istream& operator >> (istream& input, BigDecimalInt &num);

};


#endif //UNTITLEDDDDDDDDDD_COMPLEX_H
