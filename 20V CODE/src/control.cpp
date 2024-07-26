#include "main.h"

void intake_control(){
     // if R1 is pressed
    if (master.get_digital(E_CONTROLLER_DIGITAL_R1)) { // move intake and bridge if right 1st bumper is pressed
      main_intake.move(100);

      if (master.get_digital(E_CONTROLLER_DIGITAL_R2)) { // if right 2st bumper is also pressed 
        bridge.move(-100);
      } else {
        bridge.move(100);
      }

    }
    else { // stop intake 
      main_intake.move(0);
      bridge.move(100);
    }
    delay(2);
}
