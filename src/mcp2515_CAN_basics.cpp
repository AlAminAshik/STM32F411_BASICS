#include <Arduino.h>
#include <SPI.h>
#include <mcp_can.h>

#define SPI_CS_PIN PA4

MCP_CAN CAN(SPI_CS_PIN);

void setup() {
  Serial.begin(115200);
  while (CAN_OK != CAN.begin(MCP_STDEXT, CAN_500KBPS, MCP_8MHZ)) {
    Serial.println("CAN init failed, retrying...");
    delay(100);
  }
  Serial.println("CAN init successful!");
}

void loop() {
  const char msg[] = "Hello";
  byte sndStat = CAN.sendMsgBuf(0x100, 0, sizeof(msg), (byte *)msg);
  if (sndStat == CAN_OK) {
    Serial.println("Message Sent Successfully!");
  } else {
    Serial.println("Error Sending Message...");
  }
  delay(1000);
}
