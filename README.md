Este repositório contém a resolução de todos os 52 exercícios da lista, em um único arquivo (`programa.c`).

## Explicação de cada exercício

### Exercícios Básicos

**1. Cinco primeiros naturais** — laço `for` de 1 a 5, imprimindo o contador a cada volta.

**2. Cinco primeiros negativos** — laço `for` decrescente, de -1 até -5.

**3. Soma de dois números** — lê dois valores com `scanf` e imprime `a + b`.

**4. Multiplicação de dois números** — mesma lógica da soma, trocando o operador para `*`.

**5. Sucessor de um número** — lê `n` e imprime `n + 1`.

**6. Raiz quadrada** — usa a função `sqrt()` da biblioteca `math.h`.

**7. Quadrado de um número** — calcula `n * n`.

**8. Potenciação cruzada (a^b e b^a)** — usa `pow(a, b)` e `pow(b, a)` para calcular as duas potências.

**9. Resto da divisão** — usa o operador `%`, que em C devolve o resto de uma divisão inteira.

**10. Quociente da divisão inteira** — usa o operador `/` entre dois `int`, que descarta a parte decimal.

**11. Contagem de positivos, negativos e zeros** — laço que lê 5 valores, com um `if/else if/else` que soma em contadores separados (`pos`, `neg`, `zero`) conforme o sinal do número.

**12. Próximos 10 pares (se o número lido for par)** — usa `n % 2 == 0` para verificar paridade; se for par, um laço soma 2 a cada iteração para gerar os pares seguintes.

**13. Cinco sucessores** — laço `for` que imprime `n + 1` até `n + 5`.

**14. Algoritmo ECO** — lê e imprime cada número imediatamente, dentro do mesmo laço (sem guardar os valores).

**15. Média de 5 notas** — acumula a soma das notas em um laço e divide por 5 ao final.

**16. Média de idade de 3 pessoas** — soma as três idades lidas e divide por 3.

**17. Hipotenusa** — aplica o Teorema de Pitágoras: `sqrt(cateto1² + cateto2²)`.

**18. Tabuada do 4** — laço `for` de 1 a 10, multiplicando `4 * i`.

**19. Quantidade de positivos entre 5 números** — parecido com o exercício 11, mas só conta os positivos.

**20. Pares e ímpares entre 10 números** — usa `num % 2` para decidir em qual contador somar (dica dada no próprio enunciado).

**21. Produto por somas sucessivas** — em vez de usar `a * b`, soma `a` dentro de um laço que repete `b` vezes (ex: 3×5 = 3+3+3+3+3).

**22. Tabuada de vários números, com opção de continuar** — usa um laço `while` controlado por uma variável `continuar`, que só para quando o usuário digita `0`.

**23. Estatísticas de altura e sexo (loop até altura ≤ 0)** — usa `while(1)` com um `break` quando a condição de parada é atingida. Dentro do laço, atualiza a maior e a menor altura, conta homens/mulheres e soma as alturas das mulheres para depois calcular a média e o percentual abaixo de 1,68m.

**24. Somatório 50/1 + 49/2 + ... + 1/50** — usa duas variáveis que mudam em sentidos opostos: o numerador começa em 50 e diminui, o denominador começa em 1 e aumenta.

**25. Área total de uma residência** — soma `largura * comprimento` de cada cômodo dentro de um laço controlado pela confirmação do usuário (1 = continuar, 0 = parar).

**26. Sequência triangular de números repetidos** — função auxiliar `imprimeSequencia(n)` com dois laços aninhados: o laço externo controla a linha (`i`), o laço interno imprime o número `i` repetido `i` vezes.

**27. Soma de ímpares consecutivos até atingir N** — soma os números ímpares (1, 3, 5, 7...) até que a soma alcance ou ultrapasse `N`, contando quantos termos (`M`) foram somados — que corresponde à raiz quadrada de `N`, já que `N` é um quadrado perfeito.

**28. Pesquisa com 50 pessoas (altura e sexo)** — laço `for` fixo de 50 repetições (diferente do 23, que usava uma condição de parada), acumulando as mesmas estatísticas.

**29. Cálculo de diárias de hotel com desconto progressivo** — usa `if/else if/else` para decidir a faixa de desconto (5%, 10% ou 15%) conforme a quantidade de diárias, dentro de um laço que só para quando o usuário digita `0`.

