#include "Student.h"
#include "tool.h"
void Student::display()
{
	cout << "������" << m_name
		<< "���䣺" << m_age
		<< "�Ա�" << m_gender
		<< "��ߣ�" << m_height
		<< "���أ�" << m_weight
		<< endl;
}

void Student::display(const string& classinfor)
{
	cout << "�����༶��" << classinfor << endl;
	this->display();
}
