const int Pin1 = A0;
const int Pin2 = A1;

void setup(){
    serial.begin(9600);
}
void loop(){
    int poten1 = analogRead(Pin1);
    int poten2 = analogRead(Pin2);
}