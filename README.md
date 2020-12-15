# Handwriter
Handwriter is a concept developed by Dewen Zhang and YoungRok Lee to remind people of handwriting's value and communication beyond language.
## Ideation
Information Theory has pretty much provided a solution for communicating any vectorized information. However, screen-based communication methods we have now only cover very limited dimensions. We believed that language is able to document most information during a conversation, before revealing the importance of [nonverbal communication](https://en.wikipedia.org/wiki/Nonverbal_communication). Our concepts are centered around the idea of inspiring audiences to pay attention to aspects of communication that are important but didn’t receive much attention.
## Concept
Our concept centers around hand writing. Scientific research told us during face to face communication, only 7 to 30 percent of information is transmitted through language. When we are texting however, only language is delivered. We believe every detail in the process of writing down a sentence such as the hand written font, pauses and hesitations, and mistakes all has a meaning. The device we are creating aims to record as much detail in hand writing as possible, then recreate the process of writing the message down to the receiver.
![Storyboard](https://raw.githubusercontent.com/D-e-r-e-k/2020-O-S-Arduino-Project/main/Concepts/Artboard%201.png)
## Prototype
We created a "Wizard of Oz" style prototype to present our concept.
### Writing Mechanism
Our writing mechanism as adapted from
https://www.thingiverse.com/thing:248009#instructions

We 3D printed all the parts, sanded them, and put them together.
![Image_of_Parts](https://raw.githubusercontent.com/D-e-r-e-k/2020-O-S-Arduino-Project/main/Progress_Documentation/Parts_Manufacturing/Parts.jpg)
![Image_of_Prototype](https://raw.githubusercontent.com/D-e-r-e-k/2020-O-S-Arduino-Project/main/Progress_Documentation/Parts_Manufacturing/Proto_Img3.jpg)
### Recording Mechanism
Our recording mechanism by servomotor is inspired by
https://www.youtube.com/watch?v=QR_Oo8hpsL4&feature=youtu.be
![Image_of_Servo](https://raw.githubusercontent.com/D-e-r-e-k/2020-O-S-Arduino-Project/main/Progress_Documentation/Servo_Modification/ServoMod2.jpg)


More documentation of the process can be find in [Progress_Documentation](https://github.com/D-e-r-e-k/2020-O-S-Arduino-Project/tree/main/Progress_Documentation).
### Demo Video
In the demo video, the message "Hi" is hardcoded into the program. 
## Future
- Due to the time limitation for the project, we were not able to implement the communication feature. By implementing it will not only makes the prototype usable, but also greatly resolve the problem caused by the limited storage space within Arduino Uno.
- The model we adapted is not designed for this exact use case which we think it's the biggest limitation in recording accuracy. Motions are captured by positions of all three servo motor. If any of the joints or arms flexes, that movement will not be captured.