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
#define buzzer D4
#define relay 16          // (d0)

int state1 = 0;

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

}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(pinSensor1, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode (relay , OUTPUT);
  timer.setInterval(200L, notifySensor);
  timer.setInterval(3000L, checkBlynk);

}

void loop() {
  Blynk.run();
  timer.run();
}
