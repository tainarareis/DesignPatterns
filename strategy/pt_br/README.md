# Strategy

**_Padrão GoF (Gang of Four) Comportamental_**

> ![Padrão Strategy](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/strategy_v1_0_example.png)

> **Descrição**: Permitir de maneira simples a variação de algoritmos utilizados na resolução de um determinado problema.

> **Aplicabilidade**: Utilize *Strategy* quando

> *	Várias classes semelhantes diferem apenas em seu comportamento. Este padrão define uma forma de configurar uma classe para um ou mais comportamentos;

> *	Você precisa de diferentes variações em um algoritmo. Este padrão pode ser utilizado quando essas variações são implementadas em uma hierarquia de algoritmos;

> *	Um algoritmo utiliza dados que precisam serem encapsulados apenas no sistema. Use este padrão para evitar a exposição de informações da estrutura de seus dados;

> *	Uma classe define vários comportamentos, e esses comportamentos são definidos por várias estruturas condicionais em suas operações. Ao invés de utilizar várias condicionais, modifique os ramos condicionais em classes *Strategy*.

---

## Contexto do Exemplo

> **Breve Descrição**: Um sistema capaz de realizar conversões típicas de medidas do sistema americano de medidas em medidas do sistema internacional de medidas (SI).

> **Fundo de Cena**: Um estudante de engenharia precisa de uma ajudinha em seus exercícios de física. Um dos maiores problemas está em converter medidas no sistema americano para o sistema internacional (SI). O maravilhoso nome do sistema: **CONVERSIONATOR**.

> ### Versão 1.0 (Versão do Exemplo)

> **Continuação do Fundo de Cena**: O estudante de engenharia é brasileiro e está nos Estados Unidos em uma graduação-sanduíche. Ele vive em uma república e seu colega de quarto, que é americano, adora manter a temperatura do quarto fria, em 45°F. O brasileiro, acostumado com o clima do Brasil, tentou negociar com o americano sobre a temperatura do quarto. O americano disse: "Eu aceito subir a temperatura para 60°F, e nunca superior a 65°F". O brasileiro não sabe, ainda, se fará um bom negócio aceitando o acordo do americano. Por isso, ele deseja utilizar o **CONVERSIONATOR** para converter as duas temperaturas, em Fahrenheit, para Celsius. Assim, descoberto os valores da temperatura, ele deseja utilizar o  **CONVERSIONATOR** para converter Celsius para Fahrenheit, se necessário.

> **Características do Sistema**:

> * Converter uma medida em Fahrenheit para Celsius:

>> ![Fahrenheit para Celsius](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/equations/fahrenheit_to_celsius.png)

> * Converter uma medida em Celsius para Fahrenheit:

>> ![Celsius para Fahrenheit](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/equations/celsius_to_fahrenheit.png)

> ### Versão 1.1 (Versão para Praticar)

> ![Praticando Strategy](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/strategy_v1_1_practice.png)

> **Continuação do Fundo de Cena**: Como Celsius não é a unidade básica de temperatura do Sistema Internacional de medidas (SI), o estudante de engenharia deseja converter medidas em Celsius e Fahrenheit para Kelvin utilizando o  **CONVERSIONATOR**.

> **The Practice**: Utilizando sua linguagem favorita, desenvolva a nova versão do sistema. Não esqueça de manter o uso do padrão _Strategy_, você perceberá porque este padrão é ideal para sistemas que evoluem continuamente.

> **Características do Sistema**:

> * Todas as características da Versão 1.0;

> * Converter uma medida em Kelvin para Fahrenheit:

>> ![Kelvin para Fahrenheit](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/equations/kelvin_to_fahrenheit.png)

> * Converter uma medida em Kelvin para Celsius:

>> Para refletir: É possível utilizar a funcionalidade anterior para converter Kelvin para Celsius?

> * Converter uma medida em Fahrenheit para Kelvin:

>> ![Fahrenheit para Kelvin](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/equations/fahrenheit_to_kelvin.png)

> * Converter uma medida em Celsius para Kelvin:

>> Para refletir: É possível utilizar a funcionalidade anterior para converter Celsius para Kelvin?

> **Questões**:

> 1. Como você pode melhorar o código?

> 2. Como a padrão _Strategy_ te ajudou ao desenvolver as funcionalidades?

> 3. Quais outros padrões você poderia utilizar para melhorar seu código?

> ### Versões 2.0 e 3.0 (Versões Desafio)

> ![Desafio Strategy](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/strategy_v2_v3_challenge.png)
> **Continuação do Fundo de Cena**: Agora é a vez do  **CONVERSIONATOR** brilhar! O exame de física está próximo e o estudante de engenharia deseja utilizar o  **CONVERSIONATOR** para descobrir o **coeficiente térmico de expansão linear**. Para tanto, se faz necessário, primeiro, converter medidas de comprimento.


> **O Desafio**: Utilizando sua linguagem favorita, desenvolva as novas versões do sistema. Tenha em mente que agora você possui dois tipos de medidas para conversão: Temperatura e Comprimento. Além disso, a nova característica, que não se trata de conversão, precisará utilizar de todas as formas de conversões de medidas de comprimento e temperatura para descobrir corretamente o **coeficiente térmico de expansão linear**. Utilize dos padrões de projeto que você aprendeu!

> **Características do Sistema**:

> * Todas as funcionalidades da Versão 1.1;

> * Converter entre eles: Quilômetro, Metro, Centímetro, Milímetro, Polegada, Pé, Jarda e Milha. (Versão 2.0)

> * Calcular o **coeficiente térmico de expansão linear**  (Versão 3.0):

>> ![Coeficiente Térmico de Expansão Linear](https://raw.githubusercontent.com/tainarareis/DesignPatterns/master/strategy/docs/equations/thermal_linear_expansion_coefficient.png)

---

## Referências

> **Padrão _Strategy_**:

>> https://pt.wikipedia.org/wiki/Strategy

>> https://github.com/iluwatar/java-design-patterns/blob/master/strategy/index.md

> **Física (Contexto)**:

>> http://www.ajdesigner.com/phpthermalexpansion/thermal_expansion_equation_linear_length_change.php

>> https://pt.wikipedia.org/wiki/Sistema_Internacional_de_Unidades

>> https://pt.wikipedia.org/wiki/Unidades_usuais_nos_Estados_Unidos
