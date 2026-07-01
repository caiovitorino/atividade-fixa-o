
/* ============================ EXERCICIOS BASICOS ============================ */

/* 1. Imprimir os 5 primeiros numeros naturais. */
void ex01(void) {
    for (int i = 1; i <= 5; i++) printf("%d\n", i);
}

/* 2. Imprimir os 5 primeiros numeros negativos. */
void ex02(void) {
    for (int i = -1; i >= -5; i--) printf("%d\n", i);
}

/* 3. Ler dois numeros e imprimir a soma deles. */
void ex03(void) {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Soma = %.2f\n", a + b);
}

/* 4. Ler dois numeros e imprimir a multiplicacao entre eles. */
void ex04(void) {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Produto = %.2f\n", a * b);
}

/* 5. Ler um numero e imprimir seu sucessor. */
void ex05(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Sucessor = %d\n", n + 1);
}

/* 6. Ler um numero e imprimir sua raiz quadrada. */
void ex06(void) {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("Raiz quadrada = %.2f\n", sqrt(n));
}

/* 7. Ler um numero e imprimir seu quadrado. */
void ex07(void) {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("Quadrado = %.2f\n", n * n);
}

/* 8. Ler dois inteiros e imprimir o 1o elevado ao 2o e depois o 2o elevado ao 1o. */
void ex08(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("%d ^ %d = %.0f\n", a, b, pow(a, b));
    printf("%d ^ %d = %.0f\n", b, a, pow(b, a));
}

/* 9. Ler dois inteiros e imprimir o resto da divisao entre eles. */
void ex09(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Resto = %d\n", a % b);
}

/* 10. Ler dois inteiros e imprimir o quociente da divisao inteira entre eles. */
void ex10(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Quociente = %d\n", a / b);
}

/* 11. Ler 5 valores e contar quantos sao negativos, positivos e zero. */
void ex11(void) {
    int pos = 0, neg = 0, zero = 0;
    float v;
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v);
        if (v > 0) pos++;
        else if (v < 0) neg++;
        else zero++;
    }
    printf("Positivos: %d | Negativos: %d | Zeros: %d\n", pos, neg, zero);
}

/* 12. Ler um numero, se for par, imprimir os proximos 10 numeros pares. */
void ex12(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (int i = 1; i <= 10; i++) printf("%d\n", n + 2 * i);
    } else {
        printf("O numero informado nao e par.\n");
    }
}

/* 13. Ler um numero e imprimir 5 sucessores deste numero. */
void ex13(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++) printf("%d\n", n + i);
}

/* 14. Algoritmo ECO: ler 5 numeros e imprimir cada um imediatamente apos a leitura. */
void ex14(void) {
    float n;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%f", &n);
        printf("Voce digitou: %.2f\n", n);
    }
}

/* 15. Calcular e imprimir a media aritmetica de 5 notas. */
void ex15(void) {
    float nota, soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    printf("Media = %.2f\n", soma / 5);
}

/* 16. Ler a idade de tres individuos e imprimir a media de idade deles. */
void ex16(void) {
    int a, b, c;
    printf("Digite as tres idades: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Media de idade = %.2f\n", (a + b + c) / 3.0);
}

/* 17. Ler os catetos de um triangulo retangulo e calcular a hipotenusa. */
void ex17(void) {
    float cat1, cat2;
    printf("Digite os dois catetos: ");
    scanf("%f %f", &cat1, &cat2);
    printf("Hipotenusa = %.2f\n", sqrt(cat1 * cat1 + cat2 * cat2));
}

/* 18. Imprimir a tabuada do numero 4. */
void ex18(void) {
    for (int i = 1; i <= 10; i++) printf("4 x %d = %d\n", i, 4 * i);
}

/* 19. Ler 5 numeros e imprimir quantos numeros positivos foram digitados. */
void ex19(void) {
    float n;
    int cont = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%f", &n);
        if (n > 0) cont++;
    }
    printf("Quantidade de positivos: %d\n", cont);
}

/* 20. Ler 10 numeros e indicar a quantidade de pares e impares. */
void ex20(void) {
    int n, pares = 0, impares = 0, resto;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        resto = n % 2;
        if (resto == 0) pares++;
        else impares++;
    }
    printf("Pares: %d | Impares: %d\n", pares, impares);
}

/* 21. Ler dois inteiros e mostrar o produto atraves de somas sucessivas. */
void ex21(void) {
    int a, b, soma = 0;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++) soma += a;
    printf("%d x %d = %d\n", a, b, soma);
}

