# Automatic-temporizer-for-hand-washing-against-the-COVID
Automatic temporizer for hand washing against the SARS-COV-2

![alt text](https://github.com/vcadillog/Automatic-temporizer-for-hand-washing-against-the-COVID/blob/master/images/external_speaker.PNG)

## Requeirements:

## Electronics:

- Arduino Nano
- Arduino SD card reader module
- MicroSD
- Sound Amplifier and speaker
- Ultrasonic sensor (HC-SR04)
- Wires
- Female audio connector
- 5V power supply

## Arduino library requeired:
- TMRpcm  (https://github.com/TMRh20/TMRpcm)

## Sound requeirements:
- Every soundtrack has to be in WAV format with:
- Mono output
- Frequency at 16000Hz
- Unsigned 8 bit

## Installing:

Clone or download the repository, then write the .ino program inside hand_wash_timer folder to your arduino.
Modify the delay if requeired, bounded to the soundtrack lenght.
Create or download the default audio from the repository to your microSD (default audio is in spanish).

There has to be 3 audio files .WAV:

- [1] "inicio.wav" : Introduction or welcome track (3 seconds at most default).
- [2] "fondo.wav"  : Background track while you hand your hands (25 seconds at most default).
- [3] "final.wav"  : Track to announce the end of your hand washing to clean the soap (12 seconds at most default).
  The final audio has 12 seconds delay to avoid any undesired trigger from the ultrasonic sensor.

### Wiring

Inside wiring_circuit folder is a simple schematic in Proteus.

![alt text](https://github.com/vcadillog/Automatic-temporizer-for-hand-washing-against-the-COVID/blob/master/images/wiring.PNG)

## Results:

![alt text](https://github.com/vcadillog/Automatic-temporizer-for-hand-washing-against-the-COVID/blob/master/images/hand_washing.PNG)

Please take care of your health and from the people around you, if you use this device, please quote us.
Together we can fight the COVID.

### This code was inspired from:

* [1] Arduino SD reader.

  https://www.instructables.com/id/Audio-Player-Using-Arduino-With-Micro-SD-Card/

* [2] Proteus libraries

  https://www.electronicslovers.com/
 
* [3] Ultrasonic sensor

  https://naylampmechatronics.com/blog/10_Tutorial-de-Arduino-y-sensor-ultras%C3%B3nico-HC-S.html
  
