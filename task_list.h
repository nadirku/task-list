#ifndef TASK_LIST_H
#define TASK_LIST_H

#include <QWidget>
#include <QtGui>
#include "task_dial.h"
#include "list_dial.h"
#include "htmleditor.h"

class QTableView;
class QStandardItemModel;

const int NAME_COL=0;
const int NOTE_COL=1;
const int TAG_COL=2;
const int DATE_COL=3;
const int CHECK_COL=4;
const int PLAINTEXT_COL=5;

class task_list : public QTreeWidget
{
    Q_OBJECT
public:
    explicit task_list(QWidget *parent = 0);
    ~task_list();
    QString file_location;
    
signals:
    
public slots:
    void addTask();
    void addTask(QString name, QString tag, QString note, QDate due, QString plain_note);
    void delTask();
    void editTask();
    void editTask(QString name, QString tag, QString note, QDate due, QString status, QString plain_note);
    void show_hide_Note();
    void changeFont();
    void new_list();
    void new_list(QString);
    void loadXml(QString fileName);
    void writeXml(QString fileName);
    void pop_up();
    void move_down();
    void grocery();
    void week_task();

private:
    void initial();
    bool show_note;


    //QList <QString> t_name;
    //QList <QString> t_note;
    //QList <QDateTime> s_time;
    //QList <QDateTime> d_time;
};

#endif // TASK_LIST_H
