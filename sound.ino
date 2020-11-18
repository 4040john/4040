#define SOUND 8 

void setup() {

  Serial.begin(9600);
  
  
}

void loop() {
  if (analogRead(A0)>600)
  {
      Serial.println("hello");
  }
  Serial.println(analogRead(A0));
  delay(50);


}
