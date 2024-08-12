const int trigPin = 8; 
const int echoPin = 9; 

float duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {

// Clears the trigPin
digitalWrite(trigPin, LOW);
delay(2);

// Sets the trigPin on HIGH state
digitalWrite(trigPin, HIGH);
delay(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(100);
}
