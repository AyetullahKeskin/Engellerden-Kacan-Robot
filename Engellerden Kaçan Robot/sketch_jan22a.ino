float mesafe;
int zaman;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(7,0);
  delayMicroseconds(2);
  digitalWrite(7,1);
  delayMicroseconds(10);
  digitalWrite(7,0);
  zaman=pulseIn(8,1);
  mesafe=(zaman*0.034)/2;
  delay(1);
  
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,1);
  digitalWrite(10,0);
  
  digitalWrite(2,0);
  digitalWrite(3,1);
  
  delay(1);
  
  if(mesafe<=15)
  {
    
    digitalWrite(2,1);
    digitalWrite(3,0);
    
    digitalWrite(12,1);
    
    delay(1);
    
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    delay(1000);
    
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(9,0);
    digitalWrite(10,1);
    delay(2000);
    
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    delay(1000);
    
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(9,0);
    digitalWrite(10,1);
    delay(2000);
    
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    delay(1000);
   
  }
  
  digitalWrite(12,0);
  delay(10);
  
}
  
  