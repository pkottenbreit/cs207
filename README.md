## Requirements of this Project Writeup

10-13 pages: shorter is OK it is says everything we need it to (but this is unlikely)

The following are appendices and do not contribute to page count
 - circuit designs;
 - code listings for all code; (excluding publicly available libraries you included)
 - photographs of implementated circuits;
 - physical hardware designs;
 
 
 
 
 
 
 
 
# CS 207 Final Project








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
Company | Product | Price
:-----:|:-----:|:-----:
RSeat | [DSD Dlight Series FLT1](https://www.rseat-europe.com/DSD-Flight-Series-FLT1-ButtonBox-FlightSim-Hardware) | $ 295.79
SimRacing4U | [USB or PS4 Racing Button Box](https://simracing4u.myonline.store/a-58497787/usb-button-boxes-for-sim-racing-and-flight-simulators/pc-or-ps4-usb-26-function-all-metallic-buttons-back-lit-red-button-box-sim-racing-and-flight-simulators/#description) | $155.01
R | 


#### Do-it-yourself Projects

Project | Website | Difficulty | Price | Drawback
:-----:|:-----:|:-----:|:-----:|:-----:
[Virtual Button Box](http://www.stryder-it.de/simdashboard/help/en/For_PC_Gamers/Advanced/Create_a_virtual_Button_Box_for_Microsoft_Flight_Simulator) | www.stryder-it.de | Easy | Free | Virtual



Loren ipsum
#### Attribution
This project is based on the ["Sim Racing Button Box" project by Hobbylex on instructables.com](https://www.instructables.com/Sim-Racing-Button-Box/)
#### Academic references to the above web pages
Loren ipsum

### Our design process
After specifying our project requirements, we were able to survey the set of existing solutions
Our modification to improve existing products for less.
Because flight controls (implemented as switched) need to be left on, we modified the design to no longer require a matrix. We designed 3 different ways to accomplish our objective and modification, each with their own drawbacks.












![](https://github.com/pkottenbreit/cs207/blob/main/ezgif-7-4845a1ead6e1.gif)

## User Manual


### Step-By-Step Guide To Recreate This Project

#### Step 1: Gather the needed materials
```
 - material 1
 - material 2
 - material 3
```

#### Step 2:
```


```

#### Step 3:
```

```







![](https://github.com/pkottenbreit/cs207/blob/main/PXL_20201207_211711012.jpg)

## Going Forward

### Final Solution, WHY
To fit plug-and-play principle and make our project as robust (system-integrated) as possible, we went with the no-code solution

Additional recommmendations to further improve this project.
Discussion of our initial milestones vs. actual dates.

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
