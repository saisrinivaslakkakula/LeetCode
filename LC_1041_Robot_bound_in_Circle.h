//
// Created by sai srinivas lakkakula on 6/15/21.
//

#ifndef LETTCODE_LC_1041_ROBOT_BOUND_IN_CIRCLE_H
#define LETTCODE_LC_1041_ROBOT_BOUND_IN_CIRCLE_H
#include <string>
using std::string;
struct position{
int x;
int y;
};
bool isRobotBounded(string instructions);
char leftTurn( char Facing);
char rightTurn( char Facing);



#endif //LETTCODE_LC_1041_ROBOT_BOUND_IN_CIRCLE_H
