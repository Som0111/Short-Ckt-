const int buttonPin = 3; //assign arduino pin to button
const int redLed = 8;  //assign arduino pin to red led
const int yellowLed = 10;  //assign arduino pin to yellow led
const int greenLed = 9;   //assign arduino pin to green led
int buttonState = 0;    //declare state of button

void setup() {
    pinMode(redLed, OUTPUT);  //set red led as output
    pinMode(yellowLed, OUTPUT);  //set yellow led as output
    pinMode(greenLed, OUTPUT);   //set green led as output
     
    Serial.begin(9600);  // Start serial communication      
    }

    void loop() {
   
    buttonState = digitalRead(buttonPin);  // Read button state

    if (buttonState == HIGH) { // Button is pressed
    digitalWrite(redLed, HIGH); // Turn on red led
    digitalWrite(yellowLed, LOW); // turn off yellow led
    digitalWrite(greenLed, LOW); // turn off yellow led
    delay(2000); // delay for readability
    digitalWrite(redLed, LOW); //turn off red led
    Serial.println("Button Pressed - RED LED ON"); //when button is pressed red led is output shown on serial monitor
    }  else {
    
    digitalWrite(greenLed, HIGH);
    delay(1000);
    digitalWrite(greenLed, LOW);
      if(!digitalRead(buttonPin)) // if button is released
    {
    digitalWrite(yellowLed, HIGH);
    delay(1000);
    digitalWrite(yellowLed, LOW);
      }

    digitalWrite(redLed, HIGH);
    delay(1000);
    digitalWrite(redLed, LOW);
    Serial.println("Button Released - Normal cycle continues"); //normal cycle resumes
  }

  delay(500);  // Small delay for readability
    
}
