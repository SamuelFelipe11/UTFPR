install.packages("ggplot2")
library(ggplot2)
(amostra = read.csv("Ex1.csv", sep = ";"))
t.test(amostra, conf.level = 1)

mean(amostra$tamanho)
ggplot(amostra, aes(y = tamanho)) + geom_boxplot(fill = "red")



prop.test(12, 20, conf.level = 0.95)
