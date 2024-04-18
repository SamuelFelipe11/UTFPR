(dados = read.csv("Dados2.csv", sep = ";", dec = ","))
media = tapply(dados$Resistencia, dados$Bloco, mean) #Resistência média por bloco

install.packages('ggplot2')
library(ggplot2)

ggplot(dados, aes(Bloco, Resistencia, fill = Bloco)) + geom_boxplot()
