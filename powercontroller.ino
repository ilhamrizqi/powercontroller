int pinWaterPump  = 2;
int pinGeneral    = 3;
int pinLighting   = 4;
int pinDay        = 5;
int pinNight      = 6;
int pinBuzzer     = 7;        

void setup() {
  // put your setup code here, to run once:
  pinMode(pinWaterPump, OUTPUT);
  pinMode(pinGeneral,   OUTPUT);
  pinMode(pinLighting,  OUTPUT);  

  setWaterPump(true);
  delay(1000);  
  setGeneral(true);
  delay(1000);
  setLighting(true);
  delay(1000);
  beep(1000);  
}

void loop() {
  //  Get time from RTC
  scheduler();
  delay(1000);
}

void beep(unsigned int f)
{
  tone(pinBuzzer, tone, 200);
  noTone(pinBuzzer);
}

void setWaterPump(bool on)
{
  if(on)
  {
    digitalWrite(pinWaterPump, HIGH); 
  }
  else
  {
    digitalWrite(pinWaterPump, LOW);
  }
}

void setGeneral(bool on)
{
  if(on)
  {
    digitalWrite(pinGeneral, HIGH); 
  }
  else
  {
    digitalWrite(pinGeneral, LOW);
  }
}

void setLighting(bool on)
{
  if(on)
  {
    digitalWrite(pinLighting, HIGH); 
  }
  else
  {
    digitalWrite(pinLighting, LOW);
  }  
}

void scheduler()
{
  
}

