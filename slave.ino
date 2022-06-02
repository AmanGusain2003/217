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
    //Serial.println(t);
    //Serial.println('k');
  }
  delay(20)

  if (car == 'F') {          //move forward(all motors rotate in forward direction)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    delay(2800);

    //Serial.println('f');
  }

  else if (car == 'B') {    //move reverse (all motors rotate in reverse direction)
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    delay(2800);

       //Serial.println('b');
  }

  else if (car == 'L') {
    //Serial.println('l');
    digitalWrite(13, HIGH); //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
    delay(1900);
  }

  else if (car == 'R') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    digitalWrite(11, HIGH);
    //Serial.println('r');
    delay(1900);
  }

  else if (car == 'S') 
  {    //STOP (all motors stop)
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  




}
