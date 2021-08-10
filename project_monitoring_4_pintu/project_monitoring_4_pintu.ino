/*
  sensor door pada d1
  pada blynk pilih label value dan set pada v10
*/

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char ssid[] = "KELGHADI"; // isi nama network
char pass[] = "Vitri1972" ; // isi pass wifi, kalau open network isi ""
char auth[] = "7qgGh0Ckqk7BRZfWJXvhUJeYK0WXQ6AL";

#define pinSensor1 D1
#define pinSensor2 D2
#define pinSensor3 D5
#define pinSensor4 D6

#define buzzer D4
#define relay 16          // (d0)

int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;

int MODE = 0;
BlynkTimer timer;

void checkBlynk() { // memanggil setiap 3 seconds by SimpleTimer

  bool isconnected = Blynk.connected();
  if (isconnected == false) {
    MODE = 1;

  }
  if (isconnected == true) {
    MODE = 0;

  }
}

void notifySensor() {


  int bacaSensor1 = digitalRead(pinSensor1);
  int bacaSensor2 = digitalRead(pinSensor2);
  int bacaSensor3 = digitalRead(pinSensor3);
  int bacaSensor4 = digitalRead(pinSensor4);

  // SENSOR 1
  if (bacaSensor1 == 1 && state1 == 0 ) {
    Serial.println("SENSOR 1 buka!");
    Blynk.notify("Notif : Pintu terbuka !");
    Blynk.virtualWrite(V1, "OPEN");
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);

    state1 = 1;
  }
  else if (bacaSensor1 == 0)
  {
    Serial.println("SENSOR 1 tertutup.");
    Blynk.virtualWrite(V1, "CLOSE");
    digitalWrite (buzzer, LOW);
    state1 = 0;
  }

  // SENSOR 2

  if (bacaSensor2 == 1 && state2 == 0 ) {
    Serial.println("SENSOR 2 buka!");
    Blynk.notify("Notif : jendela kecil terbuka !");
    Blynk.virtualWrite(V2, "OPEN");
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
state2 = 1;
  }
  else if (bacaSensor2 == 0)
  {
    Serial.println("SENSOR 2 tertutup.");
    Blynk.virtualWrite(V2, "CLOSE");
    digitalWrite (buzzer, LOW);
    state2 = 0;
  }

  // SENSOR 3

  if (bacaSensor3 == 1 && state3 == 0 ) {
    Serial.println("SENSOR 3 buka!");
    Blynk.notify("Notif : jendela 1 terbuka !");
    Blynk.virtualWrite(V3, "OPEN");
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);

    state3 = 1;
  }
  else if (bacaSensor3 == 0)
  {
    Serial.println("SENSOR 3 tertutup.");
    Blynk.virtualWrite(V3, "CLOSE");
    digitalWrite (buzzer, LOW);
    state3 = 0;
  }

  // SENSOR 4

  if (bacaSensor4 == 1 && state4 == 0 ) {
    Serial.println("SENSOR 4 buka!");
    Blynk.notify("Notif : jendela 2 terbuka !");
    Blynk.virtualWrite(V4, "OPEN");
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);
    digitalWrite (buzzer, HIGH);  delay (250);    digitalWrite (buzzer, LOW); delay (250);

    state4 = 1;
  }
  else if (bacaSensor4 == 0)
  {
    Serial.println("SENSOR 4 tertutup.");
    Blynk.virtualWrite(V4, "CLOSE");
    digitalWrite (buzzer, LOW);
    state4 = 0;
  }


}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(pinSensor1, INPUT_PULLUP);
  pinMode(pinSensor2, INPUT_PULLUP);
  pinMode(pinSensor3, INPUT_PULLUP);
  pinMode(pinSensor4, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode (relay , OUTPUT);
  timer.setInterval(200L, notifySensor);
  timer.setInterval(3000L, checkBlynk);

}

void loop() {
  Blynk.run();
  timer.run();
}
