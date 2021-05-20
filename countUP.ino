unsigned long time_dt = 0;
unsigned long sec = 0;
unsigned long mint = 0;
unsigned long hour = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  time_dt = millis();

  if ((time_dt % 1000) == 0) {
    sec = time_dt / 1000;
    mint = sec / 60;
    hour = mint / 60;

    Serial.print(hour);
    Serial.print(":");
    Serial.print(mint);
    Serial.print(":");
    if (sec < 60) {
      Serial.print(sec);
    } else {
      Serial.print(sec % 60);
    }
    Serial.print("\n");

  }
}
