#include <Wire.h>

#include <sdpsensor.h>

// use this for an SDP3x on the default I2C address of 0x21:
SDP3XSensor sdp;

// If your SDP3x is not using the default I2C address of 0x21, uncomment the
// line below:
// SDP3XSensor sdp(SDP3X_I2C_ADDR_22);


// If you're using an SDP8xx, uncomment the line below instead:
// SDP8XXSensor sdp;


void setup() {
  Wire.begin();
  Serial.begin(9600);
  delay(1000); // let serial console settle

  int ret = sdp.init();
  if (!ret) {
      Serial.print("init(): success\n");
  } else {
      Serial.print("init(): failed, ret = ");
      Serial.println(ret);
      while (true) {
        delay(1000);
      }
  }
}

void loop() {
  int ret = sdp.readSample();
  if (!ret) {
      Serial.print("Differential pressure: ");
      Serial.print(sdp.getDifferentialPressure());
      Serial.print("Pa | ");

      Serial.print("Temp: ");
      Serial.print(sdp.getTemperature());
      Serial.print("C\n");
  } else {
      Serial.print("Error in readSample(), ret = ");
      Serial.println(ret);
  }

  delay(500);
}
