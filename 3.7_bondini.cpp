//
// Created by nacii on 2018/9/1.
// bondini.cpp -- using escape sequences

#include <iostream>

int main()
{
    using namespace std;
    cout << "\a1).Operation \"HyperHype\" is now activated!\n"; //'\a'是振铃字符。
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b"; //'\b'是退格转义字符
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n\n";

    //扩展字符
    int k\u00F6rper;  // ö的Unicode码点为00F6
    cout << "2).Let them eat g\u00E2teau.\n"; // â的Unicode码点为00E2

    //宽字符类型
    wchar_t bob = L'P';
    wcout << "3)."<< bob << L" is tall." << endl;
    cout << endl;

    //布尔类型bool(以前C++没有bool类型，0代表假，非0(通常是1）代表真）
    bool is_ready = true;
    cout << "Does \'is_ready\' is true ?\n" << is_ready << endl;



    return 0;
}
