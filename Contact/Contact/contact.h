#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


#define MAX   100
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
	int count = 0;
	PeoInfo data[MAX];
}Contact;


void InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(const Contact* pc);
void DelContact(Contact* pc);
void searchContact(Contact* pc);
void ModifyContact(Contact* pc);
void SortContact(Contact* pc);