### Exercícios de Fixação

**30. Tabuada de um número (0 a 9)** — igual ao exercício 18, mas genérico para qualquer número digitado.

**31. Gasto total de um fumante** — calcula o preço por cigarro (`preço da carteira / 20`) e multiplica pelos dias fumados (`anos * 365`) e pelos cigarros por dia.

**32 a 35. Fórmulas geométricas (círculo, esfera e cilindro)** — aplicação direta das fórmulas de comprimento da circunferência, área do círculo, volume da esfera e volume do cilindro, usando a constante `3.14159` para π.

**36. Quantidade de lâmpadas necessárias** — calcula a área do cômodo, multiplica por 18 (watts/m² exigidos) e divide pela potência da lâmpada escolhida, arredondando para cima com `ceil()` (porque não existe "meia lâmpada").

**37. Consumo do veículo (odômetro e combustível)** — calcula a distância rodada (`depois - antes`), o rendimento (`km / litros`) e o custo da viagem (`litros * preço do litro`).

**38. Salário líquido de funcionário** — calcula o salário bruto (`horas * 3,00 + dependentes * 100,00`) e aplica o desconto de 13,5%.

**39. Custo ao consumidor de um carro** — soma o custo de fábrica com a porcentagem do distribuidor (28%) e os impostos (45%), ambos calculados sobre o valor de fábrica.

**40. Cálculo de D = (R+S)/2** — usa `pow()` para calcular `R = (A+B)²` e `S = (B+C)²`, depois aplica a fórmula final.

**41. Salário de vendedor de carros** — soma salário fixo + (carros vendidos × valor fixo por carro) + 5% do total de vendas.

**42 e 43. Conversão de temperatura (Celsius ↔ Fahrenheit)** — aplicação direta das fórmulas de conversão em cada sentido.

**44. Escala de temperaturas de 0 a 50°C** — dois laços `for` que avançam de 10 em 10, um imprimindo a escala em Celsius e outro convertendo cada valor para Fahrenheit.

**45. Soma dos termos de uma PA** — calcula a quantidade de termos (`n`) a partir da razão, do primeiro e do último termo, e depois aplica a fórmula da soma da PA: `n * (primeiro + último) / 2`.

**46. Distância euclidiana entre dois pontos** — aplica a fórmula da distância: `sqrt((x2-x1)² + (y2-y1)²)`.

**47. Comissão por produtos vendidos (vários funcionários)** — pede a quantidade de funcionários a processar, e para cada um aplica uma faixa de comissão por produto (`if/else if/else`), acumulando a soma dos salários e controlando o maior salário fixo.

**48. Bola quicando (altura e distância percorrida)** — em um laço que repete `N` vezes, a altura do salto é multiplicada pelo coeficiente `R` a cada iteração, e a distância percorrida soma duas vezes essa altura (subida + descida).

**49. Uso do restaurante universitário** — laço `while(1)` com `break` quando o valor digitado é negativo; classifica cada resposta em uma de três faixas de uso e calcula os percentuais no final.

**50. Jogo de adivinhação** — laço `for` limitado a 4 tentativas; se o número digitado bater com o número secreto, informa em qual tentativa o jogador acertou e interrompe o laço com `break`.

**51. Retângulo de asteriscos** — valida se `linhas` e `colunas` estão dentro da faixa permitida (1 a 20), ajustando os valores fora da faixa, e depois usa dois laços aninhados para desenhar o retângulo.

**52. Pesquisa de salário e acidente de trabalho** — laço `while(1)` até salário negativo; aplica o desconto de 10% de IR para salários acima de R$ 1.500,00 e acumula a idade de quem já sofreu acidente para calcular a média no final.



 Observações gerais

- Todas as entradas são feitas via `scanf`, seguindo o tipo de dado pedido (`int`, `float`).
- Exercícios que envolvem "até o usuário informar X para encerrar" foram implementados com laços `while(1)` + `break`, que é o padrão mais claro em C para esse tipo de repetição com condição de parada no meio do processo.
- Fórmulas matemáticas (raiz quadrada, potência, arredondamento) usam a biblioteca `math.h` — por isso é necessário compilar com a flag `-lm`.
- O código foi organizado em funções para manter o `main()` limpo, facilitar a navegação entre exercícios e permitir testar qualquer questão isoladamente pelo menu.
