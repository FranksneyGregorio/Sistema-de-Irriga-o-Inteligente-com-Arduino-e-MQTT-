Sistema de Irrigação Inteligente com Arduino e MQTT


Objetivo

Desenvolver um sistema de irrigação automático baseado em IoT para otimizar o uso de água na agricultura, alinhado ao ODS 6 (Água Potável e Saneamento) da ONU. 
O projeto utiliza sensores de umidade do solo, Arduino Uno e comunicação MQTT para monitoramento e controle remoto.


Componentes Principais

•	Hardware:

      Arduino Uno (microcontrolador).

      Sensor de umidade do solo (Higrômetro YL-69/FC-28).

      Válvula solenoide (12V) para controle de água.

      Módulo Wi-Fi ESP8266 (conexão MQTT).

•	Software:

      Firmware em C++ (IDE Arduino).

      Protocolo MQTT para envio de dados à nuvem.

      Lógica de acionamento: irriga quando o solo está seco (umidade < 500).

Funcionamento
	Leitura do Sensor: Mede a umidade do solo (valor analógico: 0-1023).
   
	Processamento: Arduino verifica se a umidade está abaixo do limite crítico.
   
	Atuação: Aciona a válvula solenoide se o solo estiver seco.
   
	Comunicação: Dados são enviados via MQTT para monitoramento remoto.


Resultados Esperados

•	Redução de desperdício de água (irrigação apenas quando necessária).

•	Monitoramento em tempo real via plataforma IoT.

•	Custo acessível (componentes de baixo preço e código aberto).


Diagrama de Conexões

![image](https://github.com/user-attachments/assets/0bc2603f-eafe-45f1-8d51-97558904466e)


Tecnologias-Chave

•	IoT (Internet das Coisas): Integração de sensores e nuvem.

•	MQTT: Protocolo leve para comunicação com brokers.

•	Open Source: Licença MIT para livre uso e adaptação.


Aplicação Prática

•	Agricultura sustentável (pequenas e médias propriedades).

•	Jardins automatizados ou estufas inteligentes.

•	Projetos educacionais em automação e IoT.


Repositório GitHub

Inclui:

•	Código-fonte (Arduino + MQTT).

•	Diagramas de conexão.

•	Documentação completa.

🔗 Link: https://github.com/FranksneyGregorio/Sistema-de-Irriga-o-Inteligente-com-Arduino-e-MQTT-

