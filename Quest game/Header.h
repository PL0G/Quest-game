#pragma once
#include <iostream>
//��������� ����������
struct entities {
	std::string name = "no name";
	unsigned short strength = 3;
	unsigned short agility = 4;
	unsigned short intelligence = 4;
	unsigned short points = 0;
	unsigned short rep_cult = 0;
	unsigned short rep_rose = 0;
};
void show_stats(entities& Hero);
//�������� �����
void Setup();
//1 �����
int cemetary();
//����������
void cont();
//����� ������ �������
void grandD(int medalion);
//������� �����
void sell_medalion(int medalion);
//�����
int old_mine(int faction);
//�����
int ruins(int faction, int informer);
//������� �����������
int starship(int faction, int mechanism);
//��������� �����
int undercity(int faction);
