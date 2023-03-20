#define SDA 18
char input_word[15]="";
int i = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(SDA, INPUT);
  Serial.begin(9600);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  //check_state_of_pin = digitalRead(SDA);
  if(digitalRead(SDA) == HIGH){
    delay(2);
    if(digitalRead(SDA)== LOW) 
    {
      input_word[i]='.';
      i++;
    }
    delay(2);
    if(digitalRead(SDA)==LOW)
    {
      input_word[i]='-';
      i++;
    }
    
    delay(2);
    if(digitalRead(SDA)==LOW) ;//dobio je space
    
    else ;//greska
    
  }

  

}
