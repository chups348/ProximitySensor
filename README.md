# ProximitySensor
Arduino Proximity Sensor

# Description
This Arduino project uses an ultrasonic sensor to measure the distance to an object and indicates the proximity with a series of LEDs and a buzzer. As the object gets closer, more LEDs light up, and the buzzer emits a sound pattern when the object is very close.

# Components
- Arduino board
- 5 LEDs
- Passive Buzzer
- Jumper wires
- Breadboard

# Pin Configuration
- Ultrasonic Sensor:
  - Echo: Pin 12
  - Trig: Pin 11
- LEDs:
  - LED1: Pin 2
  - LED2: Pin 3
  - LED3: Pin 4
  - LED4: Pin 5
  - LED5: Pin 6
 
- Buzzer: Pin 7

# How It Works
1. The ultrasonic sensor emits a sound wave and measures the time it takes for the echo to return.
2. The distance of the object is calculated based on the duration of the echo. Given by the equation
   Distance = (duration / 2) / 28.5;
   - duration: This is the time in microseconds that it takes for the ultrasonic pulse (at about 40, 000Hz) to travel to the object and back to the sensor.
   - duration / 2: Divide by two due to the pulse travelling to the object and back, calculating only the one way
   - / 28.5: This division converts the time in microseconds to distance in centimeters. The speed of sound is approximately 343 meteres per second or 0.0343 cm/microsecond 
3. LEDs light up progressively as the object gets closer:
    LED1 lights up if the object is within 30 cm.
    LED2 lights up if the object is within 20 cm.
    LED3 lights up if the object is within 15 cm.
    LED4 lights up if the object is within 10 cm.
    LED5 lights up if the object is within 5 cm.
4. When the object is within 5 cm, the buzzer emits a two-part sound pattern.
5. Open the Serial Monitor to view the distance log readings
   
