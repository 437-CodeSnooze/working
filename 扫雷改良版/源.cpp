#include"声明.h"

void menu()
{
	puts("*********************");
	puts("******1   play ******");
	puts("******0   exit ******");
	puts("*********************");
}

void menu2()
{
	puts("choose the game mode");
	puts("*********************");
	puts("****1  easy    ******");
	puts("****2  moderate  ****");
	puts("****3  diffcult******");
	puts("*********************");
}

void choose()
{
	menu2();
again:
	int a = 0;
	scanf_s("%d", &a);
	system("cls");
	switch (a)
	{
	case 1:game1(); break;
	case 2:game2(); break;
	case 3:game3(); break;
	default:
		puts("invailed input");
		goto again;
	}
}

void game1()
{
	char board[AA][AA];
	begin1(board, '0');
	char map[AA][AA];
	begin1(map, '*');
	set(board, E);
	display1(map);
	while (1)
	{
		int x = 0;
		int y = 0;
		puts("choose coordinate in the board");
		puts("input x y\n");
		scanf_s("%d %d", &x, &y);
		if (x > 0 && x < A + 1 && y>0 && y < A + 1)
		{
			if (map[x][y] != '*')
			{
				continue;
			}
			else
			{
				map[x][y] = ' ';
			}
		}
		else
		{
			puts("invailed input");
			continue;
		}
		int a = judge1(board, x, y);
		if (a == 1)
		{
			system("cls");
			display1(board);
			puts("game over you lost");
			break;
		}
		system("cls");
		test1(map, board, x, y);
		expand(board, map, x, y);
		display1(map);
		int key = condition1(map);
		if (key == E)
		{
			puts("you winning the game");
			display1(map);
			break;
		}
	}
}

int condition1(char map[AA][AA])
{
	int a = 0;
	int i = 1;
	int j = 1;
	//j 放循环中会造成重复定义造成栈的堆积
	for (i = 1; i < A + 1; i++)
	{
		for (j = 1; j < A + 1; j++)
		{
			if (map[i][j] == '*')
			{
				a++;
			}
		}
	}
	return a;
}

void test1(char map[AA][AA], char board[AA][AA], int x, int y)
{
	int i = 0;
	i = result(map, board, x, y);
	map[x][y] = '0' + i;

}

void expand(char board[AA][AA], char map[AA][AA], int x, int y)
{
	int a = x;
	int b = y;
	if (map[x][y] == '0')
	{
		int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
		int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

		for (int k = 0; k < 8; k++)
		{
			int row = x + dx[k];
			int col = y + dy[k];
			if (map[row][col] != '0')
			{
				test1(map, board, row, col);
				if (row >= 1 && row <= A && col >= 1 && col <= A && map[row][col] == '0')
				{
					expand(board, map, row, col);
				}
			}
		}
	}
}

int result(char map[AA][AA], char board[AA][AA], int x, int y)
{
	int mineCount = 0;
	// 8个方向偏移量（避免硬编码，减少错误）
	int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int k = 0; k < 8; k++)
	{
		int row = x + dx[k];
		int col = y + dy[k];

		if (row >= 0 && row < AA && col >= 0 && col < AA)
		{

			if (board[row][col] == '1')
			{
				mineCount++;
			}
		}
	}
	return mineCount;
}

int judge1(char board[AA][AA], int x, int y)
{
	if (board[x][y] == '1')
	{
		return 1;
	}
	else
		return 0;
}

void begin1(char map[AA][AA], char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < AA; i++)
	{
		for (j = 0; j < AA; j++)
		{
			map[i][j] = set;
		}
	}
}

void set(char board[AA][AA],int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		while (1)
		{
			int a = rand() % A+1;
			int b = rand() % A+1;
			if (board[a][b] == '0')
			{
				board[a][b] = '1';
				break;
			}
		}
	}
}

void display1(char map[AA][AA])
{
	int i = 1;
	int j = 1;
	printf("0| ");
	for (i = 1; i < A + 1; i++)
	{
		printf("%d ", i);
	}
	puts("");
	puts("-|------------------");
	for (i = 1; i < A + 1; i++)
	{
		printf("%d|", i);
		for (j = 1; j < A + 1; j++)
		{
			printf(" %c",map[i][j]);
		}
		puts("");
	}
}

void game2()
{
		char board[BB][BB];
		Begin1(board, '0');
		char map[BB][BB];
		Begin1(map, '*');
		set2(board, M);
		display2(map);
		while (1)
		{
			int x = 0;
			int y = 0;
			puts("choose coordinate in the board");
			puts("input x y\n");
			scanf_s("%d %d", &x, &y);
		if (x > 0 && x < B + 1 && y>0 && y < B + 1)
			{
				if (map[x][y] != '*')
				{
					continue;
				}
				else
				{
					map[x][y] = ' ';
				}
			}
			else
			{
				puts("invailed input");
				continue;
			}
			int a = judge2(board, x, y);
			if (a == 1)
			{
				system("cls");
				display2(board);
				puts("game over you lost");
				break;
			}
			test2(map, board, x, y);
			Expand(board, map, x, y);
			system("cls");
			display2(map);
			int key = condition2(map);
			if (key == M)
			{
				system("cls");
				puts("you winning the game");
				display2(map);
				break;
			}
		}
	
}

void Begin1(char map[BB][BB], char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < B + 1; i++)
	{
		for (j = 0; j < B + 1; j++)
		{
			map[i][j] = set;
		}
	}
}

void set2(char board[BB][BB], int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		while (1)
		{
			int a = rand() % B + 1;
			int b = rand() % B + 1;
			if (board[a][b] == '0')
			{
				board[a][b] = '1';
				break;
			}
		}
	}
}

void display2(char map[BB][BB])
{
	int i = 1;
	int j = 1;
	printf(" 0| ");
	for (i = 1; i < B + 1; i++)
	{
		if (i < 10)
		{
			printf("%d ", i);
		}
		else if (i >= 10)
		{
			printf("%d ", i-10);
		}
	}
	puts("");
	puts(" -|------------------------------");
	for (i = 1; i < B + 1; i++)
	{
		if (i < 10)
		{
			printf(" %d|", i);
		}
		else if (i >= 10)
		{
			printf("%d|", i);
		}
		for (j = 1; j < B + 1; j++)
		{
			printf(" %c", map[i][j]);
		}
		puts("");
	}
}

int judge2(char board[BB][BB], int x, int y)
{
	if (board[x][y] == '1')
	{
		return 1;
	}
	else
		return 0;
}

void test2(char map[BB][BB], char board[BB][BB], int x, int y)
{
	int i = 0;
	i = result2(map, board, x, y);
	map[x][y] = '0' + i;

}

int result2(char map[BB][BB], char board[BB][BB], int x, int y)
{
	int mineCount = 0;
	// 8个方向偏移量（避免硬编码，减少错误）
	int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int k = 0; k < 8; k++)
	{
		int row = x + dx[k];
		int col = y + dy[k];

		if (board[row][col] == '1')
		{
			mineCount++;
		}

	}
	return mineCount;
}

void Expand(char board[BB][BB], char map[BB][BB], int x, int y)
{
	int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int k = 0; k < 8; k++)
	{
		int row = x + dx[k];
		int col = y + dy[k];
		
		if (map[row][col] != '0')//防止赋值前的重复判断导致重复赋值
		{
			test2(map, board, row, col);
			if (row >= 1 && row <= B && col >= 1 && col <= B && map[row][col] == '0')
			{
				Expand(board, map, row, col);
			}
		}
	}
}

int condition2(char map[BB][BB])
{
	int a = 0;
	int i = 1;
	int j = 1;
	//j 放循环中会造成重复定义造成栈的堆积
	for (i = 1; i < B + 1; i++)
	{
		for (j = 1; j < B + 1; j++)
		{
			if (map[i][j] == '*')
			{
				a++;
			}
		}
	}
	return a;
}

