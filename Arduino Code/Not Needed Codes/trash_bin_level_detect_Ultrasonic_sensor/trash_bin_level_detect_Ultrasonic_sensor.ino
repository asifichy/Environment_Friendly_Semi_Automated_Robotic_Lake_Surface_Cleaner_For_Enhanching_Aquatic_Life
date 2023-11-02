// trash bin level detection

/*int trigPin = 9; 
int echoPin = 10;
int distance;
float duration;
//int led = 7;
int buzzer = 2;

void setup() {  
  //pinMode(led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delay(10);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration/2)/29.1;
  Serial.print("Level of Filled waste is = ");
  Serial.print(distance);
  Serial.println("cm.");
  delay(500);

  /*if(distance<14)
  {
    digitalWrite(led, HIGH);
  }
  else if(distance>14)
  {
    digitalWrite(led, LOW);
  }*/

  /*if(distance<=7)
  {
    digitalWrite(buzzer, HIGH);
  }
  else if(distance<=7)
  {
    digitalWrite(buzzer, LOW);
  }

}*/


int trigPin = 9;
int echoPin = 10;
//int led = 7;
int buzzer = 4;

void setup() 
{
  Serial.begin (9600);
  //pinMode (led, OUTPUT);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  // put your setup code here, to run once:
}

void loop() 
{
  long duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (1000);
  digitalWrite (trigPin, LOW);
  duration=pulseIn (echoPin, HIGH);
  distance = (duration/2)/29.1;
  Serial.print("Level of Filled waste is = ");
  Serial.print (distance);
  Serial.println ("cm");
  delay (500);

  if(distance<=7)
  {
    digitalWrite(buzzer, HIGH);
  }
  else if(distance<=7)
  {
    digitalWrite(buzzer, LOW);
  }
}
   

