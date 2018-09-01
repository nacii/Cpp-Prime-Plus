//所有的代码以注释开始，指出源代码的文件名（创建日期）并简要地概括程序
// Created by nacii on 2018/8/26.
// how to print "hello world" in c++
//

// 第一种方式：printf
//
//#include <iostream>
//
//int main()
//{
//    printf("Hello, World!;");   //printf函数是C语言的，C++完全地支持C语言；
//    return 0;
//}


// 第二种方式：cout
//
#include <iostream>
using namespace std;

int main(void)      //void表示函数不接受任何参数，对main函数来说，void是默认的，可以不写。
{
    cout << "Hello, World!";    //要使用using才能直接使用cout；如果不想用using，可用std::cout <<替换；

    return 0;       //这个0返回给操作系统
}


//第三种方式
//#include <iostream>
//
//int main(void)
//{
//    std::cout << "Hello, World!";    //要使用using才能直接使用cout；如果不想用using，可用std::cout <<替换；
//
//    return 0;
//}
