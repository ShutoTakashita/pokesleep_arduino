#include <Servo.h>

Servo servo;

void setup() {
    servo.attach(6);
    executeMovement();
    first_gussuri();
}

void loop() {
  gussuri();
  suyasuya();
  utouto();
  utouto();
  utouto();
  suyasuya();
}

void first_gussuri(){
    delay(1800000); //30分の遅延
}

//void test(){
//    delay(60000); //1分の遅延
//    executeMovement();
//    delay(60000); //1分の遅延
//    executeMovement();
//}

void suyasuya(){
    executeMovement();
    delay(600000);  // 10分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(600000);  // 10分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
}

void gussuri(){
    delay(1800000);  // 30分の遅延
}

void utouto(){
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
    executeMovement();
    delay(300000);  // 5分の遅延
}

  
void executeMovement() {
    moveServoTo(0);
    delay(4000);
    moveServoTo(20);
    delay(4000);
    moveServoTo(0);
    delay(4000);
    moveServoTo(20);
    delay(4000);
    moveServoTo(0);
    delay(4000);
    moveServoTo(20);
    delay(4000);
}

void moveServoTo(int targetAngle) {
    int currentAngle = servo.read(); // 現在の角度を取得
    if (currentAngle < targetAngle) {
        for (int i = currentAngle; i <= targetAngle; i++) {
            servo.write(i);
            delay(50);  // ここでの遅延で回転速度を調整
        }
    } else {
        for (int i = currentAngle; i >= targetAngle; i--) {
            servo.write(i);
            delay(50);  // ここでの遅延で回転速度を調整
        }
    }
}
