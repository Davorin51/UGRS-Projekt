#include "colorRegressionNN.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  while(!ColorRegressionNN.begin()){
    Serial.print("Error in NN init: ");
    Serial.println(ColorRegressionNN.getErrorMessage());
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  //for(int i = 0; i<4; i++){
    
  //}

  float input[4] = {79, 35, 3, 0.30};

  float y_pred = ColorRegressionNN.predict(input);

  Serial.print("\t predicted: ");
  Serial.println(y_pred);
  delay(1000);

}
