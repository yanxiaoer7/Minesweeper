#include "saolei.h"
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)                  // show state)
{
Start:
	int s = 0;
	s = saolei();
	if (s == 1)
	{
		goto Start;
	}
	else
	{
		return 0;
	}
}

