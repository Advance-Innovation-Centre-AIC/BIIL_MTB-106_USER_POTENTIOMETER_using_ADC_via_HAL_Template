# BIIL_MTB-106_USER_POTENTIOMETER_using_ADC_via_HAL_Template

Tutorial how to use ADC via HAL 

## 🔥 Requirements
| Resources                                  | Links                                                                                                  |
|--------------------------------------------|--------------------------------------------------------------------------------------------------------|
| Computer                                   | 💻                                                                                                    |
| ModusToolbox™ software v3.0 or later       | [Link](https://www.infineon.com/modustoolbox)                                                         |
| CY8CKIT-062S2-43012 Infineon Board         | [Link](https://github.com/Advance-Innovation-Centre-AIC/BIIL_MTB-100_Hello_World_and_LED_Blinking_Programming_Template/assets/88732241/0215501d-b774-4045-8e64-ef49e28d8404) |



## 🚩 Let start
1. Connect the board to your computer using the provided USB cable through the KitProg3 USB connector.

<img width="1252" alt="image" src="https://github.com/Advance-Innovation-Centre-AIC/BIIL_MTB-106_USER_POTENTIOMETER_using_ADC_via_HAL_Template/assets/130473310/fc044f38-0335-4094-95ff-9fb7573b98fa">

2. Open a terminal program and select the KitProg3 COM port. Set the serial port parameters to 8N1 and 115200 baud.

<img width="1680" alt="image" src="https://github.com/Advance-Innovation-Centre-AIC/BIIL_MTB-106_USER_POTENTIOMETER_using_ADC_via_HAL_Template/assets/130473310/4b2344b3-5394-4eef-85fc-5999783f7c44">

3. Program the board using the following step: <br>

   i. Eclipse for ModusToolbox IDE program. <br>
   ii. Select the application project in the Project Explorer. <br>
   iii. Click **Build Apllication**. <br>
   iiii. In the **Quick Panel**, scroll down, and click **BIIL_MTB-106_USER_POTENTIOMETER_using_ADC_via_HAL_Template Program (KitProg3_MiniProg4)**.

3. After successful programming, the terminal should display the message as follows:

<img width="1680" alt="image" src="https://github.com/Advance-Innovation-Centre-AIC/BIIL_MTB-106_USER_POTENTIOMETER_using_ADC_via_HAL_Template/assets/130473310/f9e3835a-a803-4feb-8add-c3bd2908c1fe">

5. Now you can spin your Potentiometer on your board which can range from 0-24 (V)


### 🎉  Congratulations! You can now complete Lab106 by creating, building, and launching the application program.


## Supported toolchains (make variable 'TOOLCHAIN')

- GNU Arm&reg; embedded compiler v10.3.1 (`GCC_ARM`) - Default value of `TOOLCHAIN`
- Arm&reg; compiler v6.16 (`ARM`)
- IAR C/C++ compiler v9.30.1 (`IAR`)

## Supported kits (make variable 'TARGET')

- [PSoC&trade; 62S2 Wi-Fi Bluetooth&reg; pioneer kit](https://www.infineon.com/CY8CKIT-062S2-43012) (`CY8CKIT-062S2-43012`)
- [PSoC&trade; 62S1 Wi-Fi Bluetooth&reg; pioneer kit](https://www.infineon.com/CYW9P62S1-43438EVB-01) (`CYW9P62S1-43438EVB-01`)
- [PSoC&trade; 62S1 Wi-Fi Bluetooth&reg; pioneer kit](https://www.infineon.com/CYW9P62S1-43012EVB-01) (`CYW9P62S1-43012EVB-01`)
- [PSoC&trade; 62S3 Wi-Fi Bluetooth&reg; prototyping kit](https://www.infineon.com/CY8CPROTO-062S3-4343W) (`CY8CPROTO-062S3-4343W`)


## Related resources
Resources  | Links
-----------|----------------------------------
BDH Shell for LED Blinking and Capsense Slider  | [Github](https://www.infineon.com/AN228571) – Getting started with PSoC&trade; 6 MCU on ModusToolbox&trade; software 




## Other resources

Infineon provides a wealth of data at www.infineon.com to help you select the right device, and quickly and effectively integrate it into your design.


## Document history

Document title: *BILL_MTB-100* – *Hello World with LED Blinking Template*

 Version | Description of change
 ------- | ---------------------
 2.0.0   | Major update to support ModusToolbox&trade; software v2.2, added support for new kits<br /> This version is not backward compatible with ModusToolbox&trade; software v2.1
 1.1.0   | Updated to support ModusToolbox&trade; software v2.1, added new kits
 1.0.0   | New code example


## Authors:
- *Assoc. Prof. Wiroon Sriborrirux*
- *Mr. Sriengchhun Chheang*
- *Mr. Sabol Socare*
<br>

<br>

---------------------------------------------------------

© BDH Corporation, 2022-2023
