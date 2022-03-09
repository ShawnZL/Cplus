//
// Created by Shawn Zhao on 2022/3/2.
//
#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) : firstname(fn), lastname(ln), hashTable(ht){}

void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}
