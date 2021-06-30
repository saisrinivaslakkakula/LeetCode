//
// Created by sai srinivas lakkakula on 6/15/21.


/*
 * On an infinite plane, a robot initially stands at (0, 0) and faces north. The robot can receive one of three instructions:

"G": go straight 1 unit;
"L": turn 90 degrees to the left;
"R": turn 90 degrees to the right.
The robot performs the instructions given in order, and repeats them forever.

Return true if and only if there exists a circle in the plane such that the robot never leaves the circle.



Example 1:

Input: instructions = "GGLLGG"
Output: true
Explanation: The robot moves from (0,0) to (0,2), turns 180 degrees, and then returns to (0,0).
When repeating these instructions, the robot remains in the circle of radius 2 centered at the origin.
Example 2:

Input: instructions = "GG"
Output: false
Explanation: The robot moves north indefinitely.
Example 3:

Input: instructions = "GL"
Output: true
Explanation: The robot moves from (0, 0) -> (0, 1) -> (-1, 1) -> (-1, 0) -> (0, 0) -> ...

 Approach
 ----------------

 1. Check for single iteration.
 2. If the robot retuns to initial position, return true.
 3. If robot hasn't reached initial position and the direction vector (Facing of robot) is changed, Then return true
  because eventually after 'N' iterations robot would obviously reach origine in this case.
 4. If the above two conditions are failed, Robot is never going to come back.
 *
 *
 */
#include <string>
#include "LC_1041_Robot_bound_in_Circle.h"

bool isRobotBounded(string instructions){
    int i=0;
    char initialFacing = 'N';
    char Facing = 'N';
    position initial = {0,0};
    position p = {0,0};
    while(i<instructions.size()){
        char instruction = instructions.at(i);
        switch (instruction) {

            case 'G':
            {
                if(Facing == 'N')
                   p.y++;
                else if(Facing == 'S'){
                    p.y--;
                }
                else if(Facing == 'W'){
                    p.x--;
                }
                else{
                    p.x++;
                }
                break;


            }
            case 'L':{
                Facing = leftTurn(Facing);
                break;
            }
            case 'R':{
                Facing = rightTurn(Facing);
                break;
            }

        }


        i++;
    }
    if(p.x == initial.x && p.y == initial.y)
        return true;
    else if(initialFacing!=Facing){
        return true;
    }
    else
    return false;
}

char leftTurn(char Facing){
    switch (Facing) {
        case 'N': {
            return ('W');
        }
        case 'E': {
            return ('N');
        }
        case 'W': {

            return ('S');
        }
        case 'S': {

            return ('E');
        }

    }
    return Facing;
}


char rightTurn(char Facing){
    switch (Facing) {
        case 'N': {
            return ('E');
        }
        case 'E': {
            return ('S');
        }
        case 'W': {

            return ('N');
        }
        case 'S': {

            return ('W');
        }

    }
    return Facing;
}
//

