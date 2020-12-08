# What is DCC++ EX?
DCC++ EX is the organization maintaining several codebases that together represent a fully open source DCC system. Currently, this includes the following:

* [CommandStation-EX](https://github.com/DCC-EX/CommandStation-EX/releases) - the latest take on the DCC++ command station for controlling your trains. Runs on an Arduino board, and includes advanced features such as a WiThrottle server implementation, turnout operation, general purpose inputs and outputs (I/O), and JMRI integration.
* [exWebThrottle](https://github.com/DCC-EX/exWebThrottle) - a simple web based controller for your DCC++ command station.
* [BaseStation-installer](https://github.com/DCC-EX/BaseStation-Installer) - an installer executable that takes care of downloading and installing DCC++ firmware onto your hardware setup.
* [BaseStation-Classic](https://github.com/DCC-EX/BaseStation-Classic) - the original DCC++ software, packaged in a stable release. No active development, bug fixes only.

A basic DCC++ EX hardware setup can use easy to find, widely avalable Arduino boards that you can assemble yourself.

Both CommandStation-EX and BaseStation-Classic support much of the NMRA Digital Command Control (DCC) [standards](http://www.nmra.org/dcc-working-group "NMRA DCC Working Group"), including:

* simultaneous control of multiple locomotives
* 2-byte and 4-byte locomotive addressing
* 128-step speed throttling
* Activate/de-activate all accessory function addresses 0-2048
* Control of all cab functions F0-F28
* Main Track: Write configuration variable bytes and set/clear specific configuration variable (CV) bits (aka Programming on Main or POM)
* Programming Track: Same as the main track with the addition of reading configuration variable bytes

# What’s in this Repository?

This repository, CommandStation-EX, contains a complete DCC++ EX Commmand Station sketch designed for compiling and uploading into an Arduino Uno, Mega, or Nano.  All sketch files are in the folder named CommandStation-EX and its subforlders. 

To utilize this sketch, you can use the following: 

1. (beginner) our [automated installer](https://github.com/DCC-EX/BaseStation-Installer)
2. (intermediate) download the latest version from the [releases page](https://github.com/DCC-EX/CommandStation-EX/releases)
3. (advanced) use git clone on this repository 

Not using the installer? Open the file "CommandStation-EX.ino" in the
Arduino IDE. Please do not rename the folder containing the sketch
code, nor add any files in that folder. The Arduino IDE relies on the
structure and name of the folder to properly display and compile the
code. Rename or copy config.example.h to config.h. If you do not have 
the standard setup, you must edit config.h according to the help texts 
in config.h.

## What's new in CommandStation-EX?

* WiThrottle server built in. Connect Engine Driver or WiThrottle clients directly to your Command Station
* WiFi and Ethernet shield support
* No more jumpers or soldering!
* Direct support for all the most popular motor control boards
* I2C Display support
* Improved short circuit detection and automatic reset from an overload
* Current reading, sensing and ACK detection settings in milliAmps instead of just pin readings
* Improved adherence to the NMRA DCC specification
* Complete support for all the old commands and front ends like JMRI
* Railcom cutout (beta)
* Simpler, modular, faster code with an API Library for developers for easy expansion
* New features and functions in JMRI
* Automation (coming soon)

NOTE: DCC-EX is a major rewrite to the code. We started over and rebuilt it from the ground up! For what that means to you, click [HERE](notes/rewrite.md).

# More information
You can learn more at the [DCC++ EX website](https://dcc-ex.com/)

- November 14, 2020
