int sensor = 7;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  int value = digitalRead(sensor);
  Serial.println(sensor);
  delay(1000);
}
