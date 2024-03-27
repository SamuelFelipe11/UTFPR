install.packages("ggplot2")
library(ggplot2)

dados = read.csv("dados_plot.csv", sep = ",")
head(dados) #exibe apenas o início

names(dados) #exibe o nome das variáveis

names(dados) = c("linha", "empresa", "rendimento", "tamanho", "vendas", "palavra", "free_palavra")

table(dados$empresa, dados$tamanho)
tapply(dados$rendimento, dados$empresa, mean)

names(dados)
ggplot(dados, aes(x=empresa, fill = tamanho)) + geom_bar() + scale_fill_brewer(palette = "Set1") + theme_dark() + facet_wrap(~tamanho)
#+ coord_flip()
