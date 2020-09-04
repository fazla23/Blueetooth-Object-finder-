
void setup() 
{
  
 pinMode(4,OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() 
{
  
  if(Serial.available()>0)
  {
    int data = Serial.read();
    
    Serial.println(data);
    
    switch(data)
    
    {
      case 49:
      
    tone(4,523);
    
    break;
    

    case 50:
    
    noTone(4);
    
    break;
    
    }
           }
                 }
