## Requirements of this Project Writeup

10-13 pages: shorter is OK it is says everything we need it to (but this is unlikely)

The following are appendices and do not contribute to page count
 - circuit designs;
 - code listings for all code; (excluding publicly available libraries you included)
 - photographs of implementated circuits;
 - physical hardware designs;
 
 
 
 
 
 
 
 
# CS 207 Final Project

Feel free to check out our youtube video [HERE](https://youtu.be/zA_YTGeoQcE).






![](https://github.com/pkottenbreit/cs207/blob/main/DSC_0037%20(Large).png)
## Project Overview

### About us
We are Braden and Philip, two computer science students who live on the same block and happen to be third cousins. Braden enjoys playing Flight Simulator X, DCS World, and MSFS 2020 with his cousin Josh in Saskatoon (\*\*cough... online gamers). Philip LOVES problem-solving. After Braden convinced Philip to join this class over a 'cohort family supper', it was only natural for us to partner up for the final project.
When it came time to choose a project, we had two practical problems that could be solved with an arduino: 1) build an SMS-text-notification-triggered-door-sensor to catch thieves stealing from the Breit's farm and 2) create a better way of playing video games than having to use a keyboard. Naturally, we went with the more compelling problem and set to work building a plug-and-play, USB video game interface.

### Our values
We chose some guilding principles based on our experiences with school, work, and programming:
 1) We will not waste time creating artificial complexity;
 2) We will not waste materials by being lazy or thoughtless;
 3) We will not write to fill paragraphs, but will say only what is needed;
 4) Our work will speak for itself and rarely require additional explanation;
 5) Our solution will be reproducible by Braden's cousin;
 6) Our solution will be robust and stand the test of time;
 7) Our solution will be plug-and-play on any Windows machine.

### Introduction to the project
Objective Definition

```
Produce two human input devices to control flight simulation video games on Windows.
```

Requirements Specification
```
Our solution must
 - be aestetic
 - be plug-and-play on Windows
 - be connected by USB-type-A
 - be made to last, by design (casing, switches, internal computing)
 - be repairable by design in case a component does break
 - not depend on the availability of existing software solutions
 - not require configuration or maintenance
```

