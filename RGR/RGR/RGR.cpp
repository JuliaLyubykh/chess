#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <iostream>
#include <map>
#include <string>
#include <fstream>
//осевой сдвиг фигуры - 63 пикселя
using namespace std;
void otris(string str, int* arr);
void cord(int x, int y);
HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
HDC hDC = GetDC(GetConsoleWindow());
HPEN Pen = CreatePen(PS_SOLID, 2, RGB(50, 40, 50));
HPEN Pen1 = CreatePen(PS_SOLID, 2, RGB(250, 250, 250));
HPEN Pen2 = CreatePen(PS_SOLID, 5, RGB(255,0, 255));
HPEN Pen3 = CreatePen(PS_SOLID, 5, RGB(255, 255, 0));
map <int, string> deck = { 
		{0, "A1"},
		{1, "B1"},
		{2, "C1"},
		{3, "D1"},
		{4, "E1"},
		{5, "F1"},
		{6, "G1"},
		{7, "H1"},
		{8, "A2"},
		{9, "B2"},
		{10, "C2"},
		{11, "D2"},
		{12, "E2"},
		{13, "F2"},
		{14, "G2"},
		{15, "H2"},
		{16, "A3"},
		{17, "B3"},
		{18, "C3"},
		{19, "D3"},
		{20, "E3"},
		{21, "F3"},
		{22, "G3"},
		{23, "H3"},
		{24, "A4"},
		{25, "B4"},
		{26, "C4"},
		{27, "D4"},
		{28, "E4"},
		{29, "F4"},
		{30, "G4"},
		{31, "H4"},
		{32, "A5"},
		{33, "B5"},
		{34, "C5"},
		{35, "D5"},
		{36, "E5"},
		{37, "F5"},
		{38, "G5"},
		{39, "H5"},
		{40, "A6"},
		{41, "B6"},
		{42, "C6"},
		{43, "D6"},
		{44, "E6"},
		{45, "F6"},
		{46, "G6"},
		{47, "H6"},
		{48, "A7"},
		{49, "B7"},
		{50, "C7"},
		{51, "D7"},
		{52, "E7"},
		{53, "F7"},
		{54, "G7"},
		{55, "H7"},
		{56, "A8"},
		{57, "B8"},
		{58, "C8"},
		{59, "D8"},
		{60, "E8"},
		{61, "F8"},
		{62, "G8"},
		{63, "H8"}
};
void peshka(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n,n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 6;
	x += 3;
	for (int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 1;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x -= 3;
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x -= 5;
	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 3;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void slon(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n,n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 20;
	x -= 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x -= 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 10;
	int x2 = x, x1;
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 4;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 4;
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	x2 = x;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 6;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 6;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void kon(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	for (int i = 0; i < 28; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 28; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 4;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x -= 15;
	for (int i = 0; i < 38; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void ladya(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x += 5;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 15;
	x -= 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x -= 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x += 5;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 3;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void ferz(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x += 5;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 15;
	x -= 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x -= 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 13;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 6;
	x -= 10;
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 10;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void korol(int x, int y, int n)
{
	for (int i = 0; i < 53; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 43; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 8;
	x += 5;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 15;
	x -= 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 3;
	x -= 5;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 5;
	x += 5;
	for (int i = 0; i < 23; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 33; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x -= 1;
	for (int i = 0; i < 35; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	int x2 = x, x1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	x2 = x;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n,n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	x2 = x;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n,n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 2;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n,n, n));
		}
	}
	y -= 1;
	x += 1;
	x2 = x;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 4;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 4;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	x2 = x;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n,n));
		}
	}
	x2 = x1 + 6;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	x2 = x1 + 6;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x2 + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 8;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
	y -= 1;
	x += 1;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x1 = x + i;
			int y1 = y - j;
			SetPixel(hDC, x1, y1, RGB(n, n, n));
		}
	}
}
void cursor(int a, int b, string str,int *arr)
{
	otris(str, arr);
	SelectObject(hDC, Pen2);
	MoveToEx(hDC, a, b, NULL);
	LineTo(hDC, a+63, b);
	MoveToEx(hDC, a, b, NULL);
	LineTo(hDC, a, b+63);
	MoveToEx(hDC, a+63, b, NULL);
	LineTo(hDC, a+63, b+63);
	MoveToEx(hDC, a, b+63, NULL);
	LineTo(hDC, a + 63, b + 63);
}
void cursor1(int a, int b, string str, int i, int j,int* arr)
{
	cursor(i,j,str,arr);
	SelectObject(hDC, Pen3);
	MoveToEx(hDC, a, b, NULL);
	LineTo(hDC, a + 63, b);
	MoveToEx(hDC, a, b, NULL);
	LineTo(hDC, a, b + 63);
	MoveToEx(hDC, a + 63, b, NULL);
	LineTo(hDC, a + 63, b + 63);
	MoveToEx(hDC, a, b + 63, NULL);
	LineTo(hDC, a + 63, b + 63);
}
void chit(int* arr)
{
	int n;
	cin >> n;
	for (int i = 0; i < 64; i++) if (arr[i] == n) arr[i]=33;
}
bool check(int *arr, int n1, int n2, int w)
{
	int nn1 = n1;
	if (arr[n1] == 48 || arr[n1] == 49 || arr[n1] == 50 || arr[n1] == 51 || arr[n1] == 52 || arr[n1] == 53 || arr[n1] == 54 || arr[n1] == 55 || arr[n1] == 8 || arr[n1] == 9 || arr[n1] == 10 || arr[n1] == 11 || arr[n1] == 12 || arr[n1] == 13 || arr[n1] == 14 || arr[n1] == 15)
		//если фигура - пешка
	{
		if (w == 1)
		{
			if (arr[n1] == 48 || arr[n1] == 49 || arr[n1] == 50 || arr[n1] == 51 || arr[n1] == 52 || arr[n1] == 53 || arr[n1] == 54 || arr[n1] == 55)
			{
				if (n2 == n1 - 8)
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				if (n2 == n1 - 16 && (n1 == 48 || n1 == 49 || n1 == 50 || n1 == 51 || n1 == 52 || n1 == 53 || n1 == 54 || n1 == 55))
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				else if (n2 == n1 - 7 || n2 == n1 - 9) if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				return false;
			}
			if (arr[n1] == 8 || arr[n1] == 9 || arr[n1] == 10 || arr[n1] == 11 || arr[n1] == 12 || arr[n1] == 13 || arr[n1] == 14 || arr[n1] == 15)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (n2 == n1 + 8)
				{
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				if (n2 == n1 + 16 && (n1 == 8 || n1 == 9 || n1 == 10 || n1 == 11 || n1 == 12 || n1 == 13 || n1 == 14 || n1 == 15))
				{
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				else if (n2 == n1 + 7 || n2 == n1 + 9) if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				return false;
			}
		}
		if (w == 0)
		{
			if (arr[n1] == 48 || arr[n1] == 49 || arr[n1] == 50 || arr[n1] == 51 || arr[n1] == 52 || arr[n1] == 53 || arr[n1] == 54 || arr[n1] == 55)
			{
				if (n2 == n1 + 8)
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				if (n2 == n1 + 16 && (n1 == 48 || n1 == 49 || n1 == 50 || n1 == 51 || n1 == 52 || n1 == 53 || n1 == 54 || n1 == 55))
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				else if (n2 == n1 + 7 || n2 == n1 + 9) if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				return false;
			}
			if (arr[n1] == 8 || arr[n1] == 9 || arr[n1] == 10 || arr[n1] == 11 || arr[n1] == 12 || arr[n1] == 13 || arr[n1] == 14 || arr[n1] == 15)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (n2 == n1 - 8)
				{
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				if (n2 == n1 - 16 && (n1 == 8 || n1 == 9 || n1 == 10 || n1 == 11 || n1 == 12 || n1 == 13 || n1 == 14 || n1 == 15))
				{
					int temp = arr[n1];
					arr[n1] = arr[n2];
					arr[n2] = temp;
					return true;
				}
				else if (n2 == n1 - 7 || n2 == n1 - 9) if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				return false;
			}
		}
	}
	if (arr[n1] == 0 || arr[n1] == 7 || arr[n1] == 56 || arr[n1] == 63)
		//если фигура - слон
	{
		if (n2 == n1 + 8 || n2 == n1 + 16 || n2 == n1 + 24 || n2 == n1 + 32 || n2 == n1 + 40 || n2 == n1 + 48 || n2 == n1 + 56 || n2 == n1 + 64 ||
			n2 == n1 - 8 || n2 == n1 - 16 || n2 == n1 - 24 || n2 == n1 - 32 || n2 == n1 - 40 || n2 == n1 - 48 || n2 == n1 - 56 || n2 == n1 - 64 ||
			n2 == n1 + 1 || n2 == n1 + 2 || n2 == n1 + 3 || n2 == n1 + 4 || n2 == n1 + 5 || n2 == n1 + 6 || n2 == n1 + 7 ||
			n2 == n1 - 1 || n2 == n1 - 2 || n2 == n1 - 3 || n2 == n1 - 4 || n2 == n1 - 5 || n2 == n1 - 6 || n2 == n1 - 7)
		{
			if (arr[n1] == 0 || arr[n1] == 7)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2]=arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
			if (arr[n1] == 56 || arr[n1] == 63)
			{
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
		}
		else return false;
	}
	if (arr[n1] == 57 || arr[n1] == 62 || arr[n1] == 1 || arr[n1] == 6)
		//если фигугра - конь
	{
		if (n2 == n1 + 15 || n2 == n1 + 17 || n2 == n1 + 6 || n2 == n1 + 10 || 
			n2 == n1 - 15 || n2 == n1 - 17 || n2 == n1 - 6 || n2 == n1 - 10)
		{
			if (arr[n1] == 1 || arr[n1] == 6)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
			if (arr[n1] == 57 || arr[n1] == 62)
			{
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
		}
		else return false;
	}
	if (arr[n1] == 58 || arr[n1] == 61 || arr[n1] == 2 || arr[n1] == 5)
		//если фигура - ладья
	{
		if (n2 == n1 + 9 || n2 == n1 + 18 || n2 == n1 + 27 || n2 == n1 + 36 || n2 == n1 + 45 || n2 == n1 + 54 || n2 == n1 + 63 ||
			n2 == n1 - 9 || n2 == n1 - 18 || n2 == n1 - 27 || n2 == n1 - 36 || n2 == n1 - 45 || n2 == n1 - 54 || n2 == n1 - 63 ||
			n2 == n1 + 7 || n2 == n1 + 14 || n2 == n1 + 21 || n2 == n1 + 28 || n2 == n1 + 35 || n2 == n1 + 42 || n2 == n1 + 49 ||
			n2 == n1 - 7 || n2 == n1 - 14 || n2 == n1 - 21 || n2 == n1 - 28 || n2 == n1 - 35 || n2 == n1 - 42 || n2 == n1 - 49)
		{
			if (arr[n1] == 2 || arr[n1] == 5)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
			if (arr[n1] == 58 || arr[n1] == 61)
			{
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
		}
		else return false;
	}
	if (arr[n1] == 59 || arr[n1] == 3 )
		//если фигура - ферзь
	{
		if (n2 == n1 + 8 || n2 == n1 + 16 || n2 == n1 + 24 || n2 == n1 + 32 || n2 == n1 + 40 || n2 == n1 + 48 || n2 == n1 + 56 || n2 == n1 + 64 ||
			n2 == n1 - 8 || n2 == n1 - 16 || n2 == n1 - 24 || n2 == n1 - 32 || n2 == n1 - 40 || n2 == n1 - 48 || n2 == n1 - 56 || n2 == n1 - 64 ||
			n2 == n1 + 1 || n2 == n1 + 2 || n2 == n1 + 3 || n2 == n1 + 4 || n2 == n1 + 5 || n2 == n1 + 6 || n2 == n1 + 7 ||
			n2 == n1 - 1 || n2 == n1 - 2 || n2 == n1 - 3 || n2 == n1 - 4 || n2 == n1 - 5 || n2 == n1 - 6 || n2 == n1 - 7 ||
			n2 == n1 + 9 || n2 == n1 + 18 || n2 == n1 + 27 || n2 == n1 + 36 || n2 == n1 + 45 || n2 == n1 + 54 || n2 == n1 + 63 ||
			n2 == n1 - 9 || n2 == n1 - 18 || n2 == n1 - 27 || n2 == n1 - 36 || n2 == n1 - 45 || n2 == n1 - 54 || n2 == n1 - 63 ||
			n2 == n1 + 7 || n2 == n1 + 14 || n2 == n1 + 21 || n2 == n1 + 28 || n2 == n1 + 35 || n2 == n1 + 42 || n2 == n1 + 49 ||
			n2 == n1 - 7 || n2 == n1 - 14 || n2 == n1 - 21 || n2 == n1 - 28 || n2 == n1 - 35 || n2 == n1 - 42 || n2 == n1 - 49)
		{
			if (arr[n1] == 3 )
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
			if (arr[n1] == 59)
			{
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
		}
		else return false;
	}
	if (arr[n1] == 60 || arr[n1] == 4)
		//если фигура - король
	{
		if (n2 == n1 + 1 || n2 == n1 - 1 || n2 == n1 + 8 || n2 == n1 - 8 || n2 == n1 + 7 || n2 == n1 + 9 || n2 == n1 - 7 || n2 == n1 - 9)
		{
			if (arr[n1] == 4)
			{
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15) return false;
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 63)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
			if (arr[n1] == 60)
			{
				if (arr[n2] == 48 || arr[n2] == 49 || arr[n2] == 50 || arr[n2] == 51 || arr[n2] == 52 || arr[n2] == 53 || arr[n2] == 54 || arr[n2] == 55 || arr[n2] == 56 || arr[n2] == 57 || arr[n2] == 58 || arr[n2] == 59 || arr[n2] == 60 || arr[n2] == 61 || arr[n2] == 62 || arr[n2] == 62) return false;
				if (arr[n2] == 0 || arr[n2] == 1 || arr[n2] == 2 || arr[n2] == 3 || arr[n2] == 4 || arr[n2] == 5 || arr[n2] == 6 || arr[n2] == 7 || arr[n2] == 8 || arr[n2] == 9 || arr[n2] == 10 || arr[n2] == 11 || arr[n2] == 12 || arr[n2] == 13 || arr[n2] == 14 || arr[n2] == 15)
				{
					arr[n2] = arr[n1];
					arr[n1] = 33;
					return true;
				}
				else
				{
					int temp = arr[n2];
					arr[n2] = arr[n1];
					arr[n1] = temp;
					return true;
				}
			}
		}
		else return false;
	}
}
int move(int* arr, int* n1, int* n2, int w, string str)
{
	int code, pos = 0, n, mark = 0, a = 200, b = 541;
	cursor(a,b,str,arr);
	if (mark != 0)
	{
	skip:
		*n1 = 0;
		*n2 = 0;
		return 0;
	}
	snova:
	do {
		code = _getch();
		int k = pos / 8;
		int k1 = (pos - 1) / 8;
		int k2 = (pos + 1) / 8;
		if ((code == 75) && (pos - 1 >= 0) && (k == k1))
		{
			a -= 63;
			cursor(a, b, str,arr);
			pos -= 1;
		}
		if ((code == 72) && (pos + 8 < 64))
		{
			b -= 63;
			cursor(a, b, str,arr);
			pos += 8;
		}
		if ((code == 77) && (pos + 1 < 64) && (k == k2))
		{
			a += 63;
			cursor(a, b, str,arr);
			pos += 1;
		}
		if (code == 80 && pos - 8 >= 0)
		{
			b += 63;
			cursor(a, b, str,arr);
			pos -= 8;
		}
		if (code == 32)
		{
			chit(arr);
			mark++;
			goto skip;
		}
	}while (code != 13);
	if (arr[pos] == 0 || arr[pos] == 1 || arr[pos] == 2 || arr[pos] == 3 || arr[pos] == 4 || arr[pos] == 5 || arr[pos] == 6 || arr[pos] == 7 || arr[pos] == 8 || arr[pos] == 9 || arr[pos] == 10 || arr[pos] == 11 || arr[pos] == 12 || arr[pos] == 13 || arr[pos] == 14 || arr[pos] == 15 || arr[pos] == 48 || arr[pos] == 49 || arr[pos] == 50 || arr[pos] == 51 || arr[pos] == 52 || arr[pos] == 53 || arr[pos] == 54 || arr[pos] == 55 || arr[pos] == 56 || arr[pos] == 57 || arr[pos] == 58 || arr[pos] == 59 || arr[pos] == 60 || arr[pos] == 61 || arr[pos] == 62 || arr[pos] == 63);
	else goto snova;
	if (w == 0) if (arr[pos] == 0 || arr[pos] == 1 || arr[pos] == 2 || arr[pos] == 3 || arr[pos] == 4 || arr[pos] == 5 || arr[pos] == 6 || arr[pos] == 7 || arr[pos] == 8 || arr[pos] == 9 || arr[pos] == 10 || arr[pos] == 11 || arr[pos] == 12 || arr[pos] == 13 || arr[pos] == 14 || arr[pos] == 15) goto snova;
	if (w==1) if (arr[pos] == 48 || arr[pos] == 49 || arr[pos] == 50 || arr[pos] == 51 || arr[pos] == 52 || arr[pos] == 53 || arr[pos] == 54 || arr[pos] == 55 || arr[pos] == 56 || arr[pos] == 57 || arr[pos] == 58 || arr[pos] == 59 || arr[pos] == 60 || arr[pos] == 61 || arr[pos] == 62 || arr[pos] == 63) goto snova;
	int nn1 = pos;
	int dop = pos;
	*n1 = pos;
	int a1 = a, b1 = b; 
	cursor1(a, b, str,a1,b1,arr);
	nepoidet:
	do {
		code = _getch();
		int k = pos / 8;
		int k1 = (pos - 1) / 8;
		int k2 = (pos + 1) / 8;
		if ((code == 75) && (pos - 1 >= 0) && (k == k1))
		{
			a -= 63;
			cursor1(a, b, str, a1, b1,arr);
			pos -= 1;
		}
		if ((code == 72) && (pos + 8 < 64))
		{
			b -= 63;
			cursor1(a, b, str, a1, b1,arr);
			pos += 8;
		}
		if ((code == 77) && (pos + 1 < 64) && (k == k2))
		{
			a += 63;
			cursor1(a, b, str, a1, b1,arr);
			pos += 1;
		}
		if (code == 80 && pos - 8 >= 0)
		{
			b += 63;
			cursor1(a, b, str, a1, b1,arr);
			pos -= 8;
		}
	} while (code != 13);
	if(pos == dop) goto snova;
	if(check(arr, nn1, pos, w)== false) goto nepoidet;
	*n2 = pos;
	return 0;
}
void cord(int x, int y)
{
	COORD G = { x, y };
	SetConsoleCursorPosition(hconsole, G);
}
void otris(string str, int* arr) //подпрограмма для отрисовывания доски
{
	system("cls");
	SetConsoleTextAttribute(hconsole, (WORD)((0) | 15));
	cord(0, 0);
	cout << str;
	cord(95, 0);
	cout << "Cправка:";
	cord(95, 2);
	cout << "Партию начинают";
	cord(95, 3);
	cout << "белые фигуры.";
	cord(95, 5);
	cout << "Каждое действие";
	cord(95, 6);
	cout << "называется ходом.";
	cord(95, 8);
	cout << "Игра заканчивается,";
	cord(95, 9);
	cout << "когда чей-то король падет.";
	cord(95, 11);
	cout << "Пешка ходит на одну или";
	cord(95, 12);
	cout << "две клетки вперед, а бьет";
	cord(95, 13);
	cout << "вперед по диагонали.";
	cord(95, 14);
	cout << "Пешки составляют второй";
	cord(95, 15);
	cout << "ряд фигур.";
	cord(95, 17);
	cout << "В первом ряду по бокам";
	cord(95, 18);
	cout << "стоят ладьи. Двигаются";
	cord(95, 19);
	cout << "на любое число клеток по";
	cord(95, 20);
	cout << "горизонтали и вертикали.";
	cord(95, 22);
	cout << "Рядом с ладьей стоит";
	cord(95, 23);
	cout << "конь. Эта фигура ходит";
	cord(95, 24);
	cout << "буквой Г.";
	cord(95, 26);
	cout << "Дальше стоит слон. Он";
	cord(95, 27);
	cout << "ходит на любое число";
	cord(95, 28);
	cout << "клеток по диагонали.";
	cord(95, 30);
	cout << "Далее стоят ферзь и";
	cord(95, 31);
	cout << "король. Чтобы их";
	cord(95, 32);
	cout << "отличить, достаточно";
	cord(95, 33);
	cout << "запомнить, что ферзь";
	cord(95, 34);
	cout << "любит свой цвет.";
	cord(95, 36);
	cout << "Ферзь может двигаться";
	cord(95, 37);
	cout << "по горизонтали и по";
	cord(95, 38);
	cout << "вертикали, и по";
	cord(95, 39);
	cout << "диагоналям на любое";
	cord(95, 40);
	cout << "число клеток.";
	cord(95, 42);
	cout << "Король может, как и";
	cord(95, 43);
	cout << "ферзь, ходить по";
	cord(95, 44);
	cout << "горизонтали, вертикали,";
	cord(95, 45);
	cout << "диагоналям, но только";
	cord(95, 46);
	cout << "на одну клетку.";
	cord(28, 5);
	cout << "A";
	cord(36, 5);
	cout << "B";
	cord(44, 5);
	cout << "C";
	cord(52, 5);
	cout << "D";
	cord(60, 5);
	cout << "I";
	cord(68, 5);
	cout << "F";
	cord(76, 5);
	cout << "G";
	cord(84, 5);
	cout << "H";
	cord(90, 8);
	cout << "8";
	cord(90, 12);
	cout << "7";
	cord(90, 16);
	cout << "6";
	cord(90, 20);
	cout << "5";
	cord(90, 24);
	cout << "4";
	cord(90, 28);
	cout << "3";
	cord(90, 32);
	cout << "2";
	cord(90, 36);
	cout << "1";
	for (int x = 0; x < 100; x++)
	{
		SelectObject(hDC, Pen1);
		Rectangle(hDC, 200, 100, 263, 163);
		Rectangle(hDC, 326, 100, 389, 163);
		Rectangle(hDC, 452, 100, 515, 163);
		Rectangle(hDC, 578, 100, 641, 163);
		Rectangle(hDC, 200, 226, 263, 289);
		Rectangle(hDC, 326, 226, 389, 289);
		Rectangle(hDC, 452, 226, 515, 289);
		Rectangle(hDC, 578, 226, 641, 289);
		Rectangle(hDC, 200, 352, 263, 415);
		Rectangle(hDC, 326, 352, 389, 415);
		Rectangle(hDC, 452, 352, 515, 415);
		Rectangle(hDC, 578, 352, 641, 415);
		Rectangle(hDC, 200, 478, 263, 541);
		Rectangle(hDC, 326, 478, 389, 541);
		Rectangle(hDC, 452, 478, 515, 541);
		Rectangle(hDC, 578, 478, 641, 541);
		Rectangle(hDC, 263, 163, 326, 226);
		Rectangle(hDC, 389, 163, 452, 226);
		Rectangle(hDC, 515, 163, 578, 226);
		Rectangle(hDC, 641, 163, 704, 226);
		Rectangle(hDC, 263, 289, 326, 352);
		Rectangle(hDC, 389, 289, 452, 352);
		Rectangle(hDC, 515, 289, 578, 352);
		Rectangle(hDC, 641, 289, 704, 352);
		Rectangle(hDC, 263, 415, 326, 478);
		Rectangle(hDC, 389, 415, 452, 478);
		Rectangle(hDC, 515, 415, 578, 478);
		Rectangle(hDC, 641, 415, 704, 478);
		Rectangle(hDC, 263, 541, 326, 604);
		Rectangle(hDC, 389, 541, 452, 604);
		Rectangle(hDC, 515, 541, 578, 604);
		Rectangle(hDC, 641, 541, 704, 604);
		SelectObject(hDC, Pen);
		MoveToEx(hDC, 200, 100, NULL);
		LineTo(hDC, 704, 100);
		MoveToEx(hDC, 200, 163, NULL);
		LineTo(hDC, 704, 163);
		MoveToEx(hDC, 200, 226, NULL);
		LineTo(hDC, 704, 226);
		MoveToEx(hDC, 200, 289, NULL);
		LineTo(hDC, 704, 289);
		MoveToEx(hDC, 200, 352, NULL);
		LineTo(hDC, 704, 352);
		MoveToEx(hDC, 200, 415, NULL);
		LineTo(hDC, 704, 415);
		MoveToEx(hDC, 200, 478, NULL);
		LineTo(hDC, 704, 478);
		MoveToEx(hDC, 200, 541, NULL);
		LineTo(hDC, 704, 541);
		MoveToEx(hDC, 200, 604, NULL);
		LineTo(hDC, 704, 604);
		MoveToEx(hDC, 200, 100, NULL);
		LineTo(hDC, 200, 604);
		MoveToEx(hDC, 263, 100, NULL);
		LineTo(hDC, 263, 604);
		MoveToEx(hDC, 326, 100, NULL);
		LineTo(hDC, 326, 604);
		MoveToEx(hDC, 389, 100, NULL);
		LineTo(hDC, 389, 604);
		MoveToEx(hDC, 452, 100, NULL);
		LineTo(hDC, 452, 604);
		MoveToEx(hDC, 515, 100, NULL);
		LineTo(hDC, 515, 604);
		MoveToEx(hDC, 578, 100, NULL);
		LineTo(hDC, 578, 604);
		MoveToEx(hDC, 641, 100, NULL);
		LineTo(hDC, 641, 604);
		MoveToEx(hDC, 704, 100, NULL);
		LineTo(hDC, 704, 604);
	}
	for (int i = 0; i < 64; i++)
	{
		if (arr[i] == 0 || arr[i] == 7)
		{
			if (i == 0) slon(205,598,180);
			if (i == 1) slon(268, 598, 180);
			if (i == 2) slon(331, 598, 180);
			if (i == 3) slon(394, 598, 180);
			if (i == 4) slon(457, 598, 180);
			if (i == 5) slon(520, 598, 180);
			if (i == 6) slon(583, 598, 180);
			if (i == 7) slon(646, 598, 180);
			if (i == 8) slon(205, 535, 180);
			if (i == 9) slon(268, 535, 180);
			if (i == 10) slon(331, 535, 180);
			if (i == 11) slon(394, 535, 180);
			if (i == 12) slon(457, 535, 180);
			if (i == 13) slon(520, 535, 180);
			if (i == 14) slon(583, 535, 180);
			if (i == 15) slon(646, 535, 180);
			if (i == 16) slon(205, 472, 180);
			if (i == 17) slon(268, 472, 180);
			if (i == 18) slon(331, 472, 180);
			if (i == 19) slon(394, 472, 180);
			if (i == 20) slon(457, 472, 180);
			if (i == 21) slon(520, 472, 180);
			if (i == 22) slon(583, 472, 180);
			if (i == 23) slon(646, 472, 180);
			if (i == 24) slon(205, 409, 180);
			if (i == 25) slon(268, 409, 180);
			if (i == 26) slon(331, 409, 180);
			if (i == 27) slon(394, 409, 180);
			if (i == 28) slon(457, 409, 180);
			if (i == 29) slon(520, 409, 180);
			if (i == 30) slon(583, 409, 180);
			if (i == 31) slon(646, 409, 180);
			if (i == 32) slon(205, 346, 180);
			if (i == 33) slon(268, 346, 180);
			if (i == 34) slon(331, 346, 180);
			if (i == 35) slon(394, 346, 180);
			if (i == 36) slon(457, 346, 180);
			if (i == 37) slon(520, 346, 180);
			if (i == 38) slon(583, 346, 180);
			if (i == 39) slon(646, 346, 180);
			if (i == 40) slon(205, 283, 180);
			if (i == 41) slon(268, 283, 180);
			if (i == 42) slon(331, 283, 180);
			if (i == 43) slon(394, 283, 180);
			if (i == 44) slon(457, 283, 180);
			if (i == 45) slon(520, 283, 180);
			if (i == 46) slon(583, 283, 180);
			if (i == 47) slon(646, 283, 180);
			if (i == 48) slon(205, 220, 180);
			if (i == 49) slon(268, 220, 180);
			if (i == 50) slon(331, 220, 180);
			if (i == 51) slon(394, 220, 180);
			if (i == 52) slon(457, 220, 180);
			if (i == 53) slon(520, 220, 180);
			if (i == 54) slon(583, 220, 180);
			if (i == 55) slon(646, 220, 180);
			if (i == 56) slon(205, 157, 180);
			if (i == 57) slon(268, 157, 180);
			if (i == 58) slon(331, 157, 180);
			if (i == 59) slon(394, 157, 180);
			if (i == 60) slon(457, 157, 180);
			if (i == 61) slon(520, 157, 180);
			if (i == 62) slon(583, 157, 180);
			if (i == 63) slon(646, 157, 180);
		}
		if (arr[i] == 1 || arr[i] == 6)
		{
			if (i == 0) kon(205, 598, 180);
			if (i == 1) kon(268, 598, 180);
			if (i == 2) kon(331, 598, 180);
			if (i == 3) kon(394, 598, 180);
			if (i == 4) kon(457, 598, 180);
			if (i == 5) kon(520, 598, 180);
			if (i == 6) kon(583, 598, 180);
			if (i == 7) kon(646, 598, 180);
			if (i == 8) kon(205, 535, 180);
			if (i == 9) kon(268, 535, 180);
			if (i == 10) kon(331, 535, 180);
			if (i == 11) kon(394, 535, 180);
			if (i == 12) kon(457, 535, 180);
			if (i == 13) kon(520, 535, 180);
			if (i == 14) kon(583, 535, 180);
			if (i == 15) kon(646, 535, 180);
			if (i == 16) kon(205, 472, 180);
			if (i == 17) kon(268, 472, 180);
			if (i == 18) kon(331, 472, 180);
			if (i == 19) kon(394, 472, 180);
			if (i == 20) kon(457, 472, 180);
			if (i == 21) kon(520, 472, 180);
			if (i == 22) kon(583, 472, 180);
			if (i == 23) kon(646, 472, 180);
			if (i == 24) kon(205, 409, 180);
			if (i == 25) kon(268, 409, 180);
			if (i == 26) kon(331, 409, 180);
			if (i == 27) kon(394, 409, 180);
			if (i == 28) kon(457, 409, 180);
			if (i == 29) kon(520, 409, 180);
			if (i == 30) kon(583, 409, 180);
			if (i == 31) kon(646, 409, 180);
			if (i == 32) kon(205, 346, 180);
			if (i == 33) kon(268, 346, 180);
			if (i == 34) kon(331, 346, 180);
			if (i == 35) kon(394, 346, 180);
			if (i == 36) kon(457, 346, 180);
			if (i == 37) kon(520, 346, 180);
			if (i == 38) kon(583, 346, 180);
			if (i == 39) kon(646, 346, 180);
			if (i == 40) kon(205, 283, 180);
			if (i == 41) kon(268, 283, 180);
			if (i == 42) kon(331, 283, 180);
			if (i == 43) kon(394, 283, 180);
			if (i == 44) kon(457, 283, 180);
			if (i == 45) kon(520, 283, 180);
			if (i == 46) kon(583, 283, 180);
			if (i == 47) kon(646, 283, 180);
			if (i == 48) kon(205, 220, 180);
			if (i == 49) kon(268, 220, 180);
			if (i == 50) kon(331, 220, 180);
			if (i == 51) kon(394, 220, 180);
			if (i == 52) kon(457, 220, 180);
			if (i == 53) kon(520, 220, 180);
			if (i == 54) kon(583, 220, 180);
			if (i == 55) kon(646, 220, 180);
			if (i == 56) kon(205, 157, 180);
			if (i == 57) kon(268, 157, 180);
			if (i == 58) kon(331, 157, 180);
			if (i == 59) kon(394, 157, 180);
			if (i == 60) kon(457, 157, 180);
			if (i == 61) kon(520, 157, 180);
			if (i == 62) kon(583, 157, 180);
			if (i == 63) kon(646, 157, 180);
		}
		if (arr[i] == 2 || arr[i] == 5)
		{
			if (i == 0) ladya(205, 598, 180);
			if (i == 1) ladya(268, 598, 180);
			if (i == 2) ladya(331, 598, 180);
			if (i == 3) ladya(394, 598, 180);
			if (i == 4) ladya(457, 598, 180);
			if (i == 5) ladya(520, 598, 180);
			if (i == 6) ladya(583, 598, 180);
			if (i == 7) ladya(646, 598, 180);
			if (i == 8) ladya(205, 535, 180);
			if (i == 9) ladya(268, 535, 180);
			if (i == 10) ladya(331, 535, 180);
			if (i == 11) ladya(394, 535, 180);
			if (i == 12) ladya(457, 535, 180);
			if (i == 13) ladya(520, 535, 180);
			if (i == 14) ladya(583, 535, 180);
			if (i == 15) ladya(646, 535, 180);
			if (i == 16) ladya(205, 472, 180);
			if (i == 17) ladya(268, 472, 180);
			if (i == 18) ladya(331, 472, 180);
			if (i == 19) ladya(394, 472, 180);
			if (i == 20) ladya(457, 472, 180);
			if (i == 21) ladya(520, 472, 180);
			if (i == 22) ladya(583, 472, 180);
			if (i == 23) ladya(646, 472, 180);
			if (i == 24) ladya(205, 409, 180);
			if (i == 25) ladya(268, 409, 180);
			if (i == 26) ladya(331, 409, 180);
			if (i == 27) ladya(394, 409, 180);
			if (i == 28) ladya(457, 409, 180);
			if (i == 29) ladya(520, 409, 180);
			if (i == 30) ladya(583, 409, 180);
			if (i == 31) ladya(646, 409, 180);
			if (i == 32) ladya(205, 346, 180);
			if (i == 33) ladya(268, 346, 180);
			if (i == 34) ladya(331, 346, 180);
			if (i == 35) ladya(394, 346, 180);
			if (i == 36) ladya(457, 346, 180);
			if (i == 37) ladya(520, 346, 180);
			if (i == 38) ladya(583, 346, 180);
			if (i == 39) ladya(646, 346, 180);
			if (i == 40) ladya(205, 283, 180);
			if (i == 41) ladya(268, 283, 180);
			if (i == 42) ladya(331, 283, 180);
			if (i == 43) ladya(394, 283, 180);
			if (i == 44) ladya(457, 283, 180);
			if (i == 45) ladya(520, 283, 180);
			if (i == 46) ladya(583, 283, 180);
			if (i == 47) ladya(646, 283, 180);
			if (i == 48) ladya(205, 220, 180);
			if (i == 49) ladya(268, 220, 180);
			if (i == 50) ladya(331, 220, 180);
			if (i == 51) ladya(394, 220, 180);
			if (i == 52) ladya(457, 220, 180);
			if (i == 53) ladya(520, 220, 180);
			if (i == 54) ladya(583, 220, 180);
			if (i == 55) ladya(646, 220, 180);
			if (i == 56) ladya(205, 157, 180);
			if (i == 57) ladya(268, 157, 180);
			if (i == 58) ladya(331, 157, 180);
			if (i == 59) ladya(394, 157, 180);
			if (i == 60) ladya(457, 157, 180);
			if (i == 61) ladya(520, 157, 180);
			if (i == 62) ladya(583, 157, 180);
			if (i == 63) ladya(646, 157, 180);
		}
		if (arr[i] == 4)
		{
			if (i == 0) korol(205, 598, 180);
			if (i == 1) korol(268, 598, 180);
			if (i == 2) korol(331, 598, 180);
			if (i == 3) korol(394, 598, 180);
			if (i == 4) korol(457, 598, 180);
			if (i == 5) korol(520, 598, 180);
			if (i == 6) korol(583, 598, 180);
			if (i == 7) korol(646, 598, 180);
			if (i == 8) korol(205, 535, 180);
			if (i == 9) korol(268, 535, 180);
			if (i == 10) korol(331, 535, 180);
			if (i == 11) korol(394, 535, 180);
			if (i == 12) korol(457, 535, 180);
			if (i == 13) korol(520, 535, 180);
			if (i == 14) korol(583, 535, 180);
			if (i == 15) korol(646, 535, 180);
			if (i == 16) korol(205, 472, 180);
			if (i == 17) korol(268, 472, 180);
			if (i == 18) korol(331, 472, 180);
			if (i == 19) korol(394, 472, 180);
			if (i == 20) korol(457, 472, 180);
			if (i == 21) korol(520, 472, 180);
			if (i == 22) korol(583, 472, 180);
			if (i == 23) korol(646, 472, 180);
			if (i == 24) korol(205, 409, 180);
			if (i == 25) korol(268, 409, 180);
			if (i == 26) korol(331, 409, 180);
			if (i == 27) korol(394, 409, 180);
			if (i == 28) korol(457, 409, 180);
			if (i == 29) korol(520, 409, 180);
			if (i == 30) korol(583, 409, 180);
			if (i == 31) korol(646, 409, 180);
			if (i == 32) korol(205, 346, 180);
			if (i == 33) korol(268, 346, 180);
			if (i == 34) korol(331, 346, 180);
			if (i == 35) korol(394, 346, 180);
			if (i == 36) korol(457, 346, 180);
			if (i == 37) korol(520, 346, 180);
			if (i == 38) korol(583, 346, 180);
			if (i == 39) korol(646, 346, 180);
			if (i == 40) korol(205, 283, 180);
			if (i == 41) korol(268, 283, 180);
			if (i == 42) korol(331, 283, 180);
			if (i == 43) korol(394, 283, 180);
			if (i == 44) korol(457, 283, 180);
			if (i == 45) korol(520, 283, 180);
			if (i == 46) korol(583, 283, 180);
			if (i == 47) korol(646, 283, 180);
			if (i == 48) korol(205, 220, 180);
			if (i == 49) korol(268, 220, 180);
			if (i == 50) korol(331, 220, 180);
			if (i == 51) korol(394, 220, 180);
			if (i == 52) korol(457, 220, 180);
			if (i == 53) korol(520, 220, 180);
			if (i == 54) korol(583, 220, 180);
			if (i == 55) korol(646, 220, 180);
			if (i == 56) korol(205, 157, 180);
			if (i == 57) korol(268, 157, 180);
			if (i == 58) korol(331, 157, 180);
			if (i == 59) korol(394, 157, 180);
			if (i == 60) korol(457, 157, 180);
			if (i == 61) korol(520, 157, 180);
			if (i == 62) korol(583, 157, 180);
			if (i == 63) korol(646, 157, 180);
		}
		if (arr[i] == 3)
		{
			if (i == 0) ferz(205, 598, 180);
			if (i == 1) ferz(268, 598, 180);
			if (i == 2) ferz(331, 598, 180);
			if (i == 3) ferz(394, 598, 180);
			if (i == 4) ferz(457, 598, 180);
			if (i == 5) ferz(520, 598, 180);
			if (i == 6) ferz(583, 598, 180);
			if (i == 7) ferz(646, 598, 180);
			if (i == 8) ferz(205, 535, 180);
			if (i == 9) ferz(268, 535, 180);
			if (i == 10) ferz(331, 535, 180);
			if (i == 11) ferz(394, 535, 180);
			if (i == 12) ferz(457, 535, 180);
			if (i == 13) ferz(520, 535, 180);
			if (i == 14) ferz(583, 535, 180);
			if (i == 15) ferz(646, 535, 180);
			if (i == 16) ferz(205, 472, 180);
			if (i == 17) ferz(268, 472, 180);
			if (i == 18) ferz(331, 472, 180);
			if (i == 19) ferz(394, 472, 180);
			if (i == 20) ferz(457, 472, 180);
			if (i == 21) ferz(520, 472, 180);
			if (i == 22) ferz(583, 472, 180);
			if (i == 23) ferz(646, 472, 180);
			if (i == 24) ferz(205, 409, 180);
			if (i == 25) ferz(268, 409, 180);
			if (i == 26) ferz(331, 409, 180);
			if (i == 27) ferz(394, 409, 180);
			if (i == 28) ferz(457, 409, 180);
			if (i == 29) ferz(520, 409, 180);
			if (i == 30) ferz(583, 409, 180);
			if (i == 31) ferz(646, 409, 180);
			if (i == 32) ferz(205, 346, 180);
			if (i == 33) ferz(268, 346, 180);
			if (i == 34) ferz(331, 346, 180);
			if (i == 35) ferz(394, 346, 180);
			if (i == 36) ferz(457, 346, 180);
			if (i == 37) ferz(520, 346, 180);
			if (i == 38) ferz(583, 346, 180);
			if (i == 39) ferz(646, 346, 180);
			if (i == 40) ferz(205, 283, 180);
			if (i == 41) ferz(268, 283, 180);
			if (i == 42) ferz(331, 283, 180);
			if (i == 43) ferz(394, 283, 180);
			if (i == 44) ferz(457, 283, 180);
			if (i == 45) ferz(520, 283, 180);
			if (i == 46) ferz(583, 283, 180);
			if (i == 47) ferz(646, 283, 180);
			if (i == 48) ferz(205, 220, 180);
			if (i == 49) ferz(268, 220, 180);
			if (i == 50) ferz(331, 220, 180);
			if (i == 51) ferz(394, 220, 180);
			if (i == 52) ferz(457, 220, 180);
			if (i == 53) ferz(520, 220, 180);
			if (i == 54) ferz(583, 220, 180);
			if (i == 55) ferz(646, 220, 180);
			if (i == 56) ferz(205, 157, 180);
			if (i == 57) ferz(268, 157, 180);
			if (i == 58) ferz(331, 157, 180);
			if (i == 59) ferz(394, 157, 180);
			if (i == 60) ferz(457, 157, 180);
			if (i == 61) ferz(520, 157, 180);
			if (i == 62) ferz(583, 157, 180);
			if (i == 63) ferz(646, 157, 180);
		}
		if (arr[i] == 8 || arr[i] == 9 || arr[i] == 10 || arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14 || arr[i] == 15)
		{
			if (i == 0) peshka(205, 598, 180);
			if (i == 1) peshka(268, 598, 180);
			if (i == 2) peshka(331, 598, 180);
			if (i == 3) peshka(394, 598, 180);
			if (i == 4) peshka(457, 598, 180);
			if (i == 5) peshka(520, 598, 180);
			if (i == 6) peshka(583, 598, 180);
			if (i == 7) peshka(646, 598, 180);
			if (i == 8) peshka(205, 535, 180);
			if (i == 9) peshka(268, 535, 180);
			if (i == 10) peshka(331, 535, 180);
			if (i == 11) peshka(394, 535, 180);
			if (i == 12) peshka(457, 535, 180);
			if (i == 13) peshka(520, 535, 180);
			if (i == 14) peshka(583, 535, 180);
			if (i == 15) peshka(646, 535, 180);
			if (i == 16) peshka(205, 472, 180);
			if (i == 17) peshka(268, 472, 180);
			if (i == 18) peshka(331, 472, 180);
			if (i == 19) peshka(394, 472, 180);
			if (i == 20) peshka(457, 472, 180);
			if (i == 21) peshka(520, 472, 180);
			if (i == 22) peshka(583, 472, 180);
			if (i == 23) peshka(646, 472, 180);
			if (i == 24) peshka(205, 409, 180);
			if (i == 25) peshka(268, 409, 180);
			if (i == 26) peshka(331, 409, 180);
			if (i == 27) peshka(394, 409, 180);
			if (i == 28) peshka(457, 409, 180);
			if (i == 29) peshka(520, 409, 180);
			if (i == 30) peshka(583, 409, 180);
			if (i == 31) peshka(646, 409, 180);
			if (i == 32) peshka(205, 346, 180);
			if (i == 33) peshka(268, 346, 180);
			if (i == 34) peshka(331, 346, 180);
			if (i == 35) peshka(394, 346, 180);
			if (i == 36) peshka(457, 346, 180);
			if (i == 37) peshka(520, 346, 180);
			if (i == 38) peshka(583, 346, 180);
			if (i == 39) peshka(646, 346, 180);
			if (i == 40) peshka(205, 283, 180);
			if (i == 41) peshka(268, 283, 180);
			if (i == 42) peshka(331, 283, 180);
			if (i == 43) peshka(394, 283, 180);
			if (i == 44) peshka(457, 283, 180);
			if (i == 45) peshka(520, 283, 180);
			if (i == 46) peshka(583, 283, 180);
			if (i == 47) peshka(646, 283, 180);
			if (i == 48) peshka(205, 220, 180);
			if (i == 49) peshka(268, 220, 180);
			if (i == 50) peshka(331, 220, 180);
			if (i == 51) peshka(394, 220, 180);
			if (i == 52) peshka(457, 220, 180);
			if (i == 53) peshka(520, 220, 180);
			if (i == 54) peshka(583, 220, 180);
			if (i == 55) peshka(646, 220, 180);
			if (i == 56) peshka(205, 157, 180);
			if (i == 57) peshka(268, 157, 180);
			if (i == 58) peshka(331, 157, 180);
			if (i == 59) peshka(394, 157, 180);
			if (i == 60) peshka(457, 157, 180);
			if (i == 61) peshka(520, 157, 180);
			if (i == 62) peshka(583, 157, 180);
			if (i == 63) peshka(646, 157, 180);
		}
		if (arr[i] == 56 || arr[i] == 63)
		{
			if (i == 0) slon(205, 598, 80);
			if (i == 1) slon(268, 598, 80);
			if (i == 2) slon(331, 598, 80);
			if (i == 3) slon(394, 598, 80);
			if (i == 4) slon(457, 598, 80);
			if (i == 5) slon(520, 598, 80);
			if (i == 6) slon(583, 598, 80);
			if (i == 7) slon(646, 598, 80);
			if (i == 8) slon(205, 535, 80);
			if (i == 9) slon(268, 535, 80);
			if (i == 10) slon(331, 535, 80);
			if (i == 11) slon(394, 535, 80);
			if (i == 12) slon(457, 535, 80);
			if (i == 13) slon(520, 535, 80);
			if (i == 14) slon(583, 535, 80);
			if (i == 15) slon(646, 535, 80);
			if (i == 16) slon(205, 472, 80);
			if (i == 17) slon(268, 472, 80);
			if (i == 18) slon(331, 472, 80);
			if (i == 19) slon(394, 472, 80);
			if (i == 20) slon(457, 472, 80);
			if (i == 21) slon(520, 472, 80);
			if (i == 22) slon(583, 472, 80);
			if (i == 23) slon(646, 472, 80);
			if (i == 24) slon(205, 409, 80);
			if (i == 25) slon(268, 409, 80);
			if (i == 26) slon(331, 409, 80);
			if (i == 27) slon(394, 409, 80);
			if (i == 28) slon(457, 409, 80);
			if (i == 29) slon(520, 409, 80);
			if (i == 30) slon(583, 409, 80);
			if (i == 31) slon(646, 409, 80);
			if (i == 32) slon(205, 346, 80);
			if (i == 33) slon(268, 346, 80);
			if (i == 34) slon(331, 346, 80);
			if (i == 35) slon(394, 346, 80);
			if (i == 36) slon(457, 346, 80);
			if (i == 37) slon(520, 346, 80);
			if (i == 38) slon(583, 346, 80);
			if (i == 39) slon(646, 346, 80);
			if (i == 40) slon(205, 283, 80);
			if (i == 41) slon(268, 283, 80);
			if (i == 42) slon(331, 283, 80);
			if (i == 43) slon(394, 283, 80);
			if (i == 44) slon(457, 283, 80);
			if (i == 45) slon(520, 283, 80);
			if (i == 46) slon(583, 283, 80);
			if (i == 47) slon(646, 283, 80);
			if (i == 48) slon(205, 220, 80);
			if (i == 49) slon(268, 220, 80);
			if (i == 50) slon(331, 220, 80);
			if (i == 51) slon(394, 220, 80);
			if (i == 52) slon(457, 220, 80);
			if (i == 53) slon(520, 220, 80);
			if (i == 54) slon(583, 220, 80);
			if (i == 55) slon(646, 220, 80);
			if (i == 56) slon(205, 157, 80);
			if (i == 57) slon(268, 157, 80);
			if (i == 58) slon(331, 157, 80);
			if (i == 59) slon(394, 157, 80);
			if (i == 60) slon(457, 157, 80);
			if (i == 61) slon(520, 157, 80);
			if (i == 62) slon(583, 157, 80);
			if (i == 63) slon(646, 157, 80);
		}
		if (arr[i] == 57 || arr[i] == 62)
		{
			if (i == 0) kon(205, 598, 80);
			if (i == 1) kon(268, 598, 80);
			if (i == 2) kon(331, 598, 80);
			if (i == 3) kon(394, 598, 80);
			if (i == 4) kon(457, 598, 80);
			if (i == 5) kon(520, 598, 80);
			if (i == 6) kon(583, 598, 80);
			if (i == 7) kon(646, 598, 80);
			if (i == 8) kon(205, 535, 80);
			if (i == 9) kon(268, 535, 80);
			if (i == 10) kon(331, 535, 80);
			if (i == 11) kon(394, 535, 80);
			if (i == 12) kon(457, 535, 80);
			if (i == 13) kon(520, 535, 80);
			if (i == 14) kon(583, 535, 80);
			if (i == 15) kon(646, 535, 80);
			if (i == 16) kon(205, 472, 80);
			if (i == 17) kon(268, 472, 80);
			if (i == 18) kon(331, 472, 80);
			if (i == 19) kon(394, 472, 80);
			if (i == 20) kon(457, 472, 80);
			if (i == 21) kon(520, 472, 80);
			if (i == 22) kon(583, 472, 80);
			if (i == 23) kon(646, 472, 80);
			if (i == 24) kon(205, 409, 80);
			if (i == 25) kon(268, 409, 80);
			if (i == 26) kon(331, 409, 80);
			if (i == 27) kon(394, 409, 80);
			if (i == 28) kon(457, 409, 80);
			if (i == 29) kon(520, 409, 80);
			if (i == 30) kon(583, 409, 80);
			if (i == 31) kon(646, 409, 80);
			if (i == 32) kon(205, 346, 80);
			if (i == 33) kon(268, 346, 80);
			if (i == 34) kon(331, 346, 80);
			if (i == 35) kon(394, 346, 80);
			if (i == 36) kon(457, 346, 80);
			if (i == 37) kon(520, 346, 80);
			if (i == 38) kon(583, 346, 80);
			if (i == 39) kon(646, 346, 80);
			if (i == 40) kon(205, 283, 80);
			if (i == 41) kon(268, 283, 80);
			if (i == 42) kon(331, 283, 80);
			if (i == 43) kon(394, 283, 80);
			if (i == 44) kon(457, 283, 80);
			if (i == 45) kon(520, 283, 80);
			if (i == 46) kon(583, 283, 80);
			if (i == 47) kon(646, 283, 80);
			if (i == 48) kon(205, 220, 80);
			if (i == 49) kon(268, 220, 80);
			if (i == 50) kon(331, 220, 80);
			if (i == 51) kon(394, 220, 80);
			if (i == 52) kon(457, 220, 80);
			if (i == 53) kon(520, 220, 80);
			if (i == 54) kon(583, 220, 80);
			if (i == 55) kon(646, 220, 80);
			if (i == 56) kon(205, 157, 80);
			if (i == 57) kon(268, 157, 80);
			if (i == 58) kon(331, 157, 80);
			if (i == 59) kon(394, 157, 80);
			if (i == 60) kon(457, 157, 80);
			if (i == 61) kon(520, 157, 80);
			if (i == 62) kon(583, 157, 80);
			if (i == 63) kon(646, 157, 80);
		}
		if (arr[i] == 58 || arr[i] == 61)
		{
			if (i == 0) ladya(205, 598, 80);
			if (i == 1) ladya(268, 598, 80);
			if (i == 2) ladya(331, 598, 80);
			if (i == 3) ladya(394, 598, 80);
			if (i == 4) ladya(457, 598, 80);
			if (i == 5) ladya(520, 598, 80);
			if (i == 6) ladya(583, 598, 80);
			if (i == 7) ladya(646, 598, 80);
			if (i == 8) ladya(205, 535, 80);
			if (i == 9) ladya(268, 535, 80);
			if (i == 10) ladya(331, 535, 80);
			if (i == 11) ladya(394, 535, 80);
			if (i == 12) ladya(457, 535, 80);
			if (i == 13) ladya(520, 535, 80);
			if (i == 14) ladya(583, 535, 80);
			if (i == 15) ladya(646, 535, 80);
			if (i == 16) ladya(205, 472, 80);
			if (i == 17) ladya(268, 472, 80);
			if (i == 18) ladya(331, 472, 80);
			if (i == 19) ladya(394, 472, 80);
			if (i == 20) ladya(457, 472, 80);
			if (i == 21) ladya(520, 472, 80);
			if (i == 22) ladya(583, 472, 80);
			if (i == 23) ladya(646, 472, 80);
			if (i == 24) ladya(205, 409, 80);
			if (i == 25) ladya(268, 409, 80);
			if (i == 26) ladya(331, 409, 80);
			if (i == 27) ladya(394, 409, 80);
			if (i == 28) ladya(457, 409, 80);
			if (i == 29) ladya(520, 409, 80);
			if (i == 30) ladya(583, 409, 80);
			if (i == 31) ladya(646, 409, 80);
			if (i == 32) ladya(205, 346, 80);
			if (i == 33) ladya(268, 346, 80);
			if (i == 34) ladya(331, 346, 80);
			if (i == 35) ladya(394, 346, 80);
			if (i == 36) ladya(457, 346, 80);
			if (i == 37) ladya(520, 346, 80);
			if (i == 38) ladya(583, 346, 80);
			if (i == 39) ladya(646, 346, 80);
			if (i == 40) ladya(205, 283, 80);
			if (i == 41) ladya(268, 283, 80);
			if (i == 42) ladya(331, 283, 80);
			if (i == 43) ladya(394, 283, 80);
			if (i == 44) ladya(457, 283, 80);
			if (i == 45) ladya(520, 283, 80);
			if (i == 46) ladya(583, 283, 80);
			if (i == 47) ladya(646, 283, 80);
			if (i == 48) ladya(205, 220, 80);
			if (i == 49) ladya(268, 220, 80);
			if (i == 50) ladya(331, 220, 80);
			if (i == 51) ladya(394, 220, 80);
			if (i == 52) ladya(457, 220, 80);
			if (i == 53) ladya(520, 220, 80);
			if (i == 54) ladya(583, 220, 80);
			if (i == 55) ladya(646, 220, 80);
			if (i == 56) ladya(205, 157, 80);
			if (i == 57) ladya(268, 157, 80);
			if (i == 58) ladya(331, 157, 80);
			if (i == 59) ladya(394, 157, 80);
			if (i == 60) ladya(457, 157, 80);
			if (i == 61) ladya(520, 157, 80);
			if (i == 62) ladya(583, 157, 80);
			if (i == 63) ladya(646, 157, 80);
		}
		if (arr[i] == 60)
		{
			if (i == 0) korol(205, 598, 80);
			if (i == 1) korol(268, 598, 80);
			if (i == 2) korol(331, 598, 80);
			if (i == 3) korol(394, 598, 80);
			if (i == 4) korol(457, 598, 80);
			if (i == 5) korol(520, 598, 80);
			if (i == 6) korol(583, 598, 80);
			if (i == 7) korol(646, 598, 80);
			if (i == 8) korol(205, 535, 80);
			if (i == 9) korol(268, 535, 80);
			if (i == 10) korol(331, 535, 80);
			if (i == 11) korol(394, 535, 80);
			if (i == 12) korol(457, 535, 80);
			if (i == 13) korol(520, 535, 80);
			if (i == 14) korol(583, 535, 80);
			if (i == 15) korol(646, 535, 80);
			if (i == 16) korol(205, 472, 80);
			if (i == 17) korol(268, 472, 80);
			if (i == 18) korol(331, 472, 80);
			if (i == 19) korol(394, 472, 80);
			if (i == 20) korol(457, 472, 80);
			if (i == 21) korol(520, 472, 80);
			if (i == 22) korol(583, 472, 80);
			if (i == 23) korol(646, 472, 80);
			if (i == 24) korol(205, 409, 80);
			if (i == 25) korol(268, 409, 80);
			if (i == 26) korol(331, 409, 80);
			if (i == 27) korol(394, 409, 80);
			if (i == 28) korol(457, 409, 80);
			if (i == 29) korol(520, 409, 80);
			if (i == 30) korol(583, 409, 80);
			if (i == 31) korol(646, 409, 80);
			if (i == 32) korol(205, 346, 80);
			if (i == 33) korol(268, 346, 80);
			if (i == 34) korol(331, 346, 80);
			if (i == 35) korol(394, 346, 80);
			if (i == 36) korol(457, 346, 80);
			if (i == 37) korol(520, 346, 80);
			if (i == 38) korol(583, 346, 80);
			if (i == 39) korol(646, 346, 80);
			if (i == 40) korol(205, 283, 80);
			if (i == 41) korol(268, 283, 80);
			if (i == 42) korol(331, 283, 80);
			if (i == 43) korol(394, 283, 80);
			if (i == 44) korol(457, 283, 80);
			if (i == 45) korol(520, 283, 80);
			if (i == 46) korol(583, 283, 80);
			if (i == 47) korol(646, 283, 80);
			if (i == 48) korol(205, 220, 80);
			if (i == 49) korol(268, 220, 80);
			if (i == 50) korol(331, 220, 80);
			if (i == 51) korol(394, 220, 80);
			if (i == 52) korol(457, 220, 80);
			if (i == 53) korol(520, 220, 80);
			if (i == 54) korol(583, 220, 80);
			if (i == 55) korol(646, 220, 80);
			if (i == 56) korol(205, 157, 80);
			if (i == 57) korol(268, 157, 80);
			if (i == 58) korol(331, 157, 80);
			if (i == 59) korol(394, 157, 80);
			if (i == 60) korol(457, 157, 80);
			if (i == 61) korol(520, 157, 80);
			if (i == 62) korol(583, 157, 80);
			if (i == 63) korol(646, 157, 80);
		}
		if (arr[i] == 59)
		{
			if (i == 0) ferz(205, 598, 80);
			if (i == 1) ferz(268, 598, 80);
			if (i == 2) ferz(331, 598, 80);
			if (i == 3) ferz(394, 598, 80);
			if (i == 4) ferz(457, 598, 80);
			if (i == 5) ferz(520, 598, 80);
			if (i == 6) ferz(583, 598, 80);
			if (i == 7) ferz(646, 598, 80);
			if (i == 8) ferz(205, 535, 80);
			if (i == 9) ferz(268, 535, 80);
			if (i == 10) ferz(331, 535, 80);
			if (i == 11) ferz(394, 535, 80);
			if (i == 12) ferz(457, 535, 80);
			if (i == 13) ferz(520, 535, 80);
			if (i == 14) ferz(583, 535, 80);
			if (i == 15) ferz(646, 535, 80);
			if (i == 16) ferz(205, 472, 80);
			if (i == 17) ferz(268, 472, 80);
			if (i == 18) ferz(331, 472, 80);
			if (i == 19) ferz(394, 472, 80);
			if (i == 20) ferz(457, 472, 80);
			if (i == 21) ferz(520, 472, 80);
			if (i == 22) ferz(583, 472, 80);
			if (i == 23) ferz(646, 472, 80);
			if (i == 24) ferz(205, 409, 80);
			if (i == 25) ferz(268, 409, 80);
			if (i == 26) ferz(331, 409, 80);
			if (i == 27) ferz(394, 409, 80);
			if (i == 28) ferz(457, 409, 80);
			if (i == 29) ferz(520, 409, 80);
			if (i == 30) ferz(583, 409, 80);
			if (i == 31) ferz(646, 409, 80);
			if (i == 32) ferz(205, 346, 80);
			if (i == 33) ferz(268, 346, 80);
			if (i == 34) ferz(331, 346, 80);
			if (i == 35) ferz(394, 346, 80);
			if (i == 36) ferz(457, 346, 80);
			if (i == 37) ferz(520, 346, 80);
			if (i == 38) ferz(583, 346, 80);
			if (i == 39) ferz(646, 346, 80);
			if (i == 40) ferz(205, 283, 80);
			if (i == 41) ferz(268, 283, 80);
			if (i == 42) ferz(331, 283, 80);
			if (i == 43) ferz(394, 283, 80);
			if (i == 44) ferz(457, 283, 80);
			if (i == 45) ferz(520, 283, 80);
			if (i == 46) ferz(583, 283, 80);
			if (i == 47) ferz(646, 283, 80);
			if (i == 48) ferz(205, 220, 80);
			if (i == 49) ferz(268, 220, 80);
			if (i == 50) ferz(331, 220, 80);
			if (i == 51) ferz(394, 220, 80);
			if (i == 52) ferz(457, 220, 80);
			if (i == 53) ferz(520, 220, 80);
			if (i == 54) ferz(583, 220, 80);
			if (i == 55) ferz(646, 220, 80);
			if (i == 56) ferz(205, 157, 80);
			if (i == 57) ferz(268, 157, 80);
			if (i == 58) ferz(331, 157, 80);
			if (i == 59) ferz(394, 157, 80);
			if (i == 60) ferz(457, 157, 80);
			if (i == 61) ferz(520, 157, 80);
			if (i == 62) ferz(583, 157, 80);
			if (i == 63) ferz(646, 157, 80);
		}
		if (arr[i] == 48 || arr[i] == 49 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54 || arr[i] == 55)
		{
			if (i == 0) peshka(205, 598, 80);
			if (i == 1) peshka(268, 598, 80);
			if (i == 2) peshka(331, 598, 80);
			if (i == 3) peshka(394, 598, 80);
			if (i == 4) peshka(457, 598, 80);
			if (i == 5) peshka(520, 598, 80);
			if (i == 6) peshka(583, 598, 80);
			if (i == 7) peshka(646, 598, 80);
			if (i == 8) peshka(205, 535, 80);
			if (i == 9) peshka(268, 535, 80);
			if (i == 10) peshka(331, 535, 80);
			if (i == 11) peshka(394, 535, 80);
			if (i == 12) peshka(457, 535, 80);
			if (i == 13) peshka(520, 535, 80);
			if (i == 14) peshka(583, 535, 80);
			if (i == 15) peshka(646, 535, 80);
			if (i == 16) peshka(205, 472, 80);
			if (i == 17) peshka(268, 472, 80);
			if (i == 18) peshka(331, 472, 80);
			if (i == 19) peshka(394, 472, 80);
			if (i == 20) peshka(457, 472, 80);
			if (i == 21) peshka(520, 472, 80);
			if (i == 22) peshka(583, 472, 80);
			if (i == 23) peshka(646, 472, 80);
			if (i == 24) peshka(205, 409, 80);
			if (i == 25) peshka(268, 409, 80);
			if (i == 26) peshka(331, 409, 80);
			if (i == 27) peshka(394, 409, 80);
			if (i == 28) peshka(457, 409, 80);
			if (i == 29) peshka(520, 409, 80);
			if (i == 30) peshka(583, 409, 80);
			if (i == 31) peshka(646, 409, 80);
			if (i == 32) peshka(205, 346, 80);
			if (i == 33) peshka(268, 346, 80);
			if (i == 34) peshka(331, 346, 80);
			if (i == 35) peshka(394, 346, 80);
			if (i == 36) peshka(457, 346, 80);
			if (i == 37) peshka(520, 346, 80);
			if (i == 38) peshka(583, 346, 80);
			if (i == 39) peshka(646, 346, 80);
			if (i == 40) peshka(205, 283, 80);
			if (i == 41) peshka(268, 283, 80);
			if (i == 42) peshka(331, 283, 80);
			if (i == 43) peshka(394, 283, 80);
			if (i == 44) peshka(457, 283, 80);
			if (i == 45) peshka(520, 283, 80);
			if (i == 46) peshka(583, 283, 80);
			if (i == 47) peshka(646, 283, 80);
			if (i == 48) peshka(205, 220, 80);
			if (i == 49) peshka(268, 220, 80);
			if (i == 50) peshka(331, 220, 80);
			if (i == 51) peshka(394, 220, 80);
			if (i == 52) peshka(457, 220, 80);
			if (i == 53) peshka(520, 220, 80);
			if (i == 54) peshka(583, 220, 80);
			if (i == 55) peshka(646, 220, 80);
			if (i == 56) peshka(205, 15, 807);
			if (i == 57) peshka(268, 157, 80);
			if (i == 58) peshka(331, 157, 80);
			if (i == 59) peshka(394, 157, 80);
			if (i == 60) peshka(457, 157, 80);
			if (i == 61) peshka(520, 157, 80);
			if (i == 62) peshka(583, 157, 80);
			if (i == 63) peshka(646, 157, 80);
		}
	}
}
bool selfcheck(int* arr, int k, int w)
{
	if(k==0)
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 8 || arr[i] == 9 || arr[i] == 10 || arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14 || arr[i] == 15) //пытаются убить черные пешки
			{
				if (((i + 7) / 8 == (i + 8) / 8)&&(i+7<64)) //попытка убийства по одной диагонали
				{
					if (arr[i + 7] == w) return false;
				}
				if (((i + 9) / 8 == (i + 8) / 8) && (i + 9 < 64)) //попытка убийства по другой диагонали
				{
						if (arr[i + 9] == w) return false;
				}
			}
			if (arr[i] == 0 || arr[i] == 7) //пытаются убить черные слоны, которые ладьи, но название я менять все равно не буду, потому что для меня это слон
			{
				int n = 1;
				while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i -n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t40;
					}
					n++;
				}
			t40:
				n = 1;
				while (((i + n) / 8 == i / 8)&&(i + n < 64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t41;
					}
					n++;
				}
			t41:
				n = 8;
				while (i - n > -1) //идем ладьей вправо
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t42;
					}
					n += 8;
				}
			t42:
				n = 8;
				while (i + n < 64) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t43;
					}
					n += 8;
				}
			t43:
				n = 4;
			}
			if (arr[i] == 1 || arr[i] == 6)
			{
				if (i - 15 > -1)
				{
					
						if (arr[i - 15] == w) return false;
					
				}
				if (i - 17 > -1)
				{
					
						if (arr[i - 17] == w) return false;
					
				}
				if (i + 15 < 64)
				{
					
						if (arr[i + 15] == w) return false;
					
				}
				if (i + 17 < 64)
				{
					
						if (arr[i + 17] == w) return false;
					
				}
				if (i - 6 > -1)
				{
					
						if (arr[i - 6] == w) return false;
					
				}
				if (i - 10 > -1)
				{
					
						if (arr[i - 10] == w) return false;
					
				}
				if (i + 6 < 64)
				{
					
						if (arr[i + 6] == w) return false;
					
				}
				if (i + 10 < 64)
				{
					
						if (arr[i + 10] == w) return false;
					
				}
			}
			if (arr[i] == 2 || arr[i] == 5) //пытаются убить ладьи, которые слоны
			{
				int n = 9;
				int m = 1;
				while (((i - n) / 8 == (i - 8*m)/ 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t44;
					}
					n += 9;
					m++;
				}
			t44:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8*m) / 8)&&(i+n<64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t45;
					}
					n += 9;
					m++;
				}
			t45:
				n = 7;
				m = 1;
				while (((i - n) / 8 == (i - 8*m) / 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t46;
					}
					n += 7;
					m++;
				}
			t46:
				n = 7;
				m = 1;
				while (((i + n) % 8 == (i + 8*m) / 8)&&(i+n<64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t47;
					}
					n += 7;
					m++;
				}
			t47:
				n = 4;
			}
			if (arr[i] == 3) //пытается убить ферзь (объединяет ходы на слона и ладьи)
			{
				int n = 1, m;
				while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t48;
					}
					n++;
				}
			t48:
				n = 1;
				while (((i + n)/ 8 == i / 8)&&(i+n<64)) //идем вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t49;
					}
					n++;
				}
			t49:
				n = 8;
				while (i - n > -1) //идем вверх
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t50;
					}
					n += 8;
				}
			t50:
				n = 8;
				while (i + n < 64) //идем вниз
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t51;
					}
					n += 8;
				}
			t51:
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i -8*m) / 8)&&(i-n>-1)) //идем вниз вправо по диагонали
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t52;
					}
					n += 9;
					m++;
				}
			t52:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8*m) / 8)&&(i+n<64)) //идем вверх вправо по диагонали
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t53;
					}
					n += 9;
					m++;
				}
			t53:
				n = 7;
				m = 1;
				while (((i - n) / 8 == (i - 8*m) / 8)&&(i-n>-1)) //идем вниз влево по диагонали
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t54;
					}
					n += 7;
					m++;
				}
			t54:
				n = 7;
				m=1;
				while (((i + n) / 8 == (i +8*m)/ 8)&&(i+n<64)) //идем вверх влево по диагонали
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t55;
					}
					n += 7;
					m++;
				}
			t55:
				n = 4;
			}
			if (arr[i] == 4)
			{
				if ((i - 1) / 8 == i / 8) 
				{
					if (arr[i - 1] == w) return false;
				}
				if ((i + 1) / 8 == i / 8) 
				{
					if (arr[i + 1] == w) return false;
				}
				if (i - 8 > -1) 
				{
					if (arr[i - 8] == w) return false;
				}
				if (i + 8 < 64) 
				{
					if (arr[i + 8] == w) return false;
				}
				if (((i - 7) / 8 == (i-8)/8)&&(i-7>-1)) 
				{
					if (arr[i - 7] == w) return false;
				}
				if (((i + 7) / 8 == (i+8) / 8)&&(i+7<64))
				{
					if (arr[i + 7] == w) return false;
				}
				if (((i - 9) / 8 == (i-8) / 8)&&(i-9>-1)) 
				{
					if (arr[i - 9] == w) return false;
				}
				if (((i + 9) / 8 == (i+8) / 8)&&(i+9<64))
				{
					if (arr[i + 9] == w) return false;
				}
			}
		}
	}
	else if (k == 1)
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 48 || arr[i] == 49 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54 || arr[i] == 55) //пытаются убить черные пешки
			{
				if (((i - 7) / 8 == (i - 8) / 8)&&(i-7>-1)) //попытка убийства по одной диагонали
				{

						if (arr[i - 7] == w) return false;

				}
				if (((i - 9) / 8 == (i - 8) / 8)&&(i-9>-1)) //попытка убийства по другой диагонали
				{

						if (arr[i - 9] == w) return false;
					
				}
			}
			if (arr[i] == 56 || arr[i] == 63) //пытаются убить черные слоны, которые ладьи, но название я менять все равно не буду, потому что для меня это слон
			{
				int n = 1;
				while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t56;
					}
					n++;
				}
			t56:
				n = 1;
				while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t57;
					}
					n++;
				}
			t57:
				n = 8;
				while (i - n > -1) //идем ладьей вправо
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t58;
					}
					n += 8;
				}
			t58:
				n = 8;
				while (i + n < 64) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t59;
					}
					n += 8;
				}
			t59:
				n = 4;
			}
			if (arr[i] == 57 || arr[i] == 62)
			{
				if (i - 15 > -1)
				{
					
						if (arr[i - 15] == w) return false;
					
				}
				if (i - 17 > -1)
				{
					
						if (arr[i - 17] == w) return false;
					
				}
				if (i + 15 < 64)
				{
					
						if (arr[i + 15] == w) return false;
					
				}
				if (i + 17 < 64)
				{
					
						if (arr[i + 17] == w) return false;
					
				}
				if (i - 6 > -1)
				{
					
						if (arr[i - 6] == w) return false;
					
				}
				if (i - 10 > -1)
				{
					
						if (arr[i - 10] == w) return false;
					
				}
				if (i + 6 <64)
				{
					
						if (arr[i + 6] == w) return false;
					
				}
				if (i + 10 < 64)
				{
					
						if (arr[i + 10] == w) return false;
					
				}
			}
			if (arr[i] == 58 || arr[i] == 61) //пытаются убить ладьи, которые слоны
			{
				int n = 9;
				int m = 1;
				while (((i - n) / 8 == (i -8*m) / 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t60;
					}
					n += 9;
					m++;
				}
			t60:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t61;
					}
					n += 9;
					m++;
				}
			t61:
				n = 7;
				m = 1;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем слоном влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t62;
					}
					n += 7;
					m++;
				}
			t62:
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем ладьей вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t63;
					}
					n += 7;
					m++;
				}
			t63:
				n = 4;
			}
			if (arr[i] == 59) //пытается убить ферзь (объединяет ходы на слона и ладьи)
			{
				int n = 1;
				int m = 1;
				while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем влево
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t64;
					}
					n++;
				}
			t64:
				n = 1;
				while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем вправо
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t65;
					}
					n++;
				}
			t65:
				n = 8;
				while (i - n > -1) //идем вверх
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t66;
					}
					n += 8;
				}
			t66:
				n = 8;
				while (i + n < 64) //идем вниз
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t67;
					}
					n += 8;
				}
			t67:
				n = 9;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз вправо по диагонали
				{
					
						if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t68;
					}
					n += 9;
					m++;
				}
			t68:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх вправо по диагонали
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t69;
					}
					n += 9;
					m++;
				}
			t69:
				n = 7;
				m = 1;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз влево по диагонали
				{
					
					if (arr[i - n] == w) return false;
					
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t70;
					}
					n += 7;
					m++;
				}
			t70:
				n = 7;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх влево по диагонали
				{
					
						if (arr[i + n] == w) return false;
					
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t71;
					}
					n += 7;
					m++;
				}
			t71:
				n = 4;
			}
			if (arr[i] == 60)
			{
				if ((i - 1) / 8 == i/ 8) 
				{
					if (arr[i - 1] == w) return false;
				}
				if ((i + 1) / 8 == i / 8)
				{
					if (arr[i + 1] == w) return false;
				}
				if (i - 8 > -1)
				{
					if (arr[i - 8] == w) return false;
				}
				if (i + 8 < 64) 
				{
					if (arr[i + 8] == w) return false;
				}
				if (((i - 7) / 8 == (i-8) / 8 )&& (i - 7 > -1))
				{
					if (arr[i - 7] == w) return false;
				}
				if (((i + 7) / 8 == (i+8) / 8)&&(i+7<64))
				{
					if (arr[i + 7] == w) return false;
				}
				if (((i - 9) / 8 == (i-8) / 8)&&(i-9>-1)) 
				{
					if (arr[i - 9] == w) return false;
				}
				if (((i + 9) / 8 == (i+8) / 8)&&(i+9<64)) 
				{
					if (arr[i + 9] == w) return false;
				}
			}
		}
	}
	return true;
}
void pacificmove(int *arr, int k, int *n1, int *n2)
{
	int nn1 = -10, nn2 = -10;
	if (k == 0)
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 48 || arr[i] == 49 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54 || arr[i] == 55)
			{
				if ((i - 8 < -1) && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 &&  arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 8];
					altarr[i - 8] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - 8];
						arr[i - 8] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - 8;
						goto t1000;
					}
				}
				if ((i - 16 < -1) && (arr[i - 16] == 0) && arr[i - 16] == 1 && arr[i - 16] == 2 && arr[i - 16] == 3 && arr[i - 16] == 4 && arr[i - 16] == 5 && arr[i - 16] == 6 && arr[i - 16] == 7 && arr[i - 16] == 8 && arr[i - 16] == 9 && arr[i - 16] == 10 && arr[i - 16] == 11 && arr[i - 16] == 12 && arr[i - 16] == 13 && arr[i - 16] == 14 && arr[i - 16] == 15 && arr[i - 16] == 48 && arr[i - 16] == 49 && arr[i - 16] == 50 && arr[i - 16] == 51 && arr[i - 16] == 52 && arr[i - 16] == 53 && arr[i - 16] == 54 && arr[i - 16] == 55 && arr[i - 16] == 56 && arr[i - 16] == 57 && arr[i - 16] == 58 && arr[i - 16] == 59 && arr[i - 16] == 60 && arr[i - 16] == 61 && arr[i - 16] == 62 && arr[i - 16] == 63 && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 &&  arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 16];
					altarr[i - 16] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - 16];
						arr[i - 16] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - 16;
						goto t1000;
					}
				}
			}
			if (arr[i] == 56 || arr[i] == 63)
			{
				int n = 1;
				
				while (((i-n)/8==i/8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n++;
				}
				n = 8;
				while ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n+=8;
				}
				n = 8;
				while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n+=8;
				}
			}
			if (arr[i] == 57 || arr[i] == 62)
			{
				int n = 15;
				if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 15;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
				n = 17;
				if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 17;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
				n = 6;
				if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 6;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n++;
				}
				n = 10;
				if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 10;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n++;
				}
			}
			if (arr[i] == 56 || arr[i] == 61)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i-8*m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n+=7;
					m++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 *m)/ 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n+=7;
					m++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n += 9;
					m++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n += 9;
					m++;
				}
			}
			if (arr[i] == 59)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n += 7;
					m++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n += 7;
					m++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n += 9;
					m++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n += 9;
					m++;
				}
				n = 1;
				while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n++;
				}
				n = 8;
				while ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
					n += 8;
				}
				n = 8;
				while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
					n += 8;
				}
			}
			if (arr[i] == 60)
			{
				int n = 1;
				if (((i - n)/8==i/8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 1;
				if (((i + n)/8 ==i/8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
				n = 8;
				if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 8;
				if ((i + n < 63) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
				n = 7;
				if (((i - n) / 8 == (i-8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 7;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
				n = 9;
				if (((i - n) / 8 == (i+8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i - n];
						arr[i - n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i - n;
						goto t1000;
					}
				}
				n = 9;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						int temp = arr[i + n];
						arr[i + n] = arr[i];
						arr[i] = temp;
						nn1 = i;
						nn2 = i + n;
						goto t1000;
					}
				}
			}
		}
	}
	else if (k == 1)
	{
	for (int i = 0; i < 64; i++)
	{
		if (arr[i] == 8 || arr[i] == 9 || arr[i] == 10 || arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14 || arr[i] == 15)
		{
			if ((i - 8 < -1) && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i- 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i- 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60&& arr[i - 8] == 61&& arr[i - 8] == 62 && arr[i - 8] == 63);
			else
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - 8];
				altarr[i - 8] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - 8];
					arr[i - 8] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - 8;
					goto t1000;
				}
			}
			if ((i - 16 < -1) && (arr[i - 16] == 0)&& arr[i - 16] == 1 && arr[i - 16] == 2 && arr[i - 16] == 3 && arr[i - 16] == 4 && arr[i -16] == 5 && arr[i - 16] == 6 && arr[i - 16] == 7 && arr[i - 16] == 8 && arr[i - 16] == 9 && arr[i - 16] == 10 && arr[i - 16] == 11 && arr[i - 16] == 12 && arr[i - 16] == 13 && arr[i - 16] == 14 && arr[i - 16] == 15 && arr[i - 16] == 48 && arr[i - 16] == 49 && arr[i - 16] == 50 && arr[i - 16] == 51 && arr[i - 16] == 52 && arr[i - 16] == 53 && arr[i - 16] == 54 && arr[i - 16] == 55 && arr[i - 16] == 56 && arr[i - 16] == 57&& arr[i - 16] == 58 && arr[i - 16] == 59 && arr[i- 16] == 60 && arr[i - 16] == 61 && arr[i -16] == 62 &&arr[i - 16] == 63 && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i- 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
			else
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - 16];
				altarr[i - 16] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + 16];
					arr[i + 16] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + 16;
					goto t1000;
				}
			}
		}
		if (arr[i] == 0 || arr[i] == 7)
		{
			int n = 1;
			while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n++;
			}
			n = 1;
			while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n++;
			}
			n = 8;
			while ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 8;
			}
			n = 8;
			while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 8;
			}
		}
		if (arr[i] == 1 || arr[i] == 6)
		{
			int n = 15;
			if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 15;
			if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
			n = 17;
			if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 17;
			if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
			n = 6;
			if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 6;
			if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n++;
			}
			n = 10;
			if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 10;
			if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n++;
			}
		}
		if (arr[i] == 2 || arr[i] == 5)
		{
			int n = 7, m = 1;
			while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 7;
				m++;
			}
			n = 7;
			m = 1;
			while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 7;
				m++;
			}
			n = 9;
			m = 1;
			while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 9;
				m++;
			}
			n = 9;
			m = 1;
			while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 9;
				m++;
			}
		}
		if (arr[i] == 3)
		{
			int n = 7, m = 1;
			while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 7;
				m++;
			}
			n = 7;
			m = 1;
			while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 7;
				m++;
			}
			n = 9;
			m = 1;
			while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 9;
				m++;
			}
			n = 9;
			m = 1;
			while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 9;
				m++;
			}
			n = 1;
			while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n++;
			}
			n = 1;
			while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n++;
			}
			n = 8;
			while ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
				n += 8;
			}
			n = 8;
			while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
				n += 8;
			}
		}
		if (arr[i] == 4)
		{
			int n = 1;
			if (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 1;
			if (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
			n = 8;
			if ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 8;
			if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
			n = 7;
			if (((i - n) / 8 == (i - 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 7;
			if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
			n = 9;
			if (((i - n) / 8 == (i + 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i - n];
				altarr[i - n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i - n];
					arr[i - n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i - n;
					goto t1000;
				}
			}
			n = 9;
			if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
			{
				int altarr[64];
				for (int g = 0; g < 64; g++)
				{
					altarr[g] = arr[g];
				}
				int temp = altarr[i + n];
				altarr[i + n] = altarr[i];
				altarr[i] = temp;
				if (selfcheck(altarr, k, 4) == true)
				{
					int temp = arr[i + n];
					arr[i + n] = arr[i];
					arr[i] = temp;
					nn1 = i;
					nn2 = i + n;
					goto t1000;
				}
			}
		}
	}
	}
t1000:
	*n1 = nn1;
	*n2 = nn2;
}
void altmove(int* arr, int k, int* n1, int* n2)
{
	int nn1 = -10, nn2 = -10, mass1[101][1], mass2[101][1], z = 0, n;
	for (int i = 0; i < 100; i++)
	{
		mass1[i][1] = -100;
		mass2[i][1] = -100;
	}
	if (k == 0)
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 48 || arr[i] == 49 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54 || arr[i] == 55)
			{
				if ((i - 8 < -1) && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 8];
					altarr[i - 8] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i-8;
							z++;
						}
					}
				}
				if ((i - 16 < -1) && (arr[i - 16] == 0) && arr[i - 16] == 1 && arr[i - 16] == 2 && arr[i - 16] == 3 && arr[i - 16] == 4 && arr[i - 16] == 5 && arr[i - 16] == 6 && arr[i - 16] == 7 && arr[i - 16] == 8 && arr[i - 16] == 9 && arr[i - 16] == 10 && arr[i - 16] == 11 && arr[i - 16] == 12 && arr[i - 16] == 13 && arr[i - 16] == 14 && arr[i - 16] == 15 && arr[i - 16] == 48 && arr[i - 16] == 49 && arr[i - 16] == 50 && arr[i - 16] == 51 && arr[i - 16] == 52 && arr[i - 16] == 53 && arr[i - 16] == 54 && arr[i - 16] == 55 && arr[i - 16] == 56 && arr[i - 16] == 57 && arr[i - 16] == 58 && arr[i - 16] == 59 && arr[i - 16] == 60 && arr[i - 16] == 61 && arr[i - 16] == 62 && arr[i - 16] == 63 && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 &&  arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 16];
					altarr[i - 16] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - 16;
							z++;
						}
					}
				}
			}
			if (arr[i] == 56 || arr[i] == 63)
			{
				int n = 1;
				while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 &&  arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 &&  arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
			}
			if (arr[i] == 57 || arr[i] == 62)
			{
				int n = 15;
				if ((i - n > -1) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 15;
				if ((i + n < 64) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 17;
				if ((i - n > -1) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 17;
				if ((i + n < 64) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 6;
				if ((i - n > -1) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 6;
				if ((i + n < 64) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 10;
				if ((i - n > -1) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 10;
				if ((i + n < 64) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
			}
			if (arr[i] == 58 || arr[i] == 61)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i-n>-1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
			}
			if (arr[i] == 59)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) &&  arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
			}
			if (arr[i] == 60)
			{
				int n = 1;
				if (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				if (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				if ((i + n < 63) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 7;
				if (((i - n) / 8 == (i - 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 7;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				if (((i - n) / 8 == (i + 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 9;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 60) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
			}
		}
	}
	else if (k == 1)
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 8 || arr[i] == 9 || arr[i] == 10 || arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14 || arr[i] == 15)
			{
				if ((i - 8 < -1)  && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 8];
					altarr[i - 8] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - 8;
							z++;
						}
					}
				}
				if ((i - 16 < -1)  && (arr[i - 16] == 0) && arr[i - 16] == 1 && arr[i - 16] == 2 && arr[i - 16] == 3 && arr[i - 16] == 4 && arr[i - 16] == 5 && arr[i - 16] == 6 && arr[i - 16] == 7 && arr[i - 16] == 8 && arr[i - 16] == 9 && arr[i - 16] == 10 && arr[i - 16] == 11 && arr[i - 16] == 12 && arr[i - 16] == 13 && arr[i - 16] == 14 && arr[i - 16] == 15 && arr[i - 16] == 48 && arr[i - 16] == 49 && arr[i - 16] == 50 && arr[i - 16] == 51 && arr[i - 16] == 52 && arr[i - 16] == 53 && arr[i - 16] == 54 && arr[i - 16] == 55 && arr[i - 16] == 56 && arr[i - 16] == 57 && arr[i - 16] == 58 && arr[i - 16] == 59 && arr[i - 16] == 60 && arr[i - 16] == 61 && arr[i - 16] == 62 && arr[i - 16] == 63 && arr[i - 8] == 0 && arr[i - 8] == 1 && arr[i - 8] == 2 && arr[i - 8] == 3 && arr[i - 8] == 4 && arr[i - 8] == 5 && arr[i - 8] == 6 && arr[i - 8] == 7 && arr[i - 8] == 8 && arr[i - 8] == 9 && arr[i - 8] == 10 && arr[i - 8] == 11 && arr[i - 8] == 12 && arr[i - 8] == 13 && arr[i - 8] == 14 && arr[i - 8] == 15 && arr[i - 8] == 48 && arr[i - 8] == 49 && arr[i - 8] == 50 && arr[i - 8] == 51 && arr[i - 8] == 52 && arr[i - 8] == 53 && arr[i - 8] == 54 && arr[i - 8] == 55 && arr[i - 8] == 56 && arr[i - 8] == 57 && arr[i - 8] == 58 && arr[i - 8] == 59 && arr[i - 8] == 60 && arr[i - 8] == 61 && arr[i - 8] == 62 && arr[i - 8] == 63);
				else
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - 16];
					altarr[i - 16] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - 16;
							z++;
						}
					}
				}
			}
			if (arr[i] == 0 || arr[i] == 7)
			{
				int n = 1;
				while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{

						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 8;
				}
				n = 8;
				while ((i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 8;
				}
			}
			if (arr[i] == 1 || arr[i] == 6)
			{
				int n = 15;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 15;
				if ((i + n < 63)  && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
				}
				n = 17;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 17;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
				}
				n = 6;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 6;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 10;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 10;
				if ((i + n < 63) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
			}
			if (arr[i] == 2 || arr[i] == 5)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 7;
					m++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 7;
					m++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 9;
					m++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 9;
					m++;
				}
			}
			if (arr[i] == 3)
			{
				int n = 7, m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 7;
					m++;
				}
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 7;
					m++;
				}
				n = 9;
				m = 1;
				while (((i - n) / 8 == (i - 8 * m) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 9;
					m++;
				}
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i + 8 * m) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 9;
					m++;
				}
				n = 1;
				while (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n++;
				}
				n = 1;
				while (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n++;
				}
				n = 8;
				while ((i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
					n += 8;
				}
				n = 8;
				while ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
					n += 8;
				}
			}
			if (arr[i] == 4)
			{
				int n = 1;
				if (((i - n) / 8 == i / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 1;
				if (((i + n) / 8 == i / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
				}
				n = 8;
				if ((i - n > -1)  && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 8;
				if ((i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
				}
				n = 7;
				if (((i - n) / 8 == (i - 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 7;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i + n;
							z++;
						}
					}
				}
				n = 9;
				if (((i - n) / 8 == (i + 8) / 8) && (i - n > -1) && arr[i - n] != 0 && arr[i - n] != 1 && arr[i - n] != 2 && arr[i - n] != 3 && arr[i - n] != 4 && arr[i - n] != 5 && arr[i - n] != 6 && arr[i - n] != 7 && arr[i - n] != 8 && arr[i - n] != 9 && arr[i - n] != 10 && arr[i - n] != 11 && arr[i - n] != 12 && arr[i - n] != 13 && arr[i - n] != 14 && arr[i - n] != 15 && arr[i - n] != 48 && arr[i - n] != 49 && arr[i - n] != 50 && arr[i - n] != 51 && arr[i - n] != 52 && arr[i - n] != 53 && arr[i - n] != 54 && arr[i - n] != 55 && arr[i - n] != 56 && arr[i - n] != 57 && arr[i - n] != 58 && arr[i - n] != 59 && arr[i - n] != 60 && arr[i - n] != 61 && arr[i - n] != 62 && arr[i - n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i - n];
					altarr[i - n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
				n = 9;
				if (((i + n) / 8 == (i + 8) / 8) && (i + n < 64) && arr[i + n] != 0 && arr[i + n] != 1 && arr[i + n] != 2 && arr[i + n] != 3 && arr[i + n] != 4 && arr[i + n] != 5 && arr[i + n] != 6 && arr[i + n] != 7 && arr[i + n] != 8 && arr[i + n] != 9 && arr[i + n] != 10 && arr[i + n] != 11 && arr[i + n] != 12 && arr[i + n] != 13 && arr[i + n] != 14 && arr[i + n] != 15 && arr[i + n] != 48 && arr[i + n] != 49 && arr[i + n] != 50 && arr[i + n] != 51 && arr[i + n] != 52 && arr[i + n] != 53 && arr[i + n] != 54 && arr[i + n] != 55 && arr[i + n] != 56 && arr[i + n] != 57 && arr[i + n] != 58 && arr[i + n] != 59 && arr[i + n] != 60 && arr[i + n] != 61 && arr[i + n] != 62 && arr[i + n] != 63)
				{
					int altarr[64];
					for (int g = 0; g < 64; g++)
					{
						altarr[g] = arr[g];
					}
					int temp = altarr[i + n];
					altarr[i + n] = altarr[i];
					altarr[i] = temp;
					if (selfcheck(altarr, k, 4) == true)
					{
						if (selfcheck(altarr, k, arr[i]) == true)
						{
							mass1[z][1] = i;
							mass2[z][1] = i - n;
							z++;
						}
					}
				}
			}
		}
	
	}
	n = rand() % (z - 1) + 0;
	int temp = arr[mass2[n][1]];
	arr[mass2[n][1]] = arr[mass1[n][1]];
	arr[mass1[n][1]] = temp;
	nn1 = mass1[n][1];
	nn2 = mass2[n][1];
	*n1 = nn1;
	*n2 = nn2;
}
void botmove(int* arr, int* n1, int* n2, int k)
{
	int mass1[100][1], mass2[100][1], mass3[100][1], mass4[100][1], altarr[64],z = 0, prior = -1, nn1 = -10,nn2=-10;
	bool bl,lb=false;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			mass1[i][j] = -100; //инициализируем массив в ноль для дальнейших проверок
			mass2[i][j] = -100;
			mass3[i][j] = -100;
		}
	}
	if (k == 0) //если боту достались черные
	{
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 48 || arr[i] == 49 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54 || arr[i] == 55) //пытаются убить черные пешки
			{
				if (((i - 7) / 8 == (i - 8) / 8)&&(i-7>-1)) //попытка убийства по одной диагонали
				{
					if (arr[i - 7] == 0 || arr[i - 7] == 1 || arr[i - 7] == 2 || arr[i - 7] == 3 || arr[i - 7] == 4 || arr[i - 7] == 5 || arr[i - 7] == 6 || arr[i - 7] == 7 || arr[i - 7] == 8 || arr[i - 7] == 9 || arr[i - 7] == 10 || arr[i - 7] == 11 || arr[i - 7] == 12 || arr[i - 7] == 13 || arr[i - 7] == 14 || arr[i - 7] == 15)
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - 7; //массив с тем, кого убивают
						mass3[z][1] = arr[i - 7];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (((i - 9) / 8 == (i - 8) / 8)&&(i-9>-1)) //попытка убийства по другой диагонали
				{
					if (arr[i - 9] == 0 || arr[i - 9] == 1 || arr[i - 9] == 2 || arr[i - 9] == 3 || arr[i - 9] == 4 || arr[i - 9] == 5 || arr[i - 9] == 6 || arr[i - 9] == 7 || arr[i - 9] == 8 || arr[i - 9] == 9 || arr[i - 9] == 10 || arr[i - 9] == 11 || arr[i - 9] == 12 || arr[i - 9] == 13 || arr[i - 9] == 14 || arr[i - 9] == 15)
					{
						mass1[z][1] = i;
						mass2[z][1] = i - 9;
						mass3[z][1] = arr[i - 9];
						mass4[z][1] = arr[i];
						z++;
					}
				}
			}
			if (arr[i] == 56 || arr[i] == 63) //пытаются убить черные слоны, которые ладьи, но название я менять все равно не буду, потому что для меня это слон
			{
				int n = 1;
				while (((i - n )/ 8 == i / 8)&&(i-n>-1)) //идем слоном влево
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t1;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t1;
					}
					n++;
				}
			t1:
				n = 1;
				while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем ладьей вправо
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t2;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t2;
					}
					n++;
				}
			t2:
				n = 8;
				while (i - n > -1) //идем ладьей вправо
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t3;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t3;
					}
					n += 8;
				}
			t3:
				n = 8;
				while (i + n < 64) //идем ладьей вправо
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t4;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t4;
					}
					n += 8;
				}
			t4:
				n = 4;
			}
			if (arr[i] == 57 || arr[i] == 62)
			{
				if (i - 15 > -1)
				{
					if (arr[i - 15] == 0 || arr[i - 15] == 1 || arr[i - 15] == 2 || arr[i - 15] == 3 || arr[i - 15] == 4 || arr[i - 15] == 5 || arr[i - 15] == 6 || arr[i - 15] == 7 || arr[i - 15] == 8 || arr[i - 15] == 9 || arr[i - 15] == 10 || arr[i - 15] == 11 || arr[i - 15] == 12 || arr[i - 15] == 13 || arr[i - 15] == 14 || arr[i - 15] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - 15; //массив с тем, кого убивают
						mass3[z][1] = arr[i - 15];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i - 17 > -1)
				{
					if (arr[i - 17] == 0 || arr[i - 17] == 1 || arr[i - 17] == 2 || arr[i - 17] == 3 || arr[i - 17] == 4 || arr[i - 17] == 5 || arr[i - 17] == 6 || arr[i - 17] == 7 || arr[i - 17] == 8 || arr[i - 17] == 9 || arr[i - 17] == 10 || arr[i - 17] == 11 || arr[i - 17] == 12 || arr[i - 17] == 13 || arr[i - 17] == 14 || arr[i - 17] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - 17; //массив с тем, кого убивают
						mass3[z][1] = arr[i - 17];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i + 15 < 64)
				{
					if (arr[i + 15] == 0 || arr[i + 15] == 1 || arr[i + 15] == 2 || arr[i + 15] == 3 || arr[i + 15] == 4 || arr[i + 15] == 5 || arr[i + 15] == 6 || arr[i + 15] == 7 || arr[i + 15] == 8 || arr[i + 15] == 9 || arr[i + 15] == 10 || arr[i + 15] == 11 || arr[i + 15] == 12 || arr[i + 15] == 13 || arr[i + 15] == 14 || arr[i + 15] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + 15; //массив с тем, кого убивают
						mass3[z][1] = arr[i + 15];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i + 17 < 64)
				{
					if (arr[i + 17] == 0 || arr[i + 17] == 1 || arr[i + 17] == 2 || arr[i + 17] == 3 || arr[i + 17] == 4 || arr[i + 17] == 5 || arr[i + 17] == 6 || arr[i + 17] == 7 || arr[i + 17] == 8 || arr[i + 17] == 9 || arr[i + 17] == 10 || arr[i + 17] == 11 || arr[i + 17] == 12 || arr[i + 17] == 13 || arr[i + 17] == 14 || arr[i + 17] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + 17; //массив с тем, кого убивают
						mass3[z][1] = arr[i + 17];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i - 6 > -1)
				{
					if (arr[i - 6] == 0 || arr[i - 6] == 1 || arr[i - 6] == 2 || arr[i - 6] == 3 || arr[i - 6] == 4 || arr[i - 6] == 5 || arr[i - 6] == 6 || arr[i - 6] == 7 || arr[i - 6] == 8 || arr[i - 6] == 9 || arr[i - 6] == 10 || arr[i - 6] == 11 || arr[i - 6] == 12 || arr[i - 6] == 13 || arr[i - 6] == 14 || arr[i - 6] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - 6; //массив с тем, кого убивают
						mass3[z][1] = arr[i - 6];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i - 10 > -1)
				{
					if (arr[i - 10] == 0 || arr[i - 10] == 1 || arr[i - 10] == 2 || arr[i - 10] == 3 || arr[i - 10] == 4 || arr[i - 10] == 5 || arr[i - 10] == 6 || arr[i - 10] == 7 || arr[i - 10] == 8 || arr[i - 10] == 9 || arr[i - 10] == 10 || arr[i - 10] == 11 || arr[i - 10] == 12 || arr[i - 10] == 13 || arr[i - 10] == 14 || arr[i - 10] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - 10; //массив с тем, кого убивают
						mass3[z][1] = arr[i - 10];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i + 6 < 64)
				{
					if (arr[i + 6] == 0 || arr[i + 6] == 1 || arr[i + 6] == 2 || arr[i + 6] == 3 || arr[i + 6] == 4 || arr[i + 6] == 5 || arr[i + 6] == 6 || arr[i + 6] == 7 || arr[i + 6] == 8 || arr[i + 6] == 9 || arr[i + 6] == 10 || arr[i + 6] == 11 || arr[i + 6] == 12 || arr[i + 6] == 13 || arr[i + 6] == 14 || arr[i + 6] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + 6; //массив с тем, кого убивают
						mass3[z][1] = arr[i + 6];
						mass4[z][1] = arr[i];
						z++;
					}
				}
				if (i + 10 < 64)
				{
					if (arr[i + 10] == 0 || arr[i + 10] == 1 || arr[i + 10] == 2 || arr[i + 10] == 3 || arr[i + 10] == 4 || arr[i + 10] == 5 || arr[i + 10] == 6 || arr[i + 10] == 7 || arr[i + 10] == 8 || arr[i + 10] == 9 || arr[i + 10] == 10 || arr[i + 10] == 11 || arr[i + 10] == 12 || arr[i + 10] == 13 || arr[i + 10] == 14 || arr[i + 10] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + 10; //массив с тем, кого убивают
						mass3[z][1] = arr[i + 10];
						mass4[z][1] = arr[i];
						z++;
					}
				}
			}
			if (arr[i] == 58 || arr[i] == 61) //пытаются убить ладьи, которые слоны
			{
				int n = 9;
				int m = 1;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем слоном влево
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t5;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t5;
					}
					n += 9;
					m++;
				}
			t5:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i+8*m)/ 8)&&(i+n<64)) //идем ладьей вправо
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t6;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t6;
					}
					n += 9;
					m++;
				}
			t6:
				n = 7;
				m = 1;
				while (((i - n)/ 8 == (i-8*m) / 8)&&(i-n>-1)) //идем слоном влево
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t7;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t7;
					}
					n += 7;
					m++;
				}
			t7:
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем ладьей вправо
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t8;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t8;
					}
					n += 7;
					m++;
				}
			t8:
				n = 4;
			}
			if (arr[i] == 59) //пытается убить ферзь (объединяет ходы на слона и ладьи)
			{
				int n = 1;
				int m = 1;
				while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем влево
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t9;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t9;
					}
					n++;
				}
			t9:
				n = 1;
				while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем вправо
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t10;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t10;
					}
					n++;
				}
			t10:
				n = 8;
				while (i - n > -1) //идем вверх
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t11;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t11;
					}
					n += 8;
				}
			t11:
				n = 8;
				while (i + n < 64) //идем вниз
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t12;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t12;
					}
					n += 8;
				}
			t12:
				n = 9;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз вправо по диагонали
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t13;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t13;
					}
					n += 9;
					m++;
				}
			t13:
				n = 9;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх вправо по диагонали
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t14;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t14;
					}
					n += 9;
					m++;
				}
			t14:
				n = 7;
				m = 1;
				while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз влево по диагонали
				{
					if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i - n; //массив с тем, кого убивают
						mass3[z][1] = arr[i - n];
						mass4[z][1] = arr[i];
						z++;
						goto t15;
					}
					if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t15;
					}
					n += 7;
					m++;
				}
			t15:
				n = 7;
				m = 1;
				while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх влево по диагонали
				{
					if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
						//если на пути стоит противник
					{
						mass1[z][1] = i; //массив с тем, кто убивает
						mass2[z][1] = i + n; //массив с тем, кого убивают
						mass3[z][1] = arr[i + n];
						mass4[z][1] = arr[i];
						z++;
						goto t16;
					}
					if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
						//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
					{
						goto t16;
					}
					n += 7;
					m++;
				}
			t16:
				n = 4;
			}
			if (arr[i] == 60)
			{
				if ((i - 1) / 8 == i / 8) if (arr[i - 1] == 0 || arr[i - 1] == 1 || arr[i - 1] == 2 || arr[i - 1] == 3 || arr[i - 1] == 4 || arr[i - 1] == 5 || arr[i - 1] == 6 || arr[i - 1] == 7 || arr[i - 1] == 8 || arr[i - 1] == 9 || arr[i - 1] == 10 || arr[i - 1] == 11 || arr[i - 1] == 12 || arr[i - 1] == 13 || arr[i - 1] == 14 || arr[i - 1] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 1; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 1];
					mass4[z][1] = arr[i];
					z++;
				}
				if ((i + 1) / 8 == i / 8) if (arr[i + 1] == 0 || arr[i + 1] == 1 || arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4 || arr[i + 1] == 5 || arr[i + 1] == 6 || arr[i + 1] == 7 || arr[i + 1] == 8 || arr[i + 1] == 9 || arr[i + 1] == 10 || arr[i + 1] == 11 || arr[i + 1] == 12 || arr[i + 1] == 13 || arr[i + 1] == 14 || arr[i + 1] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 1; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 1];
					z++;
				}
				if (i - 8  > -1) if (arr[i - 8] == 0 || arr[i - 8] == 1 || arr[i - 8] == 2 || arr[i - 8] == 3 || arr[i - 8] == 4 || arr[i - 8] == 5 || arr[i - 8] == 6 || arr[i - 8] == 7 || arr[i - 8] == 8 || arr[i - 8] == 9 || arr[i - 8] == 10 || arr[i - 8] == 11 || arr[i - 8] == 12 || arr[i - 8] == 13 || arr[i - 8] == 14 || arr[i - 8] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 8; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 8];
					mass4[z][1] = arr[i];
					z++;
				}
				if (i + 8 < 63) if (arr[i + 8] == 0 || arr[i + 8] == 1 || arr[i + 8] == 2 || arr[i + 8] == 3 || arr[i + 8] == 4 || arr[i + 8] == 5 || arr[i + 8] == 6 || arr[i + 8] == 7 || arr[i + 8] == 8 || arr[i + 8] == 9 || arr[i + 8] == 10 || arr[i + 8] == 11 || arr[i + 8] == 12 || arr[i + 8] == 13 || arr[i + 8] == 14 || arr[i + 8] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 8; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 8];
					mass4[z][1] = arr[i];
					z++;
				}
				if (((i - 7) / 8 == (i-8) / 8)&&(i-7>-1)) if (arr[i - 7] == 0 || arr[i - 7] == 1 || arr[i - 7] == 2 || arr[i - 7] == 3 || arr[i - 7] == 4 || arr[i - 7] == 5 || arr[i - 7] == 6 || arr[i - 7] == 7 || arr[i - 7] == 8 || arr[i - 7] == 9 || arr[i - 7] == 10 || arr[i - 7] == 11 || arr[i - 7] == 12 || arr[i - 7] == 13 || arr[i - 7] == 14 || arr[i - 7] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 7; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 7];
					mass4[z][1] = arr[i];
					z++;
				}
				if (((i + 7) / 8 == (i+8) / 8)&&(i+7<64)) if (arr[i + 7] == 0 || arr[i + 7] == 1 || arr[i + 7] == 2 || arr[i + 7] == 3 || arr[i + 7] == 4 || arr[i + 7] == 5 || arr[i + 7] == 6 || arr[i + 7] == 7 || arr[i + 7] == 8 || arr[i + 7] == 9 || arr[i + 7] == 10 || arr[i + 7] == 11 || arr[i + 7] == 12 || arr[i + 7] == 13 || arr[i + 7] == 14 || arr[i + 7] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 7; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 7];
					mass4[z][1] = arr[i];
					z++;
				}
				if (((i - 9) / 8 == (i-8) / 8)&&(i-9>-1)) if (arr[i - 9] == 0 || arr[i - 9] == 1 || arr[i - 9] == 2 || arr[i - 9] == 3 || arr[i - 9] == 4 || arr[i - 9] == 5 || arr[i - 9] == 6 || arr[i - 9] == 7 || arr[i - 9] == 8 || arr[i - 9] == 9 || arr[i - 9] == 10 || arr[i - 9] == 11 || arr[i - 9] == 12 || arr[i - 9] == 13 || arr[i - 9] == 14 || arr[i - 9] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 9; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 9];
					mass4[z][1] = arr[i];
					z++;
				}
				if (((i + 9) / 8 == (i+8) / 8)&&(i+9<64)) if (arr[i + 9] == 0 || arr[i + 9] == 1 || arr[i + 9] == 2 || arr[i + 9] == 3 || arr[i + 9] == 4 || arr[i + 9] == 5 || arr[i + 9] == 6 || arr[i + 9] == 7 || arr[i + 9] == 8 || arr[i + 9] == 9 || arr[i + 9] == 10 || arr[i + 9] == 11 || arr[i + 9] == 12 || arr[i + 9] == 13 || arr[i + 9] == 14 || arr[i + 9] == 15)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 9; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 9];
					mass4[z][1] = arr[i];
					z++;
				}
			}
		}
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 4) prior = j;
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k,60);
			if (bl == true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
			}
		}
		if (prior < 0 || bl == false )
		{
			for (int j = 0; j < 100; j++)
			{
				if (mass3[j][1] == 3) prior = j;
			}
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k, 60);
			if (bl == true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
			}
		}
		if (prior < 0 || bl == false)
		{
			for (int j = 0; j < 100; j++)
			{
				if (mass3[j][1] == 2 || mass3[j][1] == 5) prior = j;
			}
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k, 60);
			lb = selfcheck(altarr, k, mass4[prior][1]);
			if (lb == false)if (mass4[prior][1] != 59)lb == true;
			if (bl == true&&lb==true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
			}
		}
		if (prior < 0 || bl == false || lb == false)
		{
			for (int j = 0; j < 100; j++)
			{
				if (mass3[j][1] == 1 || mass3[j][1] == 6) prior = j;
			}
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k, 60);
			lb = selfcheck(altarr, k, mass4[prior][1]);
			if (lb == false)if (mass4[prior][1] != 59 && mass4[prior][1] != 61 && mass4[prior][1] != 58)lb == true;
			if (bl == true && lb == true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
			}
		}
		if (prior < 0 || bl == false || lb == false)
		{
			for (int j = 0; j < 100; j++)
			{
				if (mass3[j][1] == 0 || mass3[j][1] == 7) prior = j;
			}
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k, 60);
			lb = selfcheck(altarr, k, mass4[prior][1]);
			if (lb == false)if (mass4[prior][1] != 59 && mass4[prior][1] !=58 && mass4[prior][1] != 61 && mass4[prior][1] != 62 && mass4[prior][1] != 57)lb == true;
			if (bl == true && lb == true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
			}
		}
		if (prior < 0 || bl == false || lb == false)
		{
			for (int j = 0; j < 100; j++)
			{
				if (mass3[j][1] == 8 || mass3[j][1] == 9 || mass3[j][1] == 10 || mass3[j][1] == 11 || mass3[j][1] == 12 || mass3[j][1] == 13 || mass3[j][1] == 14 || mass3[j][1] == 15) prior = j;
			}
		}
		if (prior > -1)
		{
			for (int h = 0; h < 64; h++)
			{
				altarr[h] = arr[h];
			}
			altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
			altarr[mass1[prior][1]] = 33;
			nn1 = mass1[prior][1];
			nn2 = mass2[prior][1];
			bl = selfcheck(altarr, k, 60);
			lb = selfcheck(altarr, k, mass4[prior][1]);
			if (lb == false)if (mass4[prior][1] != 59 && mass4[prior][1] != 58 && mass4[prior][1] != 61 && mass4[prior][1] != 62 && mass4[prior][1] != 57 && mass4[prior][1] != 56 && mass4[prior][1] != 63)lb == true;
			if (bl == true && lb == true)
			{
				if (nn1 > -10 || nn2 > -10)
				{
					arr[nn2] = arr[nn1];
					arr[nn1] = 33;
				}
				goto t1500;
					
			}
		}
		if (prior < 0 || bl == false || lb == false)
		{
			altmove(arr, k, &nn1, &nn2);
		}
		if (nn1 < 0 || nn2 < 0)
		{
			pacificmove(arr, k, &nn1, &nn2);
		}
	}
	else if (k == 1) //если боту достались белые
	{
	for (int i = 0; i < 64; i++)
	{
		if (arr[i] == 8 || arr[i] == 9 || arr[i] == 10 || arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14 || arr[i] == 15) //пытаются убить черные пешки
		{
			if (((i - 7) / 8 == (i - 8) / 8)&&(i-7<64)) //попытка убийства по одной диагонали
			{
				if (arr[i - 7] == 48 || arr[i - 7] == 49 || arr[i - 7] == 50 || arr[i - 7] == 51 || arr[i - 7] == 52 || arr[i - 7] == 53 || arr[i - 7] == 54 || arr[i - 7] == 55 || arr[i - 7] == 56 || arr[i - 7] == 57 || arr[i - 7] == 58 || arr[i - 7] == 59 || arr[i - 7] == 60 || arr[i - 7] == 61 || arr[i - 7] == 62 || arr[i - 7] == 63)
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 7; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 7];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (((i - 9) / 8 == (i - 8) / 8)&&(i-9<64)) //попытка убийства по другой диагонали
			{
				if (arr[i - 9] == 48 || arr[i - 9] == 49 || arr[i - 9] == 50 || arr[i - 9] == 51 || arr[i - 9] == 52 || arr[i - 9] == 53 || arr[i - 9] == 54 || arr[i - 9] == 55 || arr[i - 9] == 56 || arr[i - 9] == 57 || arr[i - 9] == 58 || arr[i - 9] == 59 || arr[i - 9] == 60 || arr[i - 9] == 61 || arr[i - 9] == 62 || arr[i - 9] == 63)
				{
					mass1[z][1] = i;
					mass2[z][1] = i - 9;
					mass3[z][1] = arr[i - 9];
					mass4[z][1] = arr[i];
					z++;
				}
			}
		}
		if (arr[i] == 0 || arr[i] == 7) //пытаются убить черные слоны, которые ладьи, но название я менять все равно не буду, потому что для меня это слон
		{
			int n = 1;
			while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем слоном влево
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t17;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t17;
				}
				n++;
			}
		t17:
			n = 1;
			while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем ладьей вправо
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t18;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t18;
				}
				n++;
			}
		t18:
			n = 8;
			while (i - n > -1) //идем ладьей вправо
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t19;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t19;
				}
				n += 8;
			}
		t19:
			n = 8;
			while (i + n < 64) //идем ладьей вправо
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t20;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t20;
				}
				n += 8;
			}
		t20:
			n = 4;
		}
		if (arr[i] == 1 || arr[i] == 6)
		{
			if (i - 15 > -1)
			{
				if (arr[i - 15] == 48 || arr[i - 15] == 49 || arr[i - 15] == 50 || arr[i - 15] == 51 || arr[i - 15] == 52 || arr[i - 15] == 53 || arr[i - 15] == 54 || arr[i - 15] == 55 || arr[i - 15] == 56 || arr[i - 15] == 57 || arr[i - 15] == 58 || arr[i - 15] == 59 || arr[i - 15] == 60 || arr[i - 15] == 61 || arr[i - 15] == 62 || arr[i - 15] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 15; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 15];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i - 17 > -1)
			{
				if (arr[i - 17] == 48 || arr[i - 17] == 49 || arr[i - 17] == 50 || arr[i - 17] == 51 || arr[i - 17] == 52 || arr[i - 17] == 53 || arr[i - 17] == 54 || arr[i - 17] == 55 || arr[i - 17] == 56 || arr[i - 17] == 57 || arr[i - 17] == 58 || arr[i - 17] == 59 || arr[i - 17] == 60 || arr[i - 17] == 61 || arr[i - 17] == 62 || arr[i - 17] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 17; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 17];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i + 15 < 64)
			{
				if (arr[i + 15] == 48 || arr[i + 15] == 49 || arr[i + 15] == 50 || arr[i + 15] == 51 || arr[i + 15] == 52 || arr[i + 15] == 53 || arr[i + 15] == 54 || arr[i + 15] == 55 || arr[i + 15] == 56 || arr[i + 15] == 57 || arr[i + 15] == 58 || arr[i + 15] == 59 || arr[i + 15] == 60 || arr[i + 15] == 61 || arr[i + 15] == 62 || arr[i + 15] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 15; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 15];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i + 17 < 64)
			{
				if (arr[i + 17] == 48 || arr[i + 17] == 49 || arr[i + 17] == 50 || arr[i + 17] == 51 || arr[i + 17] == 52 || arr[i + 17] == 53 || arr[i + 17] == 54 || arr[i + 17] == 55 || arr[i + 17] == 56 || arr[i + 17] == 57 || arr[i + 17] == 58 || arr[i + 17] == 59 || arr[i + 17] == 60 || arr[i + 17] == 61 || arr[i + 17] == 62 || arr[i + 17] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 17; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 17];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i - 6 < 64)
			{
				if (arr[i - 6] == 48 || arr[i - 6] == 49 || arr[i - 6] == 50 || arr[i - 6] == 51 || arr[i - 6] == 52 || arr[i - 6] == 53 || arr[i - 6] == 54 || arr[i - 6] == 55 || arr[i - 6] == 56 || arr[i - 6] == 57 || arr[i - 6] == 58 || arr[i - 6] == 59 || arr[i - 6] == 60 || arr[i - 6] == 61 || arr[i - 6] == 62 || arr[i - 6] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 6; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 6];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i - 10 < 64)
			{
				if (arr[i - 10] == 48 || arr[i - 10] == 49 || arr[i - 10] == 50 || arr[i - 10] == 51 || arr[i - 10] == 52 || arr[i - 10] == 53 || arr[i - 10] == 54 || arr[i - 10] == 55 || arr[i - 10] == 56 || arr[i - 10] == 57 || arr[i - 10] == 58 || arr[i - 10] == 59 || arr[i - 10] == 60 || arr[i - 10] == 61 || arr[i - 10] == 62 || arr[i - 10] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - 10; //массив с тем, кого убивают
					mass3[z][1] = arr[i - 10];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i + 6 < 64)
			{
				if (arr[i + 6] == 48 || arr[i + 6] == 49 || arr[i + 6] == 50 || arr[i + 6] == 51 || arr[i + 6] == 52 || arr[i + 6] == 53 || arr[i + 6] == 54 || arr[i + 6] == 55 || arr[i + 6] == 56 || arr[i + 6] == 57 || arr[i + 6] == 58 || arr[i + 6] == 59 || arr[i + 6] == 60 || arr[i + 6] == 61 || arr[i + 6] == 62 || arr[i + 6] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 6; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 6];
					mass4[z][1] = arr[i];
					z++;
				}
			}
			if (i + 10 < 64)
			{
				if (arr[i + 10] == 48 || arr[i + 10] == 49 || arr[i + 10] == 50 || arr[i + 10] == 51 || arr[i + 10] == 52 || arr[i + 10] == 53 || arr[i + 10] == 54 || arr[i + 10] == 55 || arr[i + 10] == 56 || arr[i + 10] == 57 || arr[i + 10] == 58 || arr[i + 10] == 59 || arr[i + 10] == 60 || arr[i + 10] == 61 || arr[i + 10] == 62 || arr[i + 10] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + 10; //массив с тем, кого убивают
					mass3[z][1] = arr[i + 10];
					mass4[z][1] = arr[i];
					z++;
				}
			}
		}
		if (arr[i] == 2 || arr[i] == 5) //пытаются убить ладьи, которые слоны
		{
			int n = 9;
			int m = 1;
			while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем слоном влево
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t21;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t21;
				}
				n += 9;
				m++;
			}
		t21:
			n = 9;
			m = 1;
			while (((i + n) / 8 == (i + 8*m) / 8)&&(i+n<64)) //идем ладьей вправо
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t22;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t22;
				}
				n += 9;
				m++;
			}
		t22:
			n = 7;
			m = 1;
			while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем слоном влево
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t23;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t23;
				}
				n += 7;
				m++;
			}
		t23:
			n = 7;
			m = 1;
			while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем ладьей вправо
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t24;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t24;
				}
				n += 7;
				m++;
			}
		t24:
			n = 4;
		}
		if (arr[i] == 3) //пытается убить ферзь (объединяет ходы на слона и ладьи)
		{
			int n = 1, m = 1;
			while (((i - n) / 8 == i / 8)&&(i-n>-1)) //идем влево
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t25;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t25;
				}
				n++;
			}
		t25:
			n = 1;
			while (((i + n) / 8 == i / 8)&&(i+n<64)) //идем вправо
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t26;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t26;
				}
				n++;
			}
		t26:
			n = 8;
			while (i - n > -1) //идем вверх
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t27;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t27;
				}
				n += 8;
			}
		t27:
			n = 8;
			while (i + n < 64) //идем вниз
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t28;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t28;
				}
				n += 8;
			}
		t28:
			n = 9;
			m = 1;
			while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз вправо по диагонали
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t29;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t29;
				}
				n += 9;
				m++;
			}
		t29:
			n = 9;
			m = 1;
			while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх вправо по диагонали
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t30;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t30;
				}
				n += 9;
				m++;
			}
		t30:
			n = 7;
			m = 1;
			while (((i - n) / 8 == (i-8*m) / 8)&&(i-n>-1)) //идем вниз влево по диагонали
			{
				if (arr[i - n] == 48 || arr[i - n] == 49 || arr[i - n] == 50 || arr[i - n] == 51 || arr[i - n] == 52 || arr[i - n] == 53 || arr[i - n] == 54 || arr[i - n] == 55 || arr[i - n] == 56 || arr[i - n] == 57 || arr[i - n] == 58 || arr[i - n] == 59 || arr[i - n] == 60 || arr[i - n] == 61 || arr[i - n] == 62 || arr[i - n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i - n; //массив с тем, кого убивают
					mass3[z][1] = arr[i - n];
					mass4[z][1] = arr[i];
					z++;
					goto t31;
				}
				if (arr[i - n] == 0 || arr[i - n] == 1 || arr[i - n] == 2 || arr[i - n] == 3 || arr[i - n] == 4 || arr[i - n] == 5 || arr[i - n] == 6 || arr[i - n] == 7 || arr[i - n] == 8 || arr[i - n] == 9 || arr[i - n] == 10 || arr[i - n] == 11 || arr[i - n] == 12 || arr[i - n] == 13 || arr[i - n] == 14 || arr[i - n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t31;
				}
				n += 7;
				m++;
			}
		t31:
			n = 7;
			m = 1;
			while (((i + n) / 8 == (i+8*m) / 8)&&(i+n<64)) //идем вверх влево по диагонали
			{
				if (arr[i + n] == 48 || arr[i + n] == 49 || arr[i + n] == 50 || arr[i + n] == 51 || arr[i + n] == 52 || arr[i + n] == 53 || arr[i + n] == 54 || arr[i + n] == 55 || arr[i + n] == 56 || arr[i + n] == 57 || arr[i + n] == 58 || arr[i + n] == 59 || arr[i + n] == 60 || arr[i + n] == 61 || arr[i + n] == 62 || arr[i + n] == 63)
					//если на пути стоит противник
				{
					mass1[z][1] = i; //массив с тем, кто убивает
					mass2[z][1] = i + n; //массив с тем, кого убивают
					mass3[z][1] = arr[i + n];
					mass4[z][1] = arr[i];
					z++;
					goto t32;
				}
				if (arr[i + n] == 0 || arr[i + n] == 1 || arr[i + n] == 2 || arr[i + n] == 3 || arr[i + n] == 4 || arr[i + n] == 5 || arr[i + n] == 6 || arr[i + n] == 7 || arr[i + n] == 8 || arr[i + n] == 9 || arr[i + n] == 10 || arr[i + n] == 11 || arr[i + n] == 12 || arr[i + n] == 13 || arr[i + n] == 14 || arr[i + n] == 15)
					//если на пути стоит союзник (надо прерывать передвижение, потому что дальше фигура ходить не сможет)
				{
					goto t32;
				}
				n += 7;
				m ++ ;
			}
		t32:
			n = 4;
		}
		if (arr[i] == 4)
		{
			if ((i - 1) / 8 == i / 8) if (arr[i - 1] == 48 || arr[i - 1] == 49 || arr[i - 1] == 50 || arr[i - 1] == 51 || arr[i - 1] == 52 || arr[i - 1] == 53 || arr[i - 1] == 54 || arr[i - 1] == 55 || arr[i - 1] == 56 || arr[i - 1] == 57 || arr[i - 1] == 58 || arr[i - 1] == 59|| arr[i - 1] == 60 || arr[i - 1] == 61 || arr[i - 1] == 62 || arr[i - 1] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i - 1; //массив с тем, кого убивают
				mass3[z][1] = arr[i - 1];
				mass4[z][1] = arr[i];
				z++;
			}
			if ((i + 1) / 8 == i / 8) if (arr[i + 1] ==48 || arr[i + 1] == 49 || arr[i + 1] == 50 || arr[i + 1] == 51 || arr[i + 1] == 52 || arr[i + 1] == 53 || arr[i + 1] == 54 || arr[i + 1] == 55 || arr[i + 1] == 56 || arr[i + 1] == 57 || arr[i + 1] == 58 || arr[i + 1] == 59 || arr[i + 1] == 60 || arr[i + 1] == 61 || arr[i + 1] == 62 || arr[i + 1] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i + 1; //массив с тем, кого убивают
				mass3[z][1] = arr[i + 1];
				mass4[z][1] = arr[i];
				z++;
			}
			if (i - 8 > -1) if (arr[i - 8] == 48 || arr[i - 8] == 49 || arr[i - 8] == 50 || arr[i - 8] == 51 || arr[i - 8] == 52 || arr[i - 8] == 53 || arr[i - 8] == 54 || arr[i - 8] == 55 || arr[i - 8] == 56 || arr[i - 8] == 57 || arr[i - 8] == 58 || arr[i - 8] == 59 || arr[i - 8] == 60 || arr[i - 8] == 61 || arr[i - 8] == 62 || arr[i - 8] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i - 8; //массив с тем, кого убивают
				mass3[z][1] = arr[i - 8];
				mass4[z][1] = arr[i];
				z++;
			}
			if (i + 8 < 64) if (arr[i + 8] == 48 || arr[i + 8] == 49 || arr[i + 8] == 50 || arr[i + 8] == 51 || arr[i + 8] == 52 || arr[i + 8] == 53 || arr[i + 8] == 54 || arr[i + 8] == 55 || arr[i + 8] == 56 || arr[i + 8] == 57 || arr[i + 8] == 58 || arr[i + 8] == 59 || arr[i + 8] == 60 || arr[i + 8] == 61 || arr[i + 8] == 62 || arr[i + 8] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i + 8; //массив с тем, кого убивают
				mass3[z][1] = arr[i + 8];
				mass4[z][1] = arr[i];
				z++;
			}
			if (((i - 7) / 8 == (i-8) / 8)&&(i-7>-1)) if (arr[i - 7] == 48 || arr[i - 7] == 49 || arr[i - 7] == 50 || arr[i - 7] == 51 || arr[i - 7] == 52 || arr[i - 7] == 53 || arr[i - 7] == 54 || arr[i - 7] == 55 || arr[i - 7] == 56 || arr[i - 7] == 57 || arr[i - 7] == 58 || arr[i - 7] == 59 || arr[i - 7] == 60 || arr[i - 7] == 61|| arr[i - 7] == 62 || arr[i - 7] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i - 7; //массив с тем, кого убивают
				mass3[z][1] = arr[i - 7];
				mass4[z][1] = arr[i];
				z++;
			}
			if (((i + 7) / 8 == (i+8) / 8)&&(i+7<64)) if (arr[i + 7] == 48 || arr[i + 7] == 49 || arr[i + 7] == 50 || arr[i + 7] == 51|| arr[i + 7] == 52 || arr[i + 7] == 53 || arr[i + 7] == 54 || arr[i + 7] == 55 || arr[i + 7] == 56 || arr[i + 7] == 57 || arr[i + 7] == 58 || arr[i + 7] == 59 || arr[i + 7] == 60 || arr[i + 7] == 61 || arr[i + 7] == 62 || arr[i + 7] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i + 7; //массив с тем, кого убивают
				mass3[z][1] = arr[i + 7];
				mass4[z][1] = arr[i];
				z++;
			}
			if (((i - 9) / 8 == (i-8) / 8)&&(i-9>-1)) if (arr[i - 9] == 48 || arr[i - 9] == 49 || arr[i - 9] == 50 || arr[i - 9] == 51 || arr[i - 9] == 52 || arr[i - 9] == 53 || arr[i - 9] == 54|| arr[i - 9] == 55 || arr[i - 9] == 56 || arr[i - 9] == 57 || arr[i - 9] == 58 || arr[i - 9] == 59 || arr[i - 9] == 60 || arr[i - 9] == 61 || arr[i - 9] == 62 || arr[i - 9] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i - 9; //массив с тем, кого убивают
				mass3[z][1] = arr[i - 9];
				mass4[z][1] = arr[i];
				z++;
			}
			if (((i + 9) / 8 == (i+8) / 8)&&(i+9<64)) if (arr[i + 9] == 48 || arr[i + 9] == 49 || arr[i + 9] == 50|| arr[i + 9] == 51 || arr[i + 9] == 52 || arr[i + 9] == 53 || arr[i + 9] == 54 || arr[i + 9] == 55 || arr[i + 9] == 56 || arr[i + 9] == 57 || arr[i + 9] == 58 || arr[i + 9] == 59 || arr[i + 9] == 60 || arr[i + 9] == 61 || arr[i + 9] == 62 || arr[i + 9] == 63)
			{
				mass1[z][1] = i; //массив с тем, кто убивает
				mass2[z][1] = i + 9; //массив с тем, кого убивают
				mass3[z][1] = arr[i + 9];
				mass4[z][1] = arr[i];
				z++;
			}
		}
	}
	for (int j = 0; j < 100; j++)
	{
		if (mass3[j][1] == 60) prior = j;
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		cout << mass2[prior][1];
		cout << mass1[prior][1];
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		if (bl == true)
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false )
	{
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 59) prior = j;
		}
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		if (bl == true)
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false )
	{
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 58 || mass3[j][1] == 61) prior = j;
		}
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		lb = selfcheck(altarr, k, mass4[prior][1]);
		if (lb == false)if (mass4[prior][1] != 3)lb == true;
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false || lb == false)
	{
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 57 || mass3[j][1] == 62) prior = j;
		}
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		lb = selfcheck(altarr, k, mass4[prior][1]);
		if (lb == false)if (mass4[prior][1] != 3 && mass4[prior][1] != 5 && mass4[prior][1] != 2 )lb == true;
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false || lb == false)
	{
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 56 || mass3[j][1] == 63) prior = j;
		}
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		lb = selfcheck(altarr, k, mass4[prior][1]);
		if (lb == false)if (mass4[prior][1] != 3 && mass4[prior][1] != 5 && mass4[prior][1] != 2 && mass4[prior][1] != 1 && mass4[prior][1] != 6 )lb == true;
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false || lb == false)
	{
		for (int j = 0; j < 100; j++)
		{
			if (mass3[j][1] == 48 || mass3[j][1] == 49 || mass3[j][1] == 50 || mass3[j][1] == 51 || mass3[j][1] == 52 || mass3[j][1] == 53 || mass3[j][1] == 54 || mass3[j][1] == 55) prior = j;
		}
	}
	if (prior > -1)
	{
		for (int h = 0; h < 64; h++)
		{
			altarr[h] = arr[h];
		}
		altarr[mass2[prior][1]] = altarr[mass1[prior][1]];
		altarr[mass1[prior][1]] = 33;
		nn1 = mass1[prior][1];
		nn2 = mass2[prior][1];
		bl = selfcheck(altarr, k, 4);
		lb = selfcheck(altarr, k, mass4[prior][1]);
		if (lb == false)if (mass4[prior][1] != 3 && mass4[prior][1] != 5 && mass4[prior][1] != 2 && mass4[prior][1] != 1 && mass4[prior][1] != 6 && mass4[prior][1] != 0 && mass4[prior][1] != 7)lb == true;
		{
			if (nn1 > -10 || nn2 > -10)
			{
				arr[nn2] = arr[nn1];
				arr[nn1] = 33;
			}
			goto t1500;
		}
	}
	if (prior < 0 || bl == false || lb == false)
	{
		altmove(arr, k, &nn1, &nn2);
	}
	if (nn1 < 0 || nn2 < 0)
	{
		pacificmove(arr, k, &nn1, &nn2);
	}
	}
