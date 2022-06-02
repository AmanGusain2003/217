char car;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  Serial.begin(9600);

}

void loop()
{

  if (Serial.available())
  {
    car = Serial.read();
  
  }
  delay(20)

  if (car == 'F') {        
    digitalWrite(11, HIGH);
    delay(2800);

    
  }

  else if (car == 'B') {   
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    delay(2800);

  }

  else if (car == 'L') {
   
    digitalWrite(13, HIGH); 
    delay(1900);
  }

  else if (car == 'R') {   
    digitalWrite(11, HIGH);
   
    delay(1900);
  }

  else if (car == 'S') 
  {    
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  




}
