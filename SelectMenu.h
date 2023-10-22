#pragma once
#include <iostream>
#ifndef SELECTMENU_H
#define SELECTMENU_H

using std::cout;
using std::cin;

short indexMenu(short& indMenu, const short size);
void printMenu(std::string* const arr, const short size, std::string nameMenu, const short& indMenu);
void selectMenu(std::string* const arr, const short size, std::string nameMenu, short& indMenu);

#endif