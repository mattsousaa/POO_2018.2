# Atividades da Disciplina de Programação Orientada a Objetos ministradas pelo Professor David Sena (2018.2)

Cada pasta contém um relatório em Markdown com o nome de cada prática. O repositório contém tanto atividades obrigatórias **(Práticas)** assim como atividades extras **(Prática_Extra)** e atividades de classe. A estrutura das pastas das atividades obrigatórias e extras são mais ou menos da seguinte forma:


|                |Arquivos                          |Descrição                         |
|----------------|-------------------------------|-----------------------------|
|**/inc**		|`'.h'`            |'Contém os cabeçalhos'            |
|**/src**          |`".cpp"`            |"Contém os fontes"            |
|**Makefile**          |`Makefile`|-- Arquivo para compilação |
|**Readme.md**          |`Readme.md`|-- Relatório dos trabalhos|

Após o comando **make** é criado mais duas pastas com o executável e os objetos.

|                |Arquivos                          |Descrição                         |
|----------------|-------------------------------|-----------------------------|
|**/bin**		        |`'app'`             |'Contém o arquivo executável'               |
|**/obj**           |`".o"`              |"Contém os objetos"                   |

Após o comando **make clean** as pastas **bin** e **obj** são excluídas com seus respectivos arquivos.

Informações dos Trabalhos disponível em https://qxcodepoo.github.io/

>"When you change the way you look at things, the things you look at change."</br>
>Max Planck, Quantum theorist and Nobel Prize Winner

# Relatórios de Todas as Práticas 

# Relatório de POO - Prática 1 - Carro.

- **O que você fez?**
Fiz o código da primeira prática da disciplina de POO referente ao Calhambeque. Foi necessário ter noções a partir do código exemplo da calculadora feita em aula. Fiz todos os tópicos pedidos na prática. (Estou editando o relatório depois porque achei melhor especificar esse tópico. Fiz a prática bem antes, no início do semestre).

- **Com quem e como você fez?**
Essa primeira prática fiz sozinho. Utilizei o código exemplo da Calculadora e alguns códigos em Java que eu já possuía antes de fazer a disciplina. Como eu já tinha algumas noções de programação orientada a objetos antes, eu adicionei alguns conceitos a mais como visibilidade e métodos modificadores de acesso à prática.

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar alguns conceitos que já havia estudado, como classes, objetos e construtores. Essa primeira atividade me fez rever alguns conceitos que eu já havia visto há algum tempo em Java. Como fiz ED em **C++**, não tive dificuldade de migrar o conceito de **OO** para a linguagem que estamos fazendo na disciplina. Aprendi também alguns métodos especiais do **C++** para conversão de strings para inteiros e floats. Soube fazer a prática totalmente.

- **O que tem dificuldade ainda?**
De saber utilizar alguns recursos específicos do **C++** para algumas soluções isoladas. Acho que isso tem a ver com a prática. Com a prática ao decorrer da disciplina acredito que isso irá melhorar.

- **Quanto tempo levou pra fazer a atividade?**
Contando o tempo que tirei para revisar os conceitos básicos de **OO**, rever a vídeo aula e implementar o código do zero, acredito que levei cerca de 7/8 horas para a realização da tarefa. 


# Relatório de POO - Prática 2 - Topic.

- **O que você fez?**
Fiz o código da segunda prática da disciplina de POO referente a Topic. Foi necessário rever as aulas passadas em sala referentes ao cinema. Fiz todos os pontos pedidos na prática. (Estou editando o relatório depois porque achei melhor especificar esse tópico. Fiz a prática bem antes, no início do semestre).

- **Com quem e como você fez?**
Essa segunda prática fiz sozinho. Primeiramente fiz o upload da prática utilizando variáveis booleanas. Logo mais tentei a prática com ponteiros.  

- **O que aprendeu e sabe fazer?**
Aprendi a usar ponteiros fazendo comparações com o código do cinema. Também revisei conceitos de modulação para a prática juntamente com a criação de um Makefile mais completo. Já sei fazer o básico de **OO**, como classes, objetos, construtores, modificadores de acesso e destrutores.

- **O que tem dificuldade ainda?**
Tenho algumas dificuldades relacionadas a algumas funções prontas do **C++**. Também devo me atentar para o uso de ponteiros. 

- **Quanto tempo levou pra fazer a atividade?**
Levei mais ou menos meio dia para a realização da tarefa. Tive que rever as aulas gravadas e também fazer alguns exemplos envolvendo ponteiros.


# Relatório de POO - Prática 3 - Contatos.

- **O que você fez?**
Fiz a prática referente a atividade dos contatos. De todas os requisitos pedidos fiz todos os pontos como:

