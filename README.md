
# Controle de Atendimento - Banco

Este é um sistema simples para controlar o atendimento de clientes em um banco, utilizando uma fila. O programa oferece três opções principais para interagir com o sistema de atendimento:

- **Retirar Senha**: O usuário pode retirar uma senha aleatória para entrar na fila de atendimento.
- **Atender Fila**: O atendente pode chamar o próximo cliente da fila.
- **Sair**: Finaliza o programa.

## Funcionalidades

### 1. **Retirar Senha**
Quando o usuário seleciona a opção 1, o programa gera uma senha aleatória que ainda não está presente na fila e exibe a senha gerada.

### 2. **Atender Fila**
Ao escolher a opção 2, o programa retira o primeiro elemento da fila, o que representa o próximo cliente a ser atendido, e exibe a senha desse cliente.

### 3. **Sair**
A opção 3 encerra o programa.


## Tecnologias Utilizadas

- C
- Bibliotecas stdlib e time.h para geração de senhas.


## Contribuições

Contribuições são bem-vindas! Se você tiver sugestões ou melhorias para o código, fique à vontade para abrir uma *issue* ou enviar um *pull request*.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

