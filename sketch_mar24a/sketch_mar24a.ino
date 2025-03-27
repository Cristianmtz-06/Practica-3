//MULTIPLICACION
int A = 0; 

int B = 0; 

void setup() {

  pinMode(8, INPUT);    //A 2

  pinMode(9, INPUT);    //B3

  pinMode(10, OUTPUT);  //acarreo

}

//SISTEMA Sumador y acarreo

void loop() {



  A = digitalRead(8);

  B = digitalRead(9);


  if (A&&B)

    {digitalWrite(10, HIGH);}

 digitalWrite(10, LOW);

}
