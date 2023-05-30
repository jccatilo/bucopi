# BUCO PI

## BatstateU Customizable Open Platform for Internet of things

3D Model demo link: [bucopi.juantechnovations.com](https://bucopi.juantechnovations.com)

Introducing **BUCO PI** -  an open source customizable circuit board designed for the Internet of Things (IoT) - the perfect tool for developers and makers alike. This circuit board offers a unique level of flexibility, allowing users to create and customize IoT applications tailored to their specific needs.

With its open source design, this circuit board provides a platform for experimentation and innovation in the world of IoT. It features an array of sensors and connectivity options, including Wi-Fi, Bluetooth (soon), and Ethernet (soon), enabling users to connect to a wide range of devices and networks.

The circuit board is also highly customizable, with a variety of software development tools available to help users tailor the board's functionality to their exact requirements. Whether you're a seasoned developer or a beginner, this board offers a level of versatility that makes it perfect for any IoT project.

So if you're looking to build your own IoT device, or simply want to explore the world of IoT development, this open source customizable circuit board is the perfect place to start. With its powerful capabilities and endless potential, it's sure to become an indispensable tool for makers and developers.

## Requirements

1. [Arduino IDE](https://www.arduino.cc/en/software)

2. ESP8266 module installed in Arduino IDE. Refer to this [guide](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/) 
    - we suggest installing version 2.5.0 of ESP8266 module
    - current IDE used is Arduino 1.8.19 but any version of the IDE will work

3. Necessary and useful [libraries](https://github.com/jccatilo/bucopi/tree/main/3_libraries)
    - download the zip files in the hyperlinked text above
    - to install libaries in case you encounter errors in compiling sample sketches in this repo, open Arduino IDE then click *Sketch >> include library >> include .ZIP library >> select the corresponding .zip library*

4. [BUCO PI Development Kit A](https://bucopi.juantechnovations.com/buy)

## To try the software / Properly download this repository

1. Create a folder for this project and open the folder in your terminal (for linux users) or CMD (for windows users)

2. type **git clone https://github.com/jccatilo/bucopi.git** . this will create a folder "buco pi" inside your created folder. This is the whole repository.

3. Open the examples folder and you got this. Have fun!

Other good reads:

- [BUCO PI Schematics](https://github.com/jccatilo/bucopi/tree/main/1_schematics)

- [BUCO PI Example Projects](https://github.com/jccatilo/bucopi/tree/main/2_examples)