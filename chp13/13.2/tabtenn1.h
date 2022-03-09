//
// Created by Shawn Zhao on 2022/3/2.
//

#ifndef INC_13_2_TABTENN1_H
#define INC_13_2_TABTENN1_H
#include <iostream>
using std::string;
// simple base class
class TableTennisPlayer{
private:
    string firstname;
    string lastname;
    bool hashTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    // default constructor
    void Name() const;
    bool HashTable() const { return hashTable; };
    void ResetTable(bool v) { hashTable = v; };
};

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer (unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
    RatedPlayer (unsigned int r, const TableTennisPlayer & tp);
    //构造函数必须给新成员和继承函数提供数据。
    unsigned int Rating() const { return rating; } // add a method
    void ResetRating (unsigned int r) {rating = r; } // add a method
};
#endif //INC_13_2_TABTENN1_H
