#include <AFMotor.h>



AF_DCMotor leftMotor(1);
AF_DCMotor rightMotor(2);


int rightSpeed;
int leftSpeed;

void setup() {
  
  //init
  Serial.begin(9600);
  Serial.println("Motor Start");
  delay(500);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  rightSpeed=250;
  leftSpeed=250;
  //leftMotor 구동부
  leftMotor.setSpeed(leftSpeed);
//  leftMotor.run(RELEASE);

  //rightMotor 구동부
  rightMotor.setSpeed(rightSpeed);
//  rightMotor.run(RELEASE);
  
}
void loop() {

  int L1=analogRead(A0); // 맨 왼쪽
  int L2=analogRead(A1); // 왼쪽 중간
  int R2=analogRead(A3); // 오른쪽 중간
  int R1=analogRead(A2); //맨 오른쪽
  Serial.print("L1 : ");
  Serial.print(L1);
  Serial.print(", L2 : ");
  Serial.print(L2);
  Serial.print(", R1 : ");
  Serial.print(R1);
  Serial.print("R2 : ");
  Serial.println(R2);
  //노란색이 오른쪽 끝 A2
  //검은색이 오른쪽 중간 A3
  //A1 왼쪽 중간
  //A0 왼쪽 끝
  leftMotor.setSpeed(leftSpeed);
  rightMotor.setSpeed(rightSpeed);

  
  //뒤집은 거 기준으로 왼쪽 모터 구동
  leftMotor.run(FORWARD);
  //뒤집은 거 기준으로 오른쪽 모터 구동
  rightMotor.run(BACKWARD);

  if(L2>500) {
//    rightMotor.run(RELEASE);
//    leftMotor.setSpeed(leftSpeed);
    rightMotor.setSpeed(rightSpeed-250);
  }
  if(R2>500) {
//    leftMotor.run(RELEASE);
//    rightMotor.setSpeed(rightSpeed);
    leftMotor.setSpeed(leftSpeed-250);
  }




  //이게 각도 트는거
//  if(R2>500) {
//    if(R1>500) {
//      rightMotor.run(FORWARD);
//      leftMotor.run(BACKWARD);
//    }
//    else {
//     leftMotor.run(FORWARD);
//     rightMotor.run(RELEASE);
//    }
//  }
//
//  
//  if(L2>500) {
//    if(L1>500) {
//      leftMotor.run(BACKWARD);
//      leftMotor.run(BACKWARD);
//      rightMotor.run(BACKWARD);
//    }
//    else {
//      leftMotor.run(RELEASE);
//      rightMotor.run(BACKWARD);
//    }
//  }



  

// 프로그램 전체 ShouldCode

//  //일단 출발
//
//  if(R2<100) {
//    if(R1<100) {
//      //왼쪽 반대로 돌리고 오른쪽 존나 가
//    }
//    else {
//      //왼쪽 정지하고 오른쪽 존나 가
//    }
//  }
//  else if(L2<100) {
//    if(L1<100) {
//      //오른쪽 반대로 돌리고 왼쪽 존나 가
//    }
//    else {
//      //오른쪽 정지하고 왼쪽 존나 가
//    }
//  }
}
