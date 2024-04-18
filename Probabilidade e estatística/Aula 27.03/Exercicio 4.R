(dados = read.csv("Dados4.csv", sep = ";"))
library(ggplot2)
ggplot(dados, aes(Tipo, Quantidade, fill = Tipo)) + geom_col() + 
  labs(title = 'Produto X Quantidade', x = 'Tipo', y = 'Quantidade') + 
  scale_fill_brewer(palette = "Set3")
