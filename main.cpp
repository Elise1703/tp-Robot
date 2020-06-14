#include <iostream>
#include <iostream>
#include <string>
#include "Robot.h"
#include "RobotTeleporteur.h"
#include "RobotRapide.h"
#include "RobotTraceur.h"
#include "RobotCarburant.h"
#include "polymorphisme.h"


void testRobot()
{
    Robot x{'A'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1); // Si on mettait 2 ici on irait 2x plus vite !
    }
}

void testRobotTeleporteur()
{
    RobotTeleporteur x{'B'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
        if (i==3)
            x.teleporter(8);
    }
}


void testRobotRapide()
{
    RobotRapide x{'C'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(2);
    }
}

void testRobotTraceur()
{
    RobotTraceur x{'D', '.'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}


void testRobotCarburant()
{
    RobotCarburant x{'E', '-', 5};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}



int main() {

    testRobot();
    testRobotTeleporteur();
    testRobotRapide();
    testRobotTraceur();
    testRobotCarburant();

    std::cout << "\n\n========= Conteneur polymorphe =========\n";
    testConteneurPolymorphisme();

    return 0;
}