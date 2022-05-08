#include"../../Core/Entities/Steam/Steam.h"

void menu()
{
	srand(time(NULL));
	string menu_items[]{ "Shop", "Library", "Friend", "Options", "Exit"};
	string games_on_sale[]{"Dota 2", "CS:GO"};
	int arrowSize = size(menu_items);
	string* arrow = new string[arrowSize];
	for (int i = 0; i < size(menu_items); i++)
		arrow[i] = " ";
	int arrow_pos = 0;
	string arrow_pict = "->";
	do
	{	
		arrow[arrow_pos] = arrow_pict;
		for (int i = 0; i < arrowSize; i++)
			cout << arrow[i] << menu_items[i] << endl;
		switch (actionKey(arrow_pos, arrowSize))
		{
			case 0:
			{
				system("cls");
				Shop(games_on_sale, size(games_on_sale));
				_getch();
				cout << "Good";
				break;
			}
			case 1:
			{
				system("cls");
				Library(games_on_sale, size(games_on_sale));
				_getch();
				cout << "Good";
				break;
			}
			case 2:
			{
				system("cls");
				Friends();
				_getch();
				cout << "Good";
				break;
			}
			case 3:
			{
				system("cls");
				Options();
				_getch();
				cout << "Good";
				break;
			}
			case 4:
			{
				cout << "\nClosing";
				for (int i = 0; i < 3; i++)
				{
					cout << ".";
					Sleep(500);
				}
				exit(0);
				break;
			}
			default:
				break;
		}
		system("cls");
		clearArrowArray(arrow, arrowSize);
	} while (true);
}