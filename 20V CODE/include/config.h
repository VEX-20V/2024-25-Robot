#include "main.h"


// controller 
 extern Controller controller;


// Config the Motors 
extern MotorGroup left_motors; // left motors on ports 1 (1st), 2 (2nd), 3 (3rd)
extern MotorGroup right_motors; // right motors on ports 4 (1st), 5 (2nd), 6 (3rd)
extern Motor main_intake; // main intake in port 11
extern Motor bridge; // bridge in port 12

// drivetrain settings
extern lemlib::Drivetrain drivetrain;

// NOT CURRENTLY ON BOT
 extern Imu imu; 

// tracking wheels 
extern Rotation vertical_rotation_sensor; // create a v5 rotation sensor on port 7
extern Rotation horizontal_rotation_sensor; // create a v5 rotation sensor on port 8


// vertical tracking wheel encoder
extern  Rotation vertical_rotation_sensor; // create a v5 rotation sensor on port 7]
// horizontal tracking wheel encoder
extern  Rotation horizontal_rotation_sensor; // create a v5 rotation sensor on port 8
/// horizontal tracking wheel
extern lemlib::TrackingWheel horizontal_tracking_wheel;
// vertical tracking wheel
extern lemlib::TrackingWheel vertical_tracking_wheel;