/* 22. Imprimir a tabuada dos numeros solicitados pelo usuario, com opcao de continuar. */
void ex22(void) {
    int num, continuar = 1;
    while (continuar == 1) {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++) printf("%d * %d = %d\n", num, i, num * i);
        printf("Deseja continuar? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }
}

/* 23. Altura e sexo de um grupo, ate ser informada altura <= 0. */
void ex23(void) {
    float altura, maior = -1, menor = 999999, somaAlturaMulheres = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;

    while (1) {
        printf("Digite a altura (<=0 para encerrar): ");
        scanf("%f", &altura);
        if (altura <= 0) break;

        printf("Digite o sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);

        if (altura > maior) maior = altura;
        if (altura < menor) menor = altura;

        if (sexo == 1) {
            homens++;
        } else {
            mulheres++;
            somaAlturaMulheres += altura;
            if (altura < 1.68) mulheresAbaixo++;
        }
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Numero de homens: %d\n", homens);
    printf("Media de altura das mulheres: %.2f\n",
           mulheres > 0 ? somaAlturaMulheres / mulheres : 0);
    printf("Percentual de mulheres abaixo de 1.68: %.2f%%\n",
           mulheres > 0 ? (100.0 * mulheresAbaixo / mulheres) : 0);
}

/* 24. Somatorio S = 50/1 + 49/2 + 48/3 + ... + 1/50. */
void ex24(void) {
    float soma = 0;
    int numerador = 50;
    for (int denominador = 1; denominador <= 50; denominador++) {
        soma += (float) numerador / denominador;
        numerador--;
    }
    printf("Somatorio = %.2f\n", soma);
}

/* 25. Area total de uma residencia, somando comodos ate o usuario informar 0. */
void ex25(void) {
    float largura, comprimento, areaTotal = 0;
    int continuar = 1;

    while (continuar == 1) {
        printf("Digite a largura e o comprimento do comodo: ");
        scanf("%f %f", &largura, &comprimento);
        areaTotal += largura * comprimento;

        printf("Deseja continuar? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }
    printf("Area total da residencia = %.2f m2\n", areaTotal);
}

/* 26. Sequencia: linha i tem o numero i repetido i vezes, ate a linha n. */
void imprimeSequencia(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
}
void ex26(void) {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    imprimeSequencia(n);
}

/* 27. Soma de impares consecutivos ate atingir N (quadrado perfeito); M = raiz de N. */
void ex27(void) {
    int n;
    while (1) {
        printf("Digite N (0 para encerrar): ");
        scanf("%d", &n);
        if (n == 0) break;

        int soma = 0, termoImpar = 1, m = 0;
        while (soma < n) {
            soma += termoImpar;
            termoImpar += 2;
            m++;
        }
        printf("Raiz quadrada de %d = %d (somando %d termos)\n", n, m, m);
    }
}

/* 28. Pesquisa com 50 pessoas: altura e sexo (0-masc, 1-fem). */
void ex28(void) {
    float altura, somaAlturaMulheres = 0, somaAlturaTotal = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;

    for (int i = 0; i < 50; i++) {
        printf("Pessoa %d - altura: ", i + 1);
        scanf("%f", &altura);
        printf("Pessoa %d - sexo (0-Masc / 1-Fem): ", i + 1);
        scanf("%d", &sexo);

        somaAlturaTotal += altura;
        if (sexo == 0) {
            homens++;
        } else {
            mulheres++;
            somaAlturaMulheres += altura;
            if (altura < 1.65) mulheresAbaixo++;
        }
    }

    printf("Media de altura das mulheres: %.2f\n",
           mulheres > 0 ? somaAlturaMulheres / mulheres : 0);
    printf("Media de altura da populacao: %.2f\n", somaAlturaTotal / 50);
    printf("Percentual de homens: %.2f%%\n", 100.0 * homens / 50);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Percentual de mulheres abaixo de 1.65: %.2f%%\n",
           mulheres > 0 ? (100.0 * mulheresAbaixo / mulheres) : 0);
}

/* 29. Diarias de hotel com desconto progressivo, ate ser informado 0. */
void ex29(void) {
    const float VALOR_DIARIA = 150.0;
    int dias, hospedes = 0, maisDe20Dias = 0;
    float valorConta, somaValores = 0, somaDias = 0, maiorConta = 0;

    while (1) {
        printf("Quantidade de diarias (0 para encerrar): ");
        scanf("%d", &dias);
        if (dias == 0) break;

        hospedes++;
        float desconto;
        if (dias <= 5) desconto = 0.05;
        else if (dias <= 10) desconto = 0.10;
        else desconto = 0.15;

        valorConta = dias * VALOR_DIARIA * (1 - desconto);

        if (dias > 20) maisDe20Dias++;
        somaValores += valorConta;
        somaDias += dias;
        if (valorConta > maiorConta) maiorConta = valorConta;

        printf("Valor a pagar: R$ %.2f\n", valorConta);
    }

    printf("Hospedes com mais de 20 dias: %d\n", maisDe20Dias);
    printf("Media do valor das contas: R$ %.2f\n", hospedes > 0 ? somaValores / hospedes : 0);
    printf("Media de dias de permanencia: %.2f\n", hospedes > 0 ? somaDias / hospedes : 0);
    printf("Maior conta paga: R$ %.2f\n", maiorConta);
}

/* ============================ EXERCICIOS DE FIXACAO ============================ */

/* 30. Ler um numero natural entre 0 e 9 e imprimir sua tabuada. */
void ex30(void) {
    int n;
    printf("Digite um numero entre 0 e 9: ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
}

/* 31. Anos fumando, cigarros por dia, preco da carteira -> total gasto. */
void ex31(void) {
    int anos, cigarrosPorDia;
    float precoCarteira;
    printf("Anos fumando, cigarros/dia e preco da carteira: ");
    scanf("%d %d %f", &anos, &cigarrosPorDia, &precoCarteira);

    float precoPorCigarro = precoCarteira / 20.0; /* carteira com 20 cigarros */
    float totalGasto = anos * 365 * cigarrosPorDia * precoPorCigarro;
    printf("Total gasto em cigarros: R$ %.2f\n", totalGasto);
}

/* 32. Ler o raio e calcular o comprimento do circulo. */
void ex32(void) {
    float r;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Comprimento = %.2f\n", 2 * 3.14159 * r);
}

/* 33. Ler o raio e calcular a area do circulo. */
void ex33(void) {
    float r;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", 3.14159 * r * r);
}

/* 34. Ler o raio e calcular o volume da esfera. */
void ex34(void) {
    float r;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Volume = %.2f\n", (4.0 / 3.0) * 3.14159 * r * r * r);
}

/* 35. Ler o raio e a altura e calcular o volume do cilindro. */
void ex35(void) {
    float r, h;
    printf("Digite o raio e a altura: ");
    scanf("%f %f", &r, &h);
    printf("Volume = %.2f\n", 3.14159 * r * r * h);
}

/* 36. Numero de lampadas necessarias para iluminar um comodo (18 W/m2). */
void ex36(void) {
    float potenciaLampada, largura, comprimento;
    printf("Potencia da lampada (W), largura e comprimento (m): ");
    scanf("%f %f %f", &potenciaLampada, &largura, &comprimento);

    float areaComodo = largura * comprimento;
    float wattsNecessarios = areaComodo * 18.0;
    int lampadas = (int) ceil(wattsNecessarios / potenciaLampada);

    printf("Lampadas necessarias: %d\n", lampadas);
}

/* 37. Odometro antes/depois e litros gastos -> km rodados, km/l e custo da viagem. */
void ex37(void) {
    float odometroAntes, odometroDepois, litros, precoCombustivel;
    printf("Odometro antes, depois, litros gastos e preco do litro: ");
    scanf("%f %f %f %f", &odometroAntes, &odometroDepois, &litros, &precoCombustivel);

    float kmRodados = odometroDepois - odometroAntes;
    printf("Quilometragem rodada: %.2f km\n", kmRodados);
    printf("Quilometros por litro: %.2f km/l\n", kmRodados / litros);
    printf("Custo da viagem: R$ %.2f\n", litros * precoCombustivel);
}

/* 38. Salario liquido de um funcionario (R$3,00/hora, R$100,00/dependente, 13,5% desconto). */
void ex38(void) {
    char nome[50];
    float horasTrabalhadas;
    int dependentes;

    printf("Nome do funcionario: ");
    scanf("%s", nome);
    printf("Horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Numero de dependentes: ");
    scanf("%d", &dependentes);

    float salarioBruto = horasTrabalhadas * 3.00 + dependentes * 100.00;
    float salarioLiquido = salarioBruto * (1 - 0.135);

    printf("Funcionario: %s | Salario liquido: R$ %.2f\n", nome, salarioLiquido);
}

/* 39. Custo ao consumidor: fabrica + 28% distribuidor + 45% impostos (sobre a fabrica). */
void ex39(void) {
    float custoFabrica;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    float distribuidor = custoFabrica * 0.28;
    float impostos = custoFabrica * 0.45;
    float custoConsumidor = custoFabrica + distribuidor + impostos;

    printf("Custo ao consumidor: R$ %.2f\n", custoConsumidor);
}

/* 40. D = (R+S)/2, onde R=(A+B)^2 e S=(B+C)^2. */
void ex40(void) {
    int a, b, c;
    printf("Digite tres numeros inteiros positivos (A B C): ");
    scanf("%d %d %d", &a, &b, &c);

    float r = pow(a + b, 2);
    float s = pow(b + c, 2);
    float d = (r + s) / 2.0;

    printf("D = %.2f\n", d);
}

/* 41. Vendedor de carros: salario fixo + comissao fixa por carro + 5% das vendas. */
void ex41(void) {
    int numeroVendedor, carrosVendidos;
    char nomeVendedor[50];
    float totalVendas, salarioFixo, valorPorCarro;

    printf("Numero do vendedor: ");
    scanf("%d", &numeroVendedor);
    printf("Nome do vendedor: ");
    scanf("%s", nomeVendedor);
    printf("Carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Valor total das vendas: ");
    scanf("%f", &totalVendas);
    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Valor recebido por carro vendido: ");
    scanf("%f", &valorPorCarro);

    float salarioMensal = salarioFixo + (carrosVendidos * valorPorCarro) + (0.05 * totalVendas);

    printf("Vendedor %d - %s | Salario mensal: R$ %.2f\n",
           numeroVendedor, nomeVendedor, salarioMensal);
}

/* 42. Ler temperatura em Celsius e imprimir em Fahrenheit. */
void ex42(void) {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9.0 / 5.0 + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
}

/* 43. Ler temperatura em Fahrenheit e imprimir em Celsius. */
void ex43(void) {
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("Celsius = %.2f\n", celsius);
}

/* 44. Escala de temperaturas de 0 a 50 graus Celsius, de 10 em 10, e correspondente em F. */
void ex44(void) {
    printf("--- Escala em Celsius ---\n");
    for (int c = 0; c <= 50; c += 10) printf("%d C\n", c);

    printf("--- Escala em Fahrenheit ---\n");
    for (int c = 0; c <= 50; c += 10) {
        float f = c * 9.0 / 5.0 + 32;
        printf("%.2f F\n", f);
    }
}

/* 45. Soma dos elementos de uma PA, dados razao, primeiro e ultimo termo. */
void ex45(void) {
    float razao, primeiroTermo, ultimoTermo;
    printf("Digite a razao, o primeiro termo e o ultimo termo da PA: ");
    scanf("%f %f %f", &razao, &primeiroTermo, &ultimoTermo);

    int n = (int) ((ultimoTermo - primeiroTermo) / razao) + 1;
    float soma = n * (primeiroTermo + ultimoTermo) / 2.0;

    printf("Soma da PA = %.2f\n", soma);
}

/* 46. Distancia euclidiana entre dois pontos (X1,Y1) e (X2,Y2). */
void ex46(void) {
    float x1, y1, x2, y2;
    printf("Digite X1 Y1 X2 Y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distancia = %.2f\n", distancia);
}

/* 47. Comissao por produto vendido + salario fixo, para varios funcionarios. */
void ex47(void) {
    int quantidadeFuncionarios;
    printf("Quantos funcionarios deseja processar? ");
    scanf("%d", &quantidadeFuncionarios);

    float somaSalarios = 0, maiorSalarioFixo = 0;

    for (int i = 0; i < quantidadeFuncionarios; i++) {
        int produtosVendidos;
        float salarioFixo;

        printf("Funcionario %d - produtos vendidos: ", i + 1);
        scanf("%d", &produtosVendidos);
        printf("Funcionario %d - salario fixo: ", i + 1);
        scanf("%f", &salarioFixo);

        float comissaoPorProduto;
        if (produtosVendidos <= 5) comissaoPorProduto = 1.50;
        else if (produtosVendidos <= 50) comissaoPorProduto = 2.00;
        else comissaoPorProduto = 2.50;

        float salarioMes = salarioFixo + produtosVendidos * comissaoPorProduto;
        printf("Salario do funcionario %d: R$ %.2f\n", i + 1, salarioMes);

        somaSalarios += salarioMes;
        if (salarioFixo > maiorSalarioFixo) maiorSalarioFixo = salarioFixo;
    }

    printf("Media dos salarios: R$ %.2f\n",
           quantidadeFuncionarios > 0 ? somaSalarios / quantidadeFuncionarios : 0);
    printf("Maior salario fixo: R$ %.2f\n", maiorSalarioFixo);
}

/* 48. Bola quicando: distancia total percorrida e altura do n-esimo salto. */
void ex48(void) {
    float alturaInicial, coeficienteSalto;
    int numeroSaltos;

    printf("Digite a altura inicial (H), o coeficiente (R) e o numero de saltos (N): ");
    scanf("%f %f %d", &alturaInicial, &coeficienteSalto, &numeroSaltos);

    float distanciaTotal = alturaInicial;
    float alturaSaltoAtual = alturaInicial;

    for (int i = 1; i <= numeroSaltos; i++) {
        alturaSaltoAtual = alturaSaltoAtual * coeficienteSalto;
        distanciaTotal += 2 * alturaSaltoAtual; /* sobe e desce */
    }

    printf("Distancia percorrida ate o %d-esimo salto: %.2f\n", numeroSaltos, distanciaTotal);
    printf("Altura do %d-esimo salto: %.2f\n", numeroSaltos, alturaSaltoAtual);
}

/* 49. Uso do restaurante universitario, ate ser informado um valor negativo. */
void ex49(void) {
    int usos, totalAlunos = 0, menosDe10 = 0, entre10e15 = 0, acimaDe15 = 0;

    while (1) {
        printf("Numero de vezes que usou o restaurante (negativo para encerrar): ");
        scanf("%d", &usos);
        if (usos < 0) break;

        totalAlunos++;
        if (usos < 10) menosDe10++;
        else if (usos <= 15) entre10e15++;
        else acimaDe15++;
    }

    printf("Alunos entrevistados: %d\n", totalAlunos);
    if (totalAlunos > 0) {
        printf("Percentual que usou menos de 10 vezes: %.2f%%\n", 100.0 * menosDe10 / totalAlunos);
        printf("Percentual que usou entre 10 e 15 vezes: %.2f%%\n", 100.0 * entre10e15 / totalAlunos);
        printf("Percentual que usou acima de 15 vezes: %.2f%%\n", 100.0 * acimaDe15 / totalAlunos);
    }
}

/* 50. Jogo de adivinhacao: jogador 2 tem 4 chances para acertar o numero do jogador 1. */
void ex50(void) {
    int numeroSecreto, tentativa, acertou = 0;

    printf("Jogador 1, escolha um numero entre 1 e 10: ");
    scanf("%d", &numeroSecreto);

    for (int i = 1; i <= 4; i++) {
        printf("Jogador 2, tentativa %d: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numeroSecreto) {
            printf("Acertou na tentativa %d!\n", i);
            acertou = 1;
            break;
        }
    }

    if (!acertou) printf("Nao foi dessa vez! O numero era %d.\n", numeroSecreto);
}

/* 51. Desenhar um retangulo de '*' com linhas e colunas entre 1 e 20. */
void ex51(void) {
    int linhas, colunas;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas < 1) linhas = 1;
    if (linhas > 20) linhas = 20;
    if (colunas < 1) colunas = 1;
    if (colunas > 20) colunas = 20;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) printf("*");
        printf("\n");
    }
}

/* 52. Pesquisa: idade, salario bruto e acidente de trabalho, ate salario negativo. */
void ex52(void) {
    float salarioBruto, somaIdadeAcidentados = 0, somaSalariosLiquidos = 0;
    int idade, teveAcidente, quantidadeAcidentados = 0;

    while (1) {
        printf("Salario bruto (negativo para encerrar): ");
        scanf("%f", &salarioBruto);
        if (salarioBruto < 0) break;

        printf("Idade: ");
        scanf("%d", &idade);
        printf("Ja teve acidente de trabalho? (1-Sim / 0-Nao): ");
        scanf("%d", &teveAcidente);

        float salarioLiquido;
        if (salarioBruto > 1500.00) salarioLiquido = salarioBruto * (1 - 0.10);
        else salarioLiquido = salarioBruto;

        somaSalariosLiquidos += salarioLiquido;

        if (teveAcidente == 1) {
            somaIdadeAcidentados += idade;
            quantidadeAcidentados++;
        }
    }

    printf("Media de idade de quem ja sofreu acidente: %.2f\n",
           quantidadeAcidentados > 0 ? somaIdadeAcidentados / quantidadeAcidentados : 0);
    printf("Total de salarios liquidos pagos: R$ %.2f\n", somaSalariosLiquidos);
}
