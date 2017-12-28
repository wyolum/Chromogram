EESchema Schematic File Version 4
LIBS:chromogram-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 12 12
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L chromogram:R R?
U 1 1 5A4511A4
P 1925 1900
F 0 "R?" H 1950 1750 40  0000 L CNN
F 1 "2k" V 1925 1825 40  0000 L CNN
F 2 "" V 1855 1900 30  0000 C CNN
F 3 "" H 1925 1900 30  0000 C CNN
	1    1925 1900
	1    0    0    -1  
$EndComp
$Comp
L regul:AP1117-15 U?
U 1 1 5A4518D4
P 2825 1450
F 0 "U?" H 2825 1690 50  0000 C CNN
F 1 "AP1117-15" H 2825 1600 50  0000 C CNN
F 2 "TO_SOT_Packages_SMD:SOT-223-3_TabPin2" H 2825 1650 50  0001 C CNN
F 3 "http://www.diodes.com/datasheets/AP1117.pdf" H 2925 1200 50  0001 C CNN
	1    2825 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2525 1450 2225 1450
Wire Wire Line
	1925 1450 1925 1750
Wire Wire Line
	2225 1750 2225 1450
Connection ~ 2225 1450
Wire Wire Line
	2225 1450 1925 1450
Wire Wire Line
	3125 1450 3425 1450
Wire Wire Line
	3425 1450 3425 1750
Wire Wire Line
	3425 2050 3425 3425
Wire Wire Line
	3425 3425 2825 3425
Wire Wire Line
	1925 2250 1925 2050
Wire Wire Line
	2225 2050 2225 3425
Connection ~ 2225 3425
Wire Wire Line
	2225 3425 1925 3425
Wire Wire Line
	2825 1750 2825 3425
Connection ~ 2825 3425
Wire Wire Line
	2825 3425 2225 3425
Wire Wire Line
	1925 2550 1925 2875
Wire Wire Line
	1925 3075 1925 3425
Wire Wire Line
	2825 3425 2825 3525
$Comp
L chromogram:GND #PWR?
U 1 1 5A45238D
P 2825 3525
F 0 "#PWR?" H 2825 3525 30  0001 C CNN
F 1 "GND" H 2825 3450 30  0001 C CNN
F 2 "" H 2825 3525 60  0000 C CNN
F 3 "" H 2825 3525 60  0000 C CNN
	1    2825 3525
	1    0    0    -1  
$EndComp
Wire Wire Line
	1925 3425 1425 3425
Connection ~ 1925 3425
Wire Wire Line
	1925 1450 1425 1450
Connection ~ 1925 1450
Wire Wire Line
	3425 1450 3900 1450
Connection ~ 3425 1450
Text Label 1550 1450 0    40   ~ 0
5V
Text Label 3550 1450 0    40   ~ 0
3V3
Text Label 1600 3425 0    40   ~ 0
GND
Text HLabel 1425 3425 0    40   Input ~ 0
GND
Text HLabel 1425 1450 0    40   Input ~ 0
5V
Text HLabel 3900 1450 2    40   Input ~ 0
3V3
$Comp
L chromogram:Jumper_NC_Small JP?
U 1 1 5A456474
P 1925 2975
F 0 "JP?" V 2000 3125 40  0000 R CNN
F 1 "PWR_LED_EN" H 2125 2900 40  0000 R CNN
F 2 "" H 1925 2975 50  0001 C CNN
F 3 "" H 1925 2975 50  0001 C CNN
	1    1925 2975
	0    -1   -1   0   
$EndComp
$Comp
L chromogram:C_POL C?
U 1 1 5A6251BF
P 2225 1900
F 0 "C?" H 2328 1938 40  0000 L CNN
F 1 "10uF/25V" H 2250 1800 40  0000 L CNN
F 2 "" H 2225 1900 60  0000 C CNN
F 3 "" H 2225 1900 60  0000 C CNN
	1    2225 1900
	1    0    0    -1  
$EndComp
$Comp
L chromogram:C_POL C?
U 1 1 5A6254D5
P 3425 1900
F 0 "C?" H 3528 1938 40  0000 L CNN
F 1 "22uF/25V" H 3450 1800 40  0000 L CNN
F 2 "" H 3425 1900 60  0000 C CNN
F 3 "" H 3425 1900 60  0000 C CNN
	1    3425 1900
	1    0    0    -1  
