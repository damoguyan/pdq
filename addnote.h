#ifndef ADDNOTE_H
#define ADDNOTE_H

#include <QObject>
#include <QDialog>

namespace Ui {
class AddNote;
}

class AddNote : public QDialog
{
    Q_OBJECT

public:
    explicit AddNote(QWidget *parent , int page, qreal x, qreal y);
    int page;
    qreal x;
    qreal y;
    ~AddNote();

public slots:
    void save();

signals:
    void saveNewNote(int p, qreal x, qreal y, int r, int g, int b, QString txt);

private:
    Ui::AddNote *ui;
};

#endif // ADDNOTE_H
