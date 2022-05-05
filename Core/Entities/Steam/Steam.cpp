#include"Steam.h"

void clearArrowArray(string*& arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = " ";
}
int actionKey(int& arrow_pos, int arrowSize)
{
	char key = _getch();
	if (key == 72)
	{
		if (arrow_pos > 0)
			arrow_pos--;
		return -1;
	}
	else if (key == 80)
	{
		if (arrow_pos < arrowSize - 1)
			arrow_pos++;
		return -1;
	}
	else if (key == 13)
	{
		return arrow_pos;
	}
}