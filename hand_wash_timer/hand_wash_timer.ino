//Every soundtrack has to be in WAV format with;
//Mono output
//Frequency at 16000Hz
//Unsigned 8 bit

#include <SD.h>                      
#include <TMRpcm.h>          
#include <SPI.h>
#define SD_ChipSelectPin 10  
const int Trigger = 7;   
const int Echo = 8;   
TMRpcm audio;

void setup()
{
pinMode(Trigger, OUTPUT); 
pinMode(Echo, INPUT);  
digitalWrite(Trigger, LOW);
audio.speakerPin=9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {  
  return;
}else{
  Serial.println("SD OK"); 
}
audio.setVolume(5);
audio.quality(1);
}

void loop() {
  long t;
  long d;

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); 
  d = t/59;
  //Serial.println(d);

  if (d <30 && d>0 && audio.isPlaying() == 0 ){
         
    audio.play("inicio.wav");  //voice to start countdown at larger than 3 secs, needs a bigger delay.                 
    delay(3000);
    audio.play("fondo.wav");  //Background music while you are washing your hands
    delay(25000);    
    audio.stopPlayback();    
    audio.play("final.wav");  //Voice to remove the soap of your hands       
    delay(12000);             //Delay to avoid triggers before you leave

  }

}
