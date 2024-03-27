(dados = read.csv("Dados.csv", sep = ";", dec = ","))
(media = mean(x = dados$Tempo))
(mediana = median(x = dados$Tempo))

install.packages('ggplot2')
library(ggplot2)

ggplot(dados, aes(x = Tempo, y = Distancia, fill = Distancia)) + geom_point() + geom_smooth() + geom_vline(xintercept = 85)
