dados = read.csv("Dados.csv", sep = ";")
install.packages("ggplot2")
library(ggplot2)

#Exercício 1
ggplot(dados, aes(x = quality, fill = as.factor(quality))) + geom_bar() + labs(title = "Quantidade de qualidades", x = "Qualidade", y = "Quantidade")

#Exercício 2
ggplot(dados, aes(x = quality, fill = as.factor(quality))) + geom_bar() + labs(title = "Quantidade de qualidades", x = "Qualidade", y = "Quantidade") + facet_wrap(~type)

#Exercício 3
ggplot(dados, aes(x = total.sulfur.dioxide, y = free.sulfur.dioxide, fill = as.factor(quality))) + geom_point() + labs(title = "Quantidade de qualidades", x = "Qualidade", y = "Quantidade") + facet_wrap(~type)

#Exercício 4
(dados4 = as.data.frame(tapply(dados$alcohol, dados$quality, mean)))
names(dados4) = 'media'
dados4$quality = labels(dados4)[[1]]
dados4
ggplot(dados4, aes(x = quality, y = media, fill = quality)) + geom_col()

#Exercício 5
ggplot(dados, aes(x = alcohol)) + geom_histogram(fill = "red")

#Exercício 6
ggplot(dados, aes(x = quality, y = pH, fill = as.factor(pH))) + geom_boxplot()

