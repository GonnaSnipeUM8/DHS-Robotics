#include "main.h"

// Defines ports
#define LEFT_MOTOR 1 
#define RIGHT_MOTOR 10 
#define deadzone 10 


void operatorControl() {

	// Loops infinitly while the driver control period is active (each loop is < 1 second)
	while (1) { 

		// Sets motors to the joystick value (Between -127 and 127)
		motorSet(LEFT_MOTOR, joystickGetAnalog(1, 3)); 
		motorSet(RIGHT_MOTOR, joystickGetAnalog(1, 1));
			
		// Before continuing, checks if the deadzones should be on
		if (joystickGetAnalog(1, 3) < deadzone) {			
			motorSet(LEFT_MOTOR, 0);
		}

		if (joystickGetAnalog(1, 1) < deadzone) {			
			motorSet(RIGHT_MOTOR, 0);
		}


	}
}
