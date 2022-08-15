const int mot_i = 2; // motor sürücü pinleri tanımlandı
const int mot_g = 4;


void setup(){
  pinMode(mot_i, OUTPUT); // motor sürücü pinleri çıkış olarak ayarlandı
  pinMode(mot_g, OUTPUT);
  
}

void loop(){
    digitalWrite(mot_i , HIGH);
    digitalWrite(mot_g ,  LOW);
    delay(150);

    digitalWrite(mot_i ,  LOW);
    digitalWrite(mot_g , HIGH);
    delay(150);
  
}
