const int in1 = 11;
const int in2 = 10;
const int in3 = 9;
const int in4 = 8;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  directionControl();
  delay(1000);
}

void directionControl(){
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(500);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(500);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(1000);
  }
