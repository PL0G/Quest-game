#pragma once
#include <iostream>
//Структура персонажей
struct entities {
	std::string name = "no name";
	unsigned short strength = 3;
	unsigned short agility = 3;
	unsigned short intelligence = 3;
	unsigned short points = 0;
	unsigned short rep_rose = 0;
};
void show_stats(entities& Hero);
//Создание героя
void Setup();
//1 Часть
int cemetary();
//Продолжить
void cont();
//Найти внучку старика
void grandD(int medalion);
//Продать кулон
void sell_medalion(int medalion);
//Шахта
int old_mine(int faction);
//Руины
int ruins(int faction, int informer);
//Корабль звездочетов
void starship(int faction, int mechanism);
//Поздемный город
void undercity();
//Повышение статов
void stats_up();
