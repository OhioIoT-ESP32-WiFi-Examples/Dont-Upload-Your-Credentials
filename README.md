# WiFi: Get Your Creds Out <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >

## Overview

This code was generated in the YouTube video [ESP32 WiFi: Don't Upload Your Credentials](https://youtu.be/u-LuPmYCf3M), part of a video series marching toward a next-level WiFi library for ESP32 IoT developers.  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Dont-Upload-Your-Credentials.git
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

