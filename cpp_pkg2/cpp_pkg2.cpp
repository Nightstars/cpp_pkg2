// cpp_pkg2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Teacher1.h"
using namespace std;
class Teacher {
    public:
        void setName(string _name);
        string getName();
        void setGender(string _gender);
        string getGender();
        void setAge(int _age);
        int getAge();
        void teach();
    private:
        string m_strName;
        string m_strGender;
        int m_iAge;
};
void Teacher::setName(string _name) {
    m_strName = _name;
}
string Teacher::getName() {
    return m_strName;
}
void Teacher::setGender(string _gender) {
    m_strGender = _gender;
}
string Teacher::getGender() {
    return m_strGender;
}
void Teacher::setAge(int _age) {
    m_iAge = _age;
}
int Teacher::getAge() {
    return m_iAge;
}
void Teacher::teach() {
    cout << "现在上课" << endl;
}
int main()
{
    Teacher t;
    t.setName("孔子");
    t.setGender("男"); 
    t.setAge(30);
    cout << t.getName() << "\t" << t.getGender() << "\t" << t.getAge() << endl;
    t.teach();

    Teacher1* t1 = new Teacher1();
    t1->setName("墨子");
    t1->setGender("男");
    t1->setAge(25);
    cout << t1->getName() << "\t" << t1->getGender() << "\t" << t1->getAge() << endl;
    t1->teach();
    delete t1;
    t1 = NULL;
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