- **Definir nome**
- **Inserir telefones nos contatos**
- **Remover telefones do contato**
- **Atualizar os contatos por lote**
- **Processando números de telefone**

Além desses, eu fiz uma classe extra que servia como uma agenda para a inserção de diversos contatos. Chamei essa classe de Lista, que por sua vez irá possuir vários contatos com seus respectivos números, id's e labels. Também coloquei uma opção extra para excluir um contato de uma só vez.

- **Com quem e como você fez?**
Fiz essa prática sozinho. Desenvolvi a prática utilizando as aulas gravadas e também pedi ajuda na monitoria. Estava errando algumas coisas como procura e inserção de elementos nos contatos.

- **O que aprendeu e sabe fazer?**
Aprendi a utilizar um recurso legal, que são os templates. A única coisa que coloquei no meu código diferente do que foi passado em aula foi esse recurso. Tirei exemplos parecidos desse site para tomar como referência:
**https://www.geeksforgeeks.org/templates-cpp/**. Também aprendi algumas relações entre inserção e remoção em vetores de objetos. Estava confundindo um pouco como modificava atributos de objetos em um vetor. Aprendi a organizar essas ideias.

- **O que tem dificuldade ainda?**
Me atentar ao fato de que sempre pra facilitar minha vida eu terei sempre que usar um array de objetos, e em cima desses conceitos, trabalhar o que é pedido em cada atividade.

- **Quanto tempo levou pra fazer a atividade?**
Essa atividade na verdade foi feita por partes. Tirei um horário de almoço pra tirar dúvidas com a monitoria, outra parte da noite pra assistir as aulas e outra parte para estudar sobre templates, no dia seguinte. Foi mais ou menos uns 3 dias, juntando tudo, com mais ou menos 2 a 3 horas dedicadas para o desenvolvimento da atividade.

Estou atualizando a mesma prática em partes para seguir a mesma lógica do repositório. Não coloquei modificações, apenas modulei o código todo. 


# Relatório de POO - Prática 4 - Tamagotchi.

- **O que você fez?**
Fiz a prática referente a atividade do Tamagotchi. De todas os requisitos pedidos fiz todos os pontos como:

- **Inicializar**
- **Comendo, Jogando, Dormindo e tomando banho**
- **Morrendo**

- **Com quem e como você fez?**
Fiz essa prática sozinho. Utilizei todos meus conhecimentos adquiridos na disciplina até agora para a realização da mesma.

- **O que aprendeu e sabe fazer?**
Aprendi a organizar mais os atributos e métodos nas classes. Por ser uma prática simples a mesma é muito interessante para reforçar conceitos iniciais.

- **O que tem dificuldade ainda?**
Não encontrei dificuldades referentes ao Tamagotchi. 

- **Quanto tempo levou pra fazer a atividade?**
Referente as passadas, essa atividade foi bem rápida de ser feita. Demorei cerca de 1h e 30 minutos. 


# Relatório de POO - Prática 5 - Agiota.

- **O que você fez?**
Fiz a prática referente a atividade do Agiota. De todos os requisitos pedidos fiz todos os pontos como: Iniciar Sistema, Cadastrar Clientes, Emprestar Dinheiro, Mostrar cliente, Receber dinheiro e Matar Cliente.

- **Com quem e como você fez?**
Fiz essa prática sozinho. Utilizei os códigos exemplo e todas as práticas feitas até aqui.

- **O que aprendeu e sabe fazer?**
Aprendi a organizar melhor a questão dos vetores de objetos e como manipulá-los. 

- **O que tem dificuldade ainda?**
Não encontrei dificuldades referentes a esta prática.

- **Quanto tempo levou pra fazer a atividade?**
Levei cerca de 3 h para completar a atividade. Tive que lidar com alguns erros também que obtive no código final, porém a correção dos mesmos foi bem rápido.  


# Relatório de POO - Prática 6 - Contatos com Repositório (CRUD).

- **O que você fez?**
Como foi comentado em aula, foi deixado livre o Agiota ou os Contatos para serem feitos na forma de repositório. Escolhi os Contatos para fazer e fiz os requisitos pedidos na prática.

- **Com quem e como você fez?**
Obtive ajuda de alguns colegas para fazer o código, uma vez que senti um pouco de dificuldade na ideia do repositório. Fiz com meu parceiro Allisson Jardel. Além da ajuda dos colegas, também fui nas monitorias e assisti as aulas para fazer o código. Modifiquei a prática dos Contatos com uso dos ponteiros dessa vez. 