t1500:
	*n1 = nn1;
	*n2 = nn2;
}
void chelbot(int* arr, int k)
{

	int n1=-1, n2=-1, mark1, mark2, b1, b2, mrk = 0;
	string str = "История ходов:\n", str1;
	do
	{
		mark1 = 0;
		mark2 = 0;
		otris(str, arr);
		cord(35, 45);
		cout << "Ход белых!";
		if(k==1) move(arr, &n1, &n2, 1, str);
		if(k==0) botmove(arr, &n1, &n2, 1);
		if (n1 == 0 && n2 == 0) str1 = "Читерский ход\n";
		else str1 = deck[n1] + "->" + deck[n2] + '\n';
		str += str1;
		otris(str, arr);
		cord(35, 45);
		cout << "Ход черных!";
		if (k == 1)  botmove(arr, &n1, &n2, 0);
		if (k == 0) move(arr, &n1, &n2, 0,str);
		if (n1 == 0 && n2 == 0) str1 = "Читерский ход\n";
		else str1 = deck[n1] + "->" + deck[n2] + '\n';
		str += str1;
		otris(str, arr);
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 4)mark1++;
			if (arr[i] == 60)mark2++;
		}
		if (n1 == -10 || n2 == -10) mrk++;
	} while (mark1 != 0 && mark2 != 0 && mrk<1);
	if (mark1 == 0)
	{
		otris(str, arr);
		cord(35, 45);
		cout << "Победили черные!";
	}
	else
	{
		otris(str, arr);
		cord(35, 45);
		cout << "Победили белые!";
	}
	if (mrk!=0)
	{
			otris(str, arr);
			cord(35, 45);
			cout << "Противник сдался!";
	}
}
void chelchel(int* arr)
{
	int n1,n2, mark1, mark2;
	string str = "История ходов:\n", str1;
	do
	{
		mark1 = 0;
		mark2 = 0;
		otris(str, arr);
		cord(35, 45);
		cout << "Ход белых!";
		move(arr, &n1, &n2, 1,str);
		if (n1 == 0 && n2 == 0) str1 = "Читерский ход\n";
		else str1 = deck[n1] + "->" + deck[n2] + '\n';
		str += str1;
		otris(str, arr);
		cord(35, 45);
		cout << "Ход черных!";
		move(arr, &n1, &n2, 0,str);
		if (n1 == 0 && n2 == 0) str1 = "Читерский ход\n";
		else str1 = deck[n1] + "->" + deck[n2] + '\n';
		str += str1;
		otris(str, arr);
		for (int i = 0; i < 64; i++)
		{
			if (arr[i] == 4)mark1++;
			if (arr[i] == 60)mark2++;
		}
	} while (mark1!=0&&mark2!=0);
	if (mark1 == 0)
	{
		otris(str, arr);
		cord(35, 45);
		cout << "Победили черные!";
	}
	else
	{
		otris(str, arr);
		cord(35, 45);
		cout << "Победили белые!";
	}
}
void chessbattle(int* arr, int k)
{
	ifstream fin("C:\\Users\\Zezerona\\source\\repos\\RGR\\chessbattle.txt");
	int mass[10];
	string str = "История ходов:\n", ch, str1;
	for (int i = 0; i < 10; ++i)
	{
		fin >> mass[i];
	}
	fin >> ch;
	for (int i = 0; i < 10; i += 2)
	{
		int temp = arr[mass[i]];
		arr[mass[i]] = arr[mass[i + 1]];
		arr[mass[i + 1]] = temp;
		str1 = str1 = deck[mass[i]] + "->" + deck[mass[i + 1]] + '\n';
		str += str1;
		otris(str, arr);
		Sleep(1000);
	}
	if (ch == "checkmate")
	{
		otris(str, arr);
		cord(35, 45);
		cout << "Противник сдался!";
	}
}
void choose(int* n, int*k, int*arr)
{
	string str;
	otris(str, arr);
	cord(25, 40);
	cout << "Выберите сторону: если черные, введите 0, если белые - 1: ";
	cin >> *n;
	otris(str, arr);
	cord(25, 40);
	cout << "Выберите противника: компьютер - 0, человек - 1, chess-battle - 2: ";
	cin >> *k;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	COORD crd = {120, 50};
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	int v = 56, v1 = 0;
	SetConsoleWindowInfo(hconsole, true, &src);
	SetConsoleScreenBufferSize(hconsole, crd);
	int arr[64], n, n1, n2, k;
	choose(&n, &k,arr);
	if (n == 0)
	{
		for (int j = 0; j < 8; j ++)
		{
			for (int i = 0; i < 8; i++)
			{
				arr[v + i] = v1+i;
			}
			v -= 8;
			v1 += 8;
		}
	}
	else for (int i = 0; i < 64; i++) arr[i] = i;
	if (k == 1) chelchel(arr);
	else if (k == 2) chessbattle(arr,n);
	else if (k == 0) chelbot(arr,n);
}