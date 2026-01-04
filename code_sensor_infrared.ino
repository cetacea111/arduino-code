const int pinsensor = 8; //pada pin keberapa output sensor dihubungkan

void setup()
{
  Serial.begin(9600);
  pinMode(pinsensor, INPUT); //mengatur pin sebagai input sensor
}

void loop()
{
  int hasil = digitalRead(pinsensor); // membaca logika digital dari pada pin
  if(hasil == LOW)
  {
    Serial.println("Ada Halangan pada jarak <= 10cm");// menampilkan output jika low
  }
  if(hasil == HIGH)
  {
    Serial.println("Aman, Tidak Ada Halangan pada jarak >= 10cm");//menampilkan output jika high
  }
  delay(500);//delay pada setiap loop
}