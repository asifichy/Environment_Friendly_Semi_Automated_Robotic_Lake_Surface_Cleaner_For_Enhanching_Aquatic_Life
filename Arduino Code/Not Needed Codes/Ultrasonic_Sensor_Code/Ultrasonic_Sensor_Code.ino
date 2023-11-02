// Ultrasonic Sensor Code

int trigpin = A0;
int echopin = A1; 
int distance;
float duration;

void setup(){
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT); 
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigpin, LOW); //initially
  delay(5);
  digitalWrite(trigpin, HIGH);
  delay(5);
  digitalWrite(trigpin, LOW);
  
  duration = pulseIn(echopin, HIGH); //initially the echopin is low. Condition we want to see in High.
  
  distance = (duration * 0.034)/2; //the result in cm. 
  Serial.print("The Distance is = ");
  Serial.print(distance);
  Serial.println("cm.");
  delay(1000);
}



