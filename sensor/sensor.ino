int trigPin = 9;
int echoPin = 10;
int led = 7;
int otherA=8;


void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(otherA,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
 if((distance<=150)) 
  {
    digitalWrite(otherA, HIGH);
}
   else
 {
     digitalWrite(otherA, LOW);
   }
}
