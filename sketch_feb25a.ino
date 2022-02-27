//1
int pinBlue = 2;
int pinRed = 6;
int pinb = 4;
int light = 0;

int t_on = 100;
int t_off = 10000;

int count = 0;
char incomingByte = 0;
int cycles = 0;

bool on = HIGH; 
bool off = LOW;
bool state = HIGH;
bool flag = false;

String command = "";

int i = 0;

void setup() {
  pinMode(pinBlue, OUTPUT);  
  pinMode(pinRed, OUTPUT); 
  pinMode(pinb, INPUT);
  pinMode(A0, INPUT);

  digitalWrite(pinBlue, off);
  digitalWrite(pinRed, off);

  Serial.begin(9600);
  
}



void loop() {

  
  //state = digitalRead(pinb);
  //light = analogRead(A0);
  //Serial.println(light);
  

  if (Serial.available() > 0) 
  {
    //Serial.println("command detected");
      // read the incoming byte:
      //command = Serial.readString();
      //Serial.println(command);

      incomingByte = Serial.read();
      cycles = incomingByte - '0';
      Serial.println(cycles);
      
      for(i = 1;i <= cycles;i++)
        {
          digitalWrite(pinBlue, on);
          digitalWrite(pinRed, on);
          delay(500);
          digitalWrite(pinBlue, off);
          digitalWrite(pinRed, off);
          delay(500);          
        }


      
      
      /*if (command.compareTo("ON"))
      {
        Serial.println("you said on");
        Serial.println(command);
        for(i = 1;i <= 5;i++)
        {
          digitalWrite(pinBlue, on);
          digitalWrite(pinRed, on);
          delay(1000);
          digitalWrite(pinBlue, off);
          digitalWrite(pinRed, off);
          delay(1000);          
        }
        */
        
        
      }
      
  


/*if (state == LOW) {
     digitalWrite(pinBlue, on);
     digitalWrite(pinRed, on);
    
     
     if (flag == false) {
      light = analogRead(A0);

     
      count++;
      Serial.println(count);
      Serial.println(light);
      Serial.print("button pressed\n");
      flag = true;
     }
     
  } 
  else if (state == HIGH) {
    digitalWrite(pinBlue, off);
    digitalWrite(pinRed, off);
    flag = false;
  }
  
  
//  digitalWrite(pinBlue, on);
//  digitalWrite(pinRed, on);
//  delay(t_on);
//
//   
//  digitalWrite(pinBlue, off); 
//  digitalWrite(pinRed, off); 
//  delay(t_off);     

  */
}
