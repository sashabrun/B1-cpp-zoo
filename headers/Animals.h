#ifndef B1_CPP_ZOO_ANIMALS_H
#define B1_CPP_ZOO_ANIMALS_H
#include <iostream>
#include <tuple>
#include "Time.h"

using namespace  std;

class Animals {
    string name;
    tuple <int,int> age;
    bool sick = false;
    int genre;
    int food;
    int quantityFood;
    bool powerSex;
    int dayBeforeHunger;

public:
    Animals(string m_name,int m_genre,std::tuple<int, int>  m_age, int m_food, int m_quantity) : name(m_name), age(m_age), food(m_food), genre(m_genre), quantityFood(m_quantity){}

    virtual void theDead() = 0;
    virtual void setDaySick() = 0;

    virtual bool setDayGestation() = 0;


    virtual void gestation(){}

    string GetName() {
        return name;
    }

    bool getSick() {
        return sick;
    }

    void setSickness(bool value) {
        sick = value;
    }

    int GetYears() {
        return get<0>(age);
    }

    int GetMonth() {
        return get<1>(age);
    }

    int GetGenre() {
        return genre;
    }

    void TheTime() {
        if (get<1>(age) % 12 == 0) {
            get<0>(age) += 1;
            get<1>(age) = 0;
        }
        get<1>(age) += 1;
        theDead();
    }

    virtual ~Animals() {}
};


#endif //B1_CPP_ZOO_ANIMALS_H
