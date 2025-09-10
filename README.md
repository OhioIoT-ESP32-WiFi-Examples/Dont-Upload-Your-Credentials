# WiFi: Get Your Creds Out <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >

## Overview

This code was generated in the YouTube video [ESP32 WiFi: Get Your Creds Out](https://www.youtube.com/watch?v=AT4uNl0lJK8&list=PLAilpW21Y-LAHbQl6HvIWl0VDeJ9daaME), part of a video series marching toward a next-level WiFi library for ESP32 IoT developers.  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Creds-Out.git
```


### Getting Started - PlatformIO
This codebase is structrued as a fully ready PlatformIO project, so users can git pull and then immediately compile (after adding credentials).
Change the WiFi credentials in *lib/creds.h*.

To turn off logging, delete/comment-out the `log_events()` and `log_status()` function calls.



### Getting Started - Arduino IDE 

Copy the *wifi_tools* folder, found in the *lib/* folder, to the *libraries/* folder in your Arduino folder (where Arduino stores all of your shared libraries.
Edit the credentials in *wifi_lab/creds.h*.

<image src="https://www.ohioiot.com/images/arduino_ide_friendly.png" width=60px ></image>


## About

OhioIoT is focused on developing and marketing tools that are designed and priced for small-scale IoT developers.  The goal is to bring early success to your IoT projects with minimum effort in adoption.

<br>
*OhioIoT is an IoT platform designed for small-scale IoT projects.  For more, check out our webiste at [www.OhioIoT.com](https://www.ohioiot.com).*














## Overview

This code serves as an interim stop in a series of videos marching toward your next-level WiFi library for ESP32 IoT developers.  

"Nail Down Your WiFi":
- **[ESP32 WiFi - Introduction To Events](https://www.youtube.com/watch?v=AT4uNl0lJK8)**
- **[ESP32 WiFi - Clocking Your Functions]([tbd])**
- **[ESP32 WiFi - Get Reconnected]([tbd])** <---- the video that explains this code


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Reconnect.git
```


### Getting Started - PlatformIO
- Set your wifi credentials in ***src/main.cpp***
- Compile and run


### Getting Started - Arduino IDE 
- Open ***reconnect.ino*** in the ***reconnect/*** folder.  That sketch directly links both files in the ***lib/wifi_tools*** directory. 
- Add your wifi credentials in ***reconnect.ino***.
- When you are satisfied that it works:
  - copy the ***wifi_tools*** folder to your Arduino shared ***libraries/*** folder
  - change your include to be `#include "wifi_tools.h"`


<br>


*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*
