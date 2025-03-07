# Boilerplate Platformio CLI

Boilerplate para Projetos Arduino com o PlatformIO CLI! Este projeto foi criado com o objetivo de facilitar e agilizar o processo de desenvolvimento de aplicações baseadas em Arduino.

## O que é o Boilerplate?

Este boilerplate é uma estrutura inicial que contém as configurações básicas e os arquivos necessários para começar a desenvolver projetos com o Arduino de forma eficiente. O PlatformIO CLI é uma poderosa ferramenta de linha de comando para o desenvolvimento de firmware embarcado, proporcionando um ambiente de desenvolvimento unificado e simplificado.

## Como Utilizar:

Clone ou faça o download deste repositório.
Personalize o platformio.ini com as configurações da sua placa.
Utilize o PlatformIO CLI para compilar, fazer o upload e depurar o firmware.

## Códigos úteis

### Criando os arquivos de configuração para o vscode:

```shell
platformio init --ide vscode
```

### Instalação das Libs de dependências

```shell
pio run
```

### Upload para o arduino

```shell
pio run --target upload
```

### Monitor

```shell
pio device monitor
```

Saiba mais sobre o platformio.io em [platformIO](https://platformio.org/)

Lista de placas para inserir no platformio.ini [boards](https://docs.platformio.org/en/latest/boards/)

Sinta-se à vontade para contribuir, reportar problemas ou sugerir melhorias. Juntos, podemos tornar este boilerplate ainda mais útil e robusto para a comunidade de desenvolvedores Arduino.

Divirta-se codificando!
