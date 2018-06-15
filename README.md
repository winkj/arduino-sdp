# Arduino library for Sensirion SDP3x and SDP8xx series

This is an unofficial library for Sensirion SDP3x and SDP8xx sensors. Both 500Pa
and 125Pa sensor types are supported.

## Getting started

To get started, have a look at the `sdp_generic` example from the "Examples" menu.
Follow the steps below to initialize for your sensor:

### Initializing for SDP3x on I2C address 0x21

I2C address is the default for the SDP3x series. The `sdp_generic` sample
will do that by default, without requiring any changes.

### Initializing for SDP3x on an I2C address other than 0x21

To use an address other than 0x21, you can pass an argument when setting up
the sensor. In the example, comment out line 6, and uncomment line 10, like so:

```c++
// SDP3XSensor sdp;

// If your SDP3x is not using the default I2C address of 0x21, uncomment the
// line below:
SDP3XSensor sdp(SDP3X_I2C_ADDR_22);
```
Alternatively, you can use `SDP3X_I2C_ADDR_23` instead of `SDP3X_I2C_ADDR_22`

### Initializing for SDP8xx

To use it with an SDP8xx series sensor, comment out line 6, and uncomment
line 14, like so:

```c++
// SDP3XSensor sdp;

// If your SDP3x is not using the default I2C address of 0x21, uncomment the
// line below:
// SDP3XSensor sdp(SDP3X_I2C_ADDR_22);


// If you're using an SDP8xx, uncomment the line below instead:
SDP8XXSensor sdp;
```
