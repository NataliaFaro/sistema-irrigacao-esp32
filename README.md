# FIAP - Faculdade de Informática e Administração Paulista

## 🌱 Sistema de Irrigação Inteligente com ESP32

### Nome do grupo

Natalia Faro

---

## 👨‍🎓 Integrantes:

* Natalia de Lima Faro

---

## 👩‍🏫 Professores:

### Tutor(a)

Cap 1 - Um Mapa do Tesouro


---

## 📜 Descrição

Este projeto simula um sistema de irrigação inteligente utilizando o microcontrolador ESP32. O desenvolvimento foi realizado no **Visual Studio Code com PlatformIO** e o circuito foi simulado utilizando a plataforma **Wokwi**.

O objetivo é automatizar o acionamento da irrigação com base em condições do solo, como umidade, pH e níveis de nutrientes. O sistema realiza leituras simuladas por meio de sensores e botões, tomando decisões automáticas para ativar ou não a irrigação.

A irrigação (representada por um LED) será ativada apenas quando todas as condições forem atendidas: níveis adequados de Nitrogênio, Fósforo e Potássio (NPK), umidade do solo abaixo de 40% e pH dentro de uma faixa aceitável. Caso alguma dessas condições não seja satisfeita, o sistema mantém a irrigação desligada.

O projeto demonstra, de forma prática, a aplicação de conceitos de Internet das Coisas (IoT) no agronegócio, contribuindo para o uso eficiente de recursos hídricos e tomada de decisão automatizada.

---

## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes no projeto:
projeto-farmtech/: pasta principal do projeto contendo toda a aplicação embarcada

include/: arquivos de cabeçalho (.h) do projeto

lib/: bibliotecas auxiliares utilizadas

src/: código fonte principal em C/C++ (ESP32)

test/: arquivos de teste do projeto

diagram.json: configuração do circuito utilizado na simulação

platformio.ini: arquivo de configuração do PlatformIO

wokwi.toml: configuração da simulação no Wokwi

README.md: documentação geral do projeto

Simulator.png: imagem do circuito montado na plataforma Wokwi


---

## 🔧 Como executar o código

### Pré-requisitos:

* Visual Studio Code
* Extensão PlatformIO
* Conta na plataforma Wokwi (simulação online)

### Passo a passo:

1. Clone o repositório do GitHub
2. Abra o projeto no Visual Studio Code
3. Instale o PlatformIO (caso ainda não tenha)
4. Compile e execute o código no ESP32
5. Para simulação:

   * Acesse o Wokwi
   * Monte o circuito conforme a imagem disponibilizada
   * Execute a simulação

---

## ⚙️ Componentes Utilizados

* ESP32
* 3 botões (simulando NPK)
* Sensor DHT22 (umidade)
* Sensor LDR (simulação de pH)
* LED (bomba de irrigação)
* Resistores

---

## 🧠 Lógica do Sistema

O sistema realiza a leitura dos sensores e toma a decisão de ligar ou não a irrigação.

A irrigação será ativada quando:

* Os três nutrientes estiverem adequados (N, P e K)
* A umidade do solo estiver abaixo de 40%
* O pH estiver dentro da faixa aceitável

---

## 🎮 Funcionamento

### 🔘 Botões (NPK)

* Botão 1 → Nitrogênio
* Botão 2 → Fósforo
* Botão 3 → Potássio

### 💧 Sensor DHT22

* < 40% → solo seco → irrigação ativada
* ≥ 40% → irrigação desligada

### ☀️ Sensor LDR

* Simula o pH do solo

### 💡 LED

* Aceso → irrigação ligada
* Apagado → irrigação desligada

---

## 🖼️ Circuito no Wokwi

![Circuito](./Simulator.png)

---

## 🎥 Vídeo Demonstrativo

https://www.youtube.com/watch?v=erIzgrY8Xik

---

## 🚀 Tecnologias Utilizadas

* C++
* ESP32
* PlatformIO
* Wokwi

---

## 📊 Conclusão

O projeto demonstra como sensores e lógica embarcada podem ser utilizados para automatizar processos agrícolas, permitindo decisões inteligentes e contribuindo para o uso eficiente de recursos hídricos.

---

## 🗃 Histórico de lançamentos

* 0.1.0 - 21/04/2026 - Versão inicial do projeto
* 0.2.0 - 21/04/2026 - Documentação e simulação concluídas

---

## 📋 Licença

MODELO GIT FIAP por FIAP está licenciado sob Attribution 4.0 International.

---
