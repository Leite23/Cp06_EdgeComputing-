# 🌡️📏 Sistema IoT com Arduino, MQTT, Node-RED e TagoIO

Projeto de monitoramento ambiental utilizando **Arduino Uno**, **sensor DHT11** (temperatura e umidade) e **sensor Ultrassônico HC-SR04**, com integração via **MQTT** ao **Node-RED** e visualização em **dashboard TagoIO**.

---

## 📋 Requisitos

- Leitura de dois sensores a cada `3 segundos` (3000ms)
- Envio de leituras via **porta serial** em formato JSON
- Comunicação com **broker MQTT**
- Publicação em tópicos com formato:  
  `fiap/iot/Turma/Grupo/Sensor`
- Visualização dos dados em **dashboard TagoIO**

---

## 🧰 Tecnologias Utilizadas

- Arduino UNO
- Sensor DHT11
- Sensor Ultrassônico HC-SR04
- Node-RED
- MQTT Broker (Mosquitto, HiveMQ, etc.)
- TagoIO

---

## 🛠️ Montagem do Circuito

| Componente     | Pino Arduino |
|----------------|--------------|
| DHT11 - VCC    | 5V           |
| DHT11 - GND    | GND          |
| DHT11 - DATA   | D2           |
| HC-SR04 - VCC  | 5V           |
| HC-SR04 - GND  | GND          |
| HC-SR04 - TRIG | D9           |
| HC-SR04 - ECHO | D10          |

---