$EndComp
$Comp
L chromogram:LED D2
U 1 1 5A6340FA
P 1925 2400
F 0 "D2" V 1825 2400 40  0000 L CNN
F 1 "LED_PWR" V 2025 2400 40  0000 L CNN
F 2 "" H 1925 2400 60  0000 C CNN
F 3 "" H 1925 2400 60  0000 C CNN
F 4 "LED SS 5MM 625NM RED DIFF" H 1925 2600 60  0001 L CNN "Field4"
F 5 "2V, 10mA" H 1925 2700 60  0001 L CNN "Field5"
F 6 "Round with Domed Top, 5mm, T-1 3/4" H 1925 2800 60  0001 L CNN "Field6"
F 7 "Kingbright Corp" H 1925 2900 60  0001 L CNN "Field7"
F 8 "WP7113ID" H 1925 3000 60  0001 L CNN "Field8"
F 9 "Digikey" H 1925 3100 60  0001 L CNN "Field9"
F 10 "754-1264-ND" H 1925 3200 60  0001 L CNN "Field10"
F 11 "http://www.digikey.com/product-detail/en/WP7113ID/754-1264-ND/1747663" H 1925 3300 60  0001 L CNN "Field11"
	1    1925 2400
	0    1    1    0   
$EndComp
$Comp
L chromogram:CP2102N-A01-GQFN28 U?
U 1 1 5A738B9C
P 8775 3875
F 0 "U?" H 8775 4945 50  0000 C CNB
F 1 "CP2102N-A01-GQFN28" H 8775 4855 50  0000 C CNB
F 2 "Housings_DFN_QFN:QFN-28-1EP_5x5mm_Pitch0.5mm" H 9375 3425 50  0001 L CNN
F 3 "http://www.silabs.com/support%20documents/technicaldocs/cp2102n-datasheet.pdf" H 8975 2725 50  0001 C CNN
F 4 "Value" H 8925 4025 40  0001 C CNN "manf#"
	1    8775 3875
	1    0    0    -1  
$EndComp
$Comp
L chromogram:USB_micro P?
U 1 1 5A73BE05
P 5050 2975
F 0 "P?" H 5102 3123 40  0000 C CNB
F 1 "USB_micro" H 5102 3048 40  0000 C CNB
F 2 "" H 5050 2975 60  0000 C CNN
F 3 "" H 5050 3025 60  0000 C CNN
	1    5050 2975
	1    0    0    -1  
$EndComp
$Comp
L chromogram:diode_sch D?
U 1 1 5A73F3F4
P 5700 3925
F 0 "D?" V 5738 3846 40  0000 R CNN
F 1 "diode_sch" V 5663 3846 40  0000 R CNN
F 2 "" H 5700 3925 60  0000 C CNN
F 3 "" H 5700 3925 60  0000 C CNN
	1    5700 3925
	0    -1   -1   0   
$EndComp
$Comp
L chromogram:diode_sch D?
U 1 1 5A73F4E3
P 5900 3925
F 0 "D?" V 5938 3846 40  0000 R CNN
F 1 "diode_sch" V 5863 3846 40  0000 R CNN
F 2 "" H 5900 3925 60  0000 C CNN
F 3 "" H 5900 3925 60  0000 C CNN
	1    5900 3925
	0    -1   -1   0   
$EndComp
$Comp
L chromogram:diode_zener D?
U 1 1 5A73F53E
P 5700 2725
F 0 "D?" V 5745 2670 50  0000 R CNN
F 1 "1N5819" V 5655 2670 50  0000 R CNN
F 2 "" H 5525 2750 60  0000 C CNN
F 3 "" H 5525 2750 60  0000 C CNN
	1    5700 2725
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5700 2875 5700 3125
Wire Wire Line
	5700 3125 5450 3125
Wire Wire Line
	5450 3525 5550 3525
Wire Wire Line
	5550 3525 5550 4225
Wire Wire Line
	5550 4225 5700 4225
Wire Wire Line
	5900 4225 5900 4075
Wire Wire Line
	5700 4075 5700 4225
Connection ~ 5700 4225
Wire Wire Line
	5700 4225 5900 4225
Wire Wire Line
	5550 4225 4900 4225
Wire Wire Line
	4900 4225 4900 3675
Connection ~ 5550 4225
Wire Wire Line
	5450 3225 5900 3225
Wire Wire Line
	5900 3225 5900 3775
Wire Wire Line
	5450 3325 5700 3325
Wire Wire Line
	5700 3325 5700 3775
NoConn ~ 5450 3425
Wire Wire Line
	5700 2575 5700 2450
Text Label 5700 2450 2    40   ~ 0
5V
Wire Wire Line
	9525 3825 9900 3825
Wire Wire Line
	9525 3125 9900 3125
Wire Wire Line
	8025 4325 7950 4325
Wire Wire Line
	7950 4325 7950 4425
Wire Wire Line
	7950 4425 8025 4425
Wire Wire Line
	8025 3125 7950 3125
Wire Wire Line
	7950 3125 7950 3225
Wire Wire Line
	7950 3225 8025 3225
Wire Wire Line
	8025 4125 7675 4125
Wire Wire Line
	8025 4025 7675 4025
Wire Wire Line
	8025 3925 7675 3925
$EndSCHEMATC