### Background research: existing solutions
#### Commercial Products
Company | Product | Price | Biggest Drawback
:-----:|:-----:|:-----:|:-----:
RSeat | [DSD Dlight Series FLT1](https://www.rseat-europe.com/DSD-Flight-Series-FLT1-ButtonBox-FlightSim-Hardware) | $ 295.79 | price
SimRacing4U | [USB or PS4 Racing Button Box](https://simracing4u.myonline.store/a-58497787/usb-button-boxes-for-sim-racing-and-flight-simulators/pc-or-ps4-usb-26-function-all-metallic-buttons-back-lit-red-button-box-sim-racing-and-flight-simulators/#description) | $155.01 | price
Sim Rig Direct | [S2RD6](https://www.ebay.com/itm/Button-Box-for-Sim-Racing-Game-Flight-Simulator-ETS-ATS-Control-Panel-Sim-Rig-/153511554953) | $223.17 | price
Logitech | [G Saitek Pro](https://www.newegg.ca/p/N82E16826197233?item=N82E16826197233) | $159.89 | price
ShakePrint | [ClassEcho](https://www.etsy.com/ca/listing/861158855/class-echo-microsoft-flight-simulator) | $100.00 | price
TotalControls | [Multifunction Button Box](https://www.hackster.io/news/total-controls-multi-function-button-box-brings-switches-knobs-and-more-to-any-usb-capable-system-6485588e5cd3) | $452.71 | price
BlackHog.com | [b-explorer Model B](https://www.black-hog.com/product/b-explorer-04/) | $200.25 | price
DSD | [FLT1](https://www.rseat-europe.com/DSD-Flight-Series-FLT1-ButtonBox-FlightSim-Hardware) | $296.14 | price



#### Do-it-yourself Projects

Project | Website | Difficulty | Price | Biggest Drawback
:-----:|:-----:|:-----:|:-----:|:-----:
[Virtual Button Box](http://www.stryder-it.de/simdashboard/help/en/For_PC_Gamers/Advanced/Create_a_virtual_Button_Box_for_Microsoft_Flight_Simulator) | [www.stryder-it.de](www.stryder-it.de) | Easy | Free | Virtual
[Knob Box](https://forums.flightsimulator.com/t/knob-box/313546) | [forums.flightsimulator.com](forums.flightsimulator.com) | Medium | $$$ | price
[SIM Racing Button Box](https://amstudioprojects.com/product/32-function-button-box-guide/) | [amstudioprojects.com](amstudioprojects.com) | Easy | $ | Matrix Limits Using Multiple Switches
[68-Input USB Control Panel](https://imgur.com/a/PPfPDja) | [imgur.com](imgur.com) | Hard | $$$ | Custom Printed PCB
[KerbalController](https://www.instructables.com/KerbalController-a-Custom-Control-Panel-for-Rocket/) | [instructables.com](instructables.com) | Hard | $$$ | Not launching rockets
[Button Box for Flight Simulator](https://www.thingiverse.com/thing:4367136) | [thingiverse.com](www.thingiverse.com) | Easy | $$ | Needs 3D Printer
["Sim Racing Button Box" project by Hobbylex on instructables.com](https://www.instructables.com/Sim-Racing-Button-Box/) | [instructables.com](instructables.com) | Med | $$ | Matrix limits simultaneous presses
[Universal UFC](https://www.instructables.com/Universal-UFC-for-Plane-Simulators-for-Less-Than-1/) | [instructables.com](instructables.com) | Med | $$ | 



#### Attribution
This project is based on the Universal UFC Project by lwalterthum on the site Instructables.com.

#### Academic references to the above web pages
I do not know how to "academic reference" this... List of works cited?



### Our design process
We followed the Software Engineering process as taught to Philip in CS 372.
We went with an idealized Waterfall Process Model. We made this choice to reduce wasted materials, save time for shipping, and save money on testing. We were able to do this as we had a highly-defined and well-understood upfront goal. After defining our exact project objectives (requirements specification), we were able to fully design the box and order our materials list. Since our primary objective and secondary objectives were well-defined, we compared the set of existing solutions and selected the one that met our requirements best, for the least cost of time and money.

Since our objectives were logically impossible (contradictory) to fully achieve, none of the available solutions could fit those objectives. We wanted a system that we could plug-and-play without any code installation, but this is fundamentally incompatible with having control over the specific inputs and how they are interpretted prior being transmitted as a Joystick. The no code solution implemented a unique serial number that would allow the PC to save its configuration automatically, but this meant the device had no programability. Finally, we could not achieve the goal of actuating in-game signals without installing software on the host computer to virtually sense the game.

We designed 3 different ways to accomplish our objective, each with their own drawbacks.
1. DCS_BIOS Server + Library, running on an Arduino Mega
2. BBI-32 "Button Box Input", 
3. Basic Arduino Joystick + JoyToKey.exe extended functionality

We implemented the first two solutions, but used the BBI-32 board in the final package to eliminate the need to install and run software on the gaming computer.

Please refer to the appendix for our final wiring design, which is dead simple as it involves bridging the 31 inputs between 1 of the 32 pins on the BBI-32 and GND.

Additionally, it should be noted that we went above and beyond what is expected for the presentation component of our project, and used a laser CNC machine to fabricate custom-designed wooden panels to house our controller.

### Major disclaimers
There are two important disclaimers:
1. We did not end up using a programmable device in the end and thus did not end up using any of our code
2. We did not end up creating an interactive hardware device, as our product lacks storage and can therefor not perform sequential logic.

Since our primary objective and major modification to the original solution was to make the device as plug-and-play and long-lasting as possible, these important disclaimers are not considered as detrimental to the project. Please see "Our Values", item 1.

A final note to the marker of this project: if at this point you are finding our project to be inferior or insufficient, please consider that we experimented extensively with multiple solutions including a python-script serial-input interpretter. We legitimately came to the conclusion that a no-code solution best achieves our objectives, and did not choose it to shirk responsibility or out of laziness. Thank you for considering this point.


# User Manual

![](https://github.com/pkottenbreit/cs207/blob/main/ezgif-7-4845a1ead6e1.gif)



## Step-By-Step Guide To Recreate This Project

### Step 1: Gather the needed materials and tools
```
 - BBI-32 Microcontroller Board (or an Arduino Mega, or a Pro-Micro/Nano/Uno if your button configuration is compatible with a matrix)
 - 4 big buttons
 - 4 3-position momentary switches
 - 2 3-position switches
 - 13 2-position switches
 - spool of 22-gauge wire and a good wire stripper (get multiple colours from a 22-4 telephone cable, to cable manage)
 - box construction material and tools needed to fabricate
 - soder & sodering iron
```

### Step 2: Design, cut, and assemble your housing and button boxes
```
If you are modifying your design to better fit the games you are going to play, you will have to design your own blueprint.
If you have a CNC machine available, learn how to use a CAD environment, slicer, and how to generate your G-code for the CNC program.
```

### Step 3: Assemble the wiring circuit
```
Mount all switches, buttons, and any other shennanigans you have added to the design.
Be sure to orient them the same way so that down means "off" consistently. Use the alignment tab to ensure this.
If you modified the design, follow your new wiring circuit.
Our board had enough inputs to wire each input directly.
Wire the ground of each button/switch in a long chain to save on wire and cable confusion.
```
Before you start wiring, you should learn how to solder if you already don't know.  Soldering is a useful skill for whenever you want to hack together your own projects.

The first thing you should do when wiring is wire all your switches and buttons to ground.  In our case, we wired all the switches to one common ground, and the buttons seperate.  The main reason for that was due to the height difference in ground pins for each of the buttons vs that of the switches.  
The picture below was taken when all the switches were wired to ground.  The wire used was all old telephone wire.  Braden preferred to work with solid wires over braided.

![](https://github.com/pkottenbreit/cs207/blob/main/PXL_20201121_043353100.jpg)

The only problem that we ran into was that we didn't check the pinout for our fancy, 3 position ON/ON/On switch (Also wired wrong in the above picture).  This ended up causing issues, until we realized that we wired the two switches totally wrong.  However, it was not very difficult to fix.  That's something to look out for.  Always check the pinouts of your parts.

Once you have wired everything to ground, it's time to throw on the rest of the wires.  These can be of varying length, however they should all be somewhat simmilar in length so that you don't have to bend any wires short, or strecth out any shorter wires.

![](https://github.com/pkottenbreit/cs207/blob/main/PXL_20201125_211719478.jpg)

You can also label these wires when using DCS-BIOS, to make it easier to know which pins you are using for what specific control.  See below for example.

![](https://github.com/pkottenbreit/cs207/blob/main/PXL_20201205_040818458.jpg)

### Step 4: Implement any code that your solution ended up using
If you fly with DCS, we highly recommend that you check out [DCS_BIOS](https://dcs-bios.readthedocs.io/en/latest/).
They provide great documentation, a localhost DCS server, and an Arduino library which makes programming very simple to implement and change.
We have some code avaliable that we used for our specific button box.  This was done using an Arduino Mega.

If you are using the BBI-32 component, there is no code to implement (or test).  However, you will need to bind each function of the box in whichever game you choose.  This was avoided in DCS-BIOS, as it was hardcoded in.

### Step 5: Test out your hardware, for at least 2 hours
```
It's hard to argue with 'homework', and this is one exercise you do not want to miss.
To ensure that there are no sneaky bugs or game incompatibilities, make sure to play your favourite games and make use of every button.
All for school credit, of course.
```

# Going Forward

![](https://github.com/pkottenbreit/cs207/blob/main/PXL_20201207_211711012.jpg)


## How our expectations compared to reality


### How our timeline shifted

Target Date | Milestone | Actual Date
:-------------------------:|:-------------------------:|:-------------------------:
Oct 19 | Define Project Objective | Oct 19
Oct 24 | All parts are ordered | Oct 30
Oct 31 | Multi-arduino question is answered | Oct 31
Oct 31 | New wiring diagram is complete | Oct 31
Nov 7  | All parts have arrived | Nov 19
Nov 7  | Box G-Code file complete | Nov 12
Nov 7  | Box parts cut using CNC | Nov 12
Nov 14 | Box assembled | Nov 13
Nov 14 | All arduino code is implemented | n/a
Nov 21 | First system is working (no code solution, custom board) | Nov 16
Nov 28 | 12 hours of testing in-game is complete | Nov 21
n/a | DCS_BIOS solution is implemented and coded | Nov 28
n/a | 12 hours of testing in-game is complete on new DCS_BIOS system | Nov 28
n/a | Joy2Key solution is implemented | n/a

We met all of our major milestones, although some were pushed back by up to a week to accomodate late shipping, changing plans, and a snow-delayed visit to the CNC machine in Saskatoon.

### Major barriers encountered
This project sailed by quite easily. Although the timeline shifted slightly, there was nothing outside the bounds of 'reasonable'. We changed strategies about 4 times before settling on the simplest and most robust solution. Am I glad that we did not go ahead with daisy-chaining multiple arduinos via the "Wire" library to virtually expand the number of I/O ports. Although I would have liked to create a general purpose device that could communicate two-ways with most games, this simply isn't supported by the majority of games out there. For now, using a MEGA with DCS-BIOS will have to do.

## What we would do differently next time

skip arduino, go for pre-programmed directly - This is soemthing that would be up in the air, considering the nature of the next box we would produce.  If we wanted to produce a box specifically for DCS, with multiple analog inputs on top of small displays to dispay information along side that of the game, DCS-BIOS is absolutely the way to go.  On the other hand, the ability to avoid coding all together, the pre-programmed BBI board would be good for anything made to be overall universal.  However, if we were to make another box, it would likely be targeted specifically at DCS and would use DCS-BIOS.

Make the box heavier, shorter, and with rubber feet to prevent sliding. - This isn't a huge thing, and it's something that could also be changed rather easily.  As it stands, the box is very light and will slide around on the deck.  If you watch during the segment of our introduction video, you can see that the box needs to be braced whenever you try to flip a switch.  This is something that can be dealt with, but a minor inconvenience.

More buttons / more generalized and less locked in for DCS - This is something that also depends on the implication of the box.  Again, This one was mainly set up for DCS.  That being said, if we had more games in mind, we would have likely had more buttons than 4, and possibly even fewer switches.  


## Recommended extensions going forward

Additional recommmendations to further improve this project.

To improve upon our design and accomplish more,

Add a couple potentiometers including one on the side to control the LED brightness.
This gives us better control over analog air control surfaces such as wing sweep, which is currently handled by holding the temporary switches.
Additionally, we could use the potentiometer readings to control an array of indicator LEDs to create a dashboard on the box that is independent of the game (potentiometer = fixed range, no need for in-game feedback)



