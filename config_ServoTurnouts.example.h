/***********************************************************************************************************************************

config_ServoTurnouts.h
COPYRIGHT (c) 2020 Maik Ranke

The configuration file for servo turnouts connected via PCA9685 board directly to DCC++ EX Command Station

************************************************************************************************************************************/

/*
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Define turnouts as follow:
//
//  _T_(TURNOUT_ID, PCA9685_PWM_PIN, ACTIVE_ANGLE, INACTIVE_ANGLE);
//
//  TURNOUT_ID            : Id of the turnout. Use a unique id for every turnout on your modell railway whatever it is connected.
//  PCA9685_PWM_PIN       : Pin of the PCA9685 where the servo is connected. Every board has 16 pins. Start to count with 0.
//                          If you have more than one board connected the second board starts with pin 16..31 and so on. If you
//                          use more tha one board, don't forget to adress the board by soldering the jumpers top right on the board.
//  ACTIVE_ANGLE          : The active angle can be set +/-45 degree from the neutral (90 degree) position. If the angle is out of range 
//                          -45 or +45 degree will be used instead. Be careful and use small steps to find out the right angle. 
//                          Risk of damage your turnout if the angle is to big!
//  INACTIVE_ANGLE        : Same as ACTIVE_ANGLE but for the second position.
//
//  IMPORTANT:  The semicolon and the backslash at the end of the line are important! No backslash at the end of the last entry!
//              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  Example 1: 
//              #define TURNOUTS _T_(5, 0, -10, 10);
//
//  Defines a single turnout with id 5 on PWM pin 0 (the first pin of the first board) with an angle of -10 degree for position 1 
//  which means 80 degree absolute and +10 degree for position 2 which is absolute 100 degree.
//
//  Example 2:
//
//              #define TURNOUTS _T_(5, 0, -10, 10); \
//                               _T_(6, 1, 15, -12); 
//
//  Same as example 1 but defines an additional turnout with id 6 on pin 1 (the second pin) with an angle of +15 degree for position 1
//  and -12 degree for position 2. Both relatively to the neutral position of 90 degree of the servo.
//
*/

#define TURNOUTS _T_(1000, 0, -10, 10); \
                 _T_(1001, 1, -15, 15); 



