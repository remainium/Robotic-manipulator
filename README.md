# 6DOF robotic manipulator

This project consists of a robotic manipulator made up of ^ different actuators and joints, each driven by a different gearbox or type of drive, and sometimes even a different type of motor; however, the underlying use of stepper motors is maintained.
This can be driven using a master slave control system or invserse kinematics based system

# The specifications
The robot arm is capable of a 40 - 50 centimeter reach; its final end-effector speed can go up to x mm/s.
The arm has ^ actuators using stepper motors, either NEMA 17 or NEMA 23.
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
null

- joint 2
null

- joint 1
null

# pictures

<img width="1366" height="768" alt="Screenshot (1202)" src="https://github.com/user-attachments/assets/afb34195-3614-49a2-a9cf-8a226e4ce013" />
<img width="1366" height="768" alt="Screenshot (1194)" src="https://github.com/user-attachments/assets/6b12e75f-e899-420f-909b-12ef6550583c" />
<img width="1366" height="768" alt="Screenshot (1200)" src="https://github.com/user-attachments/assets/9519b81e-540b-4aaf-b839-fe2a9a1fee41" />
<img width="1366" height="768" alt="Screenshot (1199)" src="https://github.com/user-attachments/assets/5955aeaa-77b4-4988-8250-dd9643f1cdcb" />
<img width="1366" height="768" alt="Screenshot (1204)" src="https://github.com/user-attachments/assets/4e8b5a79-1d07-4c07-994a-85e1b9f84dc7" />

# assembly

- joint 6
  Attach the motor to the joint 6 holster such that the input pins are exposed; screw the NEMA 17 into the inside.
  <img width="1366" height="768" alt="Screenshot (1207)" src="https://github.com/user-attachments/assets/8ec8ac47-1108-4be2-af1a-0e54fa05d88c" />

- joint 5
  In this joint, start by first attaching the motor mount to the NEMA 17 such that the curved shape points upward
  After that, glue nuts to the cutouts and screw on the ring section
  Then press-fit a 6809 bearing into position and fit the planet gear alinger in the middle of the bearing
  Put the sun gear on the NEMA 17 according to the D-shaped shaft and use 608 bearings and sun gears to attach to the alinger
  Glue some nuts to the alignment part, bolt the output shaft on, and attach a 6809 bearing to its exterior. After gluing the nuts onto     the top of the ring gear, bolt the cover on. You can now also glue nuts onto the output and connect the sixth joint
  <img width="1366" height="768" alt="Screenshot (1208)" src="https://github.com/user-attachments/assets/3b169b32-da76-4588-b1c2-9d0a32fc5226" />

- joint 4
  For this section, you may first bolt the NEMA 17 mount on, and then glue nuts to it, insert a 608 ball bearing into the slot, and slide down the appropriate shaft and fit it flush to the bearing. After that, mount a 90-tooth gear to it 3d printed. Use a gt2 strap belt of appropriate size, and attach a 20-tooth gear to the NEMA 17; after that, attach a 20-tooth pulley to the other end of the rod and a 60-tooth gear for the final output. Press-fit a 6809 bearing and press-fit and glue nuts to the output

# wiring diagram
<img width="1536" height="952" alt="WhatsApp Image 2026-08-23 at 10 36 43 PM" src="https://github.com/user-attachments/assets/76063203-ea2e-494b-96be-3f68cdd73279" />
mains power - 36V PSU - splits to (a) motor power bus and (b) 5V logic via buck converter - ESP32 generates 6 independent step/dir signal pairs - each pair drives one TB6600 - each TB6600 drives one stepper motor, all sharing a common ground and 36V bus.


# bill of materials



