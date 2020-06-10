# Identifier

O programa é responsável por determinar se um identificador é válido ou não. Um identificador válido deve começar com uma letra e conter apenas letras e dígitos. Além disso, deve ter no mínimo 1 e no máximo 6 caracteres de comprimento

O trabalho consiste basicamente de a partir de um modelo de caso pronto, que pode ser verificado no seguinte link: https://github.com/amamory/travis-hello-modern-cpp, adaptar a fim de testar o programa especificado acima utilizando ferramentas de teste como Unity, Travis-CI e gcov, além de de utilizar o conceito de classes de equivalência e valor limite.


### Instalação

-É necessário  o Unity, que pode ser obtido no link: https://github.com/ThrowTheSwitch/Unity

-É necessário um compilador com GCC instalado.

-É necessário uma conta no GitHub/Travis.

## Classes de Equivalência

As classes de equivalência para o problema podem ser conferidas na figura abaixo:

https://github.com/leonardogb130/Identifier/issues/1#issue-635937268


## Executando os testes

 - Para  executar os testes, deve se primeiro ir na  pasta tools/Unity/examples/identifier
 
 - Após, executar o comando 'make' em um terminal e será exibido a lista dos testes realizados. 
 
 ![resultados](https://user-images.githubusercontent.com/42787996/84230619-c729bc80-aac2-11ea-8458-20dc271c13c8.PNG)
 

## Descrição dos testes

O primeiro teste testa um caractere dentro do range limite de 1-6, sem caracteres especiais e começando com letra.

test_identifier1:  [A,Válido]

O segundo teste testa uma cadeia de caracteres dentro do range limite de 1-6, sem caracteres especiais e começando com letra.

test_identifier2:  [D423rf,Válido]

O terceiro teste testa um caracter nulo, de tamanho 0

test_identifier3:  [ ,Inválido]

O quarto teste testa uma cadeia de caracteres de tamanho 7

test_identifier4:  [ABc678k,Inválido]

O quinto teste testa se primeiro caractere é letra

test_identifier5:  [z,Válido]

O sexto teste testa se primeiro caractere é letra e falha

test_identifier6:  [7,Inválido]

O sétimo teste testa uma cadeia de caracteres de tamanho 6 com caracteres especiais

test_identifier7:  [abc8-k,Inválido]

O sétimo teste testa uma cadeia de caracteres de tamanho 9 com caracteres especiais

test_identifier8:  [Ai088k-+p,Inválido]



## Autor

Leonardo Gheno Bagatini

## Licença

Este projeto está licenciado sob a licença MIT - consulte o arquivo [LICENSE.md] (LICENSE.md) para obter detalhes.