- **O que aprendeu e sabe fazer?**
Aprendi o conceito e a implementação de repositórios. Deu pra fazer uma ligação com a disciplina de Banco de Dados quando programei em SQL. 

- **O que tem dificuldade ainda?**
Apesar de ter aprendido a ideia dos repositórios eu ainda necessito olhar a mesma prática para saber desenvolver o conceito. 

- **Quanto tempo levou pra fazer a atividade?**
Demorei alguns dias dedicando algumas horas. Juntando as monitorias, as ajudas que procurei dos colegas e as aulas assistidas, demorei cerca de 5 ou 6 horas para a realização da tarefa. 


# Relatório de POO - Prática 7 - Repositório (CRUD).

- **O que você fez?**
Fiz a prática referente ao Repositório com todas os requisitos pedidos como cadastrar alunos, professores e disciplinas. Os alunos possuem uma chave única que é matrícula, curso e nome. Os professores têm nome, siape e nível e as Disciplinas possuem código curso e nome.
- **Com quem e como você fez?**
Fiz essa prática sozinho. Acho que das práticas que tivemos até agora essa foi a mais complicada que implementei. Tive que assistir todas as aulas de repositório novamente umas mil vezes (isso foi sério) e implementar exemplos simples para fixar mais o conteúdo. Tive que ainda aprender a utilizar métodos de exceção como throw, try e catch para lançar os erros no terminal. Essa parte foi a mais simples, mas o resto não foi tão trivial. Depois de diversas tentativas o negócio deu certo. 

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar o conceito de templates já que eu já vinha de algumas práticas utilizando este tipo de recurso e também aprendi o que o erro maldito **No match for 'operator<<' in std::cout [duplicate]** queria dizer. Foi um erro que tava dando no meu código mas eu simplesmente não entendia o porquê daquele negócio tá dando errado. Consultei esse tópico no stack overflow para resolver meu problema: **https://stackoverflow.com/questions/15449508/no-match-for-operator-in-stdcout**. Nesse tópico tirei minhas dúvidas sobre esse erro que tava dando. Aprendi o conceito de sobrecarga de operadores **<<** e **>>** para as classes. Aprendi que o operador **<<** sobrecarregado retorna uma referência ao objeto original de **ostream** (Tive que saber também esse tipo de conceito). Era só fazer: 

**std::ostream& operator<< (std::ostream &str, const PersonInfo &p)**

Não sei porque a gente passa a classe como **const**, mas deu certo. =) 

- **O que tem dificuldade ainda?**
De tanto fazer essa prática eu aprendi a reforçar todas as minhas dificuldades até aqui. Ainda preciso tomar cuidado quando lidamos com templates nas classes. 

- **Quanto tempo levou pra fazer a atividade?**
Acredito que levei um final de semana pra fazer. Foi bastante complicado entender os conceitos de repositório mas felizmente deu tudo certo no final. Foram muitas (literalmente muitas) horas dedicadas para a execução dessa prática. Acho que foi a mais difícil até agora.

Estou colocando o arquivo da prática modulado algumas semanas depois da atividade já feita, já que tive preguiça de modular o código da prática 7 na semana da entrega. Decidi fazer isso para não quebrar a ideia das pastas (src e inc) do repositório. 


# Relatório de POO - Prática 8 - Serviço de Anotações

- **O que você fez?**
Fiz a prática referente ao serviço de anotações com todos os pontos pedidos na tarefa.

- **Com quem e como você fez?**
Fiz a prática sozinho e utilizei de código exemplo as minhas práticas passadas e também os exemplos dados em aula.

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar meus conceitos sobre repositório, já que fiz a prática usando este tipo de conceito.

- **O que tem dificuldade ainda?**
Acredito que melhorei bastante na ideia dos repositórios e não encontrei tanta dificuldade nessa atividade como eu tive na passada.

- **Quanto tempo levou pra fazer a atividade?**
Acredito que levei cerca de 2 h para fazer a atividade. 


# Relatório de POO - Prática 9 - Trem Versão 2 (Feito em Sala)

- **O que você fez?**
Continuei a prática do trem começado em sala e fiz as partes que faltavam como o método desembarcar. 

- **Com quem e como você fez?**
Fiz essa prática sozinho revendo as aulas no YouTube.

- **O que aprendeu e sabe fazer?**
Tive que aprender o que era polimorfismo e métodos virtuais já que estava com um pouco de dificuldades nesses tópicos.

- **O que tem dificuldade ainda?**
Tenho um pouco de dificuldade em polimorfismo ainda, mas acredito que com o decorrer das práticas eu vá melhorando nesse quesito.

- **Quanto tempo levou pra fazer a atividade?**
Acredito que levei cerca de 2 h para realização da prática.


