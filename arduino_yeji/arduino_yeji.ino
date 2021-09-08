#include <AFMotor.h>


//센서 인식부, ShouldCode 상태
//int L1=A0;
//int L2=A1;
//int R1=A2;
//int R2=A3;

AF_DCMotor leftMotor(4);
AF_DCMotor rightMotor(3);



void setup() {
  
  //init
  Serial.begin(9600);
  Serial.println("Motor Start");
  
  //leftMotor 구동부
  leftMotor.setSpeed(255);
  leftMotor.run(RELEASE);

  //rightMotor 구동부
  rightMotor.setSpeed(255);
  rightMotor.run(RELEASE);
  
}

void loop() {
  //뒤집은 거 기준으로 왼쪽 모터 구동
  leftMotor.run(FORWARD);
  //뒤집은 거 기준으로 오른쪽 모터 구동
  rightMotor.run(BACKWARD);






  

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
