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

void Steam::buyGame(string* games_on_sale)
{
	//мне стало лень реализовывать эту механику :sadPepega:
}
void Steam::addFriend()
{
	//мне стало лень реализовывать эту механику :sadPepega:
}



void Shop(string* games_on_sale, int size)
{
	cout << "|---------SHOP---------|" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " - " << games_on_sale[i] << endl;
		cout << "  Price: " << rand() % 30 + 10<<"$"<<endl;
		cout << "-----------------------#" << endl;
	}
}
void Library(string* games_on_sale, int size)
{
	cout << "|---------LIBRARY---------|" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " - " << games_on_sale[i] << endl;
		cout << "-----------------------#" << endl;
	}
}
void Friends()
{
	cout << "You have no friend :((" << endl;
	cout << "but i'll your friend <3" << endl;
	cout << "(sorry)";
}
void Options()
{
	cout << "bla bla blaaa" << endl;
	cout << "bla la la bla" << endl;
	cout << "bla - 1" << endl;

}