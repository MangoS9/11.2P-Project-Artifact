#include<Wire.h>

int led = A5;

void recieveEvent(int byteCount){
    while(Wire.available()){
        char s=Wire.read();
        digitalWrite(led,s);
    }
}


void setup() {
    Wire.begin(0x10);
    Wire.onReceive(recieveEvent);
    
    pinMode(led,OUTPUT);
    digitalWrite(led,LOW);
}


void loop() {

}
