#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author AKSHAY KUMAR
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

#define FSR_PIN A0
 // Define FSR analog pin (Use A0)

 int reading = 0;
 // Create variable to store sensor reading

void setup() {

    Serial.begin(9600);
    // Initialize Serial communication (9600 baud rate)

    Serial.println("System Initialized: Force Measurement System");
    // Print system initialization message
}

void loop() {

    reading = analogRead(FSR_PIN);
    // Read analog value from FSR

        Serial.print("FSR Reading: ");
        Serial.println(reading);
    // Print raw ADC value
       if (reading > 500) { // Example threshold for pressure detection
        Serial.println("Pressure Detected!");
      // Apply simple threshold logic (e.g., detect pressure)
    // Print pressure detection message

    delay(500);
    // Add delay (500ms or 1 second)
}
