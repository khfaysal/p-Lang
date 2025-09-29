const int trigPin = 9;  // Trigger Pin of Ultrasonic Sensor
const int echoPin = 8;  // Echo Pin of Ultrasonic Sensor

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    long duration;
    float distance_cm, distance_in;

    // Send a 10µs pulse to the trigger pin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Read the echo pin (duration in microseconds)
    duration = pulseIn(echoPin, HIGH);

    // Convert time into distance
    distance_cm = (duration * 0.0343) / 2;  // Speed of sound = 343 m/s (34.3 cm/μs)
    distance_in = distance_cm * 0.3937;     // Convert cm to inches

    // Print the values to Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.print(" cm | ");
    Serial.print(distance_in);
    Serial.println(" inches");

    delay(200);
}
