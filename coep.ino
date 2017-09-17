int x;
int count ,c=0 ;

void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x=digitalRead(4);
//Serial.println(x);
//delay(2000);

if(x==1)
{
  count++;
  
}
  if(count==1)
   {
    c++;
    count=0;
   }
 Serial.println(c);
    //Serial.write(c);
    delay(3000);
}
