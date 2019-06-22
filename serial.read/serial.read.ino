int input=0;
int led=13;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
    if (Serial.available() > 0) {
      
    input= Serial.read();
    
      
        } 
    if(input==49){
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      }
    if(input==50){
      digitalWrite(led,HIGH);
      delay(50);
      digitalWrite(led,LOW);
      delay(50); 
      }    
}
