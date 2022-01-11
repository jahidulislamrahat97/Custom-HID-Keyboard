uint8_t buf[8] = { 0 }; //Keyboard report buffer

#define PIN_A 2 // Pin for a
#define PIN_B 3 // Pin for b
#define PIN_C 4 // Pin for c
#define PIN_D 5 // Pin for d
#define PIN_E 6 // Pin for e
#define PIN_F 7 // Pin for f
#define PIN_G 8 // Pin for g
#define PIN_H 9 // Pin for h
#define PIN_I 10 // Pin for i
#define PIN_J 11 // Pin for j


void setup() {
  Serial.begin(9600);

  pinMode(PIN_A, INPUT);
  pinMode(PIN_B, INPUT);
  pinMode(PIN_C, INPUT);
  pinMode(PIN_D, INPUT);
  pinMode(PIN_E, INPUT);
  pinMode(PIN_F, INPUT);
  pinMode(PIN_G, INPUT);
  pinMode(PIN_H, INPUT);
  pinMode(PIN_I, INPUT);
  pinMode(PIN_J, INPUT);

}

void loop() {

  if (digitalRead(PIN_A) == HIGH) {
    buf[2] = 4; // a keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("a");
    releaseKey();
  }

  if (digitalRead(PIN_B) == HIGH) {
    buf[2] = 5; // b keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("b");
    releaseKey();
  }

  if (digitalRead(PIN_C) == HIGH) {
    buf[2] = 6; // c keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("c");
    releaseKey();
  }

  if (digitalRead(PIN_D) == HIGH) {
    buf[2] = 7; // d keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("d");
    releaseKey();
  }

  if (digitalRead(PIN_E) == HIGH) {
    buf[2] = 8; // e keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("e");
    releaseKey();
  }

  if (digitalRead(PIN_F) == HIGH) {
    buf[2] = 9; // f keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("f");
    releaseKey();
  }

  if (digitalRead(PIN_G) == HIGH) {
    buf[2] = 10; // g keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("g");
    releaseKey();
  }

  if (digitalRead(PIN_H) == HIGH) {
    buf[2] = 11; // h keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("h");
    releaseKey();
  }

  if (digitalRead(PIN_I) == HIGH) {
    buf[2] = 12; // i keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("i");
    releaseKey();
  }

  if (digitalRead(PIN_J) == HIGH) {
    buf[2] = 13; // j keycode
    Serial.write(buf, 8); // Send keypress
    //Serial.print("j");
    releaseKey();
  }
}


// Function for Key Release
void releaseKey() {
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Send Release key
  delay(250);
}
