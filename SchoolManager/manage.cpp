#include "manage.h"

void manage::start()
{
	int chose;
	cout << "1:学校A\t2:学校B\t学校C\n" << "选择要进入的学校：";
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
