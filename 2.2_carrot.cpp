//
// Created by nacii on 2018/8/28.
// carrots.cpp -- food processing program -- print
// uses and displays a variable
// Github test
#include <iostream>

int main()
{
    using namespace std;

    int carrots;    //定义声明carrots为变量（整型）；

    carrots = 25;   //赋值 ，；另外，可连续赋值，如：【yamaha = baldwin = steinway = 88; 】是合法的
    cout << "I have ";
    cout << carrots;
    cout << " carrots." <<endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl; //cout能够识别变量的类型
    cout << endl << endl;

    //也可以这样写
    cout << "I have "
         << carrots
         << " carrots."
         << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have "
         << carrots
         << " carrots."
         << endl;


}

