// C++ code
//
#include <Servo.h>

int i = 0;

Servo servo_11;

void setup()
{
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  for (i = 0; i <= 90; i += 1) {
    servo_11.write(i);
    delay(15); // Wait for 15 millisecond(s)
  }
  for (i = 90; i <= 180; i += 1) {
    servo_11.write(i);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (i = 180; i >= 90; i -= 1) {
    servo_11.write(i);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (i = 90; i >= 0; i -= 1) {
    servo_11.write(i);
    delay(15); // Wait for 15 millisecond(s)
  }
}
