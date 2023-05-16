
#include "ColorNNv2.h"
#include <Wire.h>

#define TCS3200_ADDRESS 0x70

void setup() {
  Serial.begin(115200);
  Wire.begin();

  while (!ColorRegressionNN.begin()) {
    Serial.print("Error in NN initialization: ");
    Serial.println(ColorRegressionNN.getErrorMessage());
  }
}

void loop() {
  byte data[4]; // Array to store the received data bytes
  Wire.beginTransmission(TCS3200_ADDRESS);
  Wire.requestFrom(TCS3200_ADDRESS, 4);  
  int i = 0;
 while (Wire.available() && i < 4) {
  data[i] = Wire.read();
  i++;
}
  Wire.endTransmission();
  float x = data[0];
  float y = data[1];
  float z = data[2];
  float w = data[3];

/*
  float x = 74;  // Ulazni broj x
  float y = 33;    // Ulazni broj y
  float z = 4;  
  float w = 0.32;  // Ulazni broj z
  */
  float input[4] = { x, y, z, w };
  
  float y_pred = ColorRegressionNN.predict(input);
  
  Serial.print("\t predicted: ");
  Serial.println(y_pred);
  Serial.println("\t");
  
  delay(1000);
}
