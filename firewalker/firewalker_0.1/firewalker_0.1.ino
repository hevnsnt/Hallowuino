#include "FastLED.h"

#define DATA_PIN    3           // The digital pin to which the data line is connected
#define LED_TYPE    WS2812      // Type of Addressable LEDs
#define COLOR_ORDER GRB         // [Green][Red][Blue]
#define NUM_LEDS    75          // Number of LEDs in the string
CRGB leds[NUM_LEDS];            // Creates the CRGB array called "leds"

#define BRIGHTNESS 225          // Value between 0 (off) and 255 (Full-On)
#define randomBRIGHTNESS 225
#define SPEED 120               // How quickly will the animations run?
#define ChangeTime 200000000000           // How many seconds between changing animation patterns?
#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

uint8_t gCurrentPatternNumber = 0;  // Index number of which pattern is current
uint8_t gHue = 0;                   // rotating "base color" used by many of the patterns

void setup() {
  delay(3000); // 3 second delay for recovery
  Serial.begin(9600); 
  
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  //FastLED.addLeds<LED_TYPE,DATA_PIN,CLK_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}

// List of patterns to cycle through.  Each is defined as a separate function below.
typedef void (*SimplePatternList[])();
//SimplePatternList gPatterns = { DefconParties, rainbow, rainbowWithGlitter, confetti, sinelon, juggle, bpm, blank };
SimplePatternList gPatterns = { DefconParties};

void loop()
{
  // Call the current pattern function once, updating the 'leds' array
  gPatterns[gCurrentPatternNumber]();

  // send the 'leds' array out to the actual LED strip
  FastLED.show();  
  // insert a delay to keep the framerate modest
  FastLED.delay(1000/SPEED); 

  // do some periodic updates
  //EVERY_N_MILLISECONDS( 20 ) { gHue++; } // slowly cycle the "base color" through the rainbow
  //EVERY_N_SECONDS( ChangeTime ) { nextPattern(); } // change patterns periodically
}

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))


void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

void addRandomness() 
{   
  randomBRIGHTNESS == random(0, 255);
  FastLED.setBrightness(randomBRIGHTNESS);
  leds[ random16(NUM_LEDS) ] += BRIGHTNESS==randomBRIGHTNESS;
   Serial.println(randomBRIGHTNESS);
  }

void DefconParties() {
  fill_solid( leds, NUM_LEDS, CRGB::Maroon);
  addRandomness();
  addGlitter(5);
}

