#include <iostream>
using namespace std;
class person
{
public:
    static void backd()
    {
        cout<<"静态成员"<<endl;
    }
};
void test01();

int main()
{
    test01();
    return 0;
}

void test01()
{
    //通过对象访问
    person p;
    p.backd();

    //通过类名访问
    person::backd();
}
