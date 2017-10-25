///////////////////////////////////////////////    MMMMMMMMMMMMMMMMMMMMMMMMmmmNmmyyso+:--`               .:oyhmmmMMMMMMMMMMMMMMMMMMMMMMMMMM
// Hallowuino v0.23                          //    MMMMMMMMMMMMMMMMMMNddmdhso/:``                             -/shdNNMMMMMMMMMMMMMMMMMMMMMM
// The the Hallowuino is an arduino based    //    MMMMMMMMMMMMMNNmdhy+:.`                                       `-+ydmNMMMMMMMMMMMMMMMMMMM
// Halloween Prop controller. This controller//    MMMMMMMMMMNddy+-``                               `.-:////::..`   `./ydmNMMMMMMMMMMMMMMMM
// utilizes the "test button" interface found//    MMMMMMMNmdh+.                            `-:+ooymdhNmdddmNmdddhys/:.`.+hmmMMMMMMMMMMMMMM
// on most electronic halloween props        //    MMMMNNmds:`                         -:oshdmdmNNNMMNMMMMMMMMNMMMmNdddhy+:/smmNMMMMMMMMMMM
// although it can control anything with a   //    MMmmmh+.                      +.:+shdNmmNMMMMMMMMNmNMMMMMMMMMMMMMMMMNmdmdyyddhMMMMMMMMMM
// button or switch. Additionally the device //    Nmmy:`        ``            `-mdmmmNMMMMMMMMMNmmoo/:sydNNMMMMMMMMMMMMMMMNNdmmhdNMMMMMMMM
// has inputs for Motion Sensors, footpads,  //    ms-        `..`          ./shdmNNMMMMMMMMNNmhy/-`    `.:sydmNMMMMMMMMMMMMMMMMNdhNMMMMMMM
// or other trigger input, including online  //    .        .:-`   .:`   .+ydmmNNMMMMMMMMMNNhs:.            `-+hdNNMMMMMMMMMMMMMMMMNMMMMMMM
// interfaces like IFTTT and IoT protocols   //           ./:`      oh+/ydmmNMMMMMMMMMMNdNh+.     --:-.        `-+ydNNMMMMMMMMMMMMMMMMMMMMM
// such as MQTT.                             //         .//`       `/mhmmNMMMMMMMMMMMMmdy:`      `:smmdyo-`       `:odmNMMMMMMMMMMMMMMMMMMM
///////////////////////////////////////////////        :+.       .ohdmNMMMMMMMMMMMMNmdy:`     `-ohmNNNNNNmho-`       .+ydmMMMMMMMMMMMMMMMMM
// User Config Section                       //      `o:       -shhNMMMMMMMMMMMMMMNmh:`     .+yhhs++////+shdmh+.       `:sdNMMMMMMMMMMMMMMM
// You should not have to change any of these//      sy`     -sddmMMMMMMMMMMMMMMMNdo`     -sh+.`           `-/shs-`       -smNMMMMMMMMMMMMM
// Values, unless your setup is different    //      .dh-  .sdhNMMMMMMMMMMMMMMMNmh:     -yh/`                  `:yy:`       -smNMMMMMMMMMMM
///////////////////////////////////////////////       .dm/ommmMMMMMMMMMMMMMMMMmdy.    -yh/`                       -yy:        -ydNMMMMMMMMM
// Declare which pins props are connected    //        .dmdmMMMMMMMMMMMMMMMMMmdy`   `od+`                           :hy-        :hdNMMMMMMM
const int Prop1Pin = 8;                      //       `omdNMMMMMMMMMMMMMMMMMNmy`   .hh.                               /do`       `+hmMMMMMM
const int Prop2Pin = 9;                      //      .hdhNMMMMMMMMMMMMMMMMMmmh`   -do`                                 `sh-        .ydMMMMM
const int Prop3Pin = 10;                     //    o/ys`.dmMMMMMMMMMMMMMMMMhd.   -m+                                     :h+         ommMMM
const int Prop4Pin = 11;                     //    mhyy: `ohMMMMMMMMMMMMMMym:   `dN-                                      .N/         /mNMM
                                             //    MMMMmy. odNMMMMMMMMMMMmms    sNNy                                       Nd`         oddM
// Declare Trigger Pins                      //    MMMMMmm/ -ydMMMMMMMMMNdm`  ` mNNN-   .                                 :NN+         `ddM
const int MotionSensorPin = 3;               //    MMMMMMMdy``ohNMMMMMMMNm/   ++NNNNd`   +`                              `yNNs          /mm
const int buttonPin = 2;                     //    MMMMMMMMNy- /mdMMMMMMhm.   +dNNNNNh`  -m/             :+yhhdhhs/`    `hNNNs           my
unsigned int delayForProp2 = 3000; //ms      //    MMMMMMMMMNd+ .hmMMMMmNy    :NNNNm/./  +NNh/`       `ommNNNNNNNy     .hNNNN/           hh
unsigned int delayForProp3 = 3000;           //    MMMMMMMMMMMhy.`shNMMyN:     hNNm-     -NNNNms/.   .dNNNNNNNNNNo    /mNNNNd`           sm
unsigned int delayForProp4 = 3000;           //    MMMMMMMMMMMMNh: /hNMhm:     .dNNmhs/.  dNNNNNmmmh-`/NNNNNNNNNN-  -ymNNNNm:            ym
unsigned int clickspeed = 4000; //4066 Tuning//    MMMMMMMMMMMMMNho`-hdMNmh/`   .dNNNNNmh+-mNNNNNNN/   yNNNNNNNNy  .-+NNNNm/             dy
unsigned int delayForRearm = 1000;           //    MMMMMMMMMMMMMMNdy.`ymNMNmh+.  .yNNNNNNNy.smNNNh/  `  omNNNNms`    `mNNh-             :mm
// Declare any other variables needed        //    MMMMMMMMMMMMMMMMhd:`+mNMMmNhy:``omNNNNNs  `::.` -yd:  ./oo+-`:+oooomd+`             `ddM
bool triggerState = LOW;                     //    MMMMMMMMMMMMMMMMMmmo`/dNNhdNNmho::ymNNs`       -hmNm+      .hmNNNNd+``.-:::-. `    `ydmM
                                             //    MMMMMMMMMMMMMMMMMMmmy-y:+.:hmMNmdhsoydmy:`      `.--.      hNNNNh+-/shddNmmNhhh.  -hdNMM
