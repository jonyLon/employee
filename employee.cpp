#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
int main()
{
    Employee Jo("Jo", 1, 5, 2001);
    Jo.print();
    cout << endl;
    ProductionWorker Pit("Pit", 2, 6, 2005, Shift::DAY, 100);
    Pit.print();
    cout << endl;
    TeamLeader Bob("Bob", 3, 12, 2006, Shift::NIGHT, 120, 1200, 12000, 25);
    Bob.print();
    //
};