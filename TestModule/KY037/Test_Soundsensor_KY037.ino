#define Sound 35
#define BLUE 2

void setup() {
  // put your setup code here, to run once:
  pinMode(Sound, INPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Sound value: ");
  Serial.print(analogRead(Sound));
  if (analogRead(Sound > 100)){
    digitalWrite(BLUE, HIGH);
  } else {
    digitalWrite(BLUE, LOW);
  }
  delay(500);
}