bool pirState = LOW;                         //    MMMMMMMMMMMMMMMMMMMMdh.`.o-ymMMMMNNmhhhmmds:.              mmhs/:+hmmMMMMMMMMNh:`+hmMMMM
bool buttonState = LOW;                      //    MMMMMMMMMMMMMMMMMMMdy. .:o+o/+yNNMMMNNNmdooddyo+:-.``     :mooshdmNMMMMMMMMMNys+ydNMMMMM
const int ledPin =  13;                      //    MMMMMMMMMMMMMMMMMMhy/-`.-.-:s/sdNMMMMMMMs `s+-/syhhhhhhhhyhhhmNNMMMMMMMMMMNdyohmdmNNNMMM
                                             //    MMMMMMMMMMMMMMMMMMhyd+/`  -.:/ydMMMMMMMh- +do    `.-----:d:`/hNMMMMMMMMMmmy/`/dMmyo-omMM
                                             //    MMMMMMMMMMMMMMMMMMMMmhy+. .:/osmMMMMMMMh :/oo            m++`:yNMMMMMMMMmd-` `hmMNh-sNMM
                                             //    MMMMMMMMMMMMMMMMMMMMMmh-.-/h/`odMMMMMMh-.s`//            m -s-.sNMMMMMMMMNhy+-:+o+ohmMMM
                                             //    MMMMMMMMMMMMMMMMMMMMMhmhsyh:s:`omMMMMmo s- o-            d  `o/.omMMMMMMMMMNNNdhyydNMMMM
///////////////////////////////////////////////
///       DO NOT EDIT BELOW THIS LINE       ///    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
///////////////////////////////////////////////

void setup()
{
  // initialize all the prop pins as outputs
  pinMode(Prop1Pin, OUTPUT);      // sets the digital pin as output
  pinMode(Prop2Pin, OUTPUT);      // sets the digital pin as output
  pinMode(Prop3Pin, OUTPUT);      // sets the digital pin as output
  pinMode(Prop4Pin, OUTPUT);      // sets the digital pin as output
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); //Is the internal pullup needed here ?  

  // Start Serial for debugging purposes
  Serial.begin(9600); 
}

void loop()
{
  if (digitalRead(MotionSensorPin) == HIGH) {     // check if the input is HIGH
    if (triggerState == LOW) {
      digitalWrite(ledPin, HIGH); // turn LED ON
      Serial.println("[+] Motion detected!");

      // Triggering Prop 1
      triggerProp(1);
    

      // Triggering Prop 2
      triggerProp(2);

      
      // Triggering Prop 3
      triggerProp(3);


      
      // Triggering Prop 4
      triggerProp(4);

    
      delay(delayForRearm);
      triggerState = 1;
    }
      
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned off
      Serial.println("Motion ended!");
      triggerState = 0;
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}

void triggerProp(unsigned int Prop)
{
  switch (Prop) {
    case 1:
      Serial.println("[Action] >>>> Triggering Prop 1");
      digitalWrite(Prop1Pin, HIGH);
      delay(clickspeed);
      digitalWrite(Prop1Pin, LOW); 
      break;
    case 2:
      // Delaying for Prop 2
      Serial.println("[Paused] >>>> Prop 2 Delay");
      delay(delayForProp2);
      Serial.println("[Action] >>>> Triggering Prop 2");
      digitalWrite(Prop2Pin, HIGH);
      delay(clickspeed);
      digitalWrite(Prop2Pin, LOW);
      break;
    case 3:
      // Delaying for Prop 3
      Serial.println("[Paused] >>>> Prop 3 Delay");
      delay(delayForProp3);
      Serial.println("[Action] >>>> Triggering Prop 3");
      digitalWrite(Prop3Pin, HIGH);
      delay(clickspeed);
      digitalWrite(Prop3Pin, LOW);
      break;
    case 4:
      // Delaying for Prop 4
      Serial.println("[Paused] >>>> Prop 4 Delay");
      delay(delayForProp4);
      Serial.println("[Action] >>>> Triggering Prop 4");
      digitalWrite(Prop4Pin, HIGH);
      delay(clickspeed);
      digitalWrite(Prop4Pin, LOW);
      break;
    default:
      // Invalid Prop
    break;
  }
}