| Component Name | Qty | Price (Per Unit) | Source / Link |
| :--- | :---: | :---: | :--- |
| **NEMA 23 Stepper Motor** | 2 | ~$30.30 USD *(₹2,900)* | [Robu.in](https://robu.in/product/nema-23-30-61-kg-cm-hybrid-stepper-motor/) |
| **NEMA 17 Stepper Motor** | 4 | ~$10.45 USD *(₹1,000)* | [Robu.in](https://robu.in/product/5-5-kg-cm-nema-17-stepper-motor-4-wire-bipolar-cnc-3d-printer-robotics/) |
| **Carbon Fiber Tube** <br> *(30mm Wide, 28mm ID, 1 Meter Long)* | 3 | ~$31.35 USD *(₹3,000)* | [Robu.in](https://robu.in/product/3k-roll-wrapped-carbon-fibre-tube-hollow-30mmod-28mmid-1000mml/) |
| **TB6600 Stepper Driver** | 6 | ~$5.22 USD *(₹500)* | [Robu.in](https://www.google.com/aclk?sa=L&ai=DChsSEwii5u_1kbeWAxXDMoMDHYoaECMYACICCAEQAxoCc2Y&co=1&ase=2&gclid=EAIaIQobChMIoubv9ZG3lgMVwzKDAx2KGhAjEAQYASABEgLs1_D_BwE&cid=CAAS0wHkaEYIMRG7vLxpURarwg5v0qYGLfbGNX-qS3Nup9Hn2YpxtEkCbMDrWMja5zw7ldJNlreOlIkPZd081f-DAt35nZthK7mIY78lviE_Zda50NRkWjXQ8Xcr2b9BaBjjfvrsnynWt7RNBUYXQaZyPnbqBHFJ5yHcQMfEiim7IcfBdwErSeH4-sWeCeywG9Ahwkw_xoynya44sIgyiBTC-qRLNdQmKVFfIHxOcm2kBqnYnLlU1RLYxD4w7JZ9rhIBiQm4m_qo2s7GdyHKzwf6YyRGaz6x&cce=2&category=acrcp_v1_32&sig=AOD64_1z9PJRRRcbrvbBekIS0a1etreYbA&ctype=5&q=&nis=4&ved=2ahUKEwiq1un1kbeWAxX2yzgGHY3TDwIQ5bgDKAB6BAgIEAs&adurl=) |
| **Mean Well LRS-350-36 Power Supply** | 1 | ~$31.34 USD *(₹3,000)* | [Robu.in](https://www.google.com/aclk?sa=L&ai=DChsSEwiL1sjhyfGXAxWFm2YCHSQZFJsYACICCAEQAxoCc20&co=1&ase=2&gclid=Cj0KCQiA77DXBhCHARIsAHf2MNpu9njnSKE7PSBKj0JCHwgYpv17PpAZqMpSvTY_HjvjtIVgG5v1EP4aAkTLEALw_wcB&cid=CAAS9gHkaL9o1Tapi7nJoHJsGItHJpKMvfFtT8UG7xNoF3ldTL93VoNVrv9Seq9md7hYINcw8nh9EqxnsTTLTTq4hEb2WEnQlB3suZVhtFkPIEdVn-nEgF7EhNSP6TpgDCP-CxqEcmZgDkC0msMY8YMoYK313HGL3XKZsoXBiGtM07CXGx-HMtX5kce4YO59BPdgS2cVg03e4VHhXAeSN7H1aFfA_atuzY3PDQgBkWTitLNXCz-vkFnAXR34V6dVRWutwsfVuk2yWxbb4MSioXsrdNqKpvzqjvbKM82AxkXrzC5rfMX3_J85lVuR5xxQyjfuNXs2WRuhLnU&cce=2&category=acrcp_v1_32&sig=AOD64_3ZbIuMLFkoCCX2NJXdSbtKO6uBIg&ctype=5&q=&nis=4&ved=2ahUKEwjFmMPhyfGXAxWsmeEIHY2kEsUQ5bgDKAB6BAgQEAs&adurl=) |
| **ESP32 Development Board** | 1 | ~$5.22 USD *(₹500)* | [Robu.in](https://www.google.com/aclk?sa=L&ai=DChsSEwiTwqvTyvGXAxV0JYMDHat_DWsYACICCAEQDhoCc2Y&co=1&ase=2&gclid=Cj0KCQiA77DXBhCHARIsAHf2MNqqIme7n2tJieSy_KOCSW-a0CUxzRbt4eZ0JdRIGD7VjP1qDb4iaPMaAr4rEALw_wcB&cid=CAAS9gHkaKPHZ-stR374FfOM_hpB1ZY6ZhYQ5HV-aecTAPm9Phfv-8dnt24Me_ZnptmaImoUIAP7q3nyJzppMKJW63SqJaXmJ7fJiNvEWREVpOyHfr3m2YSm7nEaLkKiooiicoE3dKqI5aJJzdgAcsdkhACMz_ophJrEVOEGNqGrRUeNkb_Lyw11cMV8F2hVxKlClezzEPTqHWrG0cS3ean03C48Hlrl-bOq-NO0uemEy7aDKjj5JQyVsm3mgS73qjmudCLiGqaWfNd6zrGTXBPVZRD4HMwneppvt5Hdu-GJeFYEsQzPeXXOU4tuONg_wYB04_1bVLzi_58&cce=2&category=acrcp_v1_32&sig=AOD64_3rpLMR9iCaHyYjT-ATIyethVDABA&ctype=5&q=&nis=4&ved=2ahUKEwjenqjTyvGXAxU0muEIHWCCBAAQ5bgDKAB6BQgLEIUB&adurl=) |
| **15A 250V Fuse** | 1 | ~$0.21 USD *(₹20)* | [Robu.in](https://www.google.com/aclk?sa=L&ai=DChsSEwiow9uDy_GXAxXvjksFHf_aN50YACICCAEQBBoCc2Y&co=1&ase=2&gclid=Cj0KCQiA77DXBhCHARIsAHf2MNqwH4h0eiTU-gmnqiYXi5FaDgReA6rMyY7wyIjRaBvYf-UiFmT0BcgaAlitEALw_wcB&ei=CNzsap-sMt2hhvcPuMq6wQE&cid=CAAS9gHkaIsrSeFgKLQLnKJnPskY-RUq8ZOUimQgpQIDlyj--Ft67IHUexaPUdUo22MdMs9vmeDx2CiTW8w9WKcs_spoIhwre3fUpszDB_GFUcG7PL3AQ1R40E1CrsC70cuFRduTnYbL3qP2n0kKsMWaFsLoKDu78azGhgTcXvsyMW7yEgXUbCyUSVY8V92ufQMzljZ7lRT0nPTzFbm_VOvX53K8KrruCWxjZgy_PpSVNIqKOPRZZfveVFH-0LfR7YzZUQIj1nTYxsYJC1w6w2bDIm_Xewyz02CxMRZRn7pc8MY2xZOOpQB3ocnYbdNWyMDXOPax30HrFVs&cce=2&category=acrcp_v1_32&sig=AOD64_2p6ZCyAKbq8y0Jg82jYDAqZq5Bew&ctype=5&q=&nis=4&sqi=2&ved=2ahUKEwif0NaDy_GXAxXdkOEIHTilLhgQ5bgDKAB6BAgREAs&adurl=) |
| **ON/OFF Rocker Switch** | 1 | ~$0.10 USD *(₹10)* | [Robu.in](https://www.google.com/aclk?sa=L&ai=DChsSEwiDqNSty_GXAxXolUsFHeiaPVUYACICCAEQARoCc2Y&co=1&ase=2&gclid=Cj0KCQiA77DXBhCHARIsAHf2MNrc94Y0UyBRYAQkT3Kc8FeJQTM0PQv4-DAhpyL_QPohSh2Iq155twMaAvFtEALw_wcB&cid=CAAS9gHkaPnHmrwe0a_Fja_lwReQbDfkMbG6BRBVyeySkFfxnb_2nan0s0LmTSWnpaEvPFC9YNNt7-4lI0BN43XtxVbLBU4B0GgzOkCzErvJ1MWuRjid__gJfWJVgbtfV4XlF9eh0KroSLt7Ydj6zl6BXy5xpS8BSBJWaCthb_Mw3JW1lTTNINSNmCQOO5NpX8ZdXUYvUPMplGJfmgIX6K9byi7anclN5lDhs2VnTR8iuMLHhucHZRdHpkxqEFrNvxWUzix9yu-17Z40i1SRhIY3FotAbRxJ-0NnDGYu5frtBgvYda4xIjJtoOrlwxnuvozpuY3KkwF87Tc&cce=2&category=acrcp_v1_32&sig=AOD64_306E-M-yFdEEBU2tj3sdcqKhCgbg&ctype=5&q=&nis=4&ved=2ahUKEwjnqdCty_GXAxUtkOEIHekqKJUQ9aACKAB6BAgMEBQ&adurl=) |
| **LM2596 Buck Converter** | 1 | ~$0.73 USD *(₹70)* | [Robocraze](https://share.google/PyYdVtlOpy7pD8tBS) |

