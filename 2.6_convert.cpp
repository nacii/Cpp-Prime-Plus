//
// Created by nacii on 2018/8/28.
// convert.cpp -- converts stone to pounds

#include <iostream>
int stonetolb(int);     //函数原型

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = "
         << pounds << " pounds." << endl;

    return 0;
}


int stonetolb(int sts)
{
    return 14 * sts;
}

//按如下方式写更方便理解和修改
//int stonetolb(int sts)
//{
//  int pounds = 14 * sts;
//  return pounds;
//}