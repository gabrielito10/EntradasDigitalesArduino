/*
Programa para: 
Encender/apagar 4 leds en los pines 2,3,4,5 con un pulsador en el pin 10
Encender/apagar 4 leds en los pines 6,7,8,9 con un pulsador en el pin 11
Material:
-Arduino uno
-8 Resistencias de 330Ω
-8 Leds
-2 Pulsadores
-2 Resistencias de 10KΩ 
-Protoboard

Autor: Juan Gabriel Ibañez Cedillo
*/
void setup()
{
    //Pines del 2 al 9 como salidas
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);

    //Pines 10 y 11 como entradas
    pinMode(10,INPUT);
    pinMode(11,INPUT);
}
void loop()
{
    //Verificamos si el pulsador del pin 10 pue presionado
    //si fue presionado encendemos los leds de los pines 2 al 5 
    if (digitalRead(10)==LOW)
    {
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
    }
    //sino fue presionado apagamos los leds de los pines 2 al 5
    else
    {
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
    }
    //Verificamos si el pulsador del pin 11 pue presionado
    //si fue presionado encendemos los leds de los pines 6 al 9
    if (digitalRead(11)==LOW)
    {
        digitalWrite(6,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
    }
    //sino fue presionado apagamos los leds de los pines 6 al 9
    else
    {
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
    }
}