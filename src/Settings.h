const bool apMode = false;
const bool default_color_on_startup = true;

// AP mode password
const char WiFiAPPSK[] = "";

// Wi-Fi network to connect to (if not in AP mode)
const char* ssid = "";
const char* password = "";

#define DATA_PIN      4     // for Huzzah: Pins w/o special function:  #4,#5, #12, #13, #14; // #16 does not work :(
#define LED_TYPE      WS2812
#define COLOR_ORDER   GRB
#define NUM_LEDS      103

#define MILLI_AMPS         20000     // IMPORTANT: set here the maxmilli-Amps of your power supply 5V 2A = 2000
#define FRAMES_PER_SECOND  20 // here you can control the speed. With the Access Point / Web Server the animations run a bit slower.

// MQTT Broker settings
//const char* mqtt_server = "test.mosquitto.org";
//const int mqtt_port = 1883;
//const char* mqtt_user = "";
//const char* mqtt_password = "";

//const char* mqtt_server = "m11.cloudmqtt.com";
//const int mqtt_port = 17808;
//const char* mqtt_user = "iyychjbq";
//const char* mqtt_password = "9ta37xoQXSuM";

const char* mqtt_server = "IP";
const int mqtt_port = 1883;
const char* mqtt_user = "mosquitto";
const char* mqtt_password = "mosquitto";

const char* mqtt_topic = "topic";
const char* mqtt_clientid = "led_driver_03";

// openssl x509 -fingerprint -in  mqttserver.crt - Only if you must verify your certs for connection issues with MQTT
const char* fingerprint = "AF FD A4 F6 3B 74 FE EE A5 71 3A 08 7F 30 F8 CF DE 8D E6 7F";
