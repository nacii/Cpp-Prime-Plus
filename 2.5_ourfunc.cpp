//
// Created by nacii on 2018/8/28.
// courfunc.cpp -- defining your own function

#include <iostream>
void simon(int);        //simon()的函数原型；放在main()之前;void表明simon（）没有返回值

int main()
{
    using namespace std;
    simon(3);

    cout << "Pick an integer: " << endl;
    int count;
    cin >> count;
    simon(count);   //call it again
    cout << "Done!" << endl;
    return 0;       //0返回给操作系统，0意味着程序运行成功，非0说明有问题。
};


void simon(int n)       //定义simon()函数
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times."
         << endl;
    //void function don't need return statements
}