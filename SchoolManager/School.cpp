#include "School.h"

void School::manage_class(Team& target)
{
	int chose;
	cout << "1������ѧ��\t2��ɾ��ѧ��\t3���޸�ѧ����Ϣ\n "
		<< "��Ҫ�Ըİ༶�����Ĳ���:";
	cin >> chose;
	switch (chose)
	{
	case 1:
		//����ѧ��������������м���
		break;
	case 2:
		//���÷���ɾ��ѧ�����󼴿�
	case 3:
		//���÷���ɾ������
		break;
	default:
		;
		break;
	}
}

void School::information()
{
	classA.display();
	classB.display();
	classC.display();
}

void School::manage()
{
	int chose;
	Team* classes;
	this->information();
	cout << "ѡ����Ҫ�鿴�İ༶: 1:�༶A\t2:�༶B\t3:�༶C" << endl;
	cin >> chose;
	switch (chose)
	{
	case 1:
		manage_class(classA);
		break;
	case 2:
		manage_class(classB);
		break;
	case 3:
		manage_class(classC);
		break;
	default:
		break;
	} 
}
