
/*
  Simulated Heartbeat Monitor using Arduino
  Components: Potentiometer (to simulate pulse), LEDs
*/

const int potPin = A0;      // Potentiometer input
const int ledPin = 9;       // LED to simulate heartbeat blink
const int alertLed = 7;


int bpm = 0;                // Beats per minute
int threshold = 120;        // BPM threshold for alert
unsigned long lastBeatTime = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
 pinMode(alertLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);  // Read potentiometer
  bpm = map(potValue, 0, 1023, 60, 180); // Simulate BPM between 60-180

  Serial.print("Simulated BPM: ");
  Serial.println(bpm);

  blinkHeartbeat(bpm);
  checkAlert(bpm);

  delay(500);  // Small delay for readability and stability
}

void blinkHeartbeat(int bpm) {
  // Calculate delay between beats in ms
  int beatInterval = 60000 / bpm;

  digitalWrite(ledPin, HIGH);
  delay(100); // LED on for 100ms
  digitalWrite(ledPin, LOW);
  delay(beatInterval - 100);
}

void checkAlert(int bpm) {
  if (bpm > threshold) {
    digitalWrite(alertLed, HIGH);
  } else {
    digitalWrite(alertLed, LOW);
  }
}
