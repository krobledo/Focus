int pinsCount = 12;                                 // declaring the integer variable pinsCount (const)?
int gen[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int off = LOW;                                    //sets lights off
int on = HIGH;
unsigned long start = 0;
bool manny = true;
bool burger = true;

unsigned long whenToBlink = 2000;      //stole; millis for WHEN to blink (every

void setup() {

  //Serial.begin();                                 //use for counter and gui
  for (int i = 0; i < pinsCount; i = i + 1) {     // counting the variable i from 0 to 9
    pinMode(gen[i], OUTPUT);                      // initialising the pin at index i of the array of pins as OUTPUT
  }
}

void loop() {

  if (manny == burger) {
    for (int k = 0; k < 12; k = k + 2) { //iterates through green
      digitalWrite(gen[k], on);
    }
    for (int y = 1; y < 12; y = y + 2) { //tells red off
      digitalWrite(gen[y], off);
    }
    delay(3600000);                       //delay can be any number of minutes * 60000
    //one hour = 60 * 60000 = 3600000

    for (int r = 0; r < 12; r = r + 2) { //iterates through red
      digitalWrite(gen[r], off);
    }
    for (int q = 1; q < 12; q = q + 2) { //tells green off
      digitalWrite(gen[q], on);
    }
    delay(1800000);                      //delay can be any number of minutes * 60000
    //if you make it 100 you can get epilepsy
  }
}
