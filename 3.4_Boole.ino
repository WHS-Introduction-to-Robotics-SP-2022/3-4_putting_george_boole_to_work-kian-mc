int x = 1;
int y = 0;
void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode(6,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    
    
}

void loop() {
  for (y = 0; y < 256; y++){
        analogWrite(6, y);
        delay(1);
        Serial.println(y);
    }

 for (y = 255; y >= 0; y = y - 1){
        analogWrite(6, y);
        delay(1);
        Serial.println(y);
    }

while (x <= 3) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite((x + 7), HIGH);
        delay(2000);
        x = x + 1;
    }
}
