
int ledpin = 5;

void setup() {

  pinMode (ledpin, OUTPUT);
  
  }

void loop() {
  for(int i=0; i<=255; i++)
    { 
      analogWrite(ledpin, i);
      delay (30);
      
    }
  for(int j=255; j>=0; j--)
  {
    analogWrite(ledpin, j);
    delay (10);
  }
}
