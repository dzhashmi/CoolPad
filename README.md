# CoolPad
This is my first public hardware project.
CoolPad
CoolPad is a custom 9-key  macropad with a rotary encoder, an OLED display, and RGB lighting. It is powered by the Seeed XIAO RP2040 and runs on QMK firmware.

Please provide feedback or even ideas on how this can be improved!

This project was built from scratch. With guidance from online sources, the guide found on the project page of Hackclub Blueprint, and AI.

Case Assembly:


<img width="870" height="510" alt="image" src="https://github.com/user-attachments/assets/28fc9d29-c737-4f66-a06f-8534ba5c909b" />


Features:
3x3 Matrix: 9 Switch keys.

Rotary Control: EC11 Rotary Encoder for volume.

OLED: 0.91".

RGB Underglow: 9x SK6812 MINI-E LEDs (one with every key).

Powered By: Powered by the Seeed XIAO RP2040.

QMK as firmware.

The case that I spent way too long trying to make look decent.


PCB;
This took 10+ hours because I had to learn how to route it...
The custom PCB was designed from scratch in KiCAD.

Microcontroller: Seeed XIAO RP2040

Firmware Overview
This macropad runs on QMK Firmware, mainly for customizability. I did use AI to guide me through writing the code for this, as I have never used it before. I learned the very basics and was able to include some basic things with the help of online sources and AI.

Encoder: handles Volume Up/Down.

OLED: Working on making this more of a UI where you can select different modes for different purposes.


BOM (Bill of Materials)
Here is everything used to build the CoolPad:
9	Cherry MX Style
9 KeyCaps
9 Diodes
9 LEDs - SK6812 MINI-E (3.5x3.5mm)
1 EC11 Rotary Encoder
1 Display - 0.91" OLED
1 Seeed XIAO RP2040
9 Capacitors 
1 Case (Printed in 2 parts; Base and top cover)
4 M3 Heat sink Screws


PCB Schematic:


<img width="3507" height="2480" alt="image" src="https://github.com/user-attachments/assets/5afaaa5f-0c65-426b-8ea6-a7e7d2858148" />


PCB Front:


<img width="653" height="949" alt="image" src="https://github.com/user-attachments/assets/d4ff0a16-8aeb-4cae-a1f1-1b6051c6fcf4" />

PCB Back:


<img width="577" height="861" alt="image" src="https://github.com/user-attachments/assets/48c3998a-4f4b-4f54-a5c0-b491c43ec42b" />


Case (Bottom):


<img width="968" height="562" alt="image" src="https://github.com/user-attachments/assets/ac04edf4-f95e-4250-b22f-621c124bc82e" />


Case (Top):


<img width="966" height="557" alt="image" src="https://github.com/user-attachments/assets/e38cdd33-8b94-40bf-af76-18e783063967" />



