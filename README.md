# 6DOF robotic manipulator

This project consists of a robotic manipulator made up of ^ different actuators and joints, each driven by a different gearbox or type of drive, and sometimes even a different type of motor; however, the underlying use of stepper motors is maintained.

# The specifications
The robot arm is capable of a 40 - 50 centimeter reach; its final end-effector speed can go up to x mm/s.
The arm has ^ actuators using stepper motors, either NEMA 17 stepper motors or NEMA 23 stepper motors.
The manipulator has planetary gear drives and belt drives used in its actuators.
Each stepper motor has a magnetic encoder (AS5600) for position feedback

# joints, axes, and functions

- shoulder/position segment (J1-J3)

J1 - z axis - base rotation 
rotates the entire arm around the z axies

J2 - x-axis - shoulder pitch
rotates the main arm

J3 - x-axis - elbow pitch
extends and retracts the secondary segment of the arm

- wrist/psoitioning segment (J4-J6)

J4 - z-axis - wrist yaw
rotates the wrist assembly 

J5 - x-axis- wrist pitch
tilts tool 

J6 - z-axis - tool roll
spins tool around its axies

- end effector

J7 - - - end effector manipulation
this joint is an add-on claw or any tool that does some sort of manipulation

-all axes
z-x-x--z-x-z

arms for reference 


<img width="626" height="415" alt="orange arm" src="https://github.com/user-attachments/assets/f3298e9b-2db4-4a0e-9eaf-acb7f2c0ae34" />
<img width="520" height="384" alt="orange robot joinmts" src="https://github.com/user-attachments/assets/ad730d8b-918e-4891-b565-a8776a2b92e0" />



# Actuator specifications (oriantation/wrist)

- Joint 7
  end effector (variable)
  EF linear velocity - 
  angular velocity -

- Joint 6
  motor - nema 17
  input rpm - 100
  input torque - 3kg.cm
  gearbox - N/A

- joint 5
  motor - nema 17
  input rpm - 100
  input torque - 3kg.cm
  gearbox - single-stage planetary gear drive  5.5:1
  output torque - 15kg.cm
  output rpm - 18

- joint 4
  motor - nema 17
  input rpm - 100
  input torque - 3kg.cm
  gearbox - two-stage belt drive (3 x 4.5, 20-90 teeth, 20-60 teeth
  output torque - 40 kg · cm
  output rpm - 7.5

- joint 3


- joint 2


- joint 1


# pictures

<img width="1366" height="768" alt="Screenshot (1202)" src="https://github.com/user-attachments/assets/afb34195-3614-49a2-a9cf-8a226e4ce013" />
<img width="1366" height="768" alt="Screenshot (1194)" src="https://github.com/user-attachments/assets/6b12e75f-e899-420f-909b-12ef6550583c" />
<img width="1366" height="768" alt="Screenshot (1200)" src="https://github.com/user-attachments/assets/9519b81e-540b-4aaf-b839-fe2a9a1fee41" />
<img width="1366" height="768" alt="Screenshot (1199)" src="https://github.com/user-attachments/assets/5955aeaa-77b4-4988-8250-dd9643f1cdcb" />
<img width="1366" height="768" alt="Screenshot (1204)" src="https://github.com/user-attachments/assets/4e8b5a79-1d07-4c07-994a-85e1b9f84dc7" />


