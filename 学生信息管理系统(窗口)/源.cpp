#include "Mamangment.h"
#include "Window.h"
#include "mind.h"
int main()
{
	Window w(960, 640);
	w.settxttitle("ѧ���ɼ���Ϣ����ϵͳ");
	Mamangment m;
	while (1)
		m.run();
	return 0;
}