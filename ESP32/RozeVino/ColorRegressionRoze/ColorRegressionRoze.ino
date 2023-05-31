
#include "ColorRegressionNNRoze.h"
#include <Wire.h>

#define TCS3200_ADDRESS 0x70

void setup() {
  Serial.begin(115200);
  Wire.begin();

  while (!ColorRegressionNN_RGB_Roze.begin()) {
    Serial.print("Error in NN initialization: ");
    Serial.println(ColorRegressionNN_RGB_Roze.getErrorMessage());
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
float mean[3] = { 3091.75369458, 3551.8546798,  2939.51970443};
float std_dev[3] = { 656.00715891, 777.14169421, 585.69440775};
float mean_y = 10400.55418719;
float std_dev_y = 2239.78743401;

// Standardize the input data
float x = 2611;  // Input value for feature x
float y = 2902;  // Input value for feature y
float z = 2582;  // Input value for feature z


  // Use the scaler_X object to perform standardization
  float standardized_x = (x - mean[0]) / std_dev[0];
  float standardized_y = (y - mean[1]) / std_dev[1];
  float standardized_z = (z - mean[2]) / std_dev[2];

  float input[3] = { standardized_x, standardized_y, standardized_z };

float y_pred = ColorRegressionNN_RGB_Roze.predict(input);
float y_pred_orig = y_pred * std_dev_y + mean_y;

Serial.print("\t predicted: ");
Serial.println(y_pred_orig);

Serial.println("\t");

delay(1000);




}

