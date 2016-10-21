#include <QApplication>
#include <QTreeWidget>
#include <QTreeWidgetItem>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QTreeWidget w;

  //Hide the header
  w.setHeaderHidden(true);

  //Add five items
  for (int i=0; i!=5; ++i)
  {
    QTreeWidgetItem * const item = new QTreeWidgetItem;
    item->setText(0,QString::number(i));
    w.addTopLevelItem(item);
  }

  //Let the row colors alternate
  w.setAlternatingRowColors(true);

  //Allow items to be drag and dropped inside of the widget
  w.setDragDropMode(QAbstractItemView::InternalMove);

  //Let the drag and drop be animated
  w.setAnimated(true);


  w.show();
  return a.exec();
}
