#pragma once
#include "Student.h"
//�༶��
class Team
{
	enum {Size = 50};
	vector<Student> t;
	string m_name; 
public:
	Team(const string& name) :m_name(name)
	{};
	Team() {};
	//���� ȥ�� ����ѧ��
	void insert_stu(const Student&);
	void delete_stu(const string&); //��������ɾ��
	void update_stu(const string&);

	void set_name(const string& name) { m_name = name; }
	const string& get_name()const { return m_name; }
	void display();
};

