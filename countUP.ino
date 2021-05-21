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
    day = hour / 24;

    
    
    if(hour < 24){
    Serial.print(hour);
    }else{
    Serial.print(hour % 24);
    }
    
      Serial.print(":");
    
    if(mint < 60){
      Serial.print(mint);
    }else{
      Serial.print(mint % 60);
    }
    
    Serial.print(":");
    
    if (sec < 60) {
      Serial.print(sec);
    } else {
      Serial.print(sec % 60);
    }
    Serial.print("\n");

  }
}
