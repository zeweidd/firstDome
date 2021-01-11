#pragma once
#include "Student.h"
//班级类
class Team
{
	enum {Size = 50};
	vector<Student> t;
	string m_name; 
public:
	Team(const string& name) :m_name(name)
	{};
	Team() {};
	//增加 去除 更改学生
	void insert_stu(const Student&);
	void delete_stu(const string&); //按名字做删除
	void update_stu(const string&);

	void set_name(const string& name) { m_name = name; }
	const string& get_name()const { return m_name; }
	void display();
};

