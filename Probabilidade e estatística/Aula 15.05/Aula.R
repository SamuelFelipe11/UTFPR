#-------------------------------------------------------
x = runif(100, 5, 80)
y = 10 + 6*x + rnorm(100, 0, 20)
dados = data.frame(x,y)

install.packages("manipulate")
install.packages("ggplot2")
library(ggplot2)
library(manipulate)
manipulate(plot(1:x), x = slider(5, 10))
manipulate(ggplot(dados, aes(x, y)) + 
             geom_point() + 
             geom_abline(slope = b, intercept = a, col = 'red')+
             annotate(geom = 'text', x = 20, y = 500, label = 'y = a + bx'), a = slider(0, 50), b = slider(0, 15))

dados = read.csv("dados1.csv", sep = ",")
dados
ggplot(dados, aes(km, tempo)) + geom_point() + geom_smooth()

#-------------------------------------------------------
install.packages("gamlss")
library(gamlss) #pacote
modelo=gamlss(tempo~km-1,data=dados) #modelo
summary(modelo) #resumo
modelo$mu.fv #medias ajustadas
term.plot(modelo) #efeitos
plot(modelo) #residuos
#-------------------------------------------------------
dados2 = read.csv("dados2.csv", sep = ",")
dados2
ggplot(dados2, aes(km, tempo)) + geom_point() + geom_smooth(method = 'lm')
modelo=gamlss(tempo~pb(km),data=dados2) #modelo
summary(modelo) #resumo
modelo$mu.fv #medias ajustadas
term.plot(modelo) #efeitos
plot(modelo) #residuos

km = c(1:10)
dadosnovo = data.frame(dados2$km)
predict(modelo,newdata = dadosnovo)

