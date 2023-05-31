
#include "ColorRegressionNNBijelo.h"
#include <Wire.h>

#define TCS3200_ADDRESS 0x70

void setup() {
  Serial.begin(115200);
  Wire.begin();

  while (!ColorRegressionNN_RGB.begin()) {
    Serial.print("Error in NN initialization: ");
    Serial.println(ColorRegressionNN_RGB.getErrorMessage());
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

float mean[3] = {1277.29967427, 1598.31270358, 1444.15960912};
float std_dev[3] = { 914.6793255,  1111.89861684,  745.96838922};
float mean_y = 4736.73289902;
float std_dev_y = 3082.07271838;

// Standardize the input data
float x = 537;  // Input value for feature x
float y = 672;  // Input value for feature y
float z = 864;  // Input value for feature z


  // Use the scaler_X object to perform standardization
  float standardized_x = (x - mean[0]) / std_dev[0];
  float standardized_y = (y - mean[1]) / std_dev[1];
  float standardized_z = (z - mean[2]) / std_dev[2];

  float input[3] = { standardized_x, standardized_y, standardized_z };

float y_pred = ColorRegressionNN_RGB.predict(input);
float y_pred_orig = y_pred * std_dev_y + mean_y;

Serial.print("\t predicted: ");
Serial.println(y_pred_orig);

Serial.println("\t");

delay(1000);

}

