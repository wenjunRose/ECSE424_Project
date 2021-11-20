


int ledp=8;
int buz=9;
int val=0;
int timesRepeat=0;
void setup()
{
 
  pinMode(ledp,OUTPUT);
  pinMode(buz,OUTPUT);

}
void loop()
{

val = analogRead(A0);
if(timesRepeat!=0){
 
    timesRepeat--;
  digitalWrite(ledp,HIGH);
  delay(50);
  digitalWrite(ledp,LOW);
digitalWrite(buz,HIGH);
delay(50);
digitalWrite(buz,LOW);

  
 
  }else{
    if(val==0){
//    digitalWrite(ledp,LOW);
//     digitalWrite(buz,LOW);
    }else if (val==1023){
      timesRepeat=20;
      }
    }
  
}
