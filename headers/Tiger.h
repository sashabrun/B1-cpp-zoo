#ifndef B1_CPP_ZOO_TIGER_H
#define B1_CPP_ZOO_TIGER_H
#include "Animals.h"
#include <tuple>
#include <utility>


class Tiger: public Animals {
    int max_age = 25;
    int daySick = 15;
    int gestationTime = 3 * 31;
public:
    Tiger(string m_name, int m_genre,std::tuple<int, int>  m_age,int m_food = 1,int m_quantity = 12): Animals(std::move(m_name),m_genre, m_age, m_food, m_quantity){

    }

    void setDaySick() {
        daySick--;
        if (daySick == 0) {
            setSickness(false);
            daySick = 15;
            cout << "Tiger healed"<< endl;
        }
    }

    bool setDayGestation() {
        gestationTime--;
        if (gestationTime == 0) {
            gestationTime = 3*31;
            cout << "A new tiger makes its entrance" << endl;
            return true;
        }
        return false;
    }

    void theDead() {
        if (this->GetYears() >= max_age) {
            cout << "mort" << endl;
        }
    }

    ~Tiger() {}
};



#endif //B1_CPP_ZOO_TIGER_H
