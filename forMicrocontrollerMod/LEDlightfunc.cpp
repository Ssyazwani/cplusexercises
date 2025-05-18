
// Context: programming hardware with C++ to light up the LED when pin '12' is connected 
// HIGH means presence of voltage (1), LOW means no presence of voltage (0)

void setup (){
    pinMode(12,OUTPUT);
}

loop (){
    digitalWrite(12, HIGH);  
    delay(1000);              
    digitalWrite(12, LOW);   
    delay(1000);              
}