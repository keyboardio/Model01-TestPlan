KeyboardioModel01TestPlan
=========================

Test Plan and tools for the Keyboardio Model 01


= Introduction


== Test theory

    PCB preparation
    Flash bootloader onto PCB using avrdude and ICSP cable
    Flash Keyboardio test firmware to verify
        Ability to flash firmware
        Connection to SX1509 IO Expander
        Connection to RN42 bluetooth module (if included)
== Test tools

=== Hardware
    Mac running MacOS X (Linux coming soon)
    Arduino Micro to use as ICSP programmer
    Arduino to ICSP cable
    MicroUSB cable
    Sticker with unique id and a space for test engineer signature for each board to be tested
		
		
		Unique ids should use the following format:
		YYYY-MM-DD-XXX
		OK _______________
		    YYYY=year
		    MM =month (01-12)
		    DD = day (01-31)
		    XXX = board # tested on that date
		    ___________ = place for engineer to write their name
		
		Example for the 6th board tested and OKed by JesseV on December 27, 2014: 
		
		2014-12-27-006
		OK JesseV            . 
		
== Software

All software is contained in this archive or Git Repository.



== Detailed test instructions


Right now, this test infrastructure only runs on MAC OS X.


As an overview, the test tools will install ArduinoISP on an Arduino Micro or
Leonardo. 

Then they will flash the Caterina bootloader to the Left PCB via the
ICSP header on the PCB. 

Then they will flash a test firmware onto the Left PCB via the MicroUSB port on
the Left PCB.

Then the test firmware will report itself back to the test script.

Right now, we don't test the battery charger, bluetooth module or IO expander
automatically. That will come when we have a single test board to build tools
against.


To run the tests, cd into the 'tools' directory.

Run:

./00-install-arduinoisp

Run:

./01-flash-bootloader

Run:

./02-device-found-mac

Run:

./03-ready-to-connect-mac

Run:

./04-flash-and-test-mac
