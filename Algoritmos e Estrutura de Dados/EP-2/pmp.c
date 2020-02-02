#include "pmp.h"


// Algoritmo Shamos-Hoey para cálculo do par mais próximo
// de um conjunto de pontos no plano.
// Recebe um vetor v de n pontos, com n > 1.
par pmp(int n, ponto v[]) {

    ordenaX(n, v);

    // *** INÍCIO EDITAR ***
    // 
    // Você deve criar, em ponto.c, uma função
    // ordenaY que recebe o vetor v (e seu tamanho n)
    // e devolve um novo vetor w de inteiros (ou seja,
    // um vetor int *) contendo os índices de v
    // permutados de forma que
    // w[0].y <= w[1].y <= ... <= w[n - 1].y
    // Ou seja, w representa a sequência dos pontos
    // armazenados em v, mas em ordem crescente pelo
    // eixo y.
    // Para criar w, simplesmente ordenaY executa
    // um algoritmo de ordenação n lg n (como ordenaX)
    // só que, sempre que for trocar dois elementos de
    // lugar, não troca esses elementos fisicamente em v,
    // mas sim, troca os índices em w.
    // O vetor w começa com w[i] = i para 0 <= i < n.
    //
    // *** FIM EDITAR ***

    return pmp_dc(v, 0, n - 1);

}


// Mecanismo divisão-e-conquista do algoritmo Shamos-Hoey.
// Recebe um vetor de pontos e posições e < d desse vetor
// Calcula um par de pontos mais próximos dentre os pontos
// no intervalo v[e..d].
par pmp_dc(ponto v[], int e, int d) {

    // O algoritmo preenche a variável p, do tipo
    // par, com um par de pontos mais próximos no
    // intervalo e..d, e devolve p.
    par p;

    // A base da recursão consiste do
    // problema com 2 ou 3 pontos
    // Esses casos são resolvidos explicitamente
    // Note que o algoritmo supõe que há
    // pelo menos 2 pontos.

    // 2 pontos
    // Esses 2 pontos são o único par de pontos no intervalo.
    // Basta preencher p com esses pontos.
    if(e == d - 1) {
        p.a = v[e];
        p.b = v[d];
        p.dist = dist(p.a, p.b);
        return p;
    }

    // 3 pontos
    // Aqui temos um triângulo.
    // Basta encontrar o menor lado, e preencher p
    // com os vértices desse lado.
    if(e == d - 2) {
        float d1, d2, d3;
        d1 = dist(v[e], v[e + 1]);
        d2 = dist(v[e], v[d]);
        d3 = dist(v[e + 1], v[d]);
        if(d1 < d2) {
            if(d1 < d3) {
                p.a = v[e];
                p.b = v[e + 1];
                p.dist = d1;
            }
            else {
                p.a = v[e + 1];
                p.b = v[d];
                p.dist = d3;
            }
        }
        else {
            if(d2 < d3) {
                p.a = v[e];
                p.b = v[d];
                p.dist = d2;
            }
            else {
                p.a = v[e + 1];
                p.b = v[d];
                p.dist = d3;
            }
        }
        return p;
    }

    // Com mais de três pontos, executamos nossa estragégia
    // divisão e conquista: calculamos o meio do intervalo
    // e..d, colocando essa posição na variável q;
    // chamamos recursivamente o algoritmo para o intervalo
    // e..q, resultando no par pe, e depois para q + 1..d,
    // o que resulta no par pd;
    // a etapa "combina" considera o mínimo entre os pares
    // pe, pd e o par mais próximo que atravessa a metade
    // do trecho, ou seja, o par mais próximo considerando
    // todos os pontos v[i], v[j] com i <= q e q < j.

    if(e < d - 2) {
        par pe, pd, pm;
        int q = (e + d) / 2;
        pe = pmp_dc(v, e, q);
        pd = pmp_dc(v, q + 1, d);

        // *** INÍCIO EDITAR ***

        // O código abaixo calcula o pair
        // mais próximo entre pontos v[i] e v[j]
        // com e <= i <= q, q < j <= d
        // Um tal par é colocado em pm.
        // Esse código testa todas as posições
        // i (pontos no intervalo e..q)
        // contra todos os j (pontos em q + 1..d).
        // Essa solução funciona mas não é satisfatória
        // porque não garante a complexidade
        // n lg n.
        // Você deve substituir esse código pela
        // ideia de Shamos e Hoey.
        // Veja mais detalhes no enunciado.
        // Veja uma descrição do Shamos-Hoey em
        // https://www.ime.usp.br/~cris/aulas/12_1_6711/slides/aula2.pdf
        // Em linhas gerais, você deve implementar neste arquivo
        // a função auxiliar "candidatos", que constrói um vetor f
        // contendo precisamente os pontos v[k] tais que
        // |v[k] - xf| <= d, onde xf é o valor de v[q].x (v[q] é o ponto
        // na posição q, o meio do trecho e..d) e d é o mínimo
        // entre pe.dist e pd.dist.
        // Em f, os pontos aparecem em ordem crescente pelo eixo y,
        // e você obtém esses pontos a partir do vetor w gerado por
        // ordenaY.
        // De posse de f, você vai comparar cada f[k] com somente
        // os 7 próximos pontos (f[k + 1], f[k + 2], .., f[k + 7])
        // a fim de calcular pm.
        pm.a = v[e];
        pm.b = v[d];
        pm.dist = dist(v[e], v[d]);
        for(int i = e; i <= q; i++)
            for(int j = q + 1; j <= d; j++) {
                int d = dist(v[i], v[j]);
                if(d < pm.dist) {
                    pm.a = v[i];
                    pm.b = v[j];
                    pm.dist = d;
                }
            }

        // *** FIM EDITAR ***

        // Um par mais próximo no trecho e..d é o mínimo
        // entre pe (par mais próximo em e..q),
        // pd (par mais próximo em q + 1..d) else
        // pm (par mais próximo da forma v[i], v[j] com
        // e <= i <= q, q < j <= d).
        if(pe.dist <= pd.dist && pe.dist <= pm.dist)
            return pe;
        if(pd.dist <= pe.dist && pd.dist <= pm.dist)
            return pd;
        if(pm.dist <= pe.dist && pm.dist <= pd.dist)
            return pm;
    }


}