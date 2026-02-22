#include <Servo.h>

Servo myservo;

#define trigPin 9
#define echoPin 10

#define ENA 11
#define ENB 12
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  myservo.attach(3);
  myservo.write(90);
  delay(1000);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}

void forward() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,200);
  analogWrite(ENB,200);
}

void backward() {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void left() {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void right() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void stopMotors() {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}

void loop() {
  int front = getDistance();

  if(front > 25) {
    forward();
  }
  else {
    stopMotors();
    delay(300);

    myservo.write(0);
    delay(600);
    int leftDist = getDistance();

    myservo.write(180);
    delay(600);
    int rightDist = getDistance();

    myservo.write(90);
    delay(400);

    if(leftDist > rightDist) {
      left();
      delay(500);
    } else {
      right();
      delay(500);
    }
  }
}
