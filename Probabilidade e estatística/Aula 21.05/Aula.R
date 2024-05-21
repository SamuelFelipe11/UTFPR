(dados = read.csv("dados3.csv", sep = ","))
install.packages("gamlss")
library(gamlss)
ggpairs(dados)

#pb = não linear
modelo = gamlss(tempo~km + pb(chuva), data = dados)
summary(modelo)
plot(modelo) #modelos em cima da linha = ok
term.plot(modelo)

(a = modelo$mu.fv)
dados$previsao = a

ggplot(dados, aes(tempo, previsao)) + geom_point() + geom_smooth(col = "red")

(dadosnovo = data.frame(km = 35, chuva = 82))
predict(modelo, newdata = dadosnovo)
