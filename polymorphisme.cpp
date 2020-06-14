#include "Robot.h"
#include <string>
#include <iostream>


Robot::Robot(char aspect, int position)
        : m_aspect(aspect), m_position(position) {}

void Robot::avancer(int avance) {
    m_position+=avance;
}

void Robot::montrer() {
    std::cout << std::string(m_position, ' ') << m_aspect << std::endl;
}
