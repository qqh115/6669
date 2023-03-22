#include <QCoreApplication>
#include <QDebug>
#include"bubblesort.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> vec(10);
for(int i=-1;++i<10;)
    vec[i]= rand()%100;
qDebug()<<"原始数组:"<<vec;
BubbleSort(vec);
//qSort(vec.begin(),vec.end());       // 使用Qt的排序函数对数组进行排序
qDebug() << "已排序数列："<< vec;

}
