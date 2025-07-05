int buzzerPin = 2;
const int pA4 = 440;
const int pC5 = pA4 * pow(2, 3.0 / 12.0);
const int pB4 = pA4 * pow(2, 2.0 / 12.0);
const int pCs5 = pA4 * pow(2, 4.0 / 12.0);  // C#5
const int pD5 = pA4 * pow(2, 5.0 / 12.0);
const int pDs5 = pA4 * pow(2, 6.0 / 12.0);  // D#5
const int pE5 = pA4 * pow(2, 7.0 / 12.0);
const int pF5 = pA4 * pow(2, 8.0 / 12.0);
const int pFs5 = pA4 * pow(2, 9.0 / 12.0);  // F#5
const int pG5 = pA4 * pow(2, 10.0 / 12.0);
const int pG4 = pA4 * pow(2, -2.0 / 12.0);

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  tone(buzzerPin, 1000,2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzerPin, pA4);
  delay(500);
  tone(buzzerPin, pC5);
  delay(500);
  tone(buzzerPin, pB4);
  delay(500);
  tone(buzzerPin, pCs5);
  delay(500);
  tone(buzzerPin, 659);
  delay(500);
  tone(buzzerPin, 698);
  delay(500);
  tone(buzzerPin, 784);
  delay(500);

  noTone(buzzerPin);
  delay(500);
}
