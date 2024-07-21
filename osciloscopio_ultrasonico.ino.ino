#define TRIGGER_PIN 2
#define ECHO_PIN 4

int stack[15];
int size;


long duration, distance;

void push();
void pop();
void display();

//Functions for Min,Max and average
void Max(int *Array);

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

void Max(int *Array){

  //Max value 
  int Max=(*Array); //primer elemento del array
  //Recorrer el array de los elementos obtenidos
  for(int i=0;i<=sizeof(Array);i++){

    if(*(Array + i) > Max){
      Max = *Array+i;
    }

  }

}


