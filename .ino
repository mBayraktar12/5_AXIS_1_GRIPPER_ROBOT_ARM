1.	#include <SoftwareSerial.h>
2.	#include <Servo.h>
3.	
4.	Servo servo01;
5.	Servo servo02;
6.	Servo servo03;
7.	Servo servo04;
8.	Servo servo05;
9.	Servo servo06;
10.	
11.	SoftwareSerial Bluetooth(3, 4); 
12.	int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; 
13.	int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos; 
14.	int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50]; 
15.	int speedDelay = 20;
16.	int index = 0;
17.	String dataIn = "";
18.	
19.	void setup() {
20.	servo01.attach(5);
21.	servo02.attach(6);
22.	servo03.attach(7);
23.	servo04.attach(8);
24.	servo05.attach(9);
25.	servo06.attach(10);
26.	Bluetooth.begin(9600); 
27.	Bluetooth.setTimeout(1);
28.	delay(20);
29.	servo1PPos = 90;
30.	servo01.write(servo1PPos);
31.	servo2PPos = 150;
32.	servo02.write(servo2PPos);
33.	servo3PPos = 35;
34.	servo03.write(servo3PPos);
35.	servo4PPos = 140;
36.	servo04.write(servo4PPos);
37.	servo5PPos = 85;
38.	servo05.write(servo5PPos);
39.	servo6PPos = 80;
40.	servo06.write(servo6PPos);
41.	}
42.	
43.	void loop() {
44.	if (Bluetooth.available() > 0) {
45.	dataIn = Bluetooth.readString(); 
46.	
47.	if (dataIn.startsWith("s1")) {
48.	String dataInS = dataIn.substring(2, dataIn.length());
49.	servo1Pos = dataInS.toInt(); 
50.	if (servo1PPos > servo1Pos) {
51.	for ( int j = servo1PPos; j >= servo1Pos; j--) { servo01.write(j);
52.	delay(20); // }
53.	}
54.	if (servo1PPos < servo1Pos) {
55.	for ( int j = servo1PPos; j <= servo1Pos; j++) { servo01.write(j);
56.	delay(20);
57.	}
58.	}
59.	servo1PPos = servo1Pos; 
60.	}
61.	
62.	if (dataIn.startsWith("s2")) {
63.	String dataInS = dataIn.substring(2, dataIn.length());
64.	servo2Pos = dataInS.toInt();
65.	
66.	if (servo2PPos > servo2Pos) {
67.	for ( int j = servo2PPos; j >= servo2Pos; j--) {
68.	servo02.write(j);
69.	delay(50);
70.	}
71.	}
72.	if (servo2PPos < servo2Pos) {
73.	for ( int j = servo2PPos; j <= servo2Pos; j++) {
74.	servo02.write(j);
75.	delay(50);
76.	}
77.	}
78.	servo2PPos = servo2Pos;
79.	}
80.	if (dataIn.startsWith("s3")) {
81.	String dataInS = dataIn.substring(2, dataIn.length());
82.	servo3Pos = dataInS.toInt();
83.	if (servo3PPos > servo3Pos) {
84.	for ( int j = servo3PPos; j >= servo3Pos; j--) {
85.	servo03.write(j);
86.	delay(30);
87.	}
88.	}
89.	if (servo3PPos < servo3Pos) {
90.	for ( int j = servo3PPos; j <= servo3Pos; j++) {
91.	servo03.write(j);
92.	delay(30);
93.	}
94.	}
95.	servo3PPos = servo3Pos;
96.	}
97.	if (dataIn.startsWith("s4")) {
98.	String dataInS = dataIn.substring(2, dataIn.length());
99.	servo4Pos = dataInS.toInt();
100.	if (servo4PPos > servo4Pos) {
101.	for ( int j = servo4PPos; j >= servo4Pos; j--) {
102.	servo04.write(j);
103.	delay(30);
104.	}
105.	}
106.	if (servo4PPos < servo4Pos) {
107.	for ( int j = servo4PPos; j <= servo4Pos; j++) {
108.	servo04.write(j);
109.	delay(30);
110.	}
111.	}
112.	servo4PPos = servo4Pos;
113.	}
114.	if (dataIn.startsWith("s5")) {
115.	String dataInS = dataIn.substring(2, dataIn.length());
116.	servo5Pos = dataInS.toInt();
117.	if (servo5PPos > servo5Pos) {
118.	for ( int j = servo5PPos; j >= servo5Pos; j--) {
119.	servo05.write(j);
120.	delay(30);
121.	}
122.	}
123.	if (servo5PPos < servo5Pos) {
124.	for ( int j = servo5PPos; j <= servo5Pos; j++) {
125.	servo05.write(j);
126.	delay(30);
127.	}
128.	}
129.	servo5PPos = servo5Pos;
130.	}
131.	if (dataIn.startsWith("s6")) {
132.	String dataInS = dataIn.substring(2, dataIn.length());
133.	servo6Pos = dataInS.toInt();
134.	if (servo6PPos > servo6Pos) {
135.	for ( int j = servo6PPos; j >= servo6Pos; j--) {
136.	servo06.write(j);
137.	delay(30);
138.	}
139.	}
140.	if (servo6PPos < servo6Pos) {
141.	for ( int j = servo6PPos; j <= servo6Pos; j++) {
142.	servo06.write(j);
143.	delay(30);
144.	}
145.	}
146.	servo6PPos = servo6Pos; }
