
#include "Complex.h"
#include <bits/stdc++.h>
BigDecimalInt::BigDecimalInt(string x){
    bigint = x;
}
BigDecimalInt::BigDecimalInt(int x){
    bigint = to_string(x);
}

BigDecimalInt BigDecimalInt::operator+(BigDecimalInt num){
    if(bigint.size() > num.bigint.size()) swap(bigint,num.bigint);
    BigDecimalInt SUM("");
    int summ = 0, carry = 0;
    string sum = "";

    for(int i = bigint.size() - 1,j = num.bigint.size() - 1; i >= 0; --i,--j){
        summ = ((bigint[i] - '0') + (num.bigint[j] - '0') + carry);
        sum.push_back((summ % 10) + '0');
        carry = summ / 10;
    }
    for(int i =num.bigint.size() - bigint.size() - 1; i >= 0; --i){
        summ = (num.bigint[i] - '0') + carry;
        sum.push_back((summ % 10) + '0');
        carry = summ / 10;
    }
    if(carry)sum.push_back((summ % 10) + '0');
    reverse(sum.begin(),sum.end());
    SUM.bigint = sum;
    return SUM;
}
bool BigDecimalInt::operator<(BigDecimalInt num){
    string num1 = bigint, num2 = num.bigint;
    int size1 = bigint.size(),size2= num.bigint.size();

    if(bigint[0] == '-') {
        size1--;
        num1.erase(0,1);
    }
    if(num.bigint[0] == '-') {
        --size2;
        num2.erase(0,1);
    }

    if((size1 < size2 && num.bigint[0] != '-') || (size1 > size2 && bigint[0] == '-')) return true;
    else if(size1 == size2 && num.bigint[0] != '-'&& bigint[0] == '-') return true;
    else if(size1 == size2 && num.bigint[0] != '-'&& bigint[0] != '-'){
        for(int i = 0; i < size1; ++i){
            if((num1[i] - '0') < (num2[i] - '0')) return true;
            else if((num1[i] - '0') > (num2[i] - '0')) return false;
        }
    }
    else if(bigint.size() == num.bigint.size() && num.bigint[0] == '-'&& bigint[0] == '-'){
        for(int i = 0; i < bigint.size(); ++i){
            if((num1[i] - '0') > (num2[i] - '0')) return true;
            if((num1[i] - '0') < (num2[i] - '0')) return false;
        }
    }
    return false;
}
bool BigDecimalInt::operator>(BigDecimalInt num){
    string num1 = bigint, num2 = num.bigint;
    int size1 = bigint.size(),size2= num.bigint.size();
    if(bigint[0] == '-') {
        --size1;
        num1.erase(0,1);
    }
    if(num.bigint[0] == '-') {
        --size2;
        num2.erase(0,1);
    }

    if((size1 > size2 && bigint[0] != '-') || (size1 < size2 && num.bigint[0] == '-')) return true;
    else if(size1 == size2 && bigint[0] != '-'&& num.bigint[0] == '-') return true;
    else if(size1 == size2 && num.bigint[0] != '-'&& bigint[0] != '-'){
        for(int i = 0; i < size1; ++i){
            if((num1[i] - '0') > (num2[i] - '0')) return true;
            else if((num1[i] - '0') < (num2[i] - '0')) return false;
        }
    }
    else if(bigint.size() == num.bigint.size() && num.bigint[0] == '-'&& bigint[0] == '-'){
        for(int i = 0; i < bigint.size(); ++i){
            if((num1[i] - '0') < (num2[i] - '0')) return true;
            else if((num1[i] - '0') > (num2[i] - '0')) return false;
        }
    }
    return false;
}
bool BigDecimalInt::operator==(BigDecimalInt num){
    if(bigint.size() != num.bigint.size() || bigint[0] != num.bigint[0]) return false;
    else{
        for(int i = 0;i < bigint.size(); ++i) {
            if(bigint[i] != num.bigint[i]) return false;
        }
    }
    return true;
}
BigDecimalInt BigDecimalInt::operator= (BigDecimalInt num)
{
    return num;
}
ostream& operator << (ostream& out, BigDecimalInt &num){
    out<<num.bigint;
    return out;
}
istream& operator >> (istream& input, BigDecimalInt &num){
    input >> num.bigint;
    return input;
}
