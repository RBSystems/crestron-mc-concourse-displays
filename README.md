# Crestron-MC-Concourse-Displays

## Purpose
Large venues may have one or _many_ displays connected to a single control system. The purpose of this project is to provide a means of controlling all of the displays concurrently with individual commands via a combination of display APIs and a Crestron controller over TCP/IP.

## Hardware
Currently, the project is coded for the following hardware:
* Crestron RMC3 controller
* Crestron TSW-750 touch screen
* Sony FWD/XBR-series display(s)

## Prerequisites
* Crestron Development environment
  * SIMPL Windows (see Crestron Support page for [software download](https://support.crestron.com/app/answers/detail/a_id/32))
  * SIMPL+ Editor (see Crestron Support page for [software download](https://support.crestron.com/app/answers/detail/a_id/32))
* Setup
  * Set up IP Control on each display per manufacturer instructions
* Dependencies
  * [SimplSharpNetUtils Simpl# Libraries](https://github.com/danclegg/SimplSharpNetUtils) (for communication with the Sony API endpoints on the displays)
  * [SimplSharpStringUtils Simpl# Libraries](https://github.com/danclegg/SimplSharpStringUtils) (for parsing responses)

## Customizations
There is no dynamic method of setting IP addresses within the project After checking out the code, you will have to modify the Multiple Serial Send symbol (Symbol S-2.7 at the time of this writing), substituting in the IP Addresses for your display(s).
