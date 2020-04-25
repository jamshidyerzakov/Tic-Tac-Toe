
/*
Tic Tac Toe game by students
Name: Erzakov Jamshid, Arifkhanov Azizkhon
ID: 1910196, 1910229
Section: 003
*/

#include <conio.h>
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;

string Main_menu[3] = { "||        N e w    g a m e\t||", "||     I n f o r m a t i o n\t||", "||\t    E  X  I  T\t\t||" };
string Menu[3] = { "||      S i n g l e   p l a y e r\t||", "||       M u l t i   p l a y e r\t||", "||\t       B  A  C  K\t\t||" };
string menus[2] = { "||   M  A  I  N     M  E  N  U \t||", "||    S  E  C  O  N  D     M  E  N  U\t||" };
string matrix[3][3] = { " ", " ", " ", " ", " ", " ", " ", " ", " " }, matrix2[3][3] = { "7", "8", "9", "4", "5", "6", "1", "2", "3" };
string info_text = "\n\n\n\t\tS O M E   M E A N I N G F U L    A N D     I N T E R S T I N G\n\n    I N F O R M A T I O N    A B O U T    \
							  G A M E    W H I C H    N O B O D Y     R E A D S ! ! !", player;
int  color, sleep;
bool information_multiplayer = false;


void first_menu();
void second_menu();
void info();
void singleplayer();
void multiplayer();


void null()
{
  int i = 0, j = 0;
  for (i; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      matrix[i][j].clear();
      matrix[i][j] = " ";
    }
  }
}
void greeting()
{
  string game = "< T  I  C & T  A  C & T  O  E >";
  string welc = "W    E    L    C    O    M    E !";
  string by = "B Y    P O N Y V I L L E   &   I L L U S I O N";
  HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
  int len_text = game.length();
  int len_by = by.length();
  int len_welc = welc.length();
  cout << "\n\n\n\n\n\n\n\t\t\t\t";
  for (int x = 0; x < len_welc; x++)
  {
    SetConsoleTextAttribute(console, 12);
    cout << welc[x];
    Sleep(35);
  }
  Sleep(2000);
  system("cls");
  cout << "\n\n\n\t\t\t\t";
  for (int x = 0; x < len_text; x++)
  {
    SetConsoleTextAttribute(console, 10);
    cout << game[x];
    Sleep(35);
  }
  Sleep(900);
  cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t ";
  for (int x = 0; x < len_by; x++)
  {
    SetConsoleTextAttribute(console, 20);
    cout << by[x];
    Sleep(35);
  }
  Sleep(5000);
  SetConsoleTextAttribute(console, 15);
  system("cls");
}
void display_text(string text, int color = 15, int sleep = 35) //font should be 40!!! (in cmd)
{
  HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
  int len_text = text.length();
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
  cout << "\n\n\n\n\t\t\t\t";
  for (int x = 0; x < len_text; x++)
  {
    SetConsoleTextAttribute(console, color);
    cout << text[x];
    Sleep(30);
  }

}
void display_text_no_ping(string text, int color = 15) //font should be 40!!! (in cmd)
{
  HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
  cout << "\n\n\n\n\t\t\t\t";
  cout << text;

}
void display_info_multiplayer(int color = 15)
{
	information_multiplayer = true;
	system("cls");
	string text1 = "Press 'NUM LOCK' in your keyboard in order to have \n\t   \t  access to NUMPADs in the right part of your keyboard!";
	string text2 = "!!!Press the corresponding NUMPAD to fill the table in the game!!!";
	string text3 = "-->Example<--: If you press NUMPAD 7, you will fill the first cell of the table";
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	int len_text1 = text1.length();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\n\n\n\t\t   ";
	for (int x = 0; x < len_text1; x++)
	{
		SetConsoleTextAttribute(console, color);
		cout << text1[x];
		Sleep(40);
	}
	Sleep(4000);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << "\t\t\t\t\t  ------ ------ ------" << endl;
		for (int j = 0; j <= 0; j++)
		{
			cout << "\t\t\t\t\t |      |      |      |" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "Y O U R   K E Y B O A R D -->";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t\t |  " << matrix2[i][0] << "   |  " << matrix2[i][1] << "   |  " << matrix2[i][2] << "   |" << endl;
			cout << "\t\t\t\t\t |      |      |      |" << endl;
		}
	}
	cout << "\t\t\t\t\t  ------ ------ ------" << endl;
	Sleep(4000);


	int len_text2 = text2.length();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\n\t\t   ";
	for (int x = 0; x < len_text2; x++)
	{
		SetConsoleTextAttribute(console, color);
		cout << text2[x];
		Sleep(40);
	}
	Sleep(5000);


	system("cls");
	int len_text3 = text3.length();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\n\n\t   ";
	for (int x = 0; x < len_text3; x++)
	{
		SetConsoleTextAttribute(console, color);
		cout << text3[x];
		Sleep(40);
	}
	Sleep(4000);

	matrix[0][0] = "X";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << "\t\t\t\t\t  ------ ------ ------" << endl;
		for (int j = 0; j <= 0; j++)
		{
			cout << "\t\t\t\t\t |      |      |      |" << endl;
			cout << "\t\t\t\t\t |  " << matrix[i][0] << "   |  " << matrix[i][1] << "   |  " << matrix[i][2] << "   |" << endl;
			cout << "\t\t\t\t\t |      |      |      |" << endl;
		}
	}
	cout << "\t\t\t\t\t  ------ ------ ------" << endl;
	Sleep(4000);
	null();
}



