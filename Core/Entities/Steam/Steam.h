#include"../../Libs/Libs.h"

//� � ����� ����� ���� ����������
//��� ��� ���� �� �������� ������, � ���������� ����� ���� �� ������ ���



struct Steam
{
	string* libraryGames;
	string* friends;

	void buyGame(string* games_on_sale);
	void addFriend();
};

void clearArrowArray(string*& arr, int size);
int actionKey(int& arrow_pos, int arrowSize);

void Shop(string* games_on_sale, int size);
void Library(string* games_on_sale, int size);
void Friends();
void Options();
