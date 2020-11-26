int num[2];
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
 
for(int i=0;i<2;i++){
  while(Serial.available() == i);
  num[i] = Serial.parseInt();
  }
  Serial.println(num[0]);
  Serial.println(num[1]);
  if( (num[0] > 9999 || num[0] < -9999) ||  (num[1] > 9999 || num[1] < -9999)){
  Serial.println("ERROR ENTER A FOUR DIGIT NUMBER");
  }
  else{
    Serial.println(num[0] + num[1]);
  }
  while(Serial.available() > 0){
    Serial.read();
  }
}