void Draw(string choice)
{
  
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
  for (int i = 0; i <= 2; i++)
  {
    cout << "\t\t\t\t\t  ------ ------ ------" << endl;
    for (int j = 0; j <= 0; j++)
    {
	  cout << "\t\t\t\t\t |      |      |      |" << endl;
      cout << "\t\t\t\t\t |  " << matrix[i][0] << "   |  " << matrix[i][1] << "   |  " << matrix[i][2] << "   |" << endl;
      cout << "\t\t\t\t\t |      |      |      |" << endl;
    }
  }
  cout << "\t\t\t\t\t  ------ ------ ------" << endl;  
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
  cout << "\n\n\n\t\t\t\tPress 'place' in order to leave the game" << endl;  
}
void players(string player)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "\t\t\t\t\t    <Tic Tac Toe v1.0>\n" << endl;
	if (player == "X")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "\n\t\t\ P L A Y E R #1[X]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout<<"\t\t\t\t      P L A Y E R #2[O]" << endl;
	}
	else if (player == "O")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\n\t\t\ P L A Y E R #1[X]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "\t\t\t\t      P L A Y E R #2[O]" << endl;
	}
}
void players_bot(string player)
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "\t\t\t\t\t    <Tic Tac Toe v1.0>\n" << endl;
	if (player == "X")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "\n\t\t\ P L A Y E R #1[X]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t\t\t\t      B      O      T[O]" << endl;
	}
	else if (player == "O")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\n\t\t\ P L A Y E R #1[X]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "\t\t\t\t      B      O      T[O]" << endl;
	}
}
void TogglePlayer()
{
  if (player == "X")
  {
    player = "O";
  }
  else if (player == "O")
  {
    player = "X";
  }
    
}



