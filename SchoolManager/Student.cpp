#include "Student.h"
#include "tool.h"
void Student::display()
{
	cout << "姓名：" << m_name
		<< "年龄：" << m_age
		<< "性别：" << m_gender
		<< "身高：" << m_height
		<< "体重：" << m_weight
		<< endl;
}

void Student::display(const string& classinfor)
{
	cout << "所属班级：" << classinfor << endl;
	this->display();
}
