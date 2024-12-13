install.packages("stats")
install.packages("dplyr")
library(stats)
library(dplyr)
library(ggplot2)
mydata=select(iris,c(1,2,3,4))
model=kmeans(mydata,3)
model
model$cluster
model$size
table(model$cluster,iris$Species)
model$cluster=as.factor(model$cluster)
ggplot(iris,aes(Petal.Length,Petal.Width,color=model$cluster,shape=Species))+
  geom_point()