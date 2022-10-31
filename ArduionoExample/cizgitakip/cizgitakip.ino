int r=4;
int m=7;
int l=8;



void setup(){
  Serial.begin(9600);
  
  pinMode(r,INPUT);
  pinMode(m,INPUT);
  pinMode(l,INPUT);
  
  }

void loop (){
  
  int sdr = digitalRead(r);
  int sdm = digitalRead(m);
  int sml = digitalRead(l);
  
  Serial.print(sdr);
  Serial.print(sdm);
  Serial.println(sml);
  
  
  delay(100);
  }
