#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void test1()
{
    ofstream ofs;
    ofs.open("文本测试.txt",ios::out);
    ofs<<"张三：100分"<<endl;
    ofs<<"李四：90分"<<endl;
    ofs<<"麻子：80分";
    ofs.close();
}
int main()
{
    test1();
    return 0;
}

