#include "Team.h"

void Team::insert_stu(const Student&stu)
{
	if (t.size() < 50) 
	{
		t.push_back(stu);
		return;
	}
	cout << "�༶����������" << endl;
}

void Team::delete_stu(const string&name)
{
	for (auto stu = t.begin(); stu != t.end(); ++stu)
	{
		if (*stu == name)
		{
			t.erase(stu);  //�������ѧ����Ӧ��ͬ�����
			return;
		}
	}
	cout << "���޴���" << endl;
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

		cout << "��Ҫ�޸ĵ�ѧ��������1������\n2������\n3���Ա�\n4�����\n5������" << endl;
		cin >> choce;
		switch (choce)
		{
		case 1:
			cout << "������������";
			cin >> sname;
			ite->set_name(sname);
			break;
		case 2:
			int sage;
			cout << "���������䣺";
			cin >> sage;
			ite->set_age(sage);
			break;
		case 3:
			char sgender;
			cout << "�������Ա�(M����\tW:Ů)��";
			cin >> sgender;
			ite->set_gender(sgender);
			break;
		case 4:
			int sheight;
			cout << "��������ߣ�";
			cin >> sheight;
			ite->set_height(sheight);
			break;
		case 5:
			int sweight;
			cout << "���������أ�";
			cin >> sweight;
			ite->set_weight(sweight);
			break;
		default:
			cout << "��ƥ����" << endl;
			break;
		}
	}
	else {
		cout << "���޴���" << endl;
	}
}

void Team::display()
{
	cout << "�༶��ǰ������" << t.size() << endl;
}
