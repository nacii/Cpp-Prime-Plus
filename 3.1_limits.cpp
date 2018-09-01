//
// Created by nacii on 2018/8/31.
// limits.cpp -- some integer limits

#include <iostream>
#include <limits>       //也称 climits

int main()
{
    using namespace std;
    int n_int = INT_MAX;    //C++独有的初始化语法：int n_int(INT_MAX);
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;  //对类型名使用sizeof时，应将名称放在括号中；对变量名使用运算符，括号是可选的
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;







}

