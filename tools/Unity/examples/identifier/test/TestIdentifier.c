
// Leonardo Gheno Bagatini - Testes

#include "stdio.h"
#include "unity.h"
#include "identifier.h"

// funcoes necessarias para o funcionamento correto do Unity
void setUp(void)
{
}

void tearDown(void)
{
}

// testa valores limites dentro do range 1-6 e devem passar, testando a letra A
void test_identifier1(void)
{
  char teste = 'A';
  
  valid_s(teste); // retorna 1
  
  TEST_ASSERT_EQUAL(1, valid_s(teste));

}

// testa valores limites dentro do range 1-6 e devem passar, testando a string D423rf
void test_identifier2(void)
{
  char teste[6] = "D423rf";
  
  valid_f(teste); // retorna 1
  
  TEST_ASSERT_EQUAL(1, valid_f(teste));

}

// testa valores limites fora do range 1-6 e  não devem passar, testando  ''
void test_identifier3(void)
{
  char teste = " ";
  
  valid_f(teste); // retorna 0
  TEST_ASSERT_EQUAL(1, teste);

}

// testa valores limites fora do range 1-6 e  não devem passar, testando  'ABc678k'
void test_identifier4(void)
{
  char teste[] = "ABc678k";
  
  valid_f(teste); // retorna 0
  TEST_ASSERT_EQUAL(1, teste);

}

// testa se primeiro caracter é letra, testando 'z', deve passar
void test_identifier5(void)
{
  char teste = 'z';
  
  valid_f(teste); // retorna 1
  TEST_ASSERT_EQUAL(1, teste);

}

// testa primeiro caracter como numero, deve falhar, testando '7'
void test_identifier6(void)
{
  char teste = "7";
  
  valid_f(teste); //retorna 0
  TEST_ASSERT_EQUAL(1, teste);

}

// testa caracteres especiais, testando 'abc8-k'
void test_identifier7(void)
{
  char teste[] = "abc8-k";
  
  valid_f(teste); // retorna 0
  TEST_ASSERT_EQUAL(1, teste);

}


// mais um teste com caracteres especiais, testando 'AiO88k-+p'
void test_identifier8(void)
{
  char teste[] = "AiO88k-+p";
  
  valid_f(teste); // retorna 0
  TEST_ASSERT_EQUAL(1, teste);

}



