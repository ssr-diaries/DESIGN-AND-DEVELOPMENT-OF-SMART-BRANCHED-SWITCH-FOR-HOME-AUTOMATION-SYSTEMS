# DESIGN-AND-DEVELOPMENT-OF-SMART-BRANCHED-SWITCH-FOR-HOME-AUTOMATION-SYSTEMS

Please feel free to contact me through linkedin if you have any doubts regarding the project: https://linkedin.com/in/shreyas-ramachandran-srinivasan-565638117/

INTRODUCTION

Our project Smart Branched switch is basically a smart home automation system where the control is done by a smartphone application and processing is done by the microcontroller. The objective of the project is to design a prototype of smart control system for all electrical and electronic appliances in a house that will require minimal installation while offering a more comprehensive power monitoring and control. It will be more complete and user friendly than most of the smart control systems available in the market. It will provide automatic control of appliances during specific timings so as to reduce the burden of manually controlling them as well as reduced power consumption.

SOFTWARE COMPONENTS
5.1 GENERAL
The hardware part of the system consist of various components which are as
follows.
 App Inventor for Android
 Arduino IDE

5.2. APP INVENTOR FOR ANDROID

5.2.1. General

App Inventor for Android is an open-source web application originally provided
by Google, and now maintained by the Massachusetts Institute of
Technology (MIT).
We use this platform to create an android application that communicates with the
Arduino microcontroller via Bluetooth. Here we build a graphical user interface for
controlling the various switches for various appliances in the household.
53

It allows newcomers to computer programming to create software applications for
the Android operating system (OS). It uses a graphical interface, very similar
to Scratch and the StarLogo TNG user interface, which allows users to drag-anddrop
visual objects to create an application that can run on Android devices as
shown in Fig 5.1. In creating App Inventor, Google drew upon significant prior
research in educational computing, as well as work done within Google on online
development environments. App Inventor and the projects on which it is based are
informed by constructionist learning theories, which emphasizes that programming
can be a vehicle for engaging powerful ideas through active learning. As such, it is
part of an ongoing movement in computers and education that began with the work
of Seymour Papert and the MIT Logo Group in the 1960s and has also manifested
itself with Mitchel Resnick's work on Lego Mindstorms and Star Logo. MIT App
Inventor is also supported with the Firebase Database extension. This allows
people to store data on Google's firebase. It allows absolute beginners in computer
54
science to develop Android applications. It provides you with a graphical user
interface with all the necessary components required to build Android apps. You
just need to drag and drop the components in the block editor. Each block is an
independent action, which you need to arrange in a logical sequence in order to
result in some action.
5.2.2. App Inventor Features :
App Inventor is a feature-rich open source Android app development tool. Here are
its features.
1. Open source: Being open source, the tool is free for everyone and you
don’t need to purchase anything. Open source software also gives you the
freedom to customise it as per your own requirements.
2. Browser based: App Inventor runs on your browser; hence, you don’t
need to install anything onto your computer. You just need to log in to
your account using your email and password credentials.
3. Stored on the cloud: All your app related projects are stored on Google
Cloud; therefore, you need not keep anything on your laptop or computer.
Being browser based, it allows you to log in to your account from any
device and all your work is in sync with the cloud database.
4. Real-time testing: App Inventor provides a standalone emulator that
enables you to view the behaviour of your apps on a virtual machine.
Complete your project and see it running on the emulator in real-time.
55
5. No coding required: As mentioned earlier, it is a tool with a graphical
user interface, with all the built-in component blocks and logical blocks.
You need to assemble multiple blocks together to result in some
behavioural action.
6. Huge developer community: You will meet like-minded developers from
across the world. You can post your queries regarding certain topics and
these will be answered quickly. The community is very supportive and
knowledge.

5.3. ARDUINO IDE
5.3.1. General
Arduino is an open-source platform used for building electronics projects. Arduino
consists of both a physical programmable circuit board (often referred to as
a microcontroller) and a piece of software, or IDE (Integrated Development
Environment) that runs on your computer, used to write and upload computer code
to the physical board.
Arduino IDE development software is used to code and control the encodersdecoders,
RF transmitters-receivers on what happens when a button is pressed on
the smartphone app and a signal is received via the Bluetooth HC-05 module.
56

