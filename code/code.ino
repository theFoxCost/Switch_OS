#include <WiFi.h>
#include <WebServer.h>

// connect esp32 to the wifi (Localhost)
const char* ssid = "Name_of_WIFI"
const char* password = "Wifi Password "

WiFiServer(80); // you can change the port number



void setup()
{
    pinMode(0, OUTPUT)
    pinMode(1, OUTPUT)
    pinMode(2, OUTPUT)
    pinMode(3, OUTPUT)
    pinMode(18, OUTPUT)
    pinMode(19, OUTPUT)
    pinMode(11, OUTPUT)
    pinMode(5, OUTPUT)
    pinMode(4, INPUT_PULLUP)
    pinMode(8, INPUT)
    delay(500)
    serial.printl('pins are defined succesfully...')
    delay(500)
    WiFi.begin(ssid, password)
    serial.printl("Connecting to wifi ...")
        if (wifi.status() == WL_CONNECTED ){
            serial.printl('Connected succesfully')
        }
    delay(1000)
    server.begin(); // strarting the web server
    delay(1000)
}

void void loop()
{
    // config the power led
    digitalwrite(3, HIGHT)
    digitalwrite(2, HIGHT)
    digitalwrite(18, LOW) //this should be always LOW 0v

}
void hadleroot(){
  server.send(200, "text/html", "<h1>ESP32 Custom Web Control</h1>");
}
void switchtoFirst(){
    digitalwrite(19, LOW)
    serial.println("Succeful Switch to SSD 1")
    server.sed (200, "text/html", "<h1>ESP32 Succefully switch to ssd1</h1>")
}
void switchtoSecond(){
    digitalwrite(19, HIGH)
     serial.println("Succeful Switch to SSD 2")
    server.sed (200, "text/html", "<h1>ESP32 Succefully switch to ssd2</h1>")
}