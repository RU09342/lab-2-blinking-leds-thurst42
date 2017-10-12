# Lab 2: Blink LED's 

#Gray Thurston 

# Simple Blink 

## Introduction 
The purpose of this lab was to get familar with the MSP430 and C programing.
To do this we blinked one of the on board leds

##Implimented Devices
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989
* MSP430G255

## Dependencies
There are no external dependencies that need to be used in order for this 
code to function as intended. Just the standerd MSP430.h header file.

## Functionality 
The purpse of this lab was to blink an led at a constant rate. Thats is what 
I have implimented here. There is no way for a user to alter this rate.
It simply blinks the led.


## Errors
There were no errors encontered in this lab.

## Tasks
* [x] Learn about I/O using a button
* [x] Use Polling to blink LED

# Multiple Blink 

## Introduction 
The purpose of this lab was to blink both onboard leds at different rates. 
The best way of accomlishing this was to use 2 counters and contantly check there
value. When a pre-determined value had been hit, it triggered the led to toggle 
and reset the counter. 

##Implimented Devices
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989
* MSP430G255

## Functionality

Blinks onboard debug leds at 2 different rates. No user inputs. 

## Dependencies
There are no external dependencies that need to be used in order for this 
code to function as intended. Just the standerd MSP430.h header file.

## Errors
No known errors

## Tasks
* [x] Implement more than one counter
* [x] Blink multiple LEDs simultaneously

# Button Blink 

## Introduction 
The purpose of this lab was to understand how to control things using button 
input, and to understand the concept of polling.

##Implimented Devices
* MSP430F5529
* MSP430FR2311
* MSP430FR5994
* MSP430FR6989
* MSP430G255

## Functionality
Turns on LED when button is depressed, then turns the LED off when the 
button is released. 

## Errors
Major error due to switch bouncing, can be fixed using simple hardware 
RC circuit or impllimented in software using TIMER_A. No solution implimeted.


# Off Board Blink 
## Introduction 
The purpose of this lab was to prove that a microcontroller does not need 
complicated external hardware to function. Thus, we were to contstruct a 
circuit on a breadboard that used a g2553.

## dependencies
No software dependancies. See DIPTRACE file for BOM of hardware dependancies

## Extra Work 
Completed Schematic and PCB file for a board consisting of MSP430 G2553 
microcontroller and 4 74HCT93E binary counters for visulization. Contuction of 
ciruit on breadboard consisting of 1 MSP430 g2553, 1 74HCT93E binary counter, 
and a 2n7000 based bi-directional level shifter.

## Fucntionality
Blinks led, incrimeents binary counter

## Errors
No known errors

 







