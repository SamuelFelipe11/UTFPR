install.packages("ggplot2")
library(ggplot2)

#EXERCICIO 1
dpois(35, 40) #probabilidade de processar 35 itens
x=0:100
px=dpois(x, 40)
dados = data.frame(x,px)

ggplot(dados, aes(x,px, fill = x)) + geom_col()


#45 ou menos sucessos
ppois(45, 40) 
sum(dpois(0:45, 40))


qpois(0.8096, 40)

rpois(10, 40) #amostra aleatória de tamanho 10







#EXERCICIO 2

pexp(5, 1/7) #probabilidade de vencer e, 5 anos ou menos

qexp(0.5, 1/7) #mediana

rexp(10, 1/7) #amostra aleatória de tamanho 10

(px = rexp(500, 1/7)) 
dados1 = data.frame(px)
ggplot(dados1, aes(px, fill = px)) + geom_histogram(aes(y = ..density..))







#EXERCICIO 3

1 - pnorm(20, 50, sqrt(25))
pnorm(20, 50, sqrt(25), lower.tail = F)
qnorm(0.25, 50, sqrt(25))
rnorm(20, 50, sqrt(25))


dados =rnorm(700, 50, sqrt(25))
a = data.frame(dados)
ggplot(a, aes(dados)) + geom_histogram(fill = 'red')

pnorm(40, mean(dados), sd(dados))
