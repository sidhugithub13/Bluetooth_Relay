//Relay switch with Arduino UNO 

int Relaypin= 3; // Define input pin for relay 
void setup() { 
pinMode(Relaypin, OUTPUT); // Define the Relaypin as output pin 
}  
void loop() { 
  digitalWrite(Relaypin, HIGH); // Sends high signal  
  delay(1000); // Waits for 1 second 
  digitalWrite(Relaypin, LOW); // Makes the signal low 
  delay(1000); // Waits for 1 second 
} 
