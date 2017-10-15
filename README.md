<h1 align="center">Hallowuino v0.23</h1>
<p align="center">Hallowuino is an Arduino based electronic Halloween prop controller.</p>
<p align="center">
<img src="/images/Hallowuino-pop.png" width="200" align="center"> <br/>
<a href="#site">Check It Out!</a> | <a href="#documentation">Read the Docs</a></p>

Easily animate electronic props that are commonly found at Target, Walmart, HomeDepot and Dollar Stores. This controller utilizes the "Try Me" interface found on most electronic halloween props, although it can control anything with a button or switch. Additionally the Hallowuino has inputs for Motion Sensors, footpads, or other trigger input, including online interfaces like IFTTT and IoT protocols such as MQTT.

<p align="center">
<img src="/images/Workflow.png" width="600"></p><br/>
<p align="center">
<img src="/images/Example-Prop.jpg" width="200"> <img src="/images/Button.jpg" width="200"> <img src="/images/Try-Me-Interface.jpg" width="200"> <br/></p>

Please contact info@hallowuino.com if you want to purchase or contribute to the project.

<h2 align="center">Features</h2>

  * Arduino Shield Formfactor: Plugs in directly onto full sized Arduinos (Such as the UNO or similar)
  * Controls the timing for 8 Electronic props, through the "test" or "try me" button interface
  * Currently supports 2 Motion Sensors and 2 "Trigger" type inputs. (Like footpads, buttons, etc)
  * Fully configurable via a easy to use web interface
  * IFTTT support (Hardware supported, planned development)
  * MQTT support (Hardware supported, planned development)
  
<h2 align="center">How does it work?</h1>
The Hallowuino Controller can be triggered by a motion sensor, footpads, laser triggers, or even by network commands like IFTTT or MQTT and then simulates a "Button Click" to your favorite electonic prop. Although it works best with devices that have a "Try Me" button it is not limited to only those devices, if you have a prop or device that has a button, the Hallowuino can control it. This project is in active development, and soon will open an Indigogo campaign for puchase/funding options. For now it is in the development phase and none of this code should be used. <br/><br/>


Example:<br/>
[![Hallowuino Example Video](http://img.youtube.com/vi/72wD3h66Z6o/0.jpg)](http://www.youtube.com/watch?v=72wD3h66Z6o "Hallowuino Example Video")

<h2 align="center">F.A.Q.</h1>

**1. Does the Hallowuino require any other hardware?** <br/>
Yes, in its current form, the Hallowuino is a Arduino Shield, and requires a full sized Arduino (UNO or similar). Shields are boards that can be plugged on top of the Arduino PCB extending its capabilities. 

**2. Do I need to add any code to my existing Arduino to use the Hallowuino?** <br/>
Yes, the Hallowuino.ino file will need to be uploaded to your Arduino before Hallowuino will function properly.

**3. Can the Hallowuino be used to control 12V/24v/120v/240v devices such as lamps or Solenoid?** <br/>
**NO!** The Hallowuino does NOT use Solid State High Voltage relays.  It is intended for battery operated props and not for high voltage devices, and would be damaged if used in this way. I suggest you look at the PicoBoo or BooBox Controllers. However, if I get enough feedback and/or requests for this capability, I may add this to Hallowuino v1 (production run).

**4. How is the Hallowuino Powered? Do I have to run a seperate power supply?** <br/>
The Hallowuino plugs directly on top of a full sized Arduino, and gets its power directly from the Arduino. You will need to power the Arduino via the normal methods (DC adapter or USB)

**5. What kind of trigger inputs can I use?** <br/>
This is still being developed, so this answer may change with time. Pretty much any two pole button switch (useful for footpads, door bells, etc) or +5v arduino compatible sensor; such as motion sensors, light sensors, distance sensors, or laser triggers.






