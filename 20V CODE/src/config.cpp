#include "main.h"


// controller 
 Controller controller( E_CONTROLLER_MASTER);


// Config the Motors 
MotorGroup left_motors({-1, 2, 3},  MotorGearset::blue); // left motors on ports 1 (1st), 2 (2nd), 3 (3rd)
MotorGroup right_motors({4, -5, -6},  MotorGearset::blue); // right motors on ports 4 (1st), 5 (2nd), 6 (3rd)
Motor main_intake(11); // main intake in port 11
Motor bridge (12); // bridge in port 12

// drivetrain settings
lemlib::Drivetrain drivetrain(&left_motor_group, // left motor group
                              &right_motor_group, // right motor group
                              11.7, // 11.7 inch track width
                              lemlib::Omniwheel::NEW_4, // using new 4" omnis
                              450, // drivetrain rpm is 450
                              2 // horizontal drift is 2 (for now)
);



// tracking wheels 
Rotation vertical_rotation_sensor(7); // create a v5 rotation sensor on port 7
Rotation horizontal_rotation_sensor(8); // create a v5 rotation sensor on port 8


// imu
 Imu imu(10);
// vertical tracking wheel encoder
 Rotation vertical_rotation_sensor(7); // create a v5 rotation sensor on port 7]
// horizontal tracking wheel encoder
 Rotation horizontal_rotation_sensor(8); // create a v5 rotation sensor on port 8
/// horizontal tracking wheel
lemlib::TrackingWheel horizontal_tracking_wheel(&horizontal_rotation_sensor, lemlib::Omniwheel::NEW_2, -5.2);
// vertical tracking wheel
lemlib::TrackingWheel vertical_tracking_wheel(&vertical_rotation_sensor, lemlib::Omniwheel::NEW_2, -3.25);


