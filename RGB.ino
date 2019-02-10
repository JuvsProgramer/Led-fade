int red = 9;
int green = 1;
int blue = 2;
int button = 3;
int counter = 0;
int amount1 = 50;
int amount2 = 100;
int amount3 = 255;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  //pinMode(green, OUTPUT);
  //pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  RGB();
}

void RGB() {
  Serial.println("-----");
  Serial.println(counter);
  Serial.println("Executed");
  if (digitalRead(button) == HIGH) {
    if (counter == 0) {
      analogWrite(red, amount1);
      counter++;
    }
    else if (counter == 1) {
      analogWrite(red, amount2);
      counter++;
    }
    else if (counter == 2) {
      analogWrite(red, amount3);
      counter++;
    }
    else {
      counter = 0;
      analogWrite(red, 0);
    }
  }
  delay(200);
}
