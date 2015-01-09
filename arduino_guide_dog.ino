#include <SoftwareSerial.h>
#include <Ultrasonic.h>
SoftwareSerial mySerial(10, 11); // RX, TX
Ultrasonic ultrasonic(7);
//
char ezString[] = ">300cm";
int nLength;
int i;
long ezDistance;
byte ezSBUF;
//
void setup()
{
  Serial.begin(9600);
  Serial.println("The Guidedog written by Wei Yujian!");
  mySerial.begin(9600);
  delay(1000);
}
//
void loop()
{
  ultrasonic.MeasureInCentimeters();
  ezDistance = ultrasonic.RangeInCentimeters;
  //
  if (ezDistance < 10)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "<10cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 16;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xCE 0xA3 0xCF 0xD5 0xA3 0xAC 0xB5 0xB1 0xC7 0xB0 0xBE 0xE0 0xC0 0xEB
    ezSBUF = 0xCE;
    mySerial.write(ezSBUF);
    ezSBUF = 0xA3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xCF;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD5;
    mySerial.write(ezSBUF);
    ezSBUF = 0xA3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xAC;
    mySerial.write(ezSBUF);
    //0xB5 0xB1 0xC7 0xB0 0xBE 0xE0 0xC0 0xEB
    ezSBUF = 0xB5;
    mySerial.write(ezSBUF);
    ezSBUF = 0xB1;
    mySerial.write(ezSBUF);
    ezSBUF = 0xC7;
    mySerial.write(ezSBUF);
    ezSBUF = 0xB0;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBE;
    mySerial.write(ezSBUF);
    ezSBUF = 0xE0;
    mySerial.write(ezSBUF);
    ezSBUF = 0xC0;
    mySerial.write(ezSBUF);
    ezSBUF = 0xEB;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    delay(2000);
    //
  }
  else if (ezDistance >= 10 and ezDistance < 20)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "10cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 20 and ezDistance < 30)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "20cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 30 and ezDistance < 40)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "30cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 40 and ezDistance < 50)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "40cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 50 and ezDistance < 60)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "50cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 60 and ezDistance < 70)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "60cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 70 and ezDistance < 80)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "70cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 80 and ezDistance < 90)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "80cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 90 and ezDistance < 100)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "90cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 100 and ezDistance < 150)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "100cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 150 and ezDistance < 200)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "150cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 200 and ezDistance < 250)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "200cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else if (ezDistance >= 250 and ezDistance < 300)
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "250cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 6;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xBD, 0xD3, 0xBD, 0xFC, 0xA3, 0xAC
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xBD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xFC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //
  }
  else
  {
    Serial.print(ezDistance);
    Serial.println("cm");
    strcpy(ezString, "300cm");
    //
    ezSBUF = 0xFD;
    mySerial.write(ezSBUF);
    ezSBUF = 0x00;
    mySerial.write(ezSBUF);
    nLength = strlen(ezString);
    ezSBUF = nLength + 20;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    ezSBUF = 0x01;
    mySerial.write(ezSBUF);
    //0xB0 0xB2 0xC8 0xAB 0xA3 0xAC
    ezSBUF = 0xB0;
    mySerial.write(ezSBUF);
    ezSBUF = 0xB2;
    mySerial.write(ezSBUF);
    ezSBUF = 0xC8;
    mySerial.write(ezSBUF);
    ezSBUF = 0xAB;
    mySerial.write(ezSBUF);
    ezSBUF = 0xA3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xAC;
    mySerial.write(ezSBUF);
    for (i = 0; i < nLength; i++)
    {
      mySerial.write(ezString[i]);
      Serial.println(ezString[i], HEX);
      Serial.println(ezSBUF, HEX);
    }
    //0xC4 0xDA 0xCE 0xDE 0xD5 0xCF 0xB0 0xAD 0xCE 0xEF
    ezSBUF = 0xC4;
    mySerial.write(ezSBUF);
    ezSBUF = 0xDA;
    mySerial.write(ezSBUF);
    ezSBUF = 0xA3;
    mySerial.write(ezSBUF);
    ezSBUF = 0xAC;
    mySerial.write(ezSBUF);
    ezSBUF = 0xCE;
    mySerial.write(ezSBUF);
    ezSBUF = 0xDE;
    mySerial.write(ezSBUF);
    ezSBUF = 0xD5;
    mySerial.write(ezSBUF);
    ezSBUF = 0xCF;
    mySerial.write(ezSBUF);
    ezSBUF = 0xB0;
    mySerial.write(ezSBUF);
    ezSBUF = 0xAD;
    mySerial.write(ezSBUF);
    ezSBUF = 0xCE;
    mySerial.write(ezSBUF);
    ezSBUF = 0xEF;
    mySerial.write(ezSBUF);
    delay(2000);
    //
  }
  //
  delay(3000);
}

