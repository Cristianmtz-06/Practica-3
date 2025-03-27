//SUMA
int A = 0; 

int B = 0; 

void setup() {

  pinMode(11, INPUT);    //A 8

  pinMode(12, INPUT);    //B9

  pinMode(10, OUTPUT);  //Suma 12

  pinMode(13, OUTPUT);  //Acarreo

}

//SISTEMA Sumador y acarreo

void loop() {



  A = digitalRead(11);

  B = digitalRead(12);



  if (A^B)

    {digitalWrite(10, HIGH);delay(10);} 

  if (A&&B)

    {digitalWrite(13, HIGH);delay(10);}

 digitalWrite(10, LOW);

 digitalWrite(13, LOW);

}
