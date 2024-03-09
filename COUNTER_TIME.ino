// Pin untuk tombol
const int tombolPin1 = 6;
const int tombolPin2 = 7;
const int tombolPin3 = 8;
const int tombolPin4 = 9;

// variabel untuk menyimpan status tombol
int tombolState1 = 0;
int tombolState2 = 0; 
int tombolState3 = 0;
int tombolState4 = 0;

// led warna
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;

// variabel untuk menyimpan waktu mulai penekanan tombol
unsigned long waktuMulai1 = 0; 
unsigned long waktuMulai2 = 0; 
unsigned long waktuMulai3 = 0; 
unsigned long waktuMulai4 = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(tombolPin1, INPUT_PULLUP);
  pinMode(tombolPin2, INPUT_PULLUP);
  pinMode(tombolPin3, INPUT_PULLUP);
  pinMode(tombolPin4, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Status BTN 1
  tombolState1 = digitalRead(tombolPin1);
  if (tombolState1 == HIGH) {
    waktuMulai1 = millis();
    digitalWrite(led1, LOW);
  } else {
    unsigned long waktuAkhir1 = millis(); // simpan waktu saat ini
    unsigned long lamaTombol1 = waktuAkhir1 - waktuMulai1; // hitung lama tombol ditekan
    Serial.print("tombol1 (ms): ");
    Serial.println(lamaTombol1); // tampilkan lama tombol ditekan dalam milidetik
    digitalWrite(led1, HIGH);
    delay(1000);
  }

    // Status BTN 2
  tombolState2 = digitalRead(tombolPin2);
  if (tombolState2 == HIGH) {
    waktuMulai2 = millis();
    digitalWrite(led2, LOW);
  } else {
    unsigned long waktuAkhir2 = millis(); // simpan waktu saat ini
    unsigned long lamaTombol2 = waktuAkhir2 - waktuMulai2; // hitung lama tombol ditekan
    Serial.print("tombol2 (ms): ");
    Serial.println(lamaTombol2); // tampilkan lama tombol ditekan dalam milidetik
    digitalWrite(led2, HIGH);
    delay(1000);
  }

    // Status BTN 3
  tombolState3 = digitalRead(tombolPin3);
  if (tombolState3 == HIGH) {
    waktuMulai3 = millis();
    digitalWrite(led3, LOW);
  } else {
    unsigned long waktuAkhir3 = millis(); // simpan waktu saat ini
    unsigned long lamaTombol3 = waktuAkhir3 - waktuMulai3; // hitung lama tombol ditekan
    Serial.print("tombol3 (ms): ");
    Serial.println(lamaTombol3); // tampilkan lama tombol ditekan dalam milidetik
    digitalWrite(led3, HIGH);
    delay(1000);
  }

    // Status BTN 4
  tombolState4 = digitalRead(tombolPin4);
  if (tombolState4 == HIGH) {
    waktuMulai4 = millis();
    digitalWrite(led4, LOW);
  } else {
    unsigned long waktuAkhir4 = millis(); // simpan waktu saat ini
    unsigned long lamaTombol4 = waktuAkhir4 - waktuMulai4; // hitung lama tombol ditekan
    Serial.print("tombol4 (ms): ");
    Serial.println(lamaTombol4); // tampilkan lama tombol ditekan dalam milidetik
    digitalWrite(led4, HIGH);
    delay(1000);
  }
}



