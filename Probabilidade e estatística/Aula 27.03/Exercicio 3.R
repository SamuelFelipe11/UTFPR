(dados = read.csv("Dados3.csv", sep = ";"))
library(ggplot2)

ggplot(dados, aes(Produto, fill = Produto)) + geom_bar() + labs(x = 'Produto', y = 'Quantidade')
