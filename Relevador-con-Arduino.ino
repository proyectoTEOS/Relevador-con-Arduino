/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://goo.gl/jtiYJy
*/

const int relayPinT = 2;
String resultSerialT;
int relayStateT = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(relayPinT, OUTPUT);
  digitalWrite(relayPinT, relayStateT);
}

void loop() {
  if (relayStateT == LOW)
    relayStateT = HIGH;
  else
    relayStateT = LOW;
  digitalWrite(relayPinT, relayStateT);
  resultSerialT = "El estado del relevador es: " + String(relayStateT);
  Serial.println(resultSerialT);
  delay(500);
}