The Arduino platform has become quite popular with people just starting out with
electronics, and for good reason. Unlike most previous programmable circuit
boards, the Arduino does not need a separate piece of hardware (called a
programmer) in order to load new code onto the board – you can simply use a USB
cable. Additionally, the Arduino IDE uses a simplified version of C++, making it
easier to learn to program as in Fig 5.2. Finally, Arduino provides a standard form
factor that breaks out the functions of the micro-controller into a more accessible
package.
A program for Arduino may be written in any programming language with
compilers that produce binary machine code for the target processor. Atmel
provides a development environment for their microcontrollers, AVR Studio and
the newer Atmel Studio.
The Arduino project provides the Arduino integrated development
environment (IDE), which is a cross-platform application written in the
57
programming language Java. It originated from the IDE for the
languages Processing and Wiring. It includes a code editor with features such as
text cutting and pasting, searching and replacing text, automatic indenting, brace
matching, and syntax highlighting, and provides simple one-click mechanisms to
compile and upload programs to an Arduino board. It also contains a message area,
a text console, a toolbar with buttons for common functions and a hierarchy of
operation menus. A program written with the IDE for Arduino is called
a sketch. Sketches are saved on the development computer as text files with the file
extension .ino. Arduino Software (IDE) pre-1.0 saved sketches with the
extension .pde. The Arduino IDE supports the languages C and C++ using special
rules of code structuring. The Arduino IDE supplies a software library from
the Wiring project, which provides many common input and output procedures.
User-written code only requires two basic functions, for starting the sketch and the
main program loop, that are compiled and linked with a program stub main() into
an executable cyclic executive program with the GNU toolchain, also included
with the IDE distribution. The Arduino IDE employs the program avrdude to
convert the executable code into a text file in hexadecimal encoding that is loaded
into the Arduino board by a loader program in the board's firmware. The opensource
nature of the Arduino project has facilitated the publication of many free
software libraries that other developers use to augment their projects.
58
CHAPTER - 6
RESULT
6.1. GENERAL
The following functions provide the required output :
 Switch ON/OFF the appliances
 Timer (switch on a specific appliance for a specific amount of time)
 Power Management
6.1.1 Switch on/off the appliances
59
The following is the GUI(Graphical User Interface) of the app in our smartphone

Here, pressing ON button on the side of text “DEVICE 1” switches on Device 1
and , pressing OFF button on the side of text “DEVICE 1” switches off Device 1.
The same occurs for all four devices. Here, Device 1 and Device 2 are part of
Room 1 and Device 3 and Device 4 are part of Room 2.
In Fig 6.1,we will have to assume the following Device 1 and Devce 3 are 60 Watt
electrical bulbs , Device 2 is a pedestal fan operating at 80 Watts and Device 4 is a
mobile phone charger.
60
6.1.2 Timer (switch on a specific appliance for a specific amount of time)
This allows the user to switch on the appliance after ‘n’ number of minutes and
switch off said device after m number of minutes from ‘m’.
Also‘t’ = ‘n’ + ’m’


Here from Fig 6.2, n=2, t=3, which is entered into the text box on the app and then
“ON” button corresponding to DEVICE 1 is long pressed to activate timer option.
Here, Device 1 is witched ON after 2 minutes and switched OFF after 1 minute
from the moment the device was switched ON.
61

Here from Fig 6.3, n=3, t=4, which is entered on to the text box on app and then
“ON” button corresponding to DEVICE 2 is long pressed to activate timer option.
Here, Device 2 is witched ON after 3 minutes and switched OFF after 1 minute
from the moment the device was switched ON.
62

From Fig 6.4, we can see that the timer options set for Device 1 and 2 from Fig 6.1
and Fig 6.2and also Device 3 and 4 as well are shown on LCD Display connected
to Arduino microcontroller.
