 //Prototype1.0 Sign text Club Rush
int RowPin1 = 8; //setting up the LED rows to the correspoing pin
int RowPin2 = 9;
int RowPin3 = 10;
int RowPin4 = 11;
int RowPin5 = 12;
int ColPin8 = 0; //setting up the LED column to the correspoing pin
int ColPin7 = 1;
int ColPin6 = 2;
int ColPin5 = 3;
int ColPin4 = 4;
int ColPin3 = 5;
int ColPin2 = 6;
int ColPin1 = 7;

int interval = 500;
int pause = 1;
int counter = 0;


void setup() {
  pinMode(RowPin1, OUTPUT); //setting all the pins to output
  pinMode(RowPin2, OUTPUT);
  pinMode(RowPin3, OUTPUT);
  pinMode(RowPin4, OUTPUT);
  pinMode(RowPin5, OUTPUT);
  pinMode(ColPin1, OUTPUT);
  pinMode(ColPin2, OUTPUT);
  pinMode(ColPin3, OUTPUT);
  pinMode(ColPin4, OUTPUT);
  pinMode(ColPin5, OUTPUT);
  pinMode(ColPin6, OUTPUT);
  pinMode(ColPin7, OUTPUT);
  pinMode(ColPin8, OUTPUT);

}

void loop() { 
 digitalWrite(ColPin8, HIGH);
 delay(1000);
 /*The sign will work in frames.
    JOIN: 4 + 4 + 2 + 4
    STEM: 4 + 4 + 4 + 4
    CLEARING: 8
    TOTAL FRAMES: 38  
  */

  //FRAME 1
  digitalWrite(ColPin1, HIGH);
  digitalWrite(RowPin5, HIGH);
  digitalWrite(RowPin4, HIGH);
  digitalWrite(RowPin3, HIGH);
  digitalWrite(RowPin2, HIGH);
  delay(1000);

  turnAllOff();

  delay(1000);
  //FRAME 3 MULTIPLEXING STARTS HERE
  }


void turnAllOff(){
  digitalWrite(RowPin1, LOW);
  digitalWrite(RowPin2, LOW);
  digitalWrite(RowPin3, LOW);
  digitalWrite(RowPin4, LOW);
  digitalWrite(RowPin5, LOW);
  digitalWrite(ColPin1, LOW);
  digitalWrite(ColPin2, LOW);
  digitalWrite(ColPin3, LOW);
  digitalWrite(ColPin4, LOW);
  digitalWrite(ColPin5, LOW);
  digitalWrite(ColPin6, LOW);
  digitalWrite(ColPin7, LOW);
  digitalWrite(ColPin8, LOW);

      
  }
