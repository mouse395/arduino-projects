 //Prototype1.0 Sign text Club Rush
int cp1 = 8;
int cp2 = 1;
int cp3 = 2; 
int cp8 = 7;
int rp1 = 8;

 


void setup() {
  pinMode(cp1, OUTPUT); 
  pinMode(cp2, OUTPUT);
  pinMode(cp3, OUTPUT); 
  pinMode(cp8, OUTPUT);
  pinMode(rp1, OUTPUT);
  
   
}

void loop() {
 
  digitalWrite(rp1, HIGH);
  digitalWrite(cp8, HIGH);
  delay(1000);
  digitalWrite(cp8, LOW);
   digitalWrite(rp1, HIGH);
   
   

      
  }
