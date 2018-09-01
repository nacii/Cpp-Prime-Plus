//
// Created by nacii on 2018/8/28.
// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>        //数学库函数；老式编译器使用math.h
#include <cstdlib>      //生成随机数使用的库函数；

int main()
{
    using namespace std;

    double area;        //定义浮点变量area
    cout << "1).Enter the floor area, in square feet, of your home: " << endl;
    cin >> area;
    double side;        //定义浮点变量side，
    side = sqrt(area);  //也可以直接写 double side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;


    cout << endl;
    //如何计算乘方
    double x = 5;
    double y = 8;
    double answer;
    answer = pow(x, y);
    cout << "2).x ** y = " << answer << endl;

    cout << endl;
    //生成一个随机数
    int rand();
    int guess;
    guess =  rand();
    cout << "3).my guess is " << guess << endl;

    return 0;
}

