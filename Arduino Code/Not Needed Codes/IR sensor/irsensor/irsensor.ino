//IR sensor to detect if a trash bin is full or not

int ir=7;
//int led=8;
int buzzer = 3;
int value;

void setup() 
{
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
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
