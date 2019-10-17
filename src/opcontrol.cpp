#include "main.h"
#include "ui/autonUI.hpp"
// #include "UI/tracker.hpp"
// #include "util/latchedboolean.hpp"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	pros::Controller master =  pros::Controller(pros::E_CONTROLLER_MASTER);
	pros::Controller partner = pros::Controller(pros::E_CONTROLLER_PARTNER);
	pros::Motor left1 = pros::Motor(1);
	pros::Motor right1 = pros::Motor(3);
	pros::Motor left2 = pros::Motor(2);
	pros::Motor right2 = pros::Motor(4);
	pros::Motor intake1 = pros::Motor(8);
	pros::Motor intake2 = pros::Motor(6);
	pros::Motor tilter = pros::Motor(7);
	// tracker::initialize();
	// tracker::update(left_encoder.get(), right_encoder.get());
	// LatchedBoolean outtakeToggle = LatchedBoolean();
	// LatchedBoolean intakeToggle = LatchedBoolean();
	while (true) {
		int l = master.get_analog(ANALOG_LEFT_Y);
		int r = -master.get_analog(ANALOG_RIGHT_Y);
		int pl = partner.get_analog(ANALOG_LEFT_Y);
		int pr = -partner.get_analog(ANALOG_RIGHT_Y);
		bool mRightBumper = master.get_digital(DIGITAL_R1);
		bool mLeftBumper = master.get_digital(DIGITAL_L1);
		bool mRightTrigger = master.get_digital(DIGITAL_R2);
		bool mLeftTrigger = master.get_digital(DIGITAL_L2);
		bool mUp_arrow = master.get_digital(DIGITAL_UP);
		bool mX = master.get_digital(DIGITAL_X);
		bool mA = master.get_digital(DIGITAL_A);
		bool pY = partner.get_digital(DIGITAL_Y);
		bool pA = partner.get_digital(DIGITAL_A);
		bool pRightBumper = partner.get_digital(DIGITAL_R1);
		bool pLeftBumper = partner.get_digital(DIGITAL_L1);
		bool pRightTrigger = partner.get_digital(DIGITAL_R2);
		bool pLeftTrigger = partner.get_digital(DIGITAL_L2);

		if((mRightBumper || pA)){
			intake1.move(127);
			intake2.move(-127);
		}
		else if(mRightTrigger || pY){
			intake1.move(-127);
			intake2.move(127);
		}
		else{
			intake1.move(0);
			intake2.move(0);
		}
//up
		if(pRightBumper || pLeftBumper || mLeftBumper){
			tilter.move_absolute(-1200, 127);
		}
//down
		else if(pRightTrigger || pLeftTrigger || mLeftTrigger){
			tilter.move_absolute(0, 127);
		}
		else{
			tilter.move(0);
		}
		if(l == 0 && r == 0){
			left1.move(pl/5.08 );
			left2.move(pl/5.08 );
			right1.move(pr/5.08 );
			right2.move(pr/5.08 );
		}
		if(pl == 0 && pr == 0){
			left1.move(l);
			left2.move(l);
			right1.move(r);
			right2.move(r);
		}
		pros::delay(20);
	}
}
