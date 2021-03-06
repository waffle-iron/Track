[![Stories in Ready](https://badge.waffle.io/SelfDriveSlotCars/Track.png?label=ready&title=Ready)](https://waffle.io/SelfDriveSlotCars/Track?utm_source=badge)
# Self-Drive Slot Cars

![Logo](https://github.com/SelfDriveSlotCars/SelfDriveSlotCars/blob/OLD/logo.jpg)

This is the GitHub repository for Self-Drive Slot Cars - a project that simulates how self-driving vehicles can sense the world around them.

## About the project
The original idea for this was that we could turn a standard two-player track into a one-player track, where the human can race the computer. This project uses a standard [Scalextric](https://www.scalextric.com/uk-en/) set and an [Arduino Mega 2560](https://www.arduino.cc/en/Main/arduinoBoardMega2560) to run the automatic car. The Arduino runs a C/C++ script and uses Light Dependent Resistors to determine the car's location on the track and control the speed dynamically by controlling the current delivered to the car's motor. This means that the car will be able to automatically speed up for straights and slow down on corners, meaning that it won't fall off the track.

Our intention is to set parameters meaning that the car will finish the race in a certain time, and the human must attempt to beat the computer to win.

## Future plans
In the future, this could be used as a simulation of how self-driving electric vehicles function in the real world. It shows how the vehicle will be able to use sensors to determine its location and make real-time calculations that will aid in collision avoidance.

## Suggestions?
If you have any suggestions that will help improve the project, please file an issue on this repository, including as much detail as possible.

## Disclaimer
This project is a course assessment for BSc(Hons) Computer Networks at Birmingham City University. After the assessment window is over, the project will be released under a GPLv3 licence for open source software. Please wait until this licence is active before submitting any suggestions for improvement.
