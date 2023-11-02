char trigPin = 12;
char echoPin = 13;

char motor_speed = 5;
char motor_direction1 = 6;
char motor_direction2 = 9;

int duration = 0;
int distance = 0;


int ir=7;
//int led=8;
int buzzer = 3;
int value;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(motor_direction1, OUTPUT);
  pinMode(motor_direction2, OUTPUT);
  pinMode(motor_speed, OUTPUT);


  Serial.begin(9600); //IR_code
  pinMode(7, INPUT);
  pinMode(buzzer, OUTPUT);
  //pinMode(13, OUTPUT);


}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);    
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = ((duration*0.034)/2);

  if(distance < 2){
    digitalWrite(motor_direction1, LOW);
    digitalWrite(motor_direction2, LOW);
    analogWrite(motor_speed, 0);
  }
  else if(distance > 5 && distance < 25){
    digitalWrite(motor_direction1, HIGH);
    digitalWrite(motor_direction2, LOW);
    analogWrite(motor_speed, 128);
  }
  else if(distance > 25){
    digitalWrite(motor_direction1, LOW);
    digitalWrite(motor_direction2, LOW);
    analogWrite(motor_speed, 0);
  }

  value=digitalRead(ir);

  Serial.println("");
  Serial.print("Trash bin full = ");
  Serial.print(value);
  delay(600);

  if(value==0)      //Sensor not activated
  {
    digitalWrite(13, LOW); 
    digitalWrite(buzzer, HIGH);
  }
  else         //Sensor Activated[when value is 0]
  {
    digitalWrite(13, HIGH);
    digitalWrite(buzzer, LOW);
  }

}













