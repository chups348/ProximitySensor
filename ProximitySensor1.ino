const int echo = 12;
const int trig = 11;

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;

int buzzer = 7;

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT); // pin 7 will be recieving output on the arduino

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(trig, HIGH);
 delay(1000);
 digitalWrite(trig,LOW);

 duration = pulseIn(echo, HIGH);
 distance = (duration/2) / 28.5;
 Serial.println(distance);

 if (distance <= 30) {
  digitalWrite(LED1, HIGH);
 } else {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 20 ) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 15 ) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 10 ) {
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 5 )
  {
    digitalWrite(LED5, HIGH);
    
    for (int i = 0; i < 80; i++) {  
      digitalWrite(buzzer, HIGH);     
      delay(1);   
      digitalWrite(buzzer, LOW);   
      delay(1);  
    }  
    delay(50);  

    for (int j = 0; j < 100; j++) {  
      digitalWrite(buzzer, HIGH);   
      delay(2); // delay 2ms   
      digitalWrite(buzzer, LOW);   
      delay(2);  
    }  
    delay(100);   
  } else {
    digitalWrite(LED5, LOW);
  }

}
