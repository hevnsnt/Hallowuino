<h1 align="center">Hallowuino v0.23.42</h1>
<h1 align="center">I am changing the fundamental way this works, and will be making substantial commits soon.  Please do not contribute any code.</h1>
<p align="center">Hallowuino is an Arduino based electronic Halloween prop controller.</p>
<p align="center">
<img src="/images/Hallowuino-pop.png" width="200" align="center">  <img src="/images/Arduino-based.png" width="200" align="center"> <br/>
<a href="https://igg.me/at/hallowuino">Want one? Support the Indigogo Campaign!</a></p>

Easily animate electronic props that are commonly found at Target, Walmart, HomeDepot and Dollar Stores. This controller utilizes the "Try Me" interface found on most electronic halloween props, although it can control anything with a button or switch. Additionally the Hallowuino has inputs for Motion Sensors, footpad, or other trigger inputs; including online interfaces like IFTTT and IoT protocols such as MQTT.

<p align="center">
<img src="/images/Workflow.png" width="600"></p><br/>
<p align="center">
<img src="/images/Example-Prop.jpg" width="200"> <img src="/images/Button.jpg" width="200"> <img src="/images/Try-Me-Interface.jpg" width="200"> <br/></p>

<p align="center">Please contact info@hallowuino.com if you want to contribute to the project.</p>

<h2 align="center">Features</h2>

  * Arduino Shield Formfactor: Plugs in directly onto a full sized Arduino (Such as the UNO or similar)
  * Controls the timing for 8 Electronic props, through the "test" or "try me" button interface
  * Currently supports 2 Motion Sensors and 2 "Trigger" type inputs. (Like footpads, buttons, etc)
  * Arduino based: Fully hackable and beginner friendly! Open source software and hardware (eventually) means that if you don't like how something works -- change it!  Want to add a feature? Add it! Want to make your own PCB? Make it!
  * Fully configurable via a easy to use web interface (development in progress)
  * IFTTT support (Hardware supported, development planned) [[More info about IFTTT]](https://ifttt.com/)
  * MQTT support (Hardware supported, development planned) [[More info about MQTT]](https://learn.adafruit.com/adafruit-io/mqtt-api) 
  
<h2 align="center">How does it work?</h1>
The Hallowuino Controller simulates a "Button Click" to your favorite electonic prop, and allows you to electronically control the timing of this button press. Additionally the Hallowuino can be triggered by a motion sensor, footpads, laser triggers, or even by network commands like IFTTT or MQTT. Although it works best with devices that have a "Try Me" button it is not limited to only those devices, if you have a prop or device that has a button, the Hallowuino can control it. This project is in active development, and soon will open an Indigogo campaign for puchase/funding options. For now it is in the development phase and none of this code should be used. <br/><br/>


Example:<br/>
[![Hallowuino Example Video](http://img.youtube.com/vi/72wD3h66Z6o/0.jpg)](http://www.youtube.com/watch?v=72wD3h66Z6o "Hallowuino Example Video")

<h2 align="center">F.A.Q.</h1>

**1. Wait a second... Don’t these props already come with motion sensors?** <br/>
Often these type of props use a photo-resistor as a cheap “motion sensor.” Photo-resistors look for changes in light, and may work well in well lit areas and detect shadows as people walk by. However, they do not work well in very dark areas or outside. The Hallowuino was created as a solution to my frustration where props would often trigger with the wind, but not when people walked by.  ARRRGH! Using proper PIR (**P**assive **I**nfraRed **S**ensor) [[More info about PIR sensors]](https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/how-pirs-work) solves this problem and allows for fine tuning and timed displays.

**2. Does the Hallowuino require any other hardware?** <br/>
Yes, in its current form, the Hallowuino is a Arduino Shield, and requires a full sized Arduino (UNO or similar). Shields are boards that can be plugged on top of the Arduino PCB extending its capabilities. 

**3. Do I need to add any code to my existing Arduino to use the Hallowuino?** <br/>
Yes, the Hallowuino.ino file will need to be uploaded to your Arduino before Hallowuino will function properly.

**4. Can the Hallowuino be used to control 12V/24v/120v/240v devices such as lamps or solenoids?** <br/>
**NO!!!** The Hallowuino does NOT use Solid State High Voltage relays.  It is intended for battery operated props and not for high voltage devices, and would be damaged if used in this way. I suggest you look at the PicoBoo or BooBox Controllers. However, if I get enough feedback and/or requests for this capability, I may add this to Hallowuino v1 (production run).

**5. How is the Hallowuino Powered? Do I have to run a seperate power supply?** <br/>
The Hallowuino plugs directly on top of a full sized Arduino, and gets its power directly from the Arduino. You will need to power the Arduino via the normal methods (DC adapter or USB)

**6. What kind of trigger inputs can I use?** <br/>
This is still being developed, so this answer may change with time. Pretty much any two pole button switch (useful for footpads, door bells, etc) or +5v arduino compatible sensor; such as motion sensors, light sensors, distance sensors, or laser triggers.

**7. Can the Hallowuino be battery powered?** <br/>
Yes! Any USB battery charger will work perfectly for powering the Hallowuino (via the Arduino it is plugged into). I know your next question is how long will it run?  I have no idea, but it isnt very power hungry. You can probably get away with a very small battery just fine, but you need to do your own testing. :)

**8. Can the sequence run and repeat indefinitely without needing to be triggered each time?** <br/>
Absolutely! Just don't add a sensor event, and the sequence will simply repeat indefinitely. 

**9. How do I pronounce Hallowuino?** <br/>
"Halloweeno" -- this is super important like **jif** or gif.

**10. It is currently Oct XX, 2017. Can I get one of these before Halloween 2017?** <br/>
**S**orry, no. But if you are d**e**sperate, I **c**an share my proto-shield moc**K**ups and you can use this **C**ode to make one yourself. Here is the link to the [[Adafruit ProtoShield]](https://www.adafruit.com/product/2077). Please contact me info@hallowuino.com for breadboard layout and/or schematic.



