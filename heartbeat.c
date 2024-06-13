/*
    Project name : Heartbeat module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-heartbeat-module
*/

const int heartbeatPin = 2; // Digital pin connected to the heartbeat sensor
unsigned long previousMillis = 0;  // Store the previous time
const long interval = 1000; // Delay interval

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Set heartbeat pin as input
  pinMode(heartbeatPin, INPUT);
}

void loop() {
  // Read the state of the heartbeat sensor
  int heartbeatState = digitalRead(heartbeatPin);
  
  // Check if heartbeat is detected
  if (heartbeatState == HIGH) {
    Serial.println("Heartbeat detected!");
  }

  // Add a small delay before the next reading
  delay(100);
}
