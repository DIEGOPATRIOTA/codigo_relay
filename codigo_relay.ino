/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */


int Relay1 = 7; // relay 01

void setup()
{  
   Serial.begin(9600);
   // RELAYS - LÂMPADA
   pinMode(Relay1, OUTPUT);     //Set Pin12 as output
   
}


void loop() {
  
 char caracter;
  caracter = Serial.read();
  
  if(caracter=='l'){
    digitalWrite(Relay1, LOW);    
  }
 
 if(caracter=='d'){
    digitalWrite(Relay1, HIGH);    
  }
  
 
  
  
}  
