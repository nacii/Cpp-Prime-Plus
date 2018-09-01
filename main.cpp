
// 注释标示 【command + /】快捷键 可以批量操作

#include <iostream>  //io即是input/output，iostream是输入和输出的头文件（header file）
int main()           //函数头，main（）一般被操作系统调用。
{                                             //{}中的是函数体
    using namespace std;                      //调用命名空间，使得std中的所有名称都可用
    cout << "Come up and C++ me some time.";  //cout 打印(c+out)，<< 是插入运算符，表示信息流向；<<也是按位左移运算符。
    cout << endl;                             //换行（new line）
    cout << "You won't regret it!" << endl;
    return 0;                                 //main的返回值
}                                             //主函数结束

