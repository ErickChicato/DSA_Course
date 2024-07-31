#define TRIGGER_PIN 2
#define ECHO_PIN 4

int stack[15];
int size;


long duration, distance;

void push();
void pop();
void display();

//New Functions

void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  
  
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  duration = pulseIn(ECHO_PIN, HIGH);
  
  distance = (duration * 0.0343) / 2; // La velocidad del sonido es de aproximadamente 0.0343 cm/µs
  

  if (distance >= 5){
    push();
  }
  display();

  if(distance <= 5){
    pop();
  }
  display();


  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(1000);
}

void push(){
  if(distance==size-1){
    Serial.println("\n Stack is overflow");
  }
  else{
    stack[distance]; // To store the distance 
  }

}

void display(){
  int i;

  for(i=0;i<=distance;i++){
    Serial.println(" distance ");
    Serial.println(distance[i]);
  }


}

void pop(){

  int temp;
  temp = stack[distance];
  distance--;

}

void Max(int *Array, int size){

  int Max = Array[0];

  for(int i=1;i<size;i++){
    if(Array[i] > Max){
      Max = Array[i];
    }
  }

  Serial.print("El valor maximo es de ");
  Serial.println(Max);

}


void Average(int *Array, int size){

  int sum = 0 ;

  for(int i=0;i<size;i++){
    sum += Array[i];
  }
  //Calcular el promedio 
  float average = (float)sum / size;
  Serial.print("El promedio es: ");
  Serial.println(average);

}


