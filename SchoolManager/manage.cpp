#include "manage.h"

void manage::start()
{
	int chose;
	cout << "1:ѧУA\t2:ѧУB\tѧУC\n" << "ѡ��Ҫ�����ѧУ��";
	cin >> chose;
	switch (chose)
	{
	case 1:
		a.manage();
		break;
	case 2:
		b.manage();
		break;
	case 3:
		c.manage();
		break;
	default:
		;
		break;
	}
}
