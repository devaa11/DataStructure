library(rpart)
library(rpart.plot)

data(iris)
str(iris)

model <- rpart(Species~Sepal.Length + Sepal.Width + Petal.Length +Petal.Width,
               data=iris,
               method="class"
               )

print(model)
rpart.plot(model,type=4,extra=105,main="Decision tree for iris dataset")
new_data=data.frame(Sepal.Length=5.0,Sepal.Width=1.0,Petal.Length=2.5,Petal.Width=0.3)
prediction<-predict(model,new_data,type="class")
print(paste("Predicted Species",prediction))
prediction_prob<-predict(model,new_data,type="prob")
barplot(prediction_prob,col=c("red","green","blue"),
        legend.text=colnames(prediction_prob),
        main="Prediction Probabilities",
        xlab="Species",ylab="Probability"
        )