void game3()
{
	char board[CC][CC];
	Begin2(board, '0');
	char map[CC][CC];
	Begin2(map, '*');
	set3(board, D);
	display3(map);
	while (1)
	{
		int x = 0;
		int y = 0;
		puts("choose coordinate in the board");
		puts("input x y\n");
		scanf_s("%d %d", &x, &y);
		if (x > 0 && x < C + 1 && y>0 && y < C + 1)
		{
			if (map[x][y] != '*')
			{
				continue;
			}
			else
			{
				map[x][y] = ' ';
			}
		}
		else
		{
			puts("invailed input");
			continue;
		}
		int a = judge3(board, x, y);
		if (a == 1)
		{
			system("cls");
			display3(board);
			puts("game over you lost");
			break;
		}
		test3(map, board, x, y);
		EXpand(board, map, x, y);
		system("cls");
		display3(map);
		int key = condition3(map);
		if (key == D)
		{
			system("cls");
			puts("you winning the game");
			display3(map);
			break;
		}
	}
}

void Begin2(char map[CC][CC], char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < C + 1; i++)
	{
		for (j = 0; j < C + 1; j++)
		{
			map[i][j] = set;
		}
	}
}

void set3(char board[CC][CC], int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		while (1)
		{
			int a = rand() % C + 1;
			int b = rand() % C + 1;
			if (board[a][b] == '0')
			{
				board[a][b] = '1';
				break;
			}
		}
	}
}

void display3(char map[CC][CC])
{
	int i = 1;
	int j = 1;
	printf(" 0| ");
	for (i = 1; i < C + 1; i++)
	{
		if (i < 10)
		{
			printf("%d ", i);
		}
		else if (i >= 10&&i<20)
		{
			printf("%d ", i - 10);
		}
		else if (i >= 20)
		{
			printf("%d ", i - 20);
		}
	}
	puts("");
	puts(" -|------------------------------------------------");
	for (i = 1; i < C + 1; i++)
	{
		if (i < 10)
		{
			printf(" %d|", i);
		}
		else if (i >= 10)
		{
			printf("%d|", i);
		}
		for (j = 1; j < C + 1; j++)
		{
			printf(" %c", map[i][j]);
		}
		puts("");
	}
}

int judge3(char board[CC][CC], int x, int y)
{
	if (board[x][y] == '1')
	{
		return 1;
	}
	else
		return 0;
}

void test3(char map[CC][CC], char board[CC][CC], int x, int y)
{
	int i = 0;
	i = result3(map, board, x, y);
	map[x][y] = '0' + i;

}

int result3(char map[CC][CC], char board[CC][CC], int x, int y)
{
	int mineCount = 0;
	// 8个方向偏移量（避免硬编码，减少错误）
	int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int k = 0; k < 8; k++)
	{
		int row = x + dx[k];
		int col = y + dy[k];

		if (board[row][col] == '1')
		{
			mineCount++;
		}

	}
	return mineCount;
}

void EXpand(char board[CC][CC], char map[CC][CC], int x, int y)
{
	int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	for (int k = 0; k < 8; k++)
	{
		int row = x + dx[k];
		int col = y + dy[k];
		if (map[row][col] != '0')
		{
			test3(map, board, row, col);
			if (row >= 1 && row <= C && col >= 1 && col <= C && map[row][col] == '0')
			{
				EXpand(board, map, row, col);
			}
		}
	}
}

int condition3(char map[CC][CC])
{
	int a = 0;
	int i = 1;
	int j = 1;
	//j 放循环中会造成重复定义造成栈的堆积
	for (i = 1; i < C + 1; i++)
	{
		for (j = 1; j < C + 1; j++)
		{
			if (map[i][j] == '*')
			{
				a++;
			}
		}
	}
	return a;
}