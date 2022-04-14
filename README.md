# EXP3_AF06-InterruptBotoes
Atividade Formativa 6 de Arduino

******
### Enunciado:
Construa um circuito com um Arduino, 6 LEDs e 6 botões de interrupção e correspondentes resistores, sendo 3 botões vinculados à porta 2 e os outros 3 botões vinculados à porta 3. O respectivo código deve fazer com que o acionamento de um botão altere o estado do correspondente LED (de ligado para desligado, ou vice-versa).
******

## NOTA!
**Aqueles LEDS que eu usei em baixo dos botões na verdade foram utilizados pelas propriedades do diodo em si, onde a corrente vai somente para um lado, mas não volta, eles não foram colocados ali para acender, mas pela falta de componentes elétricos no tinkercad**  

Esse programinha funciona lendo a resistencia do resistor do botão apertado, e alternando o estado do led respectivo ao botão (o switch() ficou feio mas é o que eu tenho pra hoje)  

Acho que os professores aceitam o trabalho um pouco diferente do que eles pediram (6 LEDS, 2 interrupts, fiz com 8 LEDS, 1 interrupt)

<img src="https://github.com/Trabalhos-PUC-PR/EXP3_AF06-InterruptBotoes/blob/main/Diagrama.png" width="75%" height="75%">
