#include <iostream>
#include "headers/Zoo.h"
#include "headers/Menu.h"

using namespace std;

float Level() {
    float choice;
    cout << "- Level menu -\n1. Easy    - 150 000 TZM -\n2. Normal   - 80 000 TZM -\n3. Hard     - 20 000 TZM -\n\nEnter your choice (1-3): ";
    cin >> choice;
    if (choice == 1) {
        return 150000;
    } else if (choice == 2) {
        return 80000;
    } else if (choice == 3) {
        return 20000;
    } else {
        return 80000;
    }
}

int main()
{
    Time time;
    Zoo* zoo = new Zoo("Try-Zoo-Mix", Level(), &time);

    Menu menu(zoo, &time);
    menu.show();

    return 0;
}
