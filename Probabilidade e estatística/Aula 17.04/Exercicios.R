install.packages("ggplot2")
library(ggplot2)
#Exercício 1

(xi = sum(1:10))
(k = 1/xi)


#Exercício 2
#a)
dbinom(0, 10, 0.3)
#b)
pbinom(9, 10, 0.7)
1 - dbinom(0, 10, 0.3)
pbinom(0, 10, 0.3, lower.tail = F)
#c)
1 - pbinom(2, 10, 0.3)
#d)
50 * 0.3
#e)
(falha_total = dbinom(0:10, 10, 0.3))
dados = data.frame(x = 0:10, falha_total)
names(dados)
ggplot(dados, aes(x , y = falha_total, fill = x)) + geom_col()



#Exercício 3
#a)
dpois(4, 4)
#b)
1 - ppois(5, 4)
#c)
1 - ppois(79, 96)
#d)
x = 0:15
blocos = dpois(x, 4)
dados = data.frame(x, blocos)
ggplot(dados, aes(x, blocos, fill = x)) + geom_col()


#Exercício 4
f=function(x) x^4
a = integrate(f, 0, 1)
(k = 1/a$value)


#Exercício 5
(dados = read.csv("dadosex5.csv", sep = ";"))
#a) EXPONENCIAL (ANÁLISE DO HISTOGRAMA) 
hist(dados$x)
#b)
media = mean(dados$x)
#c)
1 - pexp(2, 1/media)
#d)
pexp(5, 1/media)
#e)
ggplot(dados, aes(x = x)) + geom_histogram(fill = 'red')


#Exercício 6
(dados1 = read.csv("dadosex6.csv", sep = ";"))
#a) NORMAL (ANÁLISE DO HISTOGRAMA)
hist(dados1$x)
#b)
(media = mean(dados1$x))
(variancia = sd(dados1$x))
pnorm(25, media, variancia) - pnorm(15, media, variancia)
#c)
qnorm(0.2, media, variancia)
#d)
ggplot(dados1, aes(x)) + geom_histogram(fill = 'magenta')
