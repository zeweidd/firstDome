#pragma once
#include "tool.h"
class Student
{
	string m_name;
	int m_age;
	char m_gender;//ÄÐ£ºM   Å®£ºW
	int m_height;
	int m_weight;
public:
	Student(string name, int age, int gender, int height = 0, int weight = 0) :
		m_name(name), m_age(age), m_gender(gender), m_height(height), m_weight(weight)
	{};
	Student(): m_name(NULL), m_age(0), m_gender(0), m_height(0), m_weight(0) {};
	void set_name(const string& name){ m_name = name; };
	void set_age(int age) { m_age = age; }
	void set_gender(const char gander) { m_gender = gander; }
	void set_height(int height) { m_height = height; }
	void set_weight(int weight) { m_weight = weight; }

	const string& get_name() const { return m_name; }
	int get_age()const { return m_age; }
	char get_gander()const { return m_gender; }
	int get_height()const { return m_height; }
	int get_weight()const { return m_height; }

	void display();
	void display(const string& classinfor);
	bool operator==(const string& name) const { return name == m_name; }

};

