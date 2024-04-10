install.packages("ggplot2")
library(ggplot2)
(dados = dbinom(0:5, 5, 2/6)) #probabilidade de vitórias em um intervalo de 0 a 5
pbinom(2, 5, 2/6) #probabilidade de 2 ou menos vitórias
qbinom(0.7901, 5, 2/6) #inverso da pbinom
rbinom(10, 5, 2/6) #calcula uma quantidade X aleatóriade amostras

(dados1 = data.frame(0:5,dados))
names(dados1)[1] = 'teste'
ggplot(dados1, aes(x = teste, y = dados, fill = teste)) + geom_col()
