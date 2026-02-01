# CoolPad
This is my first public hardware project.
CoolPad
CoolPad is a custom 9-key  macropad with a rotary encoder, an OLED display, and RGB lighting. It is powered by the Seeed XIAO RP2040 and runs on QMK firmware.

Please provide feedback or even ideas on how this can be improved!

This project was built from scratch. With guidance from online sources, the guide found on the project page of Hackclub Blueprint, and AI.

Case Assembly:


<img width="1028" height="763" alt="image" src="https://github.com/user-attachments/assets/518887da-f59c-4652-ba37-fba9b705baa9" />


Features:
3x3 Matrix: 9 Switch keys.

Rotary Control: EC11 Rotary Encoder for volume.

OLED: 0.91".

RGB Underglow: 9x SK6812 MINI LEDs (one with every key).

Powered By: Powered by the Seeed XIAO RP2040.

QMK as firmware.

The case that I spent way too long trying to make look decent.


PCB;
This took 10+ hours because I had to learn how to route it...
It is evidently a very badly routed PCB, I really did try to make it look nice, but I could not find a way to make it look good, and still be able to route everything. I am open to advice.
The custom PCB was designed from scratch in KiCAD.

Microcontroller: Seeed XIAO RP2040

Firmware Overview
This macropad runs on QMK Firmware, mainly for customizability. I did use AI to guide me through writing the code for this, as I have never used it before. I learned the very basics and was able to include some basic things with the help of online sources and AI.

Encoder: handles Volume Up/Down.

OLED: Working on making this more of a UI that lets you select different modes for different purposes.


BOM (Bill of Materials):
Here is everything used to build the CoolPad:
9 Blank DSA keycaps (White)
9 MX-Style switches
9 Through-hole 1N4148 Diodes 
9 LEDs - SK6812 MINI-E (3.5x3.5mm)
1 EC11 Rotary Encoder
1 Display - 0.91" OLED
1 Seeed XIAO RP2040
1 Case (Printed in 2 parts; Base and top cover)
4 M3x5mx4mm heatset inserts


PCB Schematic:


<img width="3507" height="2480" alt="image" src="https://github.com/user-attachments/assets/c36fcafb-7d62-417d-b0c3-f33ab8f68036" />


PCB Routed:

<img width="482" height="642" alt="image" src="https://github.com/user-attachments/assets/3f856dfb-b8b7-4ace-90f3-568241d6ccd4" />


PCB Front:


<img width="632" height="858" alt="image" src="https://github.com/user-attachments/assets/a9948ebb-87dd-4db2-bdbb-d980efa1c2bc" />


PCB Back:


<img width="632" height="859" alt="image" src="https://github.com/user-attachments/assets/4cd55728-b180-4f01-92f4-0017195678d1" />


Case (Bottom):


<img width="986" height="696" alt="image" src="https://github.com/user-attachments/assets/c11db754-e257-4a80-aaa2-367dd591ce7b" />


Case (Top):


<img width="1024" height="707" alt="image" src="https://github.com/user-attachments/assets/1f18d6c2-3166-4c4c-8623-8a56090c4f21" />




