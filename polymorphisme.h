
#ifndef TP8_ROBOT_H
#define TP8_ROBOT_H

#include <string>
class Robot {
protected:
    char m_aspect;
    int m_position;

public:
    Robot(char aspect, int position=0);

    virtual void avancer(int avance);
    virtual void montrer();
};
#endif //TP8_ROBOT_H
