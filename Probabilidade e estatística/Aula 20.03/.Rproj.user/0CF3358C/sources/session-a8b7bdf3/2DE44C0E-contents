install.packages('ggplot2')
library(ggplot2)
dados = read.csv("dados_plot.csv", sep = ",")
head(dados)
ggplot(dados, aes(x = company, y = yield, fill = company)) + geom_violin()
dados


#----------------------------------------------------------------
install.packages('treemapify')
library(treemapify)
dados1 = as.data.frame(table(dados$company))
dados1
names(dados1) = c("company", "freq")
ggplot(dados1, aes(area = freq, fill = company)) + geom_treemap()

#interaction realiza uma interação entre duas variáveis
dados$interaction = interaction(dados$company, dados$size)
dados
tapply(dados$yield, dados$interaction, mean)

dados3 = as.data.frame(tapply(dados$yield, dados$interaction, mean))
dados3
dados3$nomes = labels(dados3)[[1]]
names(dados3)[1] = 'total'
dados3
ggplot(dados3, aes(area = total, fill = nomes)) + geom_treemap()


#----------------------------------------------------------------
dados4 = dados[,6:7]
dados4
install.packages('wordcloud2')
library(wordcloud2)
wordcloud2(data = dados4, size = 1.6)

#----------------------------------------------------------------
install.packages(c("gganimate", "gifski", "png"))
library(gganimate)
library(gifski)
library(png)

g = ggplot(dados, aes(x = yield, sales, col = company)) + geom_line() + geom_point()
g = g+transition_reveal(yield)
dados
animate(g, renderer = gifski_renderer())

#----------------------------------------------------------------
ggplot(dados,aes(x = company, fill = company)) + geom_bar() + theme_light()

g = ggplot(dados, aes(x = company, fill = company))  + geom_bar() + theme_light() + transition_states(company) + shadow_mark()
animate(g, renderer = gifski_renderer())

g = ggplot(dados, aes(x = company, fill = company))  + geom_bar() + theme_light() + transition_states(company) + shadow_mark() + enter_grow() + enter_fade()
animate(g, renderer = gifski_renderer())

#----------------------------------------------------------------
install.packages('gapminder')
library(gapminder)
head(gapminder)

ggplot(gapminder, aes(gdpPercap, lifeExp)) + geom_point() + theme_bw()

ggplot(gapminder, aes(gdpPercap, lifeExp, col = continent)) + geom_point() + theme_bw()
theme_bw()
 
grafico = ggplot(gapminder, aes(gdpPercap, lifeExp, size = pop, col = continent)) + geom_point() + theme_bw() + 
  labs(title = 'Ano: {frame_time}', x = 'Renda per capta', y = 'Expectativa de vida') + transition_time(year)

animate(grafico, renderer = gifski_renderer())