# Relatório de POO - Prática 10 - Cálculo de Salário

- **O que você fez?**
Fiz a prática referente ao Cálculo de Salário com todos os requisitos pedidos.

- **Com quem e como você fez?**
Como tive algumas semanas um pouco sobrecarregadas(encontros universitários e diversas provas) eu necessitei da ajuda do meu colega Alisson Jardel para a conclusão da atividade. Tirei algumas dúvidas de como fazia alguns métodos da prática.

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar o conceito de herança e aplicar em outras necessidades.

- **O que tem dificuldade ainda?**
Tive dificuldades no conceito de herança, porém com a ajuda que obtive resolvi meus problemas. 

- **Quanto tempo levou pra fazer a atividade?**
Dediquei algumas horas no decorrer da semana dos encontros para a realização da tarefa. Acredito que, juntando tudo, deva ter dado em média cerca de 3 horas.


# Relatório de POO - Prática 11 - Trem (Versão Completa)

- **O que você fez?**
Fiz todos os requisitos pedidos na tarefa. 

- **Com quem e como você fez?**
Fiz a prática sozinho e necessitei das aulas gravadas e meus projetos anteriores para fazer o código.

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar o conceito de herança e polimorfismo.

- **O que tem dificuldade ainda?**
Tenho dificuldade ainda com o conceito de polimorfismo, mas acredito que com as práticas melhorarei nesse quesito.

- **Quanto tempo levou pra fazer a atividade?**
Levei cerca de 3 h para a realização da tarefa.


# Relatório de POO - Prática 12 - Twitter

- **O que você fez?**
Fiz a prática do Twitter com todos os requisitos pedidos na tarefa.

- **Com quem e como você fez?**
Fiz a prática sozinho e necessitei da ajuda da monitoria em alguns pontos. 

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar todos os conceitos que aprendi ao longo da disciplina.

- **O que tem dificuldade ainda?**
Minhas dificuldades em relação a esta tarefa foram poucas, acredito mesmo que só na parte de polimorfismo.

- **Quanto tempo levou pra fazer a atividade?**
Dividi dois dias do final de semana para a realização da tarefa. 2 horas no sábado e 3 horas no domingo para o término. As dúvidas que tirei na monitoria ajudaram bastante em alguns tópicos.

# Relatório de POO - Prática 13 - Hospital

- **O que você fez?**
Fiz a prática do Hospital. Não fiz a parte que os médicos mandam mensagens para seus pacientes (até fiz, mas está dando erro).

- **Com quem e como você fez?**
Fiz a prática sozinho, mas necessitei de ajuda da monitoria em maior parte. 

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar um pouco mais sobre uso dos templates, já que havia me esquecido um pouco e aprendi sobre a questão da associação, já que era um conceito de ampla dificuldade minha.

- **O que tem dificuldade ainda?**
Tive dificuldades de vincular pacientes e médicos.

- **Quanto tempo levou pra fazer a atividade?**
Levei uns 4 dias para a realização da atividade.


# Relatório de POO - Prática Extra - Conta Bancária.

- **O que você fez?**
Fiz a prática proposta que serviria como ponto extra. Fiz todos os pontos propostos na atividade, como Iniciar, Saque, Depósito e Tarifas, Retornar o extrato e extornar as tarifas. 

- **Com quem e como você fez?**
Fiz a prática sozinho vendo todas as aulas novamente no YouTube. Precisei de ajuda dos monitores para esclarecer algumas dúvidas referente a esta atividade. Utilizei um recurso do **c++** chamado de templates, já que achei esse recurso estudando algumas coisas específicas da linguagem. Achei interessante o seu uso, e decidi utilizar na prática. Peguei alguns exemplos deste site para colocar no meu código: **https://www.geeksforgeeks.org/templates-cpp/**. A utilização foi bastante simples, e estarei utilizando esse recurso em outras práticas também, além de ser muito útil. 

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar conceitos de arrays de objetos e como manipulá-los em diversos casos. Já pude perceber um grande avanço em relação a utilização da linguagem. 

- **O que tem dificuldade ainda?**
Tenho algumas dificuldades quando relacionado a utilização de ponteiros em alguns casos, quando devo passar as coisas por parâmetro ou definição. Preciso atentar mais para estes conceitos.

- **Quanto tempo levou pra fazer a atividade?**
Fiz essa atividade distribuída em alguns dias. Pedi ajuda aos monitores em um dia, e no final de semana mesmo eu pude concluir a atividade. Foram 2 horas dedicadas no Sábado e 3 horas dedicadas no domingo. 





