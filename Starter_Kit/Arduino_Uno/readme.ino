/*macro definitions of Rotary angle sensor and LED pin*/
 
#define ROTARY_ANGLE_SENSOR A0
#define LED1 3  //the Grove - LED is connected to PWM pin D3 of Arduino
#define ADC_REF 5 //reference voltage of ADC is 5v.If the Vcc switch on the seeeduino
                    //board switches to 3V3, the ADC_REF should be 3.3
#define GROVE_VCC 5 //VCC of the grove interface is normally 5v
#define FULL_ANGLE 300 //full value of the rotary angle is 300 degrees
#define LED2 2
const int LED_3 = 6;
#define BUTTON 7
#include "DHT"

int buttonState = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(ROTARY_ANGLE_SENSOR, INPUT);
    pinMode(LED1,OUTPUT);  
    pinMode(LED2, OUTPUT);
    pinMode(LED_3, OUTPUT);
    pinMode(BUTTON, INPUT);
    DHT.begin();
    Serial.begin(9600);
}
 
void loop()
{   
    float voltage;
    int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
    voltage = (float)sensor_value*ADC_REF/1023;
    float degrees = (voltage*FULL_ANGLE)/GROVE_VCC;
    Serial.println("The angle between the mark and the starting position:");
    Serial.println(degrees);
 
    int brightness;
    brightness = map(degrees, 0, FULL_ANGLE, 0, 255);
    analogWrite(LED1,brightness);
    delay(500);

    digitalWrite(LED2, LOW);
    delay(500);
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
    delay(500);

    int buttonState = digitalRead(BUTTON);

    if (buttonState == HIGH) {
      digitalWrite(LED_3, HIGH);

    }
    else {
      digitalWrite(LED_3, LOW);
    }

    float h = DHT.readHumidity();
    float t = DHT.readTemperature();

    Serial.println("humiity: ");
    Serial.print("Temperature: ");
    Serial.println(t);
}
