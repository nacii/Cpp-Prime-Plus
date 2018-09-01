//
// Created by nacii on 2018/8/31.
//


#include <iostream>
using namespace std;

double yard(double);       //函数原型
void mice();        //void空函数，不返回值，只有操作。
void run();
double fahrenheit(double);
double astronomy(double);

int main()
{
    cout << "1).Hello, world!" << endl;

    int cheeses;
    cheeses = 32;
    cout << "2).cheeses:" << cheeses << endl;

    cout << "3).please enter a number:";
    cin >> cheeses;
    cout << "We have " << cheeses << " varieties of cheese." << endl;

    string name, add;            //定义字符串变量
    cout << "4).what's your name:";
    cin >> name;                //如果输入空格，空格后面的内容会赋值给下一个变量add；
    cout << "where do you live:";
    cin >> add;

    cout << "my name is: " << name << endl;
    cout << "I live in:" << add << endl;

    cout << endl;
    cout << "5).let us do some math." << endl;
    cout << "please convert long to yard, we know 1 long = 220 yard." << endl;
    cout << "then, pleae enter a number and convert it to yard:" << endl;
    double dist1, dist2;
    cin >> dist1;
    dist2 = yard(dist1);
    cout << dist1 << " long = " << dist2 <<" yard" << endl;

    cout << "6).function:" << endl;
    mice();
    mice();
    run();
    run();

    cout << endl;
    cout << "7).Enter your age : ";
    int age, month ,restlife;
    cin >> age;
    month = age * 12;
    restlife = 70 * 12 - month;
    cout << "that means you are " << month << " months old." << endl;
    cout << "If you have 70 years life, your rest life have " << restlife << " months. " << endl;
    cout << "Good luck!" << endl;


    cout << endl << "8).Please enter a Celsius value: " << endl;
    double cdegree, fdegree;
    cin >> cdegree;
    fdegree = fahrenheit(cdegree);
    cout << cdegree << " degrees Celsius is " << fdegree << " degrees Fahrenheit." << endl << endl;

    cout << "9).Enter the numbers of light year: " << endl;
    double ly, astro;
    cin >> ly;
    astro = astronomy(ly);
    cout << ly << " light years = " << astro << " astronomical units." << endl << endl;

    cout << "10).Enter the number of hours: " << endl;
    int hour, min;
    cin >> hour;
    cout << "Enter the number of nimutes: " << endl;
    cin >> min;
    cout << "Time: " << hour << ":" << min << endl;




    return 0;
}


double yard(double n) //第一个double表返回值的类型，第二个double表示输入参数的类型。
{
    double lg = n * 220;
    return lg;

}

void mice()  //一定要写void
{
    cout << "Three blind mice." << endl;
}
void run()
{
    cout << "See how they run." << endl;
}

double fahrenheit(double c)
{
    double f;
    f = 1.8 * c + 32;
    return f;
}

double astronomy(double lightyear)
{
    double astro;
    astro = lightyear * 63240;
    return astro;
}