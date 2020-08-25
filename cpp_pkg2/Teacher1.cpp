#include "Teacher1.h"
#include <iostream>
using namespace std;
void Teacher1::setName(string _name) {
    m_strName = _name;
}
string Teacher1::getName() {
    return m_strName;
}
void Teacher1::setGender(string _gender) {
    m_strGender = _gender;
}
string Teacher1::getGender() {
    return m_strGender;
}
void Teacher1::setAge(int _age) {
    m_iAge = _age;
}
int Teacher1::getAge() {
    return m_iAge;
}
void Teacher1::teach() {
    cout << "ÏÖÔÚÉÏ¿Î..." << endl;
}