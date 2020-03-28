#include <iostream>
using namespace std;
class Animal
{
public:
    int m_age;
};

class sleep: virtual public Animal 
{

};

class luo: virtual public Animal
{

};

class sleepluo: public sleep, public luo{};

void test01()
{
    Animal s1;
    sleep s2;
    luo s3;
    sleepluo s4;
    s1.m_age=10;
    s2.m_age=20;
    s3.m_age=30;
    s4.sleep::m_age=40;
    s4.luo::m_age=50;
    cout<<"s1="<<s1.m_age<<endl;
    cout<<"s2="<<s2.Animal::m_age<<endl;
    cout<<"s3="<<s3.Animal::m_age<<endl;
    cout<<"s4="<<s4.sleep::m_age<<endl;
    cout<<"s4="<<s4.luo::m_age<<endl;
    cout<<"s1"<<"="<<sizeof(s1)<<endl;
    cout<<"s2"<<"="<<sizeof(s2)<<endl;
    cout<<"s3"<<"="<<sizeof(s3)<<endl;
    cout<<"s4"<<"="<<sizeof(s4)<<endl;
}

int main()
{
    test01();
    return 0;
}

