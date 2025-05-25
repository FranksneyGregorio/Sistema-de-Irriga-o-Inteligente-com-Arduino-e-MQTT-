Sistema de Irrigação Inteligente com Arduino e MQTT  

Projeto de IoT para irrigação automática baseada em umidade do solo, usando Arduino Uno, sensor de umidade, válvula solenoide e comunicação MQTT.  

Hardware  
- Arduino Uno  
- Sensor de Umidade do Solo (YL-69/FC-28)  
- Módulo Wi-Fi ESP8266  
- Válvula Solenoide (12V)  
- Protoboard e jumpers  

Funcionamento  
1. O sensor lê a umidade do solo.  
2. Se o solo estiver seco, a válvula é acionada.  
3. Os dados são enviados para um broker MQTT (ex.: ThingSpeak).  

Como Usar  
1. Carregue o código `irrigation_system.ino` no Arduino.  
2. Conecte os componentes conforme o diagrama.  
3. Configure o Wi-Fi e broker MQTT no código.  

Diagrama de Conexões  
![image](https://github.com/user-attachments/assets/0bc2603f-eafe-45f1-8d51-97558904466e)

Tabela de Tempos de Resposta
Núm. Medida	Sensor/Atuador	Tempo de Resposta (ms)
1	Sensor (A0)	120
2	Sensor (A0)	110
3	Válvula (D8)	200
4	Válvula (D8)	180
Média	Sensor	115 ms
Média	Atuador	190 ms
 
