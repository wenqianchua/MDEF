
# Digital Prototyping For Design

## Course Website

[General Resources](https://fablabbcn-projects.gitlab.io/learning/educational-docs/mdef/)

## Week 01

### Basic Electronics & Coding

#### Reflection

First week into prototyping and design is quite overwhelming. We have a basic overview on how we should choose the board based on what project we will be using. We also learn about different components on the arduino board. The goal is to find out why we need certain electronics and how we integrate it to our projects. 

For this class, we learn about how to select the right arduino for a project. How do we select the board? What are the aspects we need to think of? Is it the Power? Network? Memory? How to find it and what is the best for you? When selecting the board, it is important to consider the capacity. One quick way is to double check the microcontroller and search for the datasheet on the web to better understand it. When considering what board we should use, it is also important to think about how much power and memory that your [microcontroller](https://fablabbcn-projects.gitlab.io/learning/fabacademy-local-docs/material/extras/week04/whatisamicrocontroller/#now-actually-what-is-a-microcontroller) has.

We also learned the difference between a microcontroller and a computer. Arduino is a lot of things but not a microcontroller, but arduino has microcontroller boards. Arduino is a brand of the board, and it is very amazing because it is an advancement for prototyping ideas. With Arduino, we are able to make prototyping ideas quick and easy. 

The Arduino hardware is completely open source, other manufacturers can easily copy their hardware. The difference here is Arduino invests a lot in their software. They offer us a very simple interface so that it makes communicating to the microcontroller easier. They manage to create a big community of people that uses the same spirit of sharing what they learn on the arduino.

And some general rule of thumb when dealing with coding failure and debugging is to double check your wiring and codes. Try to divide the problem as small as we can to make solving the problem easier.

#### Pictures and Exercises

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vTTu5YTlQDC95IfjtYJA4m_jAGt1LKTOV_SadOrWzmx7RaRs8DtnnSaVIBJQDnjm55NyKpJgG9hucIe/embed?start=true&loop=true&delayms=5000" frameborder="0" width="960" height="569" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

#### References

For this class, I am mainly looking at the [lecture resources](https://hackmd.io/VBeyTyQoTLev4gjLzZkqQw?view#Electronics-amp-coding) shared on the arduino board.


#### Learning Outcomes

My personal learning outcome for this section is to have a more broader view in electronics and how potentially I would be able to use this knowledge to solve everyday problems. Also, to be able to run a simple code so that the buzzer will play. Personally, I am thankful that there is more flexibility for students to decide the depth of the technical if we want to do more research.

### 2D Design Tools (Parametric Design)

#### Reflection

The class started with a basic group session to learn about the existing software knowledge in modeling. 

>Group Miro Board on the first exercise

<iframe width="768" height="432" src="https://miro.com/app/live-embed/uXjVPrnS_rQ=/?moveToViewport=-15212,3046,18420,12529&embedId=531321577560" frameborder="0" scrolling="no" allow="fullscreen; clipboard-read; clipboard-write" allowfullscreen></iframe>

>We have a better understanding of CAM: Computer aided design. 

We also learned the difference between Vector and Raster files. Vectors are the geometric (mathematical) description of an image. Whereas Raster are mostly made out of pixels, there are essentially small squares and also a memory eater. Most photographs are raster files. The process of changing Raster to pixel is called interpolation. I find this interesting because when I was in architecture school, how I understood vector files is that file that has the x and y axis information. This is essential as when you are using another machine such as a laser cutter, the machine needs the coordinates to precisely cut where we want it to be. We also learned that computers are made out of CPU and GPU, and each of them process different file types.

>We also learned about mesh and nurbs. A mesh model is a collection of vertical, edges and faces. 

We learn that to form a design, it start with points > then connecting it with lines > joining the surfaces > forming polygons to create meshes and you will have your final model. 

This process reminds me a lot of [atomic design](https://atomicdesign.bradfrost.com/chapter-2/). Atomic design is a methodology composed of stages working together to create interface design systems in a more deliberate and hierarchical manner. While it is not exactly the same thing, but I find understanding the parametric in this sense will make your design more accessible and give you full control to it.

I also find it ironic that even though phones get better in showing the amount of pixels per inch, the human eye can only take in 200+ pixels. Yet, more pixels will need more memory from the phone. It makes me feel bad about this aspect of technology as they are using the lack of knowledge of the society in tech as an advantage to market their product. 

Overall, I find it very refreshing and interesting to learn about parametrics again in this context. I will be trying to create some models using rhino and grasshopper to test out some of my ideas.

#### Pictures and Exercises

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vS2rsrAkr449rfvqFZmDmYsEvzthOOWNndQcTuxsoCvo3MpTW_iPwmGQXku7nO-bcdBKAExYdSzk5ys/embed?start=true&loop=true&delayms=5000" frameborder="0" width="960" height="569" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

#### References

I got most of my data from here: [Lecture Resources](https://fablabbcn-projects.gitlab.io/learning/educational-docs/mdef/classes/design/).

I also did some research and reading on [Zaha Hadid's Parametric Architecture](https://issuu.com/pointnemo_adato/docs/architecture_2bpainting_digital/s/11272890).

#### Learning Outcomes

For this section I hope to understand better different file formats so that I can use it on the right machine effectively. Also, I hope to have a better grasp on Parametric Design and understand how it works. Even though I had used rhino and grasshopper and ladybug before, I am not really familiar in the concept of how parametric works. I aim to explore at least one of the tools for algorithmic design.

## Week 02

### 2D Fabrication (Laser, Vinyl)

#### Reflection

The class started with a basic group session to learn about the technologies in laser cut projects. 

>Group Miro Board on the first exercise

<iframe width="768" height="432" src="https://miro.com/app/live-embed/uXjVPrnS_rQ=/?moveToViewport=8710,1266,9375,7837&embedId=147451757163" frameborder="0" scrolling="no" allow="fullscreen; clipboard-read; clipboard-write" allowfullscreen></iframe>

>For today's course, I learned the different methods of laser engraving. 

We learned the different products that are made with a laser cutter machine. For example, laser engraving, creating a 3D model with the machine etc. 

Laser cutter is a CNC system, and also a computer numerical control (CNC) equipment. We use CAD, computer aided design to produce vector files. 

A laser cut has only two axis, which is X and Y, whereas a 3D printer has 3 axis, which is X, Y and Z. A robotic arm will be working in a 3D space, so it will have 6 axis, which are respectively X,Y, Z, A, B and C.

>We learned about how the machine works, as it uses light amplification by a stimulated emission of radiation.

During the class, we get to see a demo on how it works. Each laser cutter machine has parameters, such as: power, speed , frequency and air compressor. The higher the frequency, the more energy will be focused on the same spot.

The input geometry will need to be a vector or raster file. If it is an image, we can transfer image pixel to a raster friendly version. Overall, I think it is very interesting as when I did projects for my architecture school, there are different settings compared to the current machines we have on fablab. One thing that is notable is that my architecture school has all the materials preset in the laser cutter interface, since it is quite predictable what we will be using as materials. In the fablab, since we can cut anything and almost everything, we really need to pay attention to setting the parameters and testing things out.

We were able to observe the Vinyl cutter machine and see how it works. The difference here is that the Vinyl cutter is not using light beam but a physical knife to cut through the projects. We also get to see an amazing drawing drawn by the Vinyl machine.

Overall, I was able to make a few models from the laser cutter machine. It was a fun experience.


#### Pictures and Exercises

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vRNyhwWuoEap9Pjpx-XQmUIYydqogrJf3xU5Qvxx2mXxCbztCVVorz6MPE6MLP6RJOMI7X4wv07nl4c/embed?start=true&loop=true&delayms=5000" frameborder="0" width="960" height="569" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

#### References

I got most of my data from here: [Lecture Resources](https://fablabbcn-projects.gitlab.io/learning/educational-docs/mdef/classes/2Dfab/). 

I got my vector files from [here](https://3axis.co/), and click here to download the rhino file of the [3D Sphere](../files/3D%20Sphere/sphere_assembly.SLDASM).

#### Learning Outcomes

I think the key takeaway from this lesson is to learn how to communicate with the machine so that you can execute your design ideas. Also, to consider mutiple spectrum when designing a product, such as thickness, material properties etc as it would affect your project output.

### Inputs / Outputs

#### Reflection

Today’s class is about sensors, inputs and outputs. The reason why input and output is important is because it will help us reveal the info. We also learned about automated system
And a closed loop system: a system that understands what is going on around with the surrounding.

An example for a non close loop system is a 3D printer. They have no input output so they could not tell if they achieve the movement or not, they will just keep going on even if there is some obstacle on the printing bed as there is no sensor on it.

A sensor is a resource for the machine to infer what is happening about the environment. It does not necessarily have to be direct, for example to measure the air quality of the city, we can simply use a sound sensor. We can infer that the sound of the motor vehicle is inversely proportional to the air quality without actually needing a sensor that reads the chemical composition of the air.

I also think the idea of sensor fusion is interesting where we connect multiple sensor and analyze the data. The idea of the amount of sensors our digital devices have sounds alarming, as knowing that our information is being collected at this very moment by big companies and we could not do anything about it quite yet since technology advancement could not keep up with the digital law enforcement.

When going through the list of sensors, I am very interested in the pulse sensor as it makes me think of the lie detector. I found this interesting project [here](https://projecthub.arduino.cc/BuildItDR/41f70368-639d-4833-9534-9a66bceb7ff9) and [here](https://electropeak.com/learn/arduino-lie-detector-polygraph-machine/)

I also think the notion of using graphite as a tool creating non-traditional human interfaces is inspiring. As a Product designer, I have been doing a lot of design on screen. It would be really interesting to design an interface without needing a computer screen. It also brings people back to experiencing technology in a manual and direct manner.

#### Pictures and Exercises

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vQiDnLdXtaVaJLS3wUjLDSVzZFhpTa50qEr72zv_lFoTMlXoNA2OcqLIcx5MeDT-oMnL7i1KXgmnea1/embed?start=true&loop=true&delayms=5000" frameborder="0" width="960" height="569" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

Arduino code for [LDR](../files/Morse%20Code/230209_ESP32_LDR-Test/230209_ESP32_LDR-Test/230209_ESP32_LDR-Test.ino)

Arduino code for [LED](../files/Morse%20Code/230209_ArduinoUNO_LED-Button/230209_ArduinoUNO_LED-Button.ino)

#### References

I got most of my data from here: [Lecture Resources](https://hackmd.io/ECgw7zCkR7WbD5SkcVvcwg?view#How-to-choose-and-use-a-sensors/mdef/classes/2Dfab/)

Click to view [Sensor List](https://hackmd.io/xAjS5n_ASTOmX9EhacRRhw?both#Sensor-list).

#### Learning Outcomes

I think the key takeaway from this lesson is to figure out what would be the best sensor to use in a project. By understanding the direct and indirect relationship each unique sensor has with the output, it will help us in designing the desire system. Also, there is the technical part where I need to brush up as most of the time I find myself struggling making the electronics work. Nevertheless, I definately think that working a cohort together helps in understanding the arduino better.


## Week 03

### Microchallenge I

#### Reflection