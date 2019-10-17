#include "main.h"

auto left = okapi::MotorGroup({1,2});
auto right = okapi::MotorGroup({-3,-4});
pros::Motor intake1 = pros::Motor(8);
pros::Motor intake2 = pros::Motor(6);
pros::Motor tilter = pros::Motor(7);

auto chassis = okapi::ChassisControllerFactory::create(
  left,
  right,
  okapi::AbstractMotor::gearset::green,
  {4 * okapi::inch, 14 * okapi::inch}
);

void autonomous() {
  intake1.move(127);
  intake2.move(-127);
  chassis.moveDistance(50.4 * okapi::inch);
  chassis.moveDistance(-42 * okapi::inch);
  intake1.move(0);
  intake2.move(0);
  chassis.turnAngle(-90 * okapi::degree);
  chassis.moveDistance(18.9 * okapi::inch);
  tilter.move_relative(1200, 127);
  pros::delay(2000);
  intake1.move(-127);
  intake2.move(127);
  pros::delay(1000);
  intake1.move(0);
  intake2.move(0);
}
