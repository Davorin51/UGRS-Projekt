
#include "ColorRegressionNNCrno.h"

#include <Wire.h>


#define TCS3200_ADDRESS 0x70

void setup() {
  Serial.begin(115200);
  Wire.begin();

  
  while (!ColorRegressionNN_RGB_Crno.begin()) {
    Serial.print("Error in NN initialization: ");
    Serial.println(ColorRegressionNN_RGB_Crno.getErrorMessage());
  }
}

void loop() {
  byte data[3]; // Array to store the received data bytes
  /*
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

*/
float mean[3] = { 345.10921502, 251.35836177, 209.48805461 };
float std_dev[3] = { 30.63149382, 2.68567939, 3.79653524 };
float mean_y = 843.7337884;
float std_dev_y = 33.60842753;


float x = 327;  // Input value for feature x
  float y = 249;  // Input value for feature y
  float z = 207;  // Input value for feature z

  // Use the scaler_X object to perform standardization
  float standardized_x = (x - mean[0]) / std_dev[0];
  float standardized_y = (y - mean[1]) / std_dev[1];
  float standardized_z = (z - mean[2]) / std_dev[2];

  float input[3] = { standardized_x, standardized_y, standardized_z };

float y_pred = ColorRegressionNN_RGB_Crno.predict(input);
float y_pred_orig = y_pred * std_dev_y + mean_y;

Serial.print("\t predicted: ");
Serial.println(y_pred_orig);

Serial.println("\t");

delay(1000);

}

