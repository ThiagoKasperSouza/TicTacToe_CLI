# Simple CLI TicTacToe


### Objetivo SMART:

- **Específico**: Implementar um programa de jogo da velha que atenda à norma ISO 9126, com foco em funcionalidade, confiabilidade, usabilidade, eficiência, manutenabilidade e portabilidade.

- **Mensurável**:

    - **Funcionalidade**: 100% de cobertura nos casos de teste e conformidade com a  norma ISO 9126.
    
    - **Confiabilidade**: O programa deve funcionar sem falhas por pelo menos 100 horas de uso contínuo.
    
    - **Usabilidade**: 90% dos usuários devem ser capazes de usar o programa sem dificuldade.
    
    - **Eficiência**: O programa deve ser capaz de executar um jogo completo em menos de 30 segundos.
    
    - **Manutenabilidade**: O programa deve ser capaz de ser modificado e atualizado com facilidade.
    Portabilidade: O programa deve ser capaz de funcionar em diferentes sistemas operacionais e dispositivos.

- **Atingível**: O programa será desenvolvido utilizando tecnologias e ferramentas readily available.

- **Relevante**: O programa atenderá à demanda do público por jogos clássicos e educativos.

- **Temporal**: O programa terá máxima duração de 1 semana.

### Business Model Canvas para o Jogo da Velha

- **Proposta de Valor:**

    Jogo clássico e divertido para todas as idades.
    Interface simples e intuitiva.
    Desafio estratégico para estimular o raciocínio lógico.
    Diversão individual ou multiplayer (online ou local).

- **Segmento de Clientes:**

    Crianças e adultos que apreciam jogos clássicos.
    Famílias buscando entretenimento interativo.
    Entusiastas de jogos de estratégia.
    Escolas e instituições de ensino como ferramenta educacional.

- **Canais de Distribuição:**

    Interface de comando do terminal

- **Relacionamento com Clientes:**

    Suporte ao cliente via Whats.
    Manual e documentação

- **Fontes de Receita:**

    Aplicação será opensource e com propósitos educacionais

- **Recursos-Chave:**

    - Desenvolvimento do aplicativo.
    - Criação de interface amigável e intuitiva.
    - Implementação de lógica de jogo robusta.
    - Opção de jogo multiplayer local ou versus máquina.

- **Atividades-Chave:**

    - Desenvolvimento e manutenção do aplicativo.
    - Criação de documentação (planejamento, manual, etc.).
    - Suporte via whatsapp.

- **Parcerias-Chave:**

    Não há parcerias-chave previstas para este projeto.

- **Estrutura de Custos:**

    Não há custos previstos para este projeto.

Modelo de Receita:

    Não há modelo de receita previsto para este projeto.

### Diagrama de Casos de Uso para o Jogo da Velha

**Descrição UML para o Jogo da Velha**

- **Atores:**

    Jogador.
    Computador.

- **Casos de Uso:**

    Jogar contra o computador.
    Jogar contra outro jogador (localmente).

- **Classes:**

    Jogo (atributos: tabuleiro, jogadores, turno atual, vencedor).
    Jogador (atributos: nome, pontuação, histórico de partidas).
    Tabuleiro (atributos: casas, estado atual).
    Casa (atributos: posição, símbolo).

- **Diagrama de Seqüência:**



Diagrama de Classes:


    +--------------+
    | Jogo         |
    +--------------+
    | - tabuleiro  |
    | - jogadores  |
    | - turnoAtual |
    | - vencedor   |
    +--------------+

    +--------------+
    | Jogador      |
    +--------------+
    | - nome       |
    | - pontuação  |
    | - histórico  |
    +--------------+

    +--------------+
    | Tabuleiro    |
    +--------------+
    | - casas      |
    | - estadoAtual|
    +--------------+

    +--------------+
    | Casa         |
    +--------------+
    | - posição    |
    | - símbolo    |
    +--------------+


### Diagrama Entidade-Relacionamento (DER) para o Jogo da Velha

- **Entidades:**

    - Jogo
    - Jogador
    - Tabuleiro
    - Casa

- **Relacionamentos:**

    - Um jogo possui um tabuleiro.
    - Um jogo possui dois jogadores.
    - Um tabuleiro possui nove casas.
    - Uma casa possui um símbolo (X ou O).

- **Diagrama DER:**

Jogo ---- Possui ---- Tabuleiro

Jogo ---- Possui ---- Jogador (2)

Tabuleiro ---- Possui ---- Casa (9)

Casa ---- Tem ---- Símbolo (X ou O)
