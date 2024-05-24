dados = read.csv("dados3.csv", sep = ",")
install.packages("GGally")
library(GGally)
ggpairs(dados)
install.packages("gamlss")
library(gamlss)
modelo = gamlss(consumo~chuva + temperatura + pb(altitude), data = dados)
term.plot(modelo)
summary(modelo)
plot(modelo)

dadosnovo = data.frame(chuva=40, temperatura=25, altitude=2000, radiacao=2500)
predict(modelo, newdata = dadosnovo)


dados$pred=modelo$mu.fv
dados$res=dados$pred-dados$consumo

ggplot(dados,aes(consumo,res))+geom_point()
ggplot(dados,aes(consumo,pred))+geom_point()
ggplot(dados,aes(y=res))+geom_boxplot()
plot(modelo)
