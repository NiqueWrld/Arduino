#include <WiFi.h> // Include the WiFi library

const char* ssid = "your_SSID"; // Replace with your network SSID
const char* password = "your_PASSWORD"; // Replace with your network password

void setup() {
  Serial.begin(115200); // Start the serial communication at 115200 baud rate

  // Attempt to connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password); // Connect to the Wi-Fi network

  while (WiFi.status() != WL_CONNECTED) { // Wait until the connection is established
    delay(500); // Wait for 500 milliseconds
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Connected to Wi-Fi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP()); // Print the local IP address assigned by the router
}

void loop() {
  // Your main code here
}
