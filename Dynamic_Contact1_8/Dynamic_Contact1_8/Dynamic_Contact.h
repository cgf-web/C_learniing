#define _CRT_SECURE_NO_WARNINGS

#pragma once
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define DEFAULT_SZ 3
#define INC_SZ 2
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 13
#define MAX_ADDR 50

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	int count;
	PeoInfo* data;
	int capacity;
} Contact;


int InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(const Contact* pc);
void DelContact(Contact* pc);
void searchContact(Contact* pc);
void ModifyContact(Contact* pc);
void SortContact(Contact* pc);

void DestroyContact(Contact* pc);