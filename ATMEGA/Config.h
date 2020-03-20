#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

// variavel para transferencia de dados
uint16_t uiDados[] = {0, 0, 0, 0, 0, 0};

// Index dos valores
#define Bomba         0
#define Horta         1
#define Tin           2
#define Tout          3
#define Chuva         4
#define Lamps         5


// Definicao dos pinos
// INPUT
#define T_inPin       A0
#define T_outPin      A1
#define Solo_H2O      A3
#define RF_in         D5
// OUTPUT
#define Water_Valve   D3
#define Pump_Relay    D4
#define Torch_Lamps   D5


// Velocidade do serial
#define BAUD          9600


// Comandos via serial
// Comandos para ESP
#define Pedir_DB_Bomba_Status     0
#define Pedir_DB_Horta_Status     1
#define Pedir_DB_Pool_Tin         2
#define Pedir_DB_Pool_Tout        3
#define Pedir_DB_Chuva            4
#define Pedir_DB_Lamps            5
#define Gravar_DB_Bomba_Status    6
#define Gravar_DB_Horta_Status    7
#define Gravar_DB_Pool_Tin        8
#define Gravar_DB_Pool_Tout       9
#define Gravar_DB_Chuva           10
#define Gravar_DB_Lamps           11


// Comandos para AtMega
#define Pedir_ADC_Tin             12
#define Pedir_ADC_Tout            13
#define Pedir_Bomba_Status        14
#define Pedir_Horta_Status        15
#define Pedir_Chuva               16
#define Pedir_Lamps               17
#define Pedir_Tudo                18
#define Set_Bomba_Status          19
#define Set_Horta_Status          20
#define Set_Lamps                 21

#endif // CONFIG_H_INCLUDED
