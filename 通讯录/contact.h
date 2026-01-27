#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define max 100
void menu1();
typedef struct Peo
{
	char name[10];
	int age;
	char sex[10];
	char phone[12];
	char add[30];
}Peo;

typedef struct Contact
{
	Peo data[max];
	int count;
}Contact;
void Initcontact(Contact* p);
void Add(Contact* p);
void Show(const Contact* p);
void Del(Contact* p);
void Search(const Contact* p);
void Showaccurate(const Contact* p, int i);
void Modify(Contact* p);


