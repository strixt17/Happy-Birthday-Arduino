// C++ code
//

int redPin = 2;
int yellowPin = 3;
int greenPin = 4;
int bluePin = 5;

int buzzerPin = 6;
int button = 3;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  digitalWrite(redPin, HIGH);
  delay(100);
  digitalWrite(redPin, LOW);
  delay(100);
  digitalWrite(yellowPin, HIGH);
  delay(100);
  digitalWrite(yellowPin, LOW);
  delay(100);
  
  digitalWrite(greenPin, HIGH);
  delay(100);
  digitalWrite(greenPin, LOW);
  delay(100);
  digitalWrite(bluePin, HIGH);
  delay(100);
  digitalWrite(bluePin, LOW);
  delay(100);
  
  if (digitalRead(button) == LOW) {
   	delay(100);
    tone(buzzerPin, 131);
    delay(250);
    noTone(buzzerPin);
    delay(125);
    tone(buzzerPin, 131);
    delay(250);
    tone(buzzerPin, 147);
    delay(500);
    tone(buzzerPin, 131);
    delay(500);
    tone(buzzerPin, 175);
    delay(500);
    tone(buzzerPin, 165);
    delay(1000);
    tone(buzzerPin, 131);
    delay(250);
    noTone(buzzerPin);
    delay(125);
    tone(buzzerPin, 131);
    delay(250);
    tone(buzzerPin, 147);
    delay(500);
    tone(buzzerPin, 131);
    delay(500);
    tone(buzzerPin, 196);
    delay(500);
    tone(buzzerPin, 175);
    delay(1000);
    tone(buzzerPin, 131);
    delay(250);
    noTone(buzzerPin);
    delay(125);
    tone(buzzerPin, 131);
    delay(250);
    tone(buzzerPin, 262);
    delay(500);
    tone(buzzerPin, 220);
    delay(500);
    tone(buzzerPin, 175);
    delay(500);
    tone(buzzerPin, 165);
    delay(500);
    tone(buzzerPin, 147);
    delay(500);
    tone(buzzerPin, 233);
    delay(250);
    noTone(buzzerPin);
    delay(125);
    tone(buzzerPin, 233);
    delay(250);
    tone(buzzerPin, 220);
    delay(500);
    tone(buzzerPin, 175);
    delay(500);
    tone(buzzerPin, 196);
    delay(500);
    tone(buzzerPin, 175);
    delay(1000);
    noTone(buzzerPin);
    delay(100);
	}
}