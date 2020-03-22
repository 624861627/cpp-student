#include <iostream>
using namespace std;

//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径     ---->>对象为圆，其中我们暂时需要的属性是半径
const double PI=3.14;
//class 代表设计一个类，类后面紧跟着的就是类的名称
class Circle
{
    //访问的权限
public:           //公共权限(以后细说)

    //类中的属性和行为 我们统一称为 成员
    //属性  成员属性或成员变量
    //行为  成员函数或成员方法
    //属性
    int m_r;  //半径

    //行为
    double calculateZC()   //获取圆的周长的函数
    {
        return 2*PI*m_r;
    }
    void setnumber(int a)   //通过行为给属性进行赋值操作
    {
        m_r=a;
    }
};
void calculate();

int main()
{
    calculate();
    return 0;
}

void calculate()
{
    //通过圆类，创建具体的圆(对象)
    Circle c1;  //实例化(通过一个类 创建一个对象的过程)
    //给圆对象 的属性进行赋值
    c1.m_r=10;

    cout<<"圆的周长为多少:"<<c1.calculateZC()<<endl;
}

