# Relatório de POO - Prática 7 - Repositório (CRUD).

- **O que você fez?**
Fiz a prática referente ao Repositório com todas os requisitos pedidos como cadastrar alunos, professores e disciplinas. Os alunos possuem uma chave única que é matrícula, curso e nome. Os professores têm nome, siape e nível e as Disciplinas possuem código curso e nome.
- **Com quem e como você fez?**
Fiz essa prática sozinho. Acho que das práticas que tivemos até agora essa foi a mais complicada que implementei. Tive que assistir todas as aulas de repositório novamente umas mil vezes (isso foi sério) e implementar exemplos simples para fixar mais o conteúdo. Tive que ainda aprender a utilizar métodos de exceção como throw, try e catch para lançar os erros no terminal. Essa parte foi a mais simples, mas o resto não foi tão trivial. Depois de diversas tentativas o negócio deu certo. 

- **O que aprendeu e sabe fazer?**
Aprendi a reforçar o conceito de templates já que eu já vinha de algumas práticas utilizando este tipo de recurso e também aprendi o que o erro maldito **No match for 'operator<<' in std::cout [duplicate]** queria dizer. Foi um erro que tava dando no meu código mas eu simplesmente não entendia o porquê daquele negócio tá dando errado. Consultei esse tópico no stack overflow para resolver meu problema: **https://stackoverflow.com/questions/15449508/no-match-for-operator-in-stdcout**. Nesse tópico tirei minhas dúvidas sobre esse erro que tava dando, era só fazer:

**std::ostream& operator<< (std::ostream &str, const PersonInfo &p)**

Não sei porque a gente passa a classe como **const**, mas deu certo. =) 

- **O que tem dificuldade ainda?**
De tanto fazer essa prática eu aprendi a reforçar todas as minhas dificuldades até aqui. Ainda preciso tomar cuidado quando lidamos com templates nas classes. 

- **Quanto tempo levou pra fazer a atividade?**
Acredito que levei um final de semana pra fazer. Foi bastante complicado entender os conceitos de repositório mas felizmente deu tudo certo no final. Foram muitas (literalmente muitas) horas dedicadas para a execução dessa prática. Acho que foi a mais difícil até agora.
