
int M_A1=D9;
int M_A2=D10;
int M_B1=D8;
int M_B2=D7;

int sns1=A0;
int sns2=A1;

int inputVal = 0;
int inpt2=0;

void setup() {

  pinMode(M_A1,OUTPUT);
pinMode(M_A2,OUTPUT);
pinMode(M_B1,OUTPUT);
pinMode(M_B2,OUTPUT);

pinMode(sns1,INPUT);
pinMode(sns2,INPUT);

  Serial.begin(9600);

}

void loop() {
inputVal = digitalRead(sns1);
inpt2=digitalRead(sns2);
Serial.print("A0 sns");
Serial.println(inputVal);
Serial.print("A1 sns");
Serial.println(inpt2);

if ((digitalRead(sns1) == 0)&&(digitalRead(sns2) == 0)){forword();}

if ((digitalRead(sns1) == 1)&&(digitalRead(sns2) == 0)){turnLeft();}
if ((digitalRead(sns1) == 1)&&(digitalRead(sns2) == 0)) {turnLeft();}

if ((digitalRead(sns1) == 0)&&(digitalRead(sns2) == 1)){turnRight();}
if ((digitalRead(sns1) == 0)&&(digitalRead(sns2) == 1)){turnRight();}

if ((digitalRead(sns1) == 1)&&(digitalRead(sns2) == 1)){Stop();}
}

void forword(){
analogWrite(M_A1, 110);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
analogWrite(M_B2, 150);  
}


void turnRight(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
analogWrite(M_B2, 150);  
}

void turnLeft(){
analogWrite(M_A1, 120);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}

void Stop(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
} 
