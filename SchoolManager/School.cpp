#include "School.h"

void School::manage_class(Team& target)
{
	int chose;
	cout << "1：增加学生\t2：删除学生\t3：修改学生信息\n "
		<< "需要对改班级所作的操作:";
	cin >> chose;
	switch (chose)
	{
	case 1:
		//构建学生对象加入向量中即可
		break;
	case 2:
		//调用方法删除学生对象即可
	case 3:
		//调用方法删除即可
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
	cout << "选则需要查看的班级: 1:班级A\t2:班级B\t3:班级C" << endl;
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
