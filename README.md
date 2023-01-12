# Touchless Tap
Código arduino para automação de torneiras convencionais, usando um circuito simples, barato e de fácil aplicação <br>
O objetivo dessa aplicação é tirar a necessidade de contato físico para controlar uma torneira, tornando o controle mais higiênico e prático. <br>
Ao aproximar a mão do sensor (ao limiar de 20cm de distância) o relé aciona a válvula que controla o fluxo de água, ativando a torneira. <br>
Ao aproximar a mão do sensor novamente (ao limiar de 20cm de distância) o relé é desligado, interrompendo o fluxo de água da torneira.

## Tecnologias
Esse projeto foi desenvolvido em C++ para ser executado por controladores da plataforma Arduino.

## Bibliotecas
Utilizada biblioteca HCSR04.r

## Hardware
- Microcontrolador Arduino Uno (pode ser utilizado qualquer modelo)
- Sensor Ultrassônico HC-SR04
- Válvula de entrada para conexão 3/4"
- Módulo relé 1 canal

## Circuito

### HC-SR04
Pino 1 - VCC => Porta 5V <br>
Pino 2 - TRIG => Porta Digital 12 <br>
Pino 3 - ECHO => Porta Digital 13 <br>
Pino 4 - GND => Porta GND <br>

### Relé
Pino 1 - VCC => Porta 5V <br>
Pino 2 - GND => Porta GND <br>
Pino 3 - IN => Pino Digital 2 <br>
Terminal 1 - NC => VAZIO <br>
Terminal 2 - NO => Positivo (Válvula) <br>
Terminal 3 - Comum => Positivo (Válvula) <br>

### Válvula 3/4"
Terminal 1 - Postivo => Relé <br>
Terminal 2 - Negativo => Direto para a fonte de energia <br>