bool bot() 
{
	int numb = 0;;
	if (numb < 9)
	{
		for (int i(0); i < 3; i++)
		{
			if ((matrix[i][0] == "O" && matrix[i][2] == "O") && matrix[i][1] != "X")
			{
				if (matrix[i][1] != "O")
				{
					matrix[i][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "O" && matrix[0][2] == "O") && matrix[0][1] != "X")
			{
				if (matrix[0][1] != "O")
				{
					matrix[0][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[1][0] == "O" && matrix[1][2] == "O") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[2][0] == "O" && matrix[2][2] == "O") && matrix[2][1] != "X")
			{
				if (matrix[2][1] != "O")
				{
					matrix[2][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][i] == "O" && matrix[2][i] == "O") && matrix[1][i] != "X")
			{
				if (matrix[1][i] != "O")
				{
					matrix[1][i] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "O" && matrix[2][2] == "O") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[2][0] == "O" && matrix[0][2] == "O") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[i][0] == "X" || matrix[i][0] == "O") && (matrix[i][1] == "X" || matrix[i][1] == "O"))
			{
				if (matrix[i][2] != "X" && matrix[i][2] != "O")
				{
					matrix[i][2] = "O";
					numb++;
					//step = true;
					return true;
				}
			}
			if ((matrix[2][2] == "O" && matrix[1][1] == "O") && matrix[0][0] != "X")
			{
				if (matrix[0][0] != "O")
				{
					matrix[0][0] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "O" && matrix[1][1] == "O") && matrix[2][2] != "X")
			{
				if (matrix[2][2] != "O")
				{
					matrix[2][2] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[2][0] == "O" && matrix[1][1] == "O") && matrix[0][2] != "X")
			{
				if (matrix[0][2] != "O")
				{
					matrix[0][2] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][2] == "O" && matrix[1][1] == "O") && matrix[2][0] != "X")
			{
				if (matrix[2][0] != "O")
				{
					matrix[2][0] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "X" || matrix[2][2] == "X" || matrix[0][2] == "X" || matrix[2][0] == "X") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[i][0] == "X" && matrix[i][2] == "X") && matrix[i][1] != "X")
			{
				if (matrix[i][1] != "O")
				{
					matrix[i][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][i] == "X" && matrix[2][i] == "X") && matrix[1][i] != "X")
			{
				if (matrix[1][i] != "O")
				{
					matrix[1][i] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "X" && matrix[2][2] == "X") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[2][0] == "X" && matrix[0][2] == "X") && matrix[1][1] != "X")
			{
				if (matrix[1][1] != "O")
				{
					matrix[1][1] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[2][2] == "X" && matrix[1][1] == "X") && matrix[0][0] != "X")
			{
				if (matrix[0][0] != "O")
				{
					matrix[0][0] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "X" && matrix[1][1] == "X") && matrix[2][2] != "X")
			{
				if (matrix[2][2] != "O")
				{
					matrix[2][2] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][0] == "X" && matrix[1][1] == "X" && matrix[2][2] == "O"))
			{
				if (matrix[2][0] != "O" || matrix[2][0] != "X")
				{
					matrix[2][0] = "O";
					numb++;
					return true;
				}
				else
				{
					matrix[0][2] = "O";
					numb++;
					return true;
				}
					
			}
			if ((matrix[0][2] == "X" && matrix[1][1] == "X" && matrix[2][0] == "O"))
			{
				if (matrix[0][0] != "O" || matrix[0][0] != "X")
				{
					matrix[0][0] = "O";
					numb++;
					return true;
				}
				else
				{
					matrix[2][2] = "O";
					numb++;
					return true;
				}

			}
			if ((matrix[2][0] == "X" && matrix[1][1] == "X") && matrix[0][2] != "X")
			{
				if (matrix[0][2] != "O")
				{
					matrix[0][2] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[0][2] == "X" && matrix[1][1] == "X") && matrix[2][0] != "X")
			{
				if (matrix[2][0] != "O")
				{
					matrix[2][0] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[1][1] == "X") && matrix[2][2] != "X")
			{
				if (matrix[2][2] != "O")
				{
					matrix[2][2] = "O";
					numb++;
					return true;
				}
			}
			else if ((matrix[1][1] == "X") && matrix[0][0] != "X")
			{
				if (matrix[0][0] != "O")
				{
					matrix[0][0] = "O";
					numb++;
					return true;
				}
			}
			else if ((matrix[1][1] == "X") && matrix[0][2] != "X")
			{
				if (matrix[0][2] != "O")
				{
					matrix[0][2] = "O";
					numb++;
					return true;
				}
			}
			else if ((matrix[1][1] == "X") && matrix[2][0] != "X")
			{
				if (matrix[2][0] != "O")
				{
					matrix[2][0] = "O";
					numb++;
					return true;
				}
			}
			if ((matrix[i][1] == "X" || matrix[i][1] == "O") && (matrix[i][2] == "X" || matrix[i][2] == "O"))
			{
				if (matrix[i][0] != "X" && matrix[i][0] != "O")
				{
					matrix[i][0] = "O";
					numb++;
					//step = true;
					return true;
				}
			}
			if ((matrix[i][0] == "X" || matrix[i][0] == "O") && (matrix[i][2] == "X" || matrix[i][2] == "O"))
			{
				if (matrix[i][1] != "X" && matrix[i][1] != "O")
				{
					matrix[i][1] = "O";
					numb++;
					//step = true;
					return true;
				}
			}

			//
			if ((matrix[0][i] == "X" || matrix[0][i] == "O") && (matrix[1][i] == "X" || matrix[1][i] == "O"))
			{
				if (matrix[2][i] != "X" && matrix[2][i] != "O")
				{
					matrix[2][i] = 'O';
					numb++;
					//step = true;
					return true;
				}
			}
			if ((matrix[1][i] == "X" || matrix[1][i] == "O") && (matrix[2][i] == "X" || matrix[2][i] == "O"))
			{
				if (matrix[0][i] != "X" && matrix[0][i] != "O")
				{
					matrix[0][i] = "O";
					numb++;
					//step = true;
					return true;
				}
			}
			if ((matrix[0][i] == "X" || matrix[0][i] == "O") && (matrix[2][i] == "X" || matrix[2][i] == "O"))
			{
				if (matrix[1][i] != "X" && matrix[1][i] != "O")
				{
					matrix[1][i] = "O";
					numb++;
					//step = true;
					return true;
				}
			}
		}

		//
		if ((matrix[0][0] == "X" || matrix[0][0] == "O") && (matrix[1][1] == "X" || matrix[1][1] == "O"))
		{
			if (matrix[2][2] != "X" && matrix[2][2] != "O")
			{
				matrix[2][2] = "O";
				numb++;
				//step = true;
				return true;
			}
		}

		if ((matrix[0][0] == "X" || matrix[0][0] == "O") && (matrix[2][2] == "X" || matrix[2][2] == "O"))
		{
			if (matrix[1][1] != "X" && matrix[1][1] != "O")
			{
				matrix[1][1] = "O";
				numb++;
				//step = true;
				return true;
			}
		}

		if ((matrix[1][1] == "X" || matrix[1][1] == "O") && (matrix[2][2] == "X" || matrix[2][2] == "O"))
		{
			if (matrix[0][0] != "X" && matrix[0][0] != "O")
			{
				matrix[0][0] = "O";
				numb++;
				//step = true;
				return true;
			}
		}

		//

		if ((matrix[0][2] == "X" || matrix[0][2] == "O") && (matrix[1][1] == "X" || matrix[1][1] == "O"))
		{
			if (matrix[2][0] != "X" && matrix[2][0] != "O")
			{
				matrix[2][0] = "O";
				numb++;
				//step = true;
				return true;
			}

		}

		if ((matrix[0][2] == "X" || matrix[0][2] == "O") && (matrix[2][0] == "X" || matrix[2][0] == "O"))
		{
			if (matrix[1][1] != "X" && matrix[1][1] != "O")
			{
				matrix[1][1] = "O";
				numb++;
				//step = true;
				return true;
			}
		}
		if ((matrix[2][0] == "X" || matrix[2][0] == "O") && (matrix[1][1] == "X" || matrix[1][1] == "O"))
		{
			if (matrix[0][2] != "X" && matrix[0][2] != "O")
			{
				matrix[0][2] = "O";
				numb++;
				//step = true;
				return true;
			}
		}

		int n = 1;
		int m = 0, j = 0;

		n = rand() % 10;

		if (n % 3 == 0)
		{
			m = (n / 3) - 1;
			j = 2;
		}
		else
		{
			m = n / 3;
			j = (n % 3) - 1;
		}

		if ((matrix[m][j] == "O") || (matrix[m][j] == "X"))
			return false;
		else
		{
			matrix[m][j] = "O";
			numb++;
			//step = true;
			return true;
		}
	}
}
void Input()
{

  if (GetAsyncKeyState(VK_NUMPAD7) != 0)
  {
    Sleep(300);
    if (matrix[0][0] == " ")
    {
      matrix[0][0] = player;
      TogglePlayer();
	  players(player);
    }
      
  }
  else if (GetAsyncKeyState(VK_NUMPAD8) != 0)
  {
    Sleep(300);
    if (matrix[0][1] == " ")
      matrix[0][1] = player;
      TogglePlayer();
	  players(player);
  }
  else if (GetAsyncKeyState(VK_NUMPAD9) != 0)
  {
    Sleep(300);
    if (matrix[0][2] == " ")
    {
      matrix[0][2] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD4) != 0)
  {
    Sleep(300);
    if (matrix[1][0] == " ")
    {
      matrix[1][0] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD5) != 0)
  {
    Sleep(300);
    if (matrix[1][1] == " ")
    {
      matrix[1][1] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD6) != 0)
  {
    Sleep(300);
    if (matrix[1][2] == " ")
    {
      matrix[1][2] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD1) != 0)
  {
    Sleep(300);
    if (matrix[2][0] == " ")
    {
      matrix[2][0] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD2) != 0)
  {
    Sleep(300);
    if (matrix[2][1] == " ")
    {
      matrix[2][1] = player;
      TogglePlayer();
	  players(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD3) != 0)
  {
    Sleep(300);
    if (matrix[2][2] == " ")
    {
      matrix[2][2] = player;
      TogglePlayer();
	  players(player);
    }
  }
}
void Input_bot()
{

  if (GetAsyncKeyState(VK_NUMPAD7) != 0)
  {
    Sleep(300);
    if (matrix[0][0] == " ")
    {
      matrix[0][0] = player;
	  bot();
	  players_bot(player);
    }
      
  }
  else if (GetAsyncKeyState(VK_NUMPAD8) != 0)
  {
    Sleep(300);
    if (matrix[0][1] == " ")
      matrix[0][1] = player;
	  bot();
	  players_bot(player);
  }
  else if (GetAsyncKeyState(VK_NUMPAD9) != 0)
  {
    Sleep(300);
    if (matrix[0][2] == " ")
    {
      matrix[0][2] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD4) != 0)
  {
    Sleep(300);
    if (matrix[1][0] == " ")
    {
      matrix[1][0] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD5) != 0)
  {
    Sleep(300);
    if (matrix[1][1] == " ")
    {
      matrix[1][1] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD6) != 0)
  {
    Sleep(300);
    if (matrix[1][2] == " ")
    {
      matrix[1][2] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD1) != 0)
  {
    Sleep(300);
    if (matrix[2][0] == " ")
    {
      matrix[2][0] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD2) != 0)
  {
    Sleep(300);
    if (matrix[2][1] == " ")
    {
      matrix[2][1] = player;
	  bot();
	  players_bot(player);
    }
  }
  else if (GetAsyncKeyState(VK_NUMPAD3) != 0)
  {
    Sleep(300);
    if (matrix[2][2] == " ")
    {
      matrix[2][2] = player;
	  bot();
	  players_bot(player);
    }
  }
}


string Win()
{

  if (matrix[0][0] == "X" && matrix[0][1] == "X" && matrix[0][2] == "X")
    return "X";
  else if (matrix[1][0] == "X" && matrix[1][1] == "X" && matrix[1][2] == "X")
    return "X";
  else if (matrix[2][0] == "X" && matrix[2][1] == "X" && matrix[2][2] == "X")
    return "X";

  else if (matrix[0][0] == "X" && matrix[1][0] == "X" && matrix[2][0] == "X")
    return "X";
  else if (matrix[0][1] == "X" && matrix[1][1] == "X" && matrix[2][1] == "X")
    return "X";
  else if (matrix[0][2] == "X" && matrix[1][2] == "X" && matrix[2][2] == "X")
    return "X";


  else if (matrix[0][0] == "X" && matrix[1][1] == "X" && matrix[2][2] == "X")
    return "X";
  else if (matrix[2][0] == "X" && matrix[1][1] == "X" && matrix[0][2] == "X")
    return "X";

  
  else if (matrix[0][0] == "O" && matrix[0][1] == "O" && matrix[0][2] == "O")
    return "O";
  else if (matrix[1][0] == "O" && matrix[1][1] == "O" && matrix[1][2] == "O")
    return "O";
  else if (matrix[2][0] == "O" && matrix[2][1] == "O" && matrix[2][2] == "O")
    return "O";

  else if (matrix[0][0] == "O" && matrix[1][0] == "O" && matrix[2][0] == "O")
    return "O";
  else if (matrix[0][1] == "O" && matrix[1][1] == "O" && matrix[2][1] == "O")
    return "O";
  else if (matrix[0][2] == "O" && matrix[1][2] == "O" && matrix[2][2] == "O")
    return "O";

  else if (matrix[0][0] == "O" && matrix[1][1] == "O" && matrix[2][2] == "O")
    return "O";
  else if (matrix[2][0] == "O" && matrix[1][1] == "O" && matrix[0][2] == "O")
    return "O";

  else if (matrix[0][0] == "O" && matrix[0][1] == "X" && matrix[0][2] == "O" &&
    matrix[1][0] == "X" && matrix[1][1] == "O" && matrix[1][2] == "X" &&
    matrix[2][0] == "X" && matrix[2][1] == "O" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "X" && matrix[0][1] == "O" && matrix[0][2] == "X" &&
    matrix[1][0] == "X" && matrix[1][1] == "O" && matrix[1][2] == "O" &&
    matrix[2][0] == "O" && matrix[2][1] == "X" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "O" && matrix[0][1] == "X" && matrix[0][2] == "O" &&
    matrix[1][0] == "X" && matrix[1][1] == "O" && matrix[1][2] == "X" &&
    matrix[2][0] == "X" && matrix[2][1] == "O" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "X" && matrix[0][1] == "O" && matrix[0][2] == "X" &&
    matrix[1][0] == "O" && matrix[1][1] == "O" && matrix[1][2] == "X" &&
    matrix[2][0] == "X" && matrix[2][1] == "X" && matrix[2][2] == "O")
    return "D";

  else if (matrix[0][0] == "O" && matrix[0][1] == "X" && matrix[0][2] == "O" &&
    matrix[1][0] == "X" && matrix[1][1] == "X" && matrix[1][2] == "O" &&
    matrix[2][0] == "X" && matrix[2][1] == "O" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "X" && matrix[0][1] == "O" && matrix[0][2] == "X" &&
    matrix[1][0] == "X" && matrix[1][1] == "X" && matrix[1][2] == "O" &&
    matrix[2][0] == "O" && matrix[2][1] == "X" && matrix[2][2] == "O")
    return "D";
  
  else if (matrix[0][0] == "O" && matrix[0][1] == "X" && matrix[0][2] == "X" &&
    matrix[1][0] == "X" && matrix[1][1] == "O" && matrix[1][2] == "O" &&
    matrix[2][0] == "X" && matrix[2][1] == "O" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "X" && matrix[0][1] == "X" && matrix[0][2] == "O" &&
    matrix[1][0] == "O" && matrix[1][1] == "O" && matrix[1][2] == "X" &&
    matrix[2][0] == "X" && matrix[2][1] == "X" && matrix[2][2] == "O")
    return "D";
  
  else if (matrix[0][0] == "O" && matrix[0][1] == "O" && matrix[0][2] == "X" &&
    matrix[1][0] == "X" && matrix[1][1] == "X" && matrix[1][2] == "O" &&
    matrix[2][0] == "O" && matrix[2][1] == "X" && matrix[2][2] == "X")
    return "D";

  else if (matrix[0][0] == "X" && matrix[0][1] == "O" && matrix[0][2] == "X" &&
    matrix[1][0] == "O" && matrix[1][1] == "X" && matrix[1][2] == "X" &&
    matrix[2][0] == "O" && matrix[2][1] == "X" && matrix[2][2] == "O")
    return "D";

  return "/";
}
bool check_win(string win)
{
  if (win == "X")
  {
	  string text = "P L A Y E R # 1 ( X )       W  I  N  S!";
	  Sleep(2000);
	  int len_text = text.length();
	  cout << "\n\n\n\n\t\t\t\t  ";
	  for (int x = 0; x < len_text; x++)
	  {
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
		  cout << text[x];
		  Sleep(30);
	  }
	  null();
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	  return true;
  }
  else if (win == "O")
  {
	string text = "P L A Y E R # 2 ( O )       W  I  N  S!";
    Sleep(2000);
	int len_text = text.length();
	cout << "\n\n\n\n\t\t\t\t  ";
	for (int x = 0; x < len_text; x++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
		cout << text[x];
		Sleep(30);
	}
    null();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    return true;
	
  }
  else if (win == "D")
  {
	  string text = "D      R      A       W!";
	  Sleep(2000);
	  int len_text = text.length();
	  cout << "\n\n\n\n\t\t\t\t\t  ";
	  for (int x = 0; x < len_text; x++)
	  {
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
		  cout << text[x];
		  Sleep(30);
	  }
	  null();
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	  return true;
  }

}
bool check_win_bot(string win)
{
	if (win == "X")
	{
		string text = "P L A Y E R # 1 ( X )       W  I  N  S!";
		Sleep(2000);
		int len_text = text.length();
		cout << "\n\n\n\n\t\t\t\t  ";
		for (int x = 0; x < len_text; x++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
			cout << text[x];
			Sleep(30);
		}
		null();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		return true;
	}
	else if (win == "O")
	{
		string text = "B     O     T( O )       W  I  N  S!";
		Sleep(2000);
		int len_text = text.length();
		cout << "\n\n\n\n\t\t\t\t  ";
		for (int x = 0; x < len_text; x++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
			cout << text[x];
			Sleep(30);
		}
		null();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		return true;

	}
	else if (win == "D")
	{
		string text = "D      R      A       W!";
		Sleep(2000);
		int len_text = text.length();
		cout << "\n\n\n\n\t\t\t\t\t  ";
		for (int x = 0; x < len_text; x++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
			cout << text[x];
			Sleep(30);
		}
		null();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		return true;
	}

}

void multiplayer()
{
  null();
  if (information_multiplayer == false)
  {
	  display_info_multiplayer();
  } 
  system("cls");
  player = "X";
  Sleep(500);
  while (1)
  {
    if (GetAsyncKeyState(VK_SPACE) != 0)
    {
      second_menu();
      Sleep(150);
    }
    Input();
	players(player);
    Draw(player);
    Sleep(500);
    
    if (check_win(Win()) == true)
      break;
  }
}
void singleplayer()
{
	null();
	if (information_multiplayer == false)
	{
		display_info_multiplayer();
	}
	system("cls");
	player = "X";
	Sleep(500);
  while (1) {
    if (GetAsyncKeyState(VK_SPACE) != 0)
    {
      second_menu();
      Sleep(150);
    }
	Input_bot();
	players_bot(player);
    Draw(player);
	
	Sleep(500);

    if (check_win_bot(Win()) == true)
      break;
  }


}

void second_menu()
{
  Sleep(150);
  int pointer_1 = 0;

  while (true)
  {
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    display_text_no_ping(menus[1], color = 12);

    for (int i = 0; i < 3; ++i)
    {
      if (i == pointer_1) // типо если ща new game то высвечивай его понял?
      {

        display_text_no_ping(Menu[i], 11);
      }
      else if (i == pointer_1 - 1 || pointer_1 + 1)
      {
        display_text_no_ping(Menu[i], 15);
      }
      else if (i == pointer_1 - 2 || pointer_1 + 2)
      {
        display_text_no_ping(Menu[i], 15);
      }
    }
    while (true)
    {
      if (GetAsyncKeyState(VK_UP) != 0)
      {
        pointer_1 -= 1;
        if (pointer_1 == -1)
        {
          pointer_1 = 2;
        }
        break;
      }
      else if (GetAsyncKeyState(VK_DOWN) != 0)
      {
        pointer_1 += 1;
        if (pointer_1 == 1)
        {
          pointer_1 = 1;
        }
        if (pointer_1 == 3)
        {
          pointer_1 = 0;
        }
        break;
      }
      else if ((GetAsyncKeyState(VK_SPACE) != 0))
      {
        first_menu();
        Sleep(1000);
      }
      else if (GetAsyncKeyState(VK_RETURN) != 0)
      {
        switch (pointer_1)
        {
        case 0:
        {
              singleplayer();
              Sleep(2000);
              second_menu();
              break;
        }
        case 1:
        {
              multiplayer();
              Sleep(2000);
              second_menu();
              break;
        }
        case 2:
        {
              first_menu();
              Sleep(150);
              break;
        }
          break;
        }

      }

    }

    Sleep(150);

  }
}
void first_menu()
{
  Sleep(200);
  int pointer = 0;
  while (true)
  {
    system("cls");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    /*display_text_no_ping(menu_table);*/
    display_text_no_ping(menus[0], color = 12);
    for (int i = 0; i < 3; ++i)
    {
      if (i == pointer) // типо если ща new game то высвечивай его понял?
      {

        display_text_no_ping(Main_menu[i], 11);
      }
      else if (i == pointer - 1 || pointer + 1)
      {
        display_text_no_ping(Main_menu[i], 15);
      }

      else if (i == pointer - 2 || pointer + 2)
      {
        display_text_no_ping(Main_menu[i], 15);
      }

    }
    while (true)
    {
      if (GetAsyncKeyState(VK_UP) != 0) // если вверх не false типа если ты нажал на него то ...
      {
        pointer -= 1; // то поинтер получиться -1 типа нету индекса -1 поэтому
        if (pointer == -1)
        {
          pointer = 2;
        }
        break;
      }
      else if (GetAsyncKeyState(VK_DOWN) != 0)
      {
        pointer += 1;
        if (pointer == 1) //как сюда добавить третую проверку логику ага здесь только 1 и 0 нам нужно еще 2
        {
          pointer = 1;
        }
        if (pointer == 3)
        {
          pointer = 0;
        }
        break;
      }
      else if ((GetAsyncKeyState(VK_SPACE) != 0))
      {
        exit(1);
        Sleep(150);
      }
      else if (GetAsyncKeyState(VK_RETURN) != 0)
      {
        switch (pointer)
        {
        case 0:
        {
              system("cls");
              display_text(menus[1], color = 12);
              display_text(Menu[0]);
              display_text(Menu[1]);
              display_text(Menu[2]);
              Sleep(200);
              second_menu();
              break;
        }
          break;
        case 1:
        {
              system("cls");
              info();
        }
          break;
        case 2:
        {
              exit(1);
        }
          break;
        }

      }

    }

    Sleep(150);
  }
}
void info()
{

  display_text(info_text, color = 15, sleep = 1);
  Sleep(300);
  while (1)
  {
    if (GetAsyncKeyState(VK_SPACE) != 0)
    {
      first_menu();
      Sleep(150);
    }
  }
}


int main()
{
  greeting();
  display_text(menus[0], color = 12);
  display_text(Main_menu[0]);
  display_text(Main_menu[1]);
  display_text(Main_menu[2]);
  Sleep(300);
  first_menu();
  system("pause");
  return  0;
}