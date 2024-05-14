install.packages("ggplot2")
library(ggplot2)

#EXERCÍCIO 1
dados = read.csv("ex1.csv", sep = ";")
hist(dados$altura)
a = t.test(dados$altura, conf.level = 0.93)
a
ggplot(dados, aes(x = altura)) + geom_histogram(fill = "blue") + 
  geom_vline(xintercept = a$conf.int, col = "red") +
  geom_vline(xintercept = a$estimate, col = "green")


#EXERCÍCIO 2
dados2 = read.csv("ex2.csv", sep = ";")
a = table(dados2$amostra)
prop.test(a[2],sum(a),conf.level = .97)


#EXERCÍCIO 3
a = t.test(dados$altura,mu = 21, alternative = 'less', conf.level = 0.95)
a
ggplot(dados, aes(x = altura)) + geom_histogram(fill = "blue") + 
  geom_vline(xintercept = a$conf.int[2], col = "red") +
  geom_vline(xintercept = a$estimate, col = "green")

#EXERCÍCIO 4
dados2 = read.csv("ex2.csv", sep = ";")
a = table(dados2$amostra)
prop.test(a[2],sum(a),alternative = 'two.side', p = 0.6, conf.level = .98)
#Como p-valor > 2%, não é possível negar H0, logo, não é possível afirmar que é diferente de 60%

#H0: p = 60%
#H1: p != 60%

#EXERCÍCIO 5
dados5 = read.csv("ex5.csv", sep = ",")
dados5
a = data.frame(temperatura = c(dados5$temperaturaA, dados5$temperaturaB))
a$cimento = c(rep("A", 60), rep("B", 60))
ggplot(a, aes(cimento, temperatura, fill = cimento)) + geom_boxplot()

#EXERCÍCIO 6
#EXERCÍCIO 7
#EXERCÍCIO 8

