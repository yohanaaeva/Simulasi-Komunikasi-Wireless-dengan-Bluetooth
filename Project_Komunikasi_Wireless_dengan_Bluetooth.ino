int ml=A0;
int h=255;
int l=0;
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(ml, OUTPUT);
}

void loop() {
  Serial.println("silahkan ketik 'w' untuk memutar,'s' untuk berhenti ");
  while(Serial.available()==0){  }

  motion=Serial.readString();
  if(motion=="w"){
  analogWrite(ml,l);
  }

  if(motion=="s"){
  analogWrite(ml,h);
  }
}
