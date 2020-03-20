#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Configure com suas credenciais
// Credencial está em configuração do projeto, contas e serviços.
#define FIREBASE_HOST "poolgarden-d505e.firebaseio.com"
#define FIREBASE_AUTH "jEfuxfXWVUmld4IeQGs8VrVkGkPTMwXwKfHsqK6X"
//#define WIFI_SSID "Repetidor32"
//#define WIFI_PASSWORD "Andardecima32"
#define WIFI_SSID "Marcolino"
#define WIFI_PASSWORD "malulinda018"

#define Pin 0

void setup() {
  //Define GPIO2 como saída
  pinMode (Pin, INPUT);
  //Inicia o monitor serial
  Serial.begin(115200);

  //Rotina pra conectar ao wifi.
  WiFi.hostname("ESP-host");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("conectado: ");
  Serial.println(WiFi.localIP());

  //Iniciar Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  static unsigned int count = 0;
  //Receber a variavel led do firebase
//  led = Firebase.getInt("Piscina/Temp_In");
  Serial.print("GPIO ");
  Serial.print(Pin);
  Serial.print(": ");
  
  if(Firebase.getBool("Piscina/Bomba_Status") == true) 
    Serial.println("Bomba ligada!");
  else
    Serial.println("Bomba desligada!");
  delay(5000);
}

/*

  chave = jEfuxfXWVUmld4IeQGs8VrVkGkPTMwXwKfHsqK6X

  AT+CWJAP="SSID","PASSWORD"
  AT+CIPSTART="TCP","poolgarden-d505e.firebaseio.com",8080

  poolgarden-d505e.firebaseio.com/Temp_In.json

  curl 'https://[PROJECT_ID].firebaseio/users/jack/name.json?access_token=CREDENTIAL'


  65 bytes
  {
  "Bomba_Status" : false,
  "Temp_In" : 25,
  "Temp_Out" : 25
  }


*/
