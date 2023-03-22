#ifndef B1_CPP_ZOO_TIGER_H
#define B1_CPP_ZOO_TIGER_H
#include "Animals.h"
#include <tuple>
#include <utility>


class Tiger: public Animals {
    int max_age = 25;
public:
    Tiger(string m_name, int m_genre,std::tuple<int, int>  m_age,int m_food = 1,int m_quantity = 12): Animals(std::move(m_name),m_genre, m_age, m_food, m_quantity){

    }

    string roar() {
        return "RRRRooaaahh";
    };

    double FeedMe(double meat) {
        if (meat >= 12 && this->GetGenre() == 1) {
            return -12;
        } else if (meat >= 10 && this->GetGenre() == 0) {
            return -10;
        } else {
            //pop
            cout << roar() << endl;
            return 0;
        }
    }

    void theDead() {
        if (this->GetYears() >= max_age) {
            cout << "mort" << endl;
        }
    }
};



#endif //B1_CPP_ZOO_TIGER_H
