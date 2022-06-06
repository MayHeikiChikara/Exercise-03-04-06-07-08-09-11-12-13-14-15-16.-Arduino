import processing.serial.*;
Serial myPort;
int val;

void setup() {
  size(240, 100);
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  fill(#ff0000);
  rect(0, 0, 20, 100);
  fill(#ff8800);
  rect(20, 0, 20, 100);
  fill(#f2ff00);
  rect(40, 0, 20, 100);
  fill(#77ff00);
  rect(60, 0, 20, 100);
  fill(#00ff0d);
  rect(80, 0, 20, 100);
  fill(#00ff8c);
  rect(100, 0, 20, 100);
  fill(#00ffff);
  rect(120, 0, 20, 100);
  fill(#00a2ff);
  rect(140, 0, 20, 100);
  fill(#0037ff);
  rect(160, 0, 20, 100);
  fill(#a600ff);
  rect(180, 0, 20, 100);
  fill(#ff00ea);
  rect(200, 0, 20, 100);
  fill(#ff008c);
  rect(220, 0, 20, 100);
}

void mousePressed() {
  if (mouseX > 0 && mouseX < 20 && mouseY > 0 && mouseY < 100) {
    myPort.write('a');
  }
  else if (mouseX > 20 && mouseX < 40 && mouseY > 0 && mouseY < 100) {
    myPort.write('b');
  }
  else if (mouseX > 40 && mouseX < 60 && mouseY > 0 && mouseY < 100) {
    myPort.write('c');
  }
  else if (mouseX > 60 && mouseX < 80 && mouseY > 0 && mouseY < 100) {
    myPort.write('d');
  }
  else if (mouseX > 80 && mouseX < 100 && mouseY > 0 && mouseY < 100) {
    myPort.write('e');
  }
  else if (mouseX > 100 && mouseX < 120 && mouseY > 0 && mouseY < 100) {
    myPort.write('f');
  }
  else if (mouseX > 120 && mouseX < 140 && mouseY > 0 && mouseY < 100) {
    myPort.write('g');
  }
  else if (mouseX > 140 && mouseX < 160 && mouseY > 0 && mouseY < 100) {
    myPort.write('h');
  }
  else if (mouseX > 160 && mouseX < 180 && mouseY > 0 && mouseY < 100) {
    myPort.write('i');
  }
  else if (mouseX > 180 && mouseX < 200 && mouseY > 0 && mouseY < 100) {
    myPort.write('j');
  }
  else if (mouseX > 200 && mouseX < 220 && mouseY > 0 && mouseY < 100) {
    myPort.write('k');
  }
  else if (mouseX > 220 && mouseX < 240 && mouseY > 0 && mouseY < 100) {
    myPort.write('l');
  }
  else {
    myPort.write('m');
  }
}
