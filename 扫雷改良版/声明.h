#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<windows.h>
//easy mode
#define A 9
#define AA A+2
#define E 9
//midium mode 
#define B 15
#define BB B+2
#define M  25
//deffcult mode
#define C 24
#define CC C+2
#define D 49
void menu();
void menu2();
void game1();
void game2();
void game3();
void choose();
//part game 1
void begin1(char map[AA][AA],char set);
void display1(char map[AA][AA]);
void set(char board[AA][AA],int x);
int judge1(char board[AA][AA], int x, int y);
void test1(char map[AA][AA], char board[AA][AA], int x, int y);
int result(char map[AA][AA], char board[AA][AA], int x, int y);
void expand(char board[AA][AA], char map[AA][AA], int x, int y);
int condition1(char map[AA][AA]);
//part game 2
void Begin1(char map[BB][BB], char set);
void set2(char board[BB][BB], int x);
void display2(char map[BB][BB]);
int judge2(char board[BB][BB], int x, int y);
void test2(char map[BB][BB], char board[BB][BB], int x, int y);
int result2(char map[BB][BB], char board[BB][BB], int x, int y);
void Expand(char board[BB][BB], char map[BB][BB], int x, int y);
int condition2(char map[BB][BB]);
//part game 3
void Begin2(char map[CC][CC], char set);
void set3(char board[CC][CC], int x);
void display3(char map[CC][CC]);
int judge3(char board[CC][CC], int x, int y);
void test3(char map[CC][CC], char board[CC][CC], int x, int y);
int result3(char map[CC][CC], char board[CC][CC], int x, int y);
void EXpand(char board[CC][CC], char map[CC][CC], int x, int y);
int condition3(char map[CC][CC]);

#pragma once
