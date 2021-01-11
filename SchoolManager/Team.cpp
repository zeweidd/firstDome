#include "Team.h"

void Team::insert_stu(const Student&stu)
{
	if (t.size() < 50) 
	{
		t.push_back(stu);
		return;
	}
	cout << "班级人数已满！" << endl;
}

void Team::delete_stu(const string&name)
{
	for (auto stu = t.begin(); stu != t.end(); ++stu)
	{
		if (*stu == name)
		{
			t.erase(stu);  //可以添加学号以应对同名情况
			return;
		}
	}
	cout << "查无此人" << endl;
}

void Team::update_stu(const string&name)
{
	string sname;
	int choce = 0 ;
	bool isthere = false;
	vector<Student>::iterator ite;
	for (auto stu = t.begin(); stu != t.end(); ++stu)
	{
		if (*stu == name)
		{
			isthere = true;
			ite = stu;
			break;
		}
	}
	if (isthere)
	{

		cout << "需要修改的学生参数：1：姓名\n2：年龄\n3：性别\n4：身高\n5：体重" << endl;
		cin >> choce;
		switch (choce)
		{
		case 1:
			cout << "键入新姓名：";
			cin >> sname;
			ite->set_name(sname);
			break;
		case 2:
			int sage;
			cout << "键入新年龄：";
			cin >> sage;
			ite->set_age(sage);
			break;
		case 3:
			char sgender;
			cout << "键入新性别(M：男\tW:女)：";
			cin >> sgender;
			ite->set_gender(sgender);
			break;
		case 4:
			int sheight;
			cout << "键入新身高：";
			cin >> sheight;
			ite->set_height(sheight);
			break;
		case 5:
			int sweight;
			cout << "键入新体重：";
			cin >> sweight;
			ite->set_weight(sweight);
			break;
		default:
			cout << "无匹配项" << endl;
			break;
		}
	}
	else {
		cout << "查无此人" << endl;
	}
}

void Team::display()
{
	cout << "班级当前人数：" << t.size() << endl;
}
