RAILWAY ALARM SYSTEM
Key Features -
1. Railway crossing barrier
2. Object detection on track
3. Fire alarm system in train

ROADMAP

1. First, we will design the sensor system for each of the above key features.
 This includes a gas alarm system placed inside the train, an ultrasonic system for railway crossing barrier
and object detection on track.
The railway crossing gate consists of ultrasonic sensors
a) The sensors detect the train and close the barrier.
b) This is done using an Arduino system that takes input using an ultrasonic sensor. In response to
this, the barrier motors rotate and close the gate when the train approaches the railway crossing
junction.
Object detection on track is done using an ultrasonic sensor (HC-SR04)
a) The sensor detects an object on track and sends a signal to the system.
b) In response to the signal, the train stops.
The gas alarm system detects smoke and alert passengers on three levelsa) Level 1- smoke level is indicated by LED. (SAFE)
b) Level 2- smoke level indicated by a buzzer. (ALERT)
c) Level 3- At this level, the train stops for evacuation. (DANGER LEVEL)
2. After that, we will do mathematical analysis regarding the distance at which the ultrasonic sensor will detect
the object and close the gate in response. Furthermore, it will stop the train. We will also analyse the
ranges for 3 levels of smoke alarm.
3. Then, we will create those circuits on Tinker CAD and check their working
4. Next, we will design the project environment on an online simulation platform and integrate the circuits into
the environment.
5. If possible offline, we will make a train model with the above-specified smoke and object detection system
and the model of an automatic railway crossing junction with features as specified above.

Technical specifications

Object detection on railway track:

The object detection system uses the ultrasonic sensor and checks the presence of any object in the range
of the ultrasonic sensor on the railway track. The ultrasonic sensor emits radiations of 40 kHz, which, after
reflecting back from any object or any obstacle in the line of radiation, is received by the sensor. The time
duration between the emitted and received radiation is used to calculate the distance of the obstacle from
the sensor. Thus, using the ultrasonic sensor, we can detect the presence of any obstacle in the range of
the ultrasonic sensor, along with the approximate distance of the obstacle from the sensor.
Railway barrier crossing:
Railway barrier crossing system uses the ultrasonic sensor to detect the train passing through the train
road junction, and accordingly sends signal to the Arduino which in turns rotates the motors of the barrier
thereby closing it. A force sensor is also used in this system to detect the pressure on track, this helps in
closing of the barrier only when train crosses the junction.
Gas detection system:
Gas detection system is used in our project to detect the presence of fire or any harmful gas inside
the train. The gas sensor uses a chemi-resistor, whose resistance changes with the extent of
harmful gases or fire present in its proximity. There are various gas sensors which detect the
presence of different gases, which depends on the property of the chemi-resistor used in the gas
sensor. In the presence of any harmful gas or fire in proximity of the gas sensor, the resistance of
the chemi-resistor changes due to which the current in the gas sensor changes slightly. This
current is passed through a load resistor inside the gas sensor. The gas sensor gives the voltage
across this load resistor as an analog output. It can also give a digital output, stating whether gas
is present or not as high or low, using a particular threshold value.
In our system, the gas sensor gives the analog voltage output, which signifies the concentration of
the gas in the proximity of the sensor. We have chosen different threshold values for safe limit,
alert and danger limit.
Gas detection system-sensor output depends on the smoke level in the atmosphere. the sensor
detects the change in smoke level
FEASIBILITY IN ONLINE MODE
Feasibility of this project in online mode depends on availability of simulation platforms, and their ability to
combine working environment and circuits.
Since the project uses many hardware components so it is difficult to represent the model in online mode,
but we are trying to find simulations for proper representation of working of our model.

CIRCUITS

Images present is Spec Doc, links to tinkercad circuits provided in the repo. 

ROS files can be executed in igniton gazebo with ign gazebo <project-name>.sdf